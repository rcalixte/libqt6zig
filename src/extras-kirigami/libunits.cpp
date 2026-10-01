#define WORKAROUND_INNER_CLASS_DEFINITION_Kirigami__Platform__IconSizes
#define WORKAROUND_INNER_CLASS_DEFINITION_Kirigami__Platform__Units
#include <QChildEvent>
#include <QEvent>
#include <QJSEngine>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlEngine>
#include <QString>
#include <QTimerEvent>
#include <units.h>
#include "libunits.h"
#include "libunits.hxx"

Kirigami__Platform__IconSizes* Kirigami__Platform__IconSizes_new(Kirigami__Platform__Units* units) {
    return new VirtualKirigamiPlatformIconSizes(units);
}

QMetaObject* Kirigami__Platform__IconSizes_MetaObject(const Kirigami__Platform__IconSizes* self) {
    return (QMetaObject*)self->metaObject();
}

void* Kirigami__Platform__IconSizes_Metacast(Kirigami__Platform__IconSizes* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Kirigami__Platform__IconSizes_Metacall(Kirigami__Platform__IconSizes* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Kirigami__Platform__IconSizes_Tr(const char* s) {
    auto _ret = Kirigami::Platform::IconSizes::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Kirigami__Platform__IconSizes_SizeForLabels(const Kirigami__Platform__IconSizes* self) {
    return self->sizeForLabels();
}

int Kirigami__Platform__IconSizes_Small(const Kirigami__Platform__IconSizes* self) {
    return self->small();
}

int Kirigami__Platform__IconSizes_SmallMedium(const Kirigami__Platform__IconSizes* self) {
    return self->smallMedium();
}

int Kirigami__Platform__IconSizes_Medium(const Kirigami__Platform__IconSizes* self) {
    return self->medium();
}

int Kirigami__Platform__IconSizes_Large(const Kirigami__Platform__IconSizes* self) {
    return self->large();
}

int Kirigami__Platform__IconSizes_Huge(const Kirigami__Platform__IconSizes* self) {
    return self->huge();
}

int Kirigami__Platform__IconSizes_Enormous(const Kirigami__Platform__IconSizes* self) {
    return self->enormous();
}

int Kirigami__Platform__IconSizes_RoundedIconSize(const Kirigami__Platform__IconSizes* self, int size) {
    return self->roundedIconSize(static_cast<int>(size));
}

void Kirigami__Platform__IconSizes_SizeForLabelsChanged(Kirigami__Platform__IconSizes* self) {
    self->sizeForLabelsChanged();
}

void Kirigami__Platform__IconSizes_Connect_SizeForLabelsChanged(Kirigami__Platform__IconSizes* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__IconSizes*) = reinterpret_cast<void (*)(Kirigami__Platform__IconSizes*)>(slot);
    Kirigami::Platform::IconSizes::connect(self,
                                           static_cast<void (Kirigami::Platform::IconSizes::*)()>(&Kirigami::Platform::IconSizes::sizeForLabelsChanged),
                                           [self, slotFunc]() {
                                               slotFunc(self);
                                           });
}

void Kirigami__Platform__IconSizes_SmallChanged(Kirigami__Platform__IconSizes* self) {
    self->smallChanged();
}

void Kirigami__Platform__IconSizes_Connect_SmallChanged(Kirigami__Platform__IconSizes* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__IconSizes*) = reinterpret_cast<void (*)(Kirigami__Platform__IconSizes*)>(slot);
    Kirigami::Platform::IconSizes::connect(self,
                                           static_cast<void (Kirigami::Platform::IconSizes::*)()>(&Kirigami::Platform::IconSizes::smallChanged),
                                           [self, slotFunc]() {
                                               slotFunc(self);
                                           });
}

void Kirigami__Platform__IconSizes_SmallMediumChanged(Kirigami__Platform__IconSizes* self) {
    self->smallMediumChanged();
}

void Kirigami__Platform__IconSizes_Connect_SmallMediumChanged(Kirigami__Platform__IconSizes* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__IconSizes*) = reinterpret_cast<void (*)(Kirigami__Platform__IconSizes*)>(slot);
    Kirigami::Platform::IconSizes::connect(self,
                                           static_cast<void (Kirigami::Platform::IconSizes::*)()>(&Kirigami::Platform::IconSizes::smallMediumChanged),
                                           [self, slotFunc]() {
                                               slotFunc(self);
                                           });
}

