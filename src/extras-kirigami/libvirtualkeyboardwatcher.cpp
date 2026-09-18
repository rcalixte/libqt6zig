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
    auto* vkirigamiplatformvirtualkeyboardwatcher = const_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(dynamic_cast<const VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self));
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_MetaObject_IsBase(true);
        return (QMetaObject*)vkirigamiplatformvirtualkeyboardwatcher->metaObject();
    } else {
        return (QMetaObject*)self->Kirigami::Platform::VirtualKeyboardWatcher::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnMetaObject(const Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = const_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(dynamic_cast<const VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self));
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher)
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_MetaObject_Callback(reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* Kirigami__Platform__VirtualKeyboardWatcher_SuperMetacast(Kirigami__Platform__VirtualKeyboardWatcher* self, const char* param1) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_Metacast_IsBase(true);
        return vkirigamiplatformvirtualkeyboardwatcher->qt_metacast(param1);
    } else {
        return self->Kirigami::Platform::VirtualKeyboardWatcher::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnMetacast(Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher)
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_Metacast_Callback(reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_Metacast_Callback>(slot));
}

// Base class handler implementation
int Kirigami__Platform__VirtualKeyboardWatcher_SuperMetacall(Kirigami__Platform__VirtualKeyboardWatcher* self, int param1, int param2, void** param3) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_Metacall_IsBase(true);
        return vkirigamiplatformvirtualkeyboardwatcher->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Kirigami::Platform::VirtualKeyboardWatcher::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnMetacall(Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher)
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_Metacall_Callback(reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_Metacall_Callback>(slot));
}

// Derived class handler implementation
bool Kirigami__Platform__VirtualKeyboardWatcher_Event(Kirigami__Platform__VirtualKeyboardWatcher* self, QEvent* event) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        return vkirigamiplatformvirtualkeyboardwatcher->event(event);
    } else {
        return self->Kirigami::Platform::VirtualKeyboardWatcher::event(event);
    }
}

// Base class handler implementation
bool Kirigami__Platform__VirtualKeyboardWatcher_SuperEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, QEvent* event) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_Event_IsBase(true);
        return vkirigamiplatformvirtualkeyboardwatcher->event(event);
    } else {
        return self->Kirigami::Platform::VirtualKeyboardWatcher::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher)
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_Event_Callback(reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_Event_Callback>(slot));
}

