#define WORKAROUND_INNER_CLASS_DEFINITION_Kirigami__Platform__TabletModeChangedEvent
#define WORKAROUND_INNER_CLASS_DEFINITION_Kirigami__Platform__TabletModeWatcher
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <tabletmodewatcher.h>
#include "libtabletmodewatcher.h"
#include "libtabletmodewatcher.hxx"

Kirigami__Platform__TabletModeChangedEvent* Kirigami__Platform__TabletModeChangedEvent_new(bool tablet) {
    return new VirtualKirigamiPlatformTabletModeChangedEvent(tablet);
}

Kirigami__Platform__TabletModeChangedEvent* Kirigami__Platform__TabletModeChangedEvent_new2(const Kirigami__Platform__TabletModeChangedEvent* param1) {
    return new VirtualKirigamiPlatformTabletModeChangedEvent(*param1);
}

bool Kirigami__Platform__TabletModeChangedEvent_TabletMode(const Kirigami__Platform__TabletModeChangedEvent* self) {
    return self->tabletMode;
}

void Kirigami__Platform__TabletModeChangedEvent_SetTabletMode(Kirigami__Platform__TabletModeChangedEvent* self, bool tabletMode) {
    self->tabletMode = tabletMode;
}

void Kirigami__Platform__TabletModeChangedEvent_OperatorAssign(Kirigami__Platform__TabletModeChangedEvent* self, const Kirigami__Platform__TabletModeChangedEvent* param1) {
    self->operator=(*param1);
}

