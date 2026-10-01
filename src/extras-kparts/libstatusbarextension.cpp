#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__Part
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__StatusBarExtension
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QStatusBar>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <statusbarextension.h>
#include "libstatusbarextension.h"
#include "libstatusbarextension.hxx"

KParts__StatusBarExtension* KParts__StatusBarExtension_new(KParts__Part* parent) {
    return new VirtualKPartsStatusBarExtension(parent);
}

KParts__StatusBarExtension* KParts__StatusBarExtension_new2(KParts__ReadOnlyPart* parent) {
    return new VirtualKPartsStatusBarExtension(parent);
}

QMetaObject* KParts__StatusBarExtension_MetaObject(const KParts__StatusBarExtension* self) {
    return (QMetaObject*)self->metaObject();
}

void* KParts__StatusBarExtension_Metacast(KParts__StatusBarExtension* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KParts__StatusBarExtension_Metacall(KParts__StatusBarExtension* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KParts__StatusBarExtension_Tr(const char* s) {
    auto _ret = KParts::StatusBarExtension::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KParts__StatusBarExtension_AddStatusBarItem(KParts__StatusBarExtension* self, QWidget* widget, int stretch, bool permanent) {
    self->addStatusBarItem(widget, static_cast<int>(stretch), permanent);
}

void KParts__StatusBarExtension_RemoveStatusBarItem(KParts__StatusBarExtension* self, QWidget* widget) {
    self->removeStatusBarItem(widget);
}

QStatusBar* KParts__StatusBarExtension_StatusBar(const KParts__StatusBarExtension* self) {
    return self->statusBar();
}

void KParts__StatusBarExtension_SetStatusBar(KParts__StatusBarExtension* self, QStatusBar* status) {
    self->setStatusBar(status);
}

KParts__StatusBarExtension* KParts__StatusBarExtension_ChildObject(QObject* obj) {
    return KParts::StatusBarExtension::childObject(obj);
}

bool KParts__StatusBarExtension_EventFilter(KParts__StatusBarExtension* self, QObject* watched, QEvent* ev) {
    return self->eventFilter(watched, ev);
}

libqt_string KParts__StatusBarExtension_Tr2(const char* s, const char* c) {
    auto _ret = KParts::StatusBarExtension::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KParts__StatusBarExtension_Tr3(const char* s, const char* c, int n) {
    auto _ret = KParts::StatusBarExtension::tr(s, c, static_cast<int>(n));
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
QMetaObject* KParts__StatusBarExtension_SuperMetaObject(const KParts__StatusBarExtension* self) {
    return (QMetaObject*)self->KParts::StatusBarExtension::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnMetaObject(KParts__StatusBarExtension* self, intptr_t slot) {
    if (auto* vkpartsstatusbarextension = const_cast<VirtualKPartsStatusBarExtension*>(dynamic_cast<const VirtualKPartsStatusBarExtension*>(self)))
        vkpartsstatusbarextension->kparts__statusbarextension_metaobject_callback = reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KParts__StatusBarExtension_SuperMetacast(KParts__StatusBarExtension* self, const char* param1) {
    return self->KParts::StatusBarExtension::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnMetacast(KParts__StatusBarExtension* self, intptr_t slot) {
    if (auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self))
        vkpartsstatusbarextension->kparts__statusbarextension_metacast_callback = reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_Metacast_Callback>(slot);
}

// Base class handler implementation
int KParts__StatusBarExtension_SuperMetacall(KParts__StatusBarExtension* self, int param1, int param2, void** param3) {
    return self->KParts::StatusBarExtension::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnMetacall(KParts__StatusBarExtension* self, intptr_t slot) {
    if (auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self))
        vkpartsstatusbarextension->kparts__statusbarextension_metacall_callback = reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KParts__StatusBarExtension_SuperEventFilter(KParts__StatusBarExtension* self, QObject* watched, QEvent* ev) {
    return self->KParts::StatusBarExtension::eventFilter(watched, ev);
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnEventFilter(KParts__StatusBarExtension* self, intptr_t slot) {
    if (auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self))
        vkpartsstatusbarextension->kparts__statusbarextension_eventfilter_callback = reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool KParts__StatusBarExtension_Event(KParts__StatusBarExtension* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KParts__StatusBarExtension_SuperEvent(KParts__StatusBarExtension* self, QEvent* event) {
    return self->KParts::StatusBarExtension::event(event);
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnEvent(KParts__StatusBarExtension* self, intptr_t slot) {
    if (auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self))
        vkpartsstatusbarextension->kparts__statusbarextension_event_callback = reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_Event_Callback>(slot);
}

// Derived class handler implementation
void KParts__StatusBarExtension_TimerEvent(KParts__StatusBarExtension* self, QTimerEvent* event) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension) {
        vkpartsstatusbarextension->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::StatusBarExtension::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__StatusBarExtension_SuperTimerEvent(KParts__StatusBarExtension* self, QTimerEvent* event) {
    if (auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self)) {
        vkpartsstatusbarextension->KParts::StatusBarExtension::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::StatusBarExtension::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnTimerEvent(KParts__StatusBarExtension* self, intptr_t slot) {
    if (auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self))
        vkpartsstatusbarextension->kparts__statusbarextension_timerevent_callback = reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__StatusBarExtension_ChildEvent(KParts__StatusBarExtension* self, QChildEvent* event) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension) {
        vkpartsstatusbarextension->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::StatusBarExtension::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__StatusBarExtension_SuperChildEvent(KParts__StatusBarExtension* self, QChildEvent* event) {
    if (auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self)) {
        vkpartsstatusbarextension->KParts::StatusBarExtension::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::StatusBarExtension::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnChildEvent(KParts__StatusBarExtension* self, intptr_t slot) {
    if (auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self))
        vkpartsstatusbarextension->kparts__statusbarextension_childevent_callback = reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__StatusBarExtension_CustomEvent(KParts__StatusBarExtension* self, QEvent* event) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension) {
        vkpartsstatusbarextension->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::StatusBarExtension::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__StatusBarExtension_SuperCustomEvent(KParts__StatusBarExtension* self, QEvent* event) {
    if (auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self)) {
        vkpartsstatusbarextension->KParts::StatusBarExtension::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::StatusBarExtension::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnCustomEvent(KParts__StatusBarExtension* self, intptr_t slot) {
    if (auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self))
        vkpartsstatusbarextension->kparts__statusbarextension_customevent_callback = reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__StatusBarExtension_ConnectNotify(KParts__StatusBarExtension* self, const QMetaMethod* signal) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension) {
        vkpartsstatusbarextension->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KParts::StatusBarExtension::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__StatusBarExtension_SuperConnectNotify(KParts__StatusBarExtension* self, const QMetaMethod* signal) {
    if (auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self)) {
        vkpartsstatusbarextension->KParts::StatusBarExtension::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KParts::StatusBarExtension::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnConnectNotify(KParts__StatusBarExtension* self, intptr_t slot) {
    if (auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self))
        vkpartsstatusbarextension->kparts__statusbarextension_connectnotify_callback = reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KParts__StatusBarExtension_DisconnectNotify(KParts__StatusBarExtension* self, const QMetaMethod* signal) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension) {
        vkpartsstatusbarextension->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KParts::StatusBarExtension::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__StatusBarExtension_SuperDisconnectNotify(KParts__StatusBarExtension* self, const QMetaMethod* signal) {
    if (auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self)) {
        vkpartsstatusbarextension->KParts::StatusBarExtension::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KParts::StatusBarExtension::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnDisconnectNotify(KParts__StatusBarExtension* self, intptr_t slot) {
    if (auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self))
        vkpartsstatusbarextension->kparts__statusbarextension_disconnectnotify_callback = reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KParts__StatusBarExtension_Sender(const KParts__StatusBarExtension* self) {
    if (auto* vkpartsstatusbarextension = const_cast<VirtualKPartsStatusBarExtension*>(dynamic_cast<const VirtualKPartsStatusBarExtension*>(self))) {
        return vkpartsstatusbarextension->VirtualKPartsStatusBarExtension::sender();
    } else
        qFatal("Error: Protected method KParts::StatusBarExtension::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KParts__StatusBarExtension_SenderSignalIndex(const KParts__StatusBarExtension* self) {
    if (auto* vkpartsstatusbarextension = const_cast<VirtualKPartsStatusBarExtension*>(dynamic_cast<const VirtualKPartsStatusBarExtension*>(self))) {
        return vkpartsstatusbarextension->VirtualKPartsStatusBarExtension::senderSignalIndex();
    } else
        qFatal("Error: Protected method KParts::StatusBarExtension::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KParts__StatusBarExtension_Receivers(const KParts__StatusBarExtension* self, const char* signal) {
    if (auto* vkpartsstatusbarextension = const_cast<VirtualKPartsStatusBarExtension*>(dynamic_cast<const VirtualKPartsStatusBarExtension*>(self))) {
        return vkpartsstatusbarextension->VirtualKPartsStatusBarExtension::receivers(signal);
    } else
        qFatal("Error: Protected method KParts::StatusBarExtension::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KParts__StatusBarExtension_IsSignalConnected(const KParts__StatusBarExtension* self, const QMetaMethod* signal) {
    if (auto* vkpartsstatusbarextension = const_cast<VirtualKPartsStatusBarExtension*>(dynamic_cast<const VirtualKPartsStatusBarExtension*>(self))) {
        return vkpartsstatusbarextension->VirtualKPartsStatusBarExtension::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KParts::StatusBarExtension::isSignalConnected called without a directly constructed type");
}

void KParts__StatusBarExtension_Delete(KParts__StatusBarExtension* self) {
    delete self;
}