// Derived class handler implementation
bool Kirigami__Platform__VirtualKeyboardWatcher_EventFilter(Kirigami__Platform__VirtualKeyboardWatcher* self, QObject* watched, QEvent* event) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        return vkirigamiplatformvirtualkeyboardwatcher->eventFilter(watched, event);
    } else {
        return self->Kirigami::Platform::VirtualKeyboardWatcher::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool Kirigami__Platform__VirtualKeyboardWatcher_SuperEventFilter(Kirigami__Platform__VirtualKeyboardWatcher* self, QObject* watched, QEvent* event) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_EventFilter_IsBase(true);
        return vkirigamiplatformvirtualkeyboardwatcher->eventFilter(watched, event);
    } else {
        return self->Kirigami::Platform::VirtualKeyboardWatcher::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnEventFilter(Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher)
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_EventFilter_Callback(reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void Kirigami__Platform__VirtualKeyboardWatcher_TimerEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, QTimerEvent* event) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->timerEvent(event);
    } else {
        ((VirtualKirigamiPlatformVirtualKeyboardWatcher*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Kirigami__Platform__VirtualKeyboardWatcher_SuperTimerEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, QTimerEvent* event) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_TimerEvent_IsBase(true);
        vkirigamiplatformvirtualkeyboardwatcher->timerEvent(event);
    } else {
        ((VirtualKirigamiPlatformVirtualKeyboardWatcher*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnTimerEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher)
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_TimerEvent_Callback(reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void Kirigami__Platform__VirtualKeyboardWatcher_ChildEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, QChildEvent* event) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->childEvent(event);
    } else {
        ((VirtualKirigamiPlatformVirtualKeyboardWatcher*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Kirigami__Platform__VirtualKeyboardWatcher_SuperChildEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, QChildEvent* event) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_ChildEvent_IsBase(true);
        vkirigamiplatformvirtualkeyboardwatcher->childEvent(event);
    } else {
        ((VirtualKirigamiPlatformVirtualKeyboardWatcher*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnChildEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher)
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_ChildEvent_Callback(reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void Kirigami__Platform__VirtualKeyboardWatcher_CustomEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, QEvent* event) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->customEvent(event);
    } else {
        ((VirtualKirigamiPlatformVirtualKeyboardWatcher*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Kirigami__Platform__VirtualKeyboardWatcher_SuperCustomEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, QEvent* event) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_CustomEvent_IsBase(true);
        vkirigamiplatformvirtualkeyboardwatcher->customEvent(event);
    } else {
        ((VirtualKirigamiPlatformVirtualKeyboardWatcher*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnCustomEvent(Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher)
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_CustomEvent_Callback(reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void Kirigami__Platform__VirtualKeyboardWatcher_ConnectNotify(Kirigami__Platform__VirtualKeyboardWatcher* self, const QMetaMethod* signal) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->connectNotify(*signal);
    } else {
        ((VirtualKirigamiPlatformVirtualKeyboardWatcher*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Kirigami__Platform__VirtualKeyboardWatcher_SuperConnectNotify(Kirigami__Platform__VirtualKeyboardWatcher* self, const QMetaMethod* signal) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_ConnectNotify_IsBase(true);
        vkirigamiplatformvirtualkeyboardwatcher->connectNotify(*signal);
    } else {
        ((VirtualKirigamiPlatformVirtualKeyboardWatcher*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnConnectNotify(Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher)
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_ConnectNotify_Callback(reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void Kirigami__Platform__VirtualKeyboardWatcher_DisconnectNotify(Kirigami__Platform__VirtualKeyboardWatcher* self, const QMetaMethod* signal) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->disconnectNotify(*signal);
    } else {
        ((VirtualKirigamiPlatformVirtualKeyboardWatcher*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Kirigami__Platform__VirtualKeyboardWatcher_SuperDisconnectNotify(Kirigami__Platform__VirtualKeyboardWatcher* self, const QMetaMethod* signal) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_DisconnectNotify_IsBase(true);
        vkirigamiplatformvirtualkeyboardwatcher->disconnectNotify(*signal);
    } else {
        ((VirtualKirigamiPlatformVirtualKeyboardWatcher*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnDisconnectNotify(Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = dynamic_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self);
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher)
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_DisconnectNotify_Callback(reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* Kirigami__Platform__VirtualKeyboardWatcher_Sender(const Kirigami__Platform__VirtualKeyboardWatcher* self) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = const_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(dynamic_cast<const VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self));
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        return vkirigamiplatformvirtualkeyboardwatcher->sender();
    } else {
        return ((VirtualKirigamiPlatformVirtualKeyboardWatcher*)self)->sender();
    }
}

// Base class handler implementation
QObject* Kirigami__Platform__VirtualKeyboardWatcher_SuperSender(const Kirigami__Platform__VirtualKeyboardWatcher* self) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = const_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(dynamic_cast<const VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self));
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_Sender_IsBase(true);
        return vkirigamiplatformvirtualkeyboardwatcher->sender();
    } else {
        return ((VirtualKirigamiPlatformVirtualKeyboardWatcher*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnSender(const Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = const_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(dynamic_cast<const VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self));
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher)
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_Sender_Callback(reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_Sender_Callback>(slot));
}

// Derived class handler implementation
int Kirigami__Platform__VirtualKeyboardWatcher_SenderSignalIndex(const Kirigami__Platform__VirtualKeyboardWatcher* self) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = const_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(dynamic_cast<const VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self));
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        return vkirigamiplatformvirtualkeyboardwatcher->senderSignalIndex();
    } else {
        return ((VirtualKirigamiPlatformVirtualKeyboardWatcher*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Kirigami__Platform__VirtualKeyboardWatcher_SuperSenderSignalIndex(const Kirigami__Platform__VirtualKeyboardWatcher* self) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = const_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(dynamic_cast<const VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self));
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_SenderSignalIndex_IsBase(true);
        return vkirigamiplatformvirtualkeyboardwatcher->senderSignalIndex();
    } else {
        return ((VirtualKirigamiPlatformVirtualKeyboardWatcher*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnSenderSignalIndex(const Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = const_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(dynamic_cast<const VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self));
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher)
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_SenderSignalIndex_Callback(reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int Kirigami__Platform__VirtualKeyboardWatcher_Receivers(const Kirigami__Platform__VirtualKeyboardWatcher* self, const char* signal) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = const_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(dynamic_cast<const VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self));
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        return vkirigamiplatformvirtualkeyboardwatcher->receivers(signal);
    } else {
        return ((VirtualKirigamiPlatformVirtualKeyboardWatcher*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Kirigami__Platform__VirtualKeyboardWatcher_SuperReceivers(const Kirigami__Platform__VirtualKeyboardWatcher* self, const char* signal) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = const_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(dynamic_cast<const VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self));
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_Receivers_IsBase(true);
        return vkirigamiplatformvirtualkeyboardwatcher->receivers(signal);
    } else {
        return ((VirtualKirigamiPlatformVirtualKeyboardWatcher*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnReceivers(const Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = const_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(dynamic_cast<const VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self));
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher)
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_Receivers_Callback(reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool Kirigami__Platform__VirtualKeyboardWatcher_IsSignalConnected(const Kirigami__Platform__VirtualKeyboardWatcher* self, const QMetaMethod* signal) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = const_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(dynamic_cast<const VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self));
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        return vkirigamiplatformvirtualkeyboardwatcher->isSignalConnected(*signal);
    } else {
        return ((VirtualKirigamiPlatformVirtualKeyboardWatcher*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Kirigami__Platform__VirtualKeyboardWatcher_SuperIsSignalConnected(const Kirigami__Platform__VirtualKeyboardWatcher* self, const QMetaMethod* signal) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = const_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(dynamic_cast<const VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self));
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher) {
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_IsSignalConnected_IsBase(true);
        return vkirigamiplatformvirtualkeyboardwatcher->isSignalConnected(*signal);
    } else {
        return ((VirtualKirigamiPlatformVirtualKeyboardWatcher*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__VirtualKeyboardWatcher_OnIsSignalConnected(const Kirigami__Platform__VirtualKeyboardWatcher* self, intptr_t slot) {
    auto* vkirigamiplatformvirtualkeyboardwatcher = const_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher*>(dynamic_cast<const VirtualKirigamiPlatformVirtualKeyboardWatcher*>(self));
    if (vkirigamiplatformvirtualkeyboardwatcher && vkirigamiplatformvirtualkeyboardwatcher->isVirtualKirigamiPlatformVirtualKeyboardWatcher)
        vkirigamiplatformvirtualkeyboardwatcher->setKirigami__Platform__VirtualKeyboardWatcher_IsSignalConnected_Callback(reinterpret_cast<VirtualKirigamiPlatformVirtualKeyboardWatcher::Kirigami__Platform__VirtualKeyboardWatcher_IsSignalConnected_Callback>(slot));
}

void Kirigami__Platform__VirtualKeyboardWatcher_Delete(Kirigami__Platform__VirtualKeyboardWatcher* self) {
    delete self;
}
