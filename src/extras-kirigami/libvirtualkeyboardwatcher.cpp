#define WORKAROUND_INNER_CLASS_DEFINITION_Kirigami__Platform__VirtualKeyboardWatcher
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <virtualkeyboardwatcher.h>
#include "libvirtualkeyboardwatcher.h"
#include "libvirtualkeyboardwatcher.hxx"

Kirigami__Platform__VirtualKeyboardWatcher* Kirigami__Platform__VirtualKeyboardWatcher_new() {
    return new VirtualKirigamiPlatformVirtualKeyboardWatcher();
}

Kirigami__Platform__VirtualKeyboardWatcher* Kirigami__Platform__VirtualKeyboardWatcher_new2(QObject* parent) {
    return new VirtualKirigamiPlatformVirtualKeyboardWatcher(parent);
}

QMetaObject* Kirigami__Platform__VirtualKeyboardWatcher_MetaObject(const Kirigami__Platform__VirtualKeyboardWatcher* self) {
    return (QMetaObject*)self->metaObject();
}

void* Kirigami__Platform__VirtualKeyboardWatcher_Metacast(Kirigami__Platform__VirtualKeyboardWatcher* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Kirigami__Platform__VirtualKeyboardWatcher_Metacall(Kirigami__Platform__VirtualKeyboardWatcher* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Kirigami__Platform__VirtualKeyboardWatcher_Tr(const char* s) {
    auto _ret = Kirigami::Platform::VirtualKeyboardWatcher::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Kirigami__Platform__VirtualKeyboardWatcher_Available(const Kirigami__Platform__VirtualKeyboardWatcher* self) {
    return self->available();
}

void Kirigami__Platform__VirtualKeyboardWatcher_AvailableChanged(Kirigami__Platform__VirtualKeyboardWatcher* self) {
    self->availableChanged();
}

bool Kirigami__Platform__VirtualKeyboardWatcher_Enabled(const Kirigami__Platform__VirtualKeyboardWatcher* self) {
    return self->enabled();
}

void Kirigami__Platform__VirtualKeyboardWatcher_EnabledChanged(Kirigami__Platform__VirtualKeyboardWatcher* self) {
    self->enabledChanged();
}

bool Kirigami__Platform__VirtualKeyboardWatcher_Active(const Kirigami__Platform__VirtualKeyboardWatcher* self) {
    return self->active();
}

void Kirigami__Platform__VirtualKeyboardWatcher_ActiveChanged(Kirigami__Platform__VirtualKeyboardWatcher* self) {
    self->activeChanged();
}

bool Kirigami__Platform__VirtualKeyboardWatcher_Visible(const Kirigami__Platform__VirtualKeyboardWatcher* self) {
    return self->visible();
}

void Kirigami__Platform__VirtualKeyboardWatcher_VisibleChanged(Kirigami__Platform__VirtualKeyboardWatcher* self) {
    self->visibleChanged();
}

bool Kirigami__Platform__VirtualKeyboardWatcher_WillShowOnActive(const Kirigami__Platform__VirtualKeyboardWatcher* self) {
    return self->willShowOnActive();
}

void Kirigami__Platform__VirtualKeyboardWatcher_WillShowOnActiveChanged(Kirigami__Platform__VirtualKeyboardWatcher* self) {
    self->willShowOnActiveChanged();
}

Kirigami__Platform__VirtualKeyboardWatcher* Kirigami__Platform__VirtualKeyboardWatcher_Self() {
    return Kirigami::Platform::VirtualKeyboardWatcher::self();
}

libqt_string Kirigami__Platform__VirtualKeyboardWatcher_Tr2(const char* s, const char* c) {
    auto _ret = Kirigami::Platform::VirtualKeyboardWatcher::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Kirigami__Platform__VirtualKeyboardWatcher_Tr3(const char* s, const char* c, int n) {
    auto _ret = Kirigami::Platform::VirtualKeyboardWatcher::tr(s, c, static_cast<int>(n));
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
QMetaObject* Kirigami__Platform__VirtualKeyboardWatcher_SuperMetaObject(const Kirigami__Platform__VirtualKeyboardWatcher* self) {
    return (QMetaObject*)self->Kirigami::Platform::VirtualKeyboardWatcher::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnMetaObject(Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    if (auto* vkirigamiplatformvirtualkeyboardwatcher = const_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(dynamic_cast<const VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self)))
        vkirigamiplatformvirtualkeyboardwatcher->kirigami__platform__virtualkeyboardwatcher_metaobject_callback = reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Kirigami__Platform__VirtualKeyboardWatcher_SuperMetacast(Kirigami__Platform__VirtualKeyboardWatcher* self, const char* param1) {
    return self->Kirigami::Platform::VirtualKeyboardWatcher::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnMetacast(Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    if (auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self))
        vkirigamiplatformvirtualkeyboardwatcher->kirigami__platform__virtualkeyboardwatcher_metacast_callback = reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_Metacast_Callback>(slot);
}

// Base class handler implementation
int Kirigami__Platform__VirtualKeyboardWatcher_SuperMetacall(Kirigami__Platform__VirtualKeyboardWatcher* self, int param1, int param2, void** param3) {
    return self->Kirigami::Platform::VirtualKeyboardWatcher::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnMetacall(Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    if (auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self))
        vkirigamiplatformvirtualkeyboardwatcher->kirigami__platform__virtualkeyboardwatcher_metacall_callback = reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool Kirigami__Platform__VirtualKeyboardWatcher_Event(Kirigami__Platform__VirtualKeyboardWatcher* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool Kirigami__Platform__VirtualKeyboardWatcher_SuperEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, QEvent* event) {
    return self->Kirigami::Platform::VirtualKeyboardWatcher::event(event);
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    if (auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self))
        vkirigamiplatformvirtualkeyboardwatcher->kirigami__platform__virtualkeyboardwatcher_event_callback = reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_Event_Callback>(slot);
}

// Derived class handler implementation
bool Kirigami__Platform__VirtualKeyboardWatcher_EventFilter(Kirigami__Platform__VirtualKeyboardWatcher* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Kirigami__Platform__VirtualKeyboardWatcher_SuperEventFilter(Kirigami__Platform__VirtualKeyboardWatcher* self, QObject* watched, QEvent* event) {
    return self->Kirigami::Platform::VirtualKeyboardWatcher::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnEventFilter(Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    if (auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self))
        vkirigamiplatformvirtualkeyboardwatcher->kirigami__platform__virtualkeyboardwatcher_eventfilter_callback = reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Kirigami__Platform__VirtualKeyboardWatcher_TimerEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, QTimerEvent* event) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Kirigami::Platform::VirtualKeyboardWatcher::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Kirigami__Platform__VirtualKeyboardWatcher_SuperTimerEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, QTimerEvent* event) {
    if (auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self)) {
        vkirigamiplatformvirtualkeyboardwatcher->Kirigami::Platform::VirtualKeyboardWatcher::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::VirtualKeyboardWatcher::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnTimerEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    if (auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self))
        vkirigamiplatformvirtualkeyboardwatcher->kirigami__platform__virtualkeyboardwatcher_timerevent_callback = reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Kirigami__Platform__VirtualKeyboardWatcher_ChildEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, QChildEvent* event) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Kirigami::Platform::VirtualKeyboardWatcher::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Kirigami__Platform__VirtualKeyboardWatcher_SuperChildEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, QChildEvent* event) {
    if (auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self)) {
        vkirigamiplatformvirtualkeyboardwatcher->Kirigami::Platform::VirtualKeyboardWatcher::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::VirtualKeyboardWatcher::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnChildEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    if (auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self))
        vkirigamiplatformvirtualkeyboardwatcher->kirigami__platform__virtualkeyboardwatcher_childevent_callback = reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Kirigami__Platform__VirtualKeyboardWatcher_CustomEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, QEvent* event) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Kirigami::Platform::VirtualKeyboardWatcher::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Kirigami__Platform__VirtualKeyboardWatcher_SuperCustomEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, QEvent* event) {
    if (auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self)) {
        vkirigamiplatformvirtualkeyboardwatcher->Kirigami::Platform::VirtualKeyboardWatcher::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::VirtualKeyboardWatcher::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnCustomEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    if (auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self))
        vkirigamiplatformvirtualkeyboardwatcher->kirigami__platform__virtualkeyboardwatcher_customevent_callback = reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Kirigami__Platform__VirtualKeyboardWatcher_ConnectNotify(Kirigami__Platform__VirtualKeyboardWatcher* self, const QMetaMethod* signal) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Kirigami::Platform::VirtualKeyboardWatcher::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Kirigami__Platform__VirtualKeyboardWatcher_SuperConnectNotify(Kirigami__Platform__VirtualKeyboardWatcher* self, const QMetaMethod* signal) {
    if (auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self)) {
        vkirigamiplatformvirtualkeyboardwatcher->Kirigami::Platform::VirtualKeyboardWatcher::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::VirtualKeyboardWatcher::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnConnectNotify(Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    if (auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self))
        vkirigamiplatformvirtualkeyboardwatcher->kirigami__platform__virtualkeyboardwatcher_connectnotify_callback = reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Kirigami__Platform__VirtualKeyboardWatcher_DisconnectNotify(Kirigami__Platform__VirtualKeyboardWatcher* self, const QMetaMethod* signal) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Kirigami::Platform::VirtualKeyboardWatcher::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Kirigami__Platform__VirtualKeyboardWatcher_SuperDisconnectNotify(Kirigami__Platform__VirtualKeyboardWatcher* self, const QMetaMethod* signal) {
    if (auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self)) {
        vkirigamiplatformvirtualkeyboardwatcher->Kirigami::Platform::VirtualKeyboardWatcher::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::VirtualKeyboardWatcher::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnDisconnectNotify(Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    if (auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self))
        vkirigamiplatformvirtualkeyboardwatcher->kirigami__platform__virtualkeyboardwatcher_disconnectnotify_callback = reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* Kirigami__Platform__VirtualKeyboardWatcher_Sender(const Kirigami__Platform__VirtualKeyboardWatcher* self) {
    if (auto* vkirigamiplatformvirtualkeyboardwatcher = const_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(dynamic_cast<const VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self))) {
        return vkirigamiplatformvirtualkeyboardwatcher->VirtualKirigamiPlatformVirtualKeyboardWatcher::sender();
    } else
        qFatal("Error: Protected method Kirigami::Platform::VirtualKeyboardWatcher::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Kirigami__Platform__VirtualKeyboardWatcher_SenderSignalIndex(const Kirigami__Platform__VirtualKeyboardWatcher* self) {
    if (auto* vkirigamiplatformvirtualkeyboardwatcher = const_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(dynamic_cast<const VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self))) {
        return vkirigamiplatformvirtualkeyboardwatcher->VirtualKirigamiPlatformVirtualKeyboardWatcher::senderSignalIndex();
    } else
        qFatal("Error: Protected method Kirigami::Platform::VirtualKeyboardWatcher::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Kirigami__Platform__VirtualKeyboardWatcher_Receivers(const Kirigami__Platform__VirtualKeyboardWatcher* self, const char* signal) {
    if (auto* vkirigamiplatformvirtualkeyboardwatcher = const_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(dynamic_cast<const VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self))) {
        return vkirigamiplatformvirtualkeyboardwatcher->VirtualKirigamiPlatformVirtualKeyboardWatcher::receivers(signal);
    } else
        qFatal("Error: Protected method Kirigami::Platform::VirtualKeyboardWatcher::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Kirigami__Platform__VirtualKeyboardWatcher_IsSignalConnected(const Kirigami__Platform__VirtualKeyboardWatcher* self, const QMetaMethod* signal) {
    if (auto* vkirigamiplatformvirtualkeyboardwatcher = const_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(dynamic_cast<const VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self))) {
        return vkirigamiplatformvirtualkeyboardwatcher->VirtualKirigamiPlatformVirtualKeyboardWatcher::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Kirigami::Platform::VirtualKeyboardWatcher::isSignalConnected called without a directly constructed type");
}

void Kirigami__Platform__VirtualKeyboardWatcher_Delete(Kirigami__Platform__VirtualKeyboardWatcher* self) {
    delete self;
}