void Kirigami__Platform__IconSizes_MediumChanged(Kirigami__Platform__IconSizes* self) {
    self->mediumChanged();
}

void Kirigami__Platform__IconSizes_Connect_MediumChanged(Kirigami__Platform__IconSizes* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__IconSizes*) = reinterpret_cast<void (*)(Kirigami__Platform__IconSizes*)>(slot);
    Kirigami::Platform::IconSizes::connect(self,
                                           static_cast<void (Kirigami::Platform::IconSizes::*)()>(&Kirigami::Platform::IconSizes::mediumChanged),
                                           [self, slotFunc]() {
                                               slotFunc(self);
                                           });
}

void Kirigami__Platform__IconSizes_LargeChanged(Kirigami__Platform__IconSizes* self) {
    self->largeChanged();
}

void Kirigami__Platform__IconSizes_Connect_LargeChanged(Kirigami__Platform__IconSizes* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__IconSizes*) = reinterpret_cast<void (*)(Kirigami__Platform__IconSizes*)>(slot);
    Kirigami::Platform::IconSizes::connect(self,
                                           static_cast<void (Kirigami::Platform::IconSizes::*)()>(&Kirigami::Platform::IconSizes::largeChanged),
                                           [self, slotFunc]() {
                                               slotFunc(self);
                                           });
}

void Kirigami__Platform__IconSizes_HugeChanged(Kirigami__Platform__IconSizes* self) {
    self->hugeChanged();
}

void Kirigami__Platform__IconSizes_Connect_HugeChanged(Kirigami__Platform__IconSizes* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__IconSizes*) = reinterpret_cast<void (*)(Kirigami__Platform__IconSizes*)>(slot);
    Kirigami::Platform::IconSizes::connect(self,
                                           static_cast<void (Kirigami::Platform::IconSizes::*)()>(&Kirigami::Platform::IconSizes::hugeChanged),
                                           [self, slotFunc]() {
                                               slotFunc(self);
                                           });
}

void Kirigami__Platform__IconSizes_EnormousChanged(Kirigami__Platform__IconSizes* self) {
    self->enormousChanged();
}

void Kirigami__Platform__IconSizes_Connect_EnormousChanged(Kirigami__Platform__IconSizes* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__IconSizes*) = reinterpret_cast<void (*)(Kirigami__Platform__IconSizes*)>(slot);
    Kirigami::Platform::IconSizes::connect(self,
                                           static_cast<void (Kirigami::Platform::IconSizes::*)()>(&Kirigami::Platform::IconSizes::enormousChanged),
                                           [self, slotFunc]() {
                                               slotFunc(self);
                                           });
}