// Derived class handler implementation
void Kirigami__Platform__TabletModeChangedEvent_SetAccepted(Kirigami__Platform__TabletModeChangedEvent* self, bool accepted) {
    auto* vkirigamiplatformtabletmodechangedevent = dynamic_cast<VirtualKirigamiPlatformTabletModeChangedEvent*>(self);
    if (vkirigamiplatformtabletmodechangedevent && vkirigamiplatformtabletmodechangedevent->isVirtualKirigamiPlatformTabletModeChangedEvent) {
        vkirigamiplatformtabletmodechangedevent->setAccepted(accepted);
    } else {
        self->Kirigami::Platform::TabletModeChangedEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void Kirigami__Platform__TabletModeChangedEvent_SuperSetAccepted(Kirigami__Platform__TabletModeChangedEvent* self, bool accepted) {
    auto* vkirigamiplatformtabletmodechangedevent = dynamic_cast<VirtualKirigamiPlatformTabletModeChangedEvent*>(self);
    if (vkirigamiplatformtabletmodechangedevent && vkirigamiplatformtabletmodechangedevent->isVirtualKirigamiPlatformTabletModeChangedEvent) {
        vkirigamiplatformtabletmodechangedevent->setKirigami__Platform__TabletModeChangedEvent_SetAccepted_IsBase(true);
        vkirigamiplatformtabletmodechangedevent->setAccepted(accepted);
    } else {
        self->Kirigami::Platform::TabletModeChangedEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__TabletModeChangedEvent_OnSetAccepted(Kirigami__Platform__TabletModeChangedEvent* self, intptr_t slot) {
    auto* vkirigamiplatformtabletmodechangedevent = dynamic_cast<VirtualKirigamiPlatformTabletModeChangedEvent*>(self);
    if (vkirigamiplatformtabletmodechangedevent && vkirigamiplatformtabletmodechangedevent->isVirtualKirigamiPlatformTabletModeChangedEvent)
        vkirigamiplatformtabletmodechangedevent->setKirigami__Platform__TabletModeChangedEvent_SetAccepted_Callback(reinterpret_cast<VirtualKirigamiPlatformTabletModeChangedEvent::Kirigami__Platform__TabletModeChangedEvent_SetAccepted_Callback>(slot));
}

// Derived class handler implementation
QEvent* Kirigami__Platform__TabletModeChangedEvent_Clone(const Kirigami__Platform__TabletModeChangedEvent* self) {
    auto* vkirigamiplatformtabletmodechangedevent = const_cast<VirtualKirigamiPlatformTabletModeChangedEvent*>(dynamic_cast<const VirtualKirigamiPlatformTabletModeChangedEvent*>(self));
    if (vkirigamiplatformtabletmodechangedevent && vkirigamiplatformtabletmodechangedevent->isVirtualKirigamiPlatformTabletModeChangedEvent) {
        return vkirigamiplatformtabletmodechangedevent->clone();
    } else {
        return self->Kirigami::Platform::TabletModeChangedEvent::clone();
    }
}

// Base class handler implementation
QEvent* Kirigami__Platform__TabletModeChangedEvent_SuperClone(const Kirigami__Platform__TabletModeChangedEvent* self) {
    auto* vkirigamiplatformtabletmodechangedevent = const_cast<VirtualKirigamiPlatformTabletModeChangedEvent*>(dynamic_cast<const VirtualKirigamiPlatformTabletModeChangedEvent*>(self));
    if (vkirigamiplatformtabletmodechangedevent && vkirigamiplatformtabletmodechangedevent->isVirtualKirigamiPlatformTabletModeChangedEvent) {
        vkirigamiplatformtabletmodechangedevent->setKirigami__Platform__TabletModeChangedEvent_Clone_IsBase(true);
        return vkirigamiplatformtabletmodechangedevent->clone();
    } else {
        return self->Kirigami::Platform::TabletModeChangedEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__TabletModeChangedEvent_OnClone(const Kirigami__Platform__TabletModeChangedEvent* self, intptr_t slot) {
    auto* vkirigamiplatformtabletmodechangedevent = const_cast<VirtualKirigamiPlatformTabletModeChangedEvent*>(dynamic_cast<const VirtualKirigamiPlatformTabletModeChangedEvent*>(self));
    if (vkirigamiplatformtabletmodechangedevent && vkirigamiplatformtabletmodechangedevent->isVirtualKirigamiPlatformTabletModeChangedEvent)
        vkirigamiplatformtabletmodechangedevent->setKirigami__Platform__TabletModeChangedEvent_Clone_Callback(reinterpret_cast<VirtualKirigamiPlatformTabletModeChangedEvent::Kirigami__Platform__TabletModeChangedEvent_Clone_Callback>(slot));
}

void Kirigami__Platform__TabletModeChangedEvent_Delete(Kirigami__Platform__TabletModeChangedEvent* self) {
    delete self;
}

QMetaObject* Kirigami__Platform__TabletModeWatcher_MetaObject(const Kirigami__Platform__TabletModeWatcher* self) {
    return (QMetaObject*)self->metaObject();
}

void* Kirigami__Platform__TabletModeWatcher_Metacast(Kirigami__Platform__TabletModeWatcher* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Kirigami__Platform__TabletModeWatcher_Metacall(Kirigami__Platform__TabletModeWatcher* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Kirigami__Platform__TabletModeWatcher_Tr(const char* s) {
    auto _ret = Kirigami::Platform::TabletModeWatcher::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

Kirigami__Platform__TabletModeWatcher* Kirigami__Platform__TabletModeWatcher_Self() {
    return Kirigami::Platform::TabletModeWatcher::self();
}

bool Kirigami__Platform__TabletModeWatcher_IsTabletModeAvailable(const Kirigami__Platform__TabletModeWatcher* self) {
    return self->isTabletModeAvailable();
}

bool Kirigami__Platform__TabletModeWatcher_IsTabletMode(const Kirigami__Platform__TabletModeWatcher* self) {
    return self->isTabletMode();
}

void Kirigami__Platform__TabletModeWatcher_AddWatcher(Kirigami__Platform__TabletModeWatcher* self, QObject* watcher) {
    self->addWatcher(watcher);
}

void Kirigami__Platform__TabletModeWatcher_RemoveWatcher(Kirigami__Platform__TabletModeWatcher* self, QObject* watcher) {
    self->removeWatcher(watcher);
}

void Kirigami__Platform__TabletModeWatcher_TabletModeAvailableChanged(Kirigami__Platform__TabletModeWatcher* self, bool tabletModeAvailable) {
    self->tabletModeAvailableChanged(tabletModeAvailable);
}

void Kirigami__Platform__TabletModeWatcher_Connect_TabletModeAvailableChanged(Kirigami__Platform__TabletModeWatcher* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__TabletModeWatcher*, bool) = reinterpret_cast<void (*)(Kirigami__Platform__TabletModeWatcher*, bool)>(slot);
    Kirigami::Platform::TabletModeWatcher::connect(self, &Kirigami::Platform::TabletModeWatcher::tabletModeAvailableChanged, [self, slotFunc](bool tabletModeAvailable) {
        bool sigval1 = tabletModeAvailable;
        slotFunc(self, sigval1);
    });
}

void Kirigami__Platform__TabletModeWatcher_TabletModeChanged(Kirigami__Platform__TabletModeWatcher* self, bool tabletMode) {
    self->tabletModeChanged(tabletMode);
}

void Kirigami__Platform__TabletModeWatcher_Connect_TabletModeChanged(Kirigami__Platform__TabletModeWatcher* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__TabletModeWatcher*, bool) = reinterpret_cast<void (*)(Kirigami__Platform__TabletModeWatcher*, bool)>(slot);
    Kirigami::Platform::TabletModeWatcher::connect(self, &Kirigami::Platform::TabletModeWatcher::tabletModeChanged, [self, slotFunc](bool tabletMode) {
        bool sigval1 = tabletMode;
        slotFunc(self, sigval1);
    });
}

libqt_string Kirigami__Platform__TabletModeWatcher_Tr2(const char* s, const char* c) {
    auto _ret = Kirigami::Platform::TabletModeWatcher::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Kirigami__Platform__TabletModeWatcher_Tr3(const char* s, const char* c, int n) {
    auto _ret = Kirigami::Platform::TabletModeWatcher::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Kirigami__Platform__TabletModeWatcher_Delete(Kirigami__Platform__TabletModeWatcher* self) {
    delete self;
}