libqt_string Kirigami__Platform__IconSizes_Tr2(const char* s, const char* c) {
    auto _ret = Kirigami::Platform::IconSizes::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Kirigami__Platform__IconSizes_Tr3(const char* s, const char* c, int n) {
    auto _ret = Kirigami::Platform::IconSizes::tr(s, c, static_cast<int>(n));
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
QMetaObject* Kirigami__Platform__IconSizes_SuperMetaObject(const Kirigami__Platform__IconSizes* self) {
    return (QMetaObject*)self->Kirigami::Platform::IconSizes::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__IconSizes_OnMetaObject(Kirigami__Platform__IconSizes* self, intptr_t slot) {
    if (auto* vkirigamiplatformiconsizes = const_cast<VirtualKirigamiPlatformIconSizes*>(dynamic_cast<const VirtualKirigamiPlatformIconSizes*>(self)))
        vkirigamiplatformiconsizes->kirigami__platform__iconsizes_metaobject_callback = reinterpret_cast<VirtualKirigamiPlatformIconSizes::Kirigami__Platform__IconSizes_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Kirigami__Platform__IconSizes_SuperMetacast(Kirigami__Platform__IconSizes* self, const char* param1) {
    return self->Kirigami::Platform::IconSizes::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__IconSizes_OnMetacast(Kirigami__Platform__IconSizes* self, intptr_t slot) {
    if (auto* vkirigamiplatformiconsizes = dynamic_cast<VirtualKirigamiPlatformIconSizes*>(self))
        vkirigamiplatformiconsizes->kirigami__platform__iconsizes_metacast_callback = reinterpret_cast<VirtualKirigamiPlatformIconSizes::Kirigami__Platform__IconSizes_Metacast_Callback>(slot);
}

// Base class handler implementation
int Kirigami__Platform__IconSizes_SuperMetacall(Kirigami__Platform__IconSizes* self, int param1, int param2, void** param3) {
    return self->Kirigami::Platform::IconSizes::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__IconSizes_OnMetacall(Kirigami__Platform__IconSizes* self, intptr_t slot) {
    if (auto* vkirigamiplatformiconsizes = dynamic_cast<VirtualKirigamiPlatformIconSizes*>(self))
        vkirigamiplatformiconsizes->kirigami__platform__iconsizes_metacall_callback = reinterpret_cast<VirtualKirigamiPlatformIconSizes::Kirigami__Platform__IconSizes_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool Kirigami__Platform__IconSizes_Event(Kirigami__Platform__IconSizes* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool Kirigami__Platform__IconSizes_SuperEvent(Kirigami__Platform__IconSizes* self, QEvent* event) {
    return self->Kirigami::Platform::IconSizes::event(event);
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__IconSizes_OnEvent(Kirigami__Platform__IconSizes* self, intptr_t slot) {
    if (auto* vkirigamiplatformiconsizes = dynamic_cast<VirtualKirigamiPlatformIconSizes*>(self))
        vkirigamiplatformiconsizes->kirigami__platform__iconsizes_event_callback = reinterpret_cast<VirtualKirigamiPlatformIconSizes::Kirigami__Platform__IconSizes_Event_Callback>(slot);
}

// Derived class handler implementation
bool Kirigami__Platform__IconSizes_EventFilter(Kirigami__Platform__IconSizes* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Kirigami__Platform__IconSizes_SuperEventFilter(Kirigami__Platform__IconSizes* self, QObject* watched, QEvent* event) {
    return self->Kirigami::Platform::IconSizes::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__IconSizes_OnEventFilter(Kirigami__Platform__IconSizes* self, intptr_t slot) {
    if (auto* vkirigamiplatformiconsizes = dynamic_cast<VirtualKirigamiPlatformIconSizes*>(self))
        vkirigamiplatformiconsizes->kirigami__platform__iconsizes_eventfilter_callback = reinterpret_cast<VirtualKirigamiPlatformIconSizes::Kirigami__Platform__IconSizes_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Kirigami__Platform__IconSizes_TimerEvent(Kirigami__Platform__IconSizes* self, QTimerEvent* event) {
    auto* vkirigamiplatformiconsizes = dynamic_cast<VirtualKirigamiPlatformIconSizes*>(self);
    if (vkirigamiplatformiconsizes) {
        vkirigamiplatformiconsizes->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Kirigami::Platform::IconSizes::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Kirigami__Platform__IconSizes_SuperTimerEvent(Kirigami__Platform__IconSizes* self, QTimerEvent* event) {
    if (auto* vkirigamiplatformiconsizes = dynamic_cast<VirtualKirigamiPlatformIconSizes*>(self)) {
        vkirigamiplatformiconsizes->Kirigami::Platform::IconSizes::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::IconSizes::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__IconSizes_OnTimerEvent(Kirigami__Platform__IconSizes* self, intptr_t slot) {
    if (auto* vkirigamiplatformiconsizes = dynamic_cast<VirtualKirigamiPlatformIconSizes*>(self))
        vkirigamiplatformiconsizes->kirigami__platform__iconsizes_timerevent_callback = reinterpret_cast<VirtualKirigamiPlatformIconSizes::Kirigami__Platform__IconSizes_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Kirigami__Platform__IconSizes_ChildEvent(Kirigami__Platform__IconSizes* self, QChildEvent* event) {
    auto* vkirigamiplatformiconsizes = dynamic_cast<VirtualKirigamiPlatformIconSizes*>(self);
    if (vkirigamiplatformiconsizes) {
        vkirigamiplatformiconsizes->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Kirigami::Platform::IconSizes::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Kirigami__Platform__IconSizes_SuperChildEvent(Kirigami__Platform__IconSizes* self, QChildEvent* event) {
    if (auto* vkirigamiplatformiconsizes = dynamic_cast<VirtualKirigamiPlatformIconSizes*>(self)) {
        vkirigamiplatformiconsizes->Kirigami::Platform::IconSizes::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::IconSizes::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__IconSizes_OnChildEvent(Kirigami__Platform__IconSizes* self, intptr_t slot) {
    if (auto* vkirigamiplatformiconsizes = dynamic_cast<VirtualKirigamiPlatformIconSizes*>(self))
        vkirigamiplatformiconsizes->kirigami__platform__iconsizes_childevent_callback = reinterpret_cast<VirtualKirigamiPlatformIconSizes::Kirigami__Platform__IconSizes_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Kirigami__Platform__IconSizes_CustomEvent(Kirigami__Platform__IconSizes* self, QEvent* event) {
    auto* vkirigamiplatformiconsizes = dynamic_cast<VirtualKirigamiPlatformIconSizes*>(self);
    if (vkirigamiplatformiconsizes) {
        vkirigamiplatformiconsizes->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Kirigami::Platform::IconSizes::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Kirigami__Platform__IconSizes_SuperCustomEvent(Kirigami__Platform__IconSizes* self, QEvent* event) {
    if (auto* vkirigamiplatformiconsizes = dynamic_cast<VirtualKirigamiPlatformIconSizes*>(self)) {
        vkirigamiplatformiconsizes->Kirigami::Platform::IconSizes::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::IconSizes::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__IconSizes_OnCustomEvent(Kirigami__Platform__IconSizes* self, intptr_t slot) {
    if (auto* vkirigamiplatformiconsizes = dynamic_cast<VirtualKirigamiPlatformIconSizes*>(self))
        vkirigamiplatformiconsizes->kirigami__platform__iconsizes_customevent_callback = reinterpret_cast<VirtualKirigamiPlatformIconSizes::Kirigami__Platform__IconSizes_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Kirigami__Platform__IconSizes_ConnectNotify(Kirigami__Platform__IconSizes* self, const QMetaMethod* signal) {
    auto* vkirigamiplatformiconsizes = dynamic_cast<VirtualKirigamiPlatformIconSizes*>(self);
    if (vkirigamiplatformiconsizes) {
        vkirigamiplatformiconsizes->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Kirigami::Platform::IconSizes::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Kirigami__Platform__IconSizes_SuperConnectNotify(Kirigami__Platform__IconSizes* self, const QMetaMethod* signal) {
    if (auto* vkirigamiplatformiconsizes = dynamic_cast<VirtualKirigamiPlatformIconSizes*>(self)) {
        vkirigamiplatformiconsizes->Kirigami::Platform::IconSizes::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::IconSizes::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__IconSizes_OnConnectNotify(Kirigami__Platform__IconSizes* self, intptr_t slot) {
    if (auto* vkirigamiplatformiconsizes = dynamic_cast<VirtualKirigamiPlatformIconSizes*>(self))
        vkirigamiplatformiconsizes->kirigami__platform__iconsizes_connectnotify_callback = reinterpret_cast<VirtualKirigamiPlatformIconSizes::Kirigami__Platform__IconSizes_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Kirigami__Platform__IconSizes_DisconnectNotify(Kirigami__Platform__IconSizes* self, const QMetaMethod* signal) {
    auto* vkirigamiplatformiconsizes = dynamic_cast<VirtualKirigamiPlatformIconSizes*>(self);
    if (vkirigamiplatformiconsizes) {
        vkirigamiplatformiconsizes->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Kirigami::Platform::IconSizes::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Kirigami__Platform__IconSizes_SuperDisconnectNotify(Kirigami__Platform__IconSizes* self, const QMetaMethod* signal) {
    if (auto* vkirigamiplatformiconsizes = dynamic_cast<VirtualKirigamiPlatformIconSizes*>(self)) {
        vkirigamiplatformiconsizes->Kirigami::Platform::IconSizes::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::IconSizes::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__IconSizes_OnDisconnectNotify(Kirigami__Platform__IconSizes* self, intptr_t slot) {
    if (auto* vkirigamiplatformiconsizes = dynamic_cast<VirtualKirigamiPlatformIconSizes*>(self))
        vkirigamiplatformiconsizes->kirigami__platform__iconsizes_disconnectnotify_callback = reinterpret_cast<VirtualKirigamiPlatformIconSizes::Kirigami__Platform__IconSizes_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* Kirigami__Platform__IconSizes_Sender(const Kirigami__Platform__IconSizes* self) {
    if (auto* vkirigamiplatformiconsizes = const_cast<VirtualKirigamiPlatformIconSizes*>(dynamic_cast<const VirtualKirigamiPlatformIconSizes*>(self))) {
        return vkirigamiplatformiconsizes->VirtualKirigamiPlatformIconSizes::sender();
    } else
        qFatal("Error: Protected method Kirigami::Platform::IconSizes::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Kirigami__Platform__IconSizes_SenderSignalIndex(const Kirigami__Platform__IconSizes* self) {
    if (auto* vkirigamiplatformiconsizes = const_cast<VirtualKirigamiPlatformIconSizes*>(dynamic_cast<const VirtualKirigamiPlatformIconSizes*>(self))) {
        return vkirigamiplatformiconsizes->VirtualKirigamiPlatformIconSizes::senderSignalIndex();
    } else
        qFatal("Error: Protected method Kirigami::Platform::IconSizes::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Kirigami__Platform__IconSizes_Receivers(const Kirigami__Platform__IconSizes* self, const char* signal) {
    if (auto* vkirigamiplatformiconsizes = const_cast<VirtualKirigamiPlatformIconSizes*>(dynamic_cast<const VirtualKirigamiPlatformIconSizes*>(self))) {
        return vkirigamiplatformiconsizes->VirtualKirigamiPlatformIconSizes::receivers(signal);
    } else
        qFatal("Error: Protected method Kirigami::Platform::IconSizes::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Kirigami__Platform__IconSizes_IsSignalConnected(const Kirigami__Platform__IconSizes* self, const QMetaMethod* signal) {
    if (auto* vkirigamiplatformiconsizes = const_cast<VirtualKirigamiPlatformIconSizes*>(dynamic_cast<const VirtualKirigamiPlatformIconSizes*>(self))) {
        return vkirigamiplatformiconsizes->VirtualKirigamiPlatformIconSizes::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Kirigami::Platform::IconSizes::isSignalConnected called without a directly constructed type");
}

void Kirigami__Platform__IconSizes_Delete(Kirigami__Platform__IconSizes* self) {
    delete self;
}

QMetaObject* Kirigami__Platform__Units_MetaObject(const Kirigami__Platform__Units* self) {
    return (QMetaObject*)self->metaObject();
}

void* Kirigami__Platform__Units_Metacast(Kirigami__Platform__Units* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Kirigami__Platform__Units_Metacall(Kirigami__Platform__Units* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Kirigami__Platform__Units_Tr(const char* s) {
    auto _ret = Kirigami::Platform::Units::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Kirigami__Platform__Units_GridUnit(const Kirigami__Platform__Units* self) {
    return self->gridUnit();
}

void Kirigami__Platform__Units_SetGridUnit(Kirigami__Platform__Units* self, int size) {
    self->setGridUnit(static_cast<int>(size));
}

int Kirigami__Platform__Units_SmallSpacing(const Kirigami__Platform__Units* self) {
    return self->smallSpacing();
}

void Kirigami__Platform__Units_SetSmallSpacing(Kirigami__Platform__Units* self, int size) {
    self->setSmallSpacing(static_cast<int>(size));
}

int Kirigami__Platform__Units_MediumSpacing(const Kirigami__Platform__Units* self) {
    return self->mediumSpacing();
}

void Kirigami__Platform__Units_SetMediumSpacing(Kirigami__Platform__Units* self, int size) {
    self->setMediumSpacing(static_cast<int>(size));
}

int Kirigami__Platform__Units_LargeSpacing(const Kirigami__Platform__Units* self) {
    return self->largeSpacing();
}

void Kirigami__Platform__Units_SetLargeSpacing(Kirigami__Platform__Units* self, int size) {
    self->setLargeSpacing(static_cast<int>(size));
}

int Kirigami__Platform__Units_VeryLongDuration(const Kirigami__Platform__Units* self) {
    return self->veryLongDuration();
}

void Kirigami__Platform__Units_SetVeryLongDuration(Kirigami__Platform__Units* self, int duration) {
    self->setVeryLongDuration(static_cast<int>(duration));
}

int Kirigami__Platform__Units_LongDuration(const Kirigami__Platform__Units* self) {
    return self->longDuration();
}

void Kirigami__Platform__Units_SetLongDuration(Kirigami__Platform__Units* self, int duration) {
    self->setLongDuration(static_cast<int>(duration));
}

int Kirigami__Platform__Units_ShortDuration(const Kirigami__Platform__Units* self) {
    return self->shortDuration();
}

void Kirigami__Platform__Units_SetShortDuration(Kirigami__Platform__Units* self, int duration) {
    self->setShortDuration(static_cast<int>(duration));
}

int Kirigami__Platform__Units_VeryShortDuration(const Kirigami__Platform__Units* self) {
    return self->veryShortDuration();
}

void Kirigami__Platform__Units_SetVeryShortDuration(Kirigami__Platform__Units* self, int duration) {
    self->setVeryShortDuration(static_cast<int>(duration));
}

int Kirigami__Platform__Units_HumanMoment(const Kirigami__Platform__Units* self) {
    return self->humanMoment();
}

void Kirigami__Platform__Units_SetHumanMoment(Kirigami__Platform__Units* self, int duration) {
    self->setHumanMoment(static_cast<int>(duration));
}

int Kirigami__Platform__Units_ToolTipDelay(const Kirigami__Platform__Units* self) {
    return self->toolTipDelay();
}

void Kirigami__Platform__Units_SetToolTipDelay(Kirigami__Platform__Units* self, int delay) {
    self->setToolTipDelay(static_cast<int>(delay));
}

double Kirigami__Platform__Units_CornerRadius(const Kirigami__Platform__Units* self) {
    return static_cast<double>(self->cornerRadius());
}

void Kirigami__Platform__Units_SetcornerRadius(Kirigami__Platform__Units* self, double cornerRadius) {
    self->setcornerRadius(static_cast<qreal>(cornerRadius));
}

Kirigami__Platform__IconSizes* Kirigami__Platform__Units_IconSizes(const Kirigami__Platform__Units* self) {
    return self->iconSizes();
}

Kirigami__Platform__Units* Kirigami__Platform__Units_Create(QQmlEngine* qmlEngine, QJSEngine* jsEngine) {
    return Kirigami::Platform::Units::create(qmlEngine, jsEngine);
}

void Kirigami__Platform__Units_GridUnitChanged(Kirigami__Platform__Units* self) {
    self->gridUnitChanged();
}

void Kirigami__Platform__Units_Connect_GridUnitChanged(Kirigami__Platform__Units* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__Units*) = reinterpret_cast<void (*)(Kirigami__Platform__Units*)>(slot);
    Kirigami::Platform::Units::connect(self,
                                       static_cast<void (Kirigami::Platform::Units::*)()>(&Kirigami::Platform::Units::gridUnitChanged),
                                       [self, slotFunc]() {
                                           slotFunc(self);
                                       });
}

void Kirigami__Platform__Units_SmallSpacingChanged(Kirigami__Platform__Units* self) {
    self->smallSpacingChanged();
}

void Kirigami__Platform__Units_Connect_SmallSpacingChanged(Kirigami__Platform__Units* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__Units*) = reinterpret_cast<void (*)(Kirigami__Platform__Units*)>(slot);
    Kirigami::Platform::Units::connect(self,
                                       static_cast<void (Kirigami::Platform::Units::*)()>(&Kirigami::Platform::Units::smallSpacingChanged),
                                       [self, slotFunc]() {
                                           slotFunc(self);
                                       });
}

void Kirigami__Platform__Units_MediumSpacingChanged(Kirigami__Platform__Units* self) {
    self->mediumSpacingChanged();
}

void Kirigami__Platform__Units_Connect_MediumSpacingChanged(Kirigami__Platform__Units* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__Units*) = reinterpret_cast<void (*)(Kirigami__Platform__Units*)>(slot);
    Kirigami::Platform::Units::connect(self,
                                       static_cast<void (Kirigami::Platform::Units::*)()>(&Kirigami::Platform::Units::mediumSpacingChanged),
                                       [self, slotFunc]() {
                                           slotFunc(self);
                                       });
}

void Kirigami__Platform__Units_LargeSpacingChanged(Kirigami__Platform__Units* self) {
    self->largeSpacingChanged();
}

void Kirigami__Platform__Units_Connect_LargeSpacingChanged(Kirigami__Platform__Units* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__Units*) = reinterpret_cast<void (*)(Kirigami__Platform__Units*)>(slot);
    Kirigami::Platform::Units::connect(self,
                                       static_cast<void (Kirigami::Platform::Units::*)()>(&Kirigami::Platform::Units::largeSpacingChanged),
                                       [self, slotFunc]() {
                                           slotFunc(self);
                                       });
}

void Kirigami__Platform__Units_VeryLongDurationChanged(Kirigami__Platform__Units* self) {
    self->veryLongDurationChanged();
}

void Kirigami__Platform__Units_Connect_VeryLongDurationChanged(Kirigami__Platform__Units* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__Units*) = reinterpret_cast<void (*)(Kirigami__Platform__Units*)>(slot);
    Kirigami::Platform::Units::connect(self,
                                       static_cast<void (Kirigami::Platform::Units::*)()>(&Kirigami::Platform::Units::veryLongDurationChanged),
                                       [self, slotFunc]() {
                                           slotFunc(self);
                                       });
}

void Kirigami__Platform__Units_LongDurationChanged(Kirigami__Platform__Units* self) {
    self->longDurationChanged();
}

void Kirigami__Platform__Units_Connect_LongDurationChanged(Kirigami__Platform__Units* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__Units*) = reinterpret_cast<void (*)(Kirigami__Platform__Units*)>(slot);
    Kirigami::Platform::Units::connect(self,
                                       static_cast<void (Kirigami::Platform::Units::*)()>(&Kirigami::Platform::Units::longDurationChanged),
                                       [self, slotFunc]() {
                                           slotFunc(self);
                                       });
}

void Kirigami__Platform__Units_ShortDurationChanged(Kirigami__Platform__Units* self) {
    self->shortDurationChanged();
}

void Kirigami__Platform__Units_Connect_ShortDurationChanged(Kirigami__Platform__Units* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__Units*) = reinterpret_cast<void (*)(Kirigami__Platform__Units*)>(slot);
    Kirigami::Platform::Units::connect(self,
                                       static_cast<void (Kirigami::Platform::Units::*)()>(&Kirigami::Platform::Units::shortDurationChanged),
                                       [self, slotFunc]() {
                                           slotFunc(self);
                                       });
}

void Kirigami__Platform__Units_VeryShortDurationChanged(Kirigami__Platform__Units* self) {
    self->veryShortDurationChanged();
}

void Kirigami__Platform__Units_Connect_VeryShortDurationChanged(Kirigami__Platform__Units* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__Units*) = reinterpret_cast<void (*)(Kirigami__Platform__Units*)>(slot);
    Kirigami::Platform::Units::connect(self,
                                       static_cast<void (Kirigami::Platform::Units::*)()>(&Kirigami::Platform::Units::veryShortDurationChanged),
                                       [self, slotFunc]() {
                                           slotFunc(self);
                                       });
}

void Kirigami__Platform__Units_HumanMomentChanged(Kirigami__Platform__Units* self) {
    self->humanMomentChanged();
}

void Kirigami__Platform__Units_Connect_HumanMomentChanged(Kirigami__Platform__Units* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__Units*) = reinterpret_cast<void (*)(Kirigami__Platform__Units*)>(slot);
    Kirigami::Platform::Units::connect(self,
                                       static_cast<void (Kirigami::Platform::Units::*)()>(&Kirigami::Platform::Units::humanMomentChanged),
                                       [self, slotFunc]() {
                                           slotFunc(self);
                                       });
}

void Kirigami__Platform__Units_ToolTipDelayChanged(Kirigami__Platform__Units* self) {
    self->toolTipDelayChanged();
}

void Kirigami__Platform__Units_Connect_ToolTipDelayChanged(Kirigami__Platform__Units* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__Units*) = reinterpret_cast<void (*)(Kirigami__Platform__Units*)>(slot);
    Kirigami::Platform::Units::connect(self,
                                       static_cast<void (Kirigami::Platform::Units::*)()>(&Kirigami::Platform::Units::toolTipDelayChanged),
                                       [self, slotFunc]() {
                                           slotFunc(self);
                                       });
}

void Kirigami__Platform__Units_WheelScrollLinesChanged(Kirigami__Platform__Units* self) {
    self->wheelScrollLinesChanged();
}

void Kirigami__Platform__Units_Connect_WheelScrollLinesChanged(Kirigami__Platform__Units* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__Units*) = reinterpret_cast<void (*)(Kirigami__Platform__Units*)>(slot);
    Kirigami::Platform::Units::connect(self,
                                       static_cast<void (Kirigami::Platform::Units::*)()>(&Kirigami::Platform::Units::wheelScrollLinesChanged),
                                       [self, slotFunc]() {
                                           slotFunc(self);
                                       });
}

void Kirigami__Platform__Units_CornerRadiusChanged(Kirigami__Platform__Units* self) {
    self->cornerRadiusChanged();
}

void Kirigami__Platform__Units_Connect_CornerRadiusChanged(Kirigami__Platform__Units* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__Units*) = reinterpret_cast<void (*)(Kirigami__Platform__Units*)>(slot);
    Kirigami::Platform::Units::connect(self,
                                       static_cast<void (Kirigami::Platform::Units::*)()>(&Kirigami::Platform::Units::cornerRadiusChanged),
                                       [self, slotFunc]() {
                                           slotFunc(self);
                                       });
}

libqt_string Kirigami__Platform__Units_Tr2(const char* s, const char* c) {
    auto _ret = Kirigami::Platform::Units::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Kirigami__Platform__Units_Tr3(const char* s, const char* c, int n) {
    auto _ret = Kirigami::Platform::Units::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Kirigami__Platform__Units_Delete(Kirigami__Platform__Units* self) {
    delete self;
}
