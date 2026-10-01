#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceNotifier
#include <devicenotifier.h>
#include "libdevicenotifier.h"
#include "libdevicenotifier.hxx"

Solid__DeviceNotifier* Solid__DeviceNotifier_new() {
    return new VirtualSolidDeviceNotifier();
}

QMetaObject* Solid__DeviceNotifier_MetaObject(const Solid__DeviceNotifier* self) {
    return (QMetaObject*)self->metaObject();
}

void* Solid__DeviceNotifier_Metacast(Solid__DeviceNotifier* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Solid__DeviceNotifier_Metacall(Solid__DeviceNotifier* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Solid__DeviceNotifier_Tr(const char* s) {
    auto _ret = Solid::DeviceNotifier::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

Solid__DeviceNotifier* Solid__DeviceNotifier_Instance() {
    return Solid::DeviceNotifier::instance();
}

void Solid__DeviceNotifier_DeviceAdded(Solid__DeviceNotifier* self, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->deviceAdded(udi_QString);
}

void Solid__DeviceNotifier_Connect_DeviceAdded(Solid__DeviceNotifier* self, intptr_t slot) {
    void (*slotFunc)(Solid__DeviceNotifier*, const char*) = reinterpret_cast<void (*)(Solid__DeviceNotifier*, const char*)>(slot);
    Solid::DeviceNotifier::connect(self,
                                   static_cast<void (Solid::DeviceNotifier::*)(const QString&)>(&Solid::DeviceNotifier::deviceAdded),
                                   [self, slotFunc](const QString& udi) {
                                       const auto udi_ret = udi;
                                       // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                       QByteArray udi_b = udi_ret.toUtf8();
                                       auto udi_str_len = udi_b.length();
                                       const char* udi_str = static_cast<const char*>(malloc(udi_str_len + 1));
                                       memcpy((void*)udi_str, udi_b.data(), udi_str_len);
                                       ((char*)udi_str)[udi_str_len] = '\0';
                                       const char* sigval1 = udi_str;
                                       slotFunc(self, sigval1);
                                       libqt_free(udi_str);
                                   });
}

void Solid__DeviceNotifier_DeviceRemoved(Solid__DeviceNotifier* self, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->deviceRemoved(udi_QString);
}

void Solid__DeviceNotifier_Connect_DeviceRemoved(Solid__DeviceNotifier* self, intptr_t slot) {
    void (*slotFunc)(Solid__DeviceNotifier*, const char*) = reinterpret_cast<void (*)(Solid__DeviceNotifier*, const char*)>(slot);
    Solid::DeviceNotifier::connect(self,
                                   static_cast<void (Solid::DeviceNotifier::*)(const QString&)>(&Solid::DeviceNotifier::deviceRemoved),
                                   [self, slotFunc](const QString& udi) {
                                       const auto udi_ret = udi;
                                       // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                       QByteArray udi_b = udi_ret.toUtf8();
                                       auto udi_str_len = udi_b.length();
                                       const char* udi_str = static_cast<const char*>(malloc(udi_str_len + 1));
                                       memcpy((void*)udi_str, udi_b.data(), udi_str_len);
                                       ((char*)udi_str)[udi_str_len] = '\0';
                                       const char* sigval1 = udi_str;
                                       slotFunc(self, sigval1);
                                       libqt_free(udi_str);
                                   });
}

libqt_string Solid__DeviceNotifier_Tr2(const char* s, const char* c) {
    auto _ret = Solid::DeviceNotifier::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__DeviceNotifier_Tr3(const char* s, const char* c, int n) {
    auto _ret = Solid::DeviceNotifier::tr(s, c, static_cast<int>(n));
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
QMetaObject* Solid__DeviceNotifier_SuperMetaObject(const Solid__DeviceNotifier* self) {
    return (QMetaObject*)self->Solid::DeviceNotifier::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnMetaObject(Solid__DeviceNotifier* self, intptr_t slot) {
    if (auto* vsoliddevicenotifier = const_cast<VirtualSolidDeviceNotifier*>(dynamic_cast<const VirtualSolidDeviceNotifier*>(self)))
        vsoliddevicenotifier->solid__devicenotifier_metaobject_callback = reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Solid__DeviceNotifier_SuperMetacast(Solid__DeviceNotifier* self, const char* param1) {
    return self->Solid::DeviceNotifier::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnMetacast(Solid__DeviceNotifier* self, intptr_t slot) {
    if (auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self))
        vsoliddevicenotifier->solid__devicenotifier_metacast_callback = reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_Metacast_Callback>(slot);
}

// Base class handler implementation
int Solid__DeviceNotifier_SuperMetacall(Solid__DeviceNotifier* self, int param1, int param2, void** param3) {
    return self->Solid::DeviceNotifier::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnMetacall(Solid__DeviceNotifier* self, intptr_t slot) {
    if (auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self))
        vsoliddevicenotifier->solid__devicenotifier_metacall_callback = reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool Solid__DeviceNotifier_Event(Solid__DeviceNotifier* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool Solid__DeviceNotifier_SuperEvent(Solid__DeviceNotifier* self, QEvent* event) {
    return self->Solid::DeviceNotifier::event(event);
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnEvent(Solid__DeviceNotifier* self, intptr_t slot) {
    if (auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self))
        vsoliddevicenotifier->solid__devicenotifier_event_callback = reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_Event_Callback>(slot);
}

// Derived class handler implementation
bool Solid__DeviceNotifier_EventFilter(Solid__DeviceNotifier* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Solid__DeviceNotifier_SuperEventFilter(Solid__DeviceNotifier* self, QObject* watched, QEvent* event) {
    return self->Solid::DeviceNotifier::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnEventFilter(Solid__DeviceNotifier* self, intptr_t slot) {
    if (auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self))
        vsoliddevicenotifier->solid__devicenotifier_eventfilter_callback = reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Solid__DeviceNotifier_TimerEvent(Solid__DeviceNotifier* self, QTimerEvent* event) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier) {
        vsoliddevicenotifier->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Solid::DeviceNotifier::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Solid__DeviceNotifier_SuperTimerEvent(Solid__DeviceNotifier* self, QTimerEvent* event) {
    if (auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self)) {
        vsoliddevicenotifier->Solid::DeviceNotifier::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Solid::DeviceNotifier::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnTimerEvent(Solid__DeviceNotifier* self, intptr_t slot) {
    if (auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self))
        vsoliddevicenotifier->solid__devicenotifier_timerevent_callback = reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Solid__DeviceNotifier_ChildEvent(Solid__DeviceNotifier* self, QChildEvent* event) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier) {
        vsoliddevicenotifier->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Solid::DeviceNotifier::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Solid__DeviceNotifier_SuperChildEvent(Solid__DeviceNotifier* self, QChildEvent* event) {
    if (auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self)) {
        vsoliddevicenotifier->Solid::DeviceNotifier::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Solid::DeviceNotifier::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnChildEvent(Solid__DeviceNotifier* self, intptr_t slot) {
    if (auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self))
        vsoliddevicenotifier->solid__devicenotifier_childevent_callback = reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Solid__DeviceNotifier_CustomEvent(Solid__DeviceNotifier* self, QEvent* event) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier) {
        vsoliddevicenotifier->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Solid::DeviceNotifier::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Solid__DeviceNotifier_SuperCustomEvent(Solid__DeviceNotifier* self, QEvent* event) {
    if (auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self)) {
        vsoliddevicenotifier->Solid::DeviceNotifier::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Solid::DeviceNotifier::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnCustomEvent(Solid__DeviceNotifier* self, intptr_t slot) {
    if (auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self))
        vsoliddevicenotifier->solid__devicenotifier_customevent_callback = reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Solid__DeviceNotifier_ConnectNotify(Solid__DeviceNotifier* self, const QMetaMethod* signal) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier) {
        vsoliddevicenotifier->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Solid::DeviceNotifier::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Solid__DeviceNotifier_SuperConnectNotify(Solid__DeviceNotifier* self, const QMetaMethod* signal) {
    if (auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self)) {
        vsoliddevicenotifier->Solid::DeviceNotifier::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Solid::DeviceNotifier::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnConnectNotify(Solid__DeviceNotifier* self, intptr_t slot) {
    if (auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self))
        vsoliddevicenotifier->solid__devicenotifier_connectnotify_callback = reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Solid__DeviceNotifier_DisconnectNotify(Solid__DeviceNotifier* self, const QMetaMethod* signal) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier) {
        vsoliddevicenotifier->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Solid::DeviceNotifier::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Solid__DeviceNotifier_SuperDisconnectNotify(Solid__DeviceNotifier* self, const QMetaMethod* signal) {
    if (auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self)) {
        vsoliddevicenotifier->Solid::DeviceNotifier::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Solid::DeviceNotifier::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnDisconnectNotify(Solid__DeviceNotifier* self, intptr_t slot) {
    if (auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self))
        vsoliddevicenotifier->solid__devicenotifier_disconnectnotify_callback = reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* Solid__DeviceNotifier_Sender(const Solid__DeviceNotifier* self) {
    if (auto* vsoliddevicenotifier = const_cast<VirtualSolidDeviceNotifier*>(dynamic_cast<const VirtualSolidDeviceNotifier*>(self))) {
        return vsoliddevicenotifier->VirtualSolidDeviceNotifier::sender();
    } else
        qFatal("Error: Protected method Solid::DeviceNotifier::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Solid__DeviceNotifier_SenderSignalIndex(const Solid__DeviceNotifier* self) {
    if (auto* vsoliddevicenotifier = const_cast<VirtualSolidDeviceNotifier*>(dynamic_cast<const VirtualSolidDeviceNotifier*>(self))) {
        return vsoliddevicenotifier->VirtualSolidDeviceNotifier::senderSignalIndex();
    } else
        qFatal("Error: Protected method Solid::DeviceNotifier::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Solid__DeviceNotifier_Receivers(const Solid__DeviceNotifier* self, const char* signal) {
    if (auto* vsoliddevicenotifier = const_cast<VirtualSolidDeviceNotifier*>(dynamic_cast<const VirtualSolidDeviceNotifier*>(self))) {
        return vsoliddevicenotifier->VirtualSolidDeviceNotifier::receivers(signal);
    } else
        qFatal("Error: Protected method Solid::DeviceNotifier::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Solid__DeviceNotifier_IsSignalConnected(const Solid__DeviceNotifier* self, const QMetaMethod* signal) {
    if (auto* vsoliddevicenotifier = const_cast<VirtualSolidDeviceNotifier*>(dynamic_cast<const VirtualSolidDeviceNotifier*>(self))) {
        return vsoliddevicenotifier->VirtualSolidDeviceNotifier::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Solid::DeviceNotifier::isSignalConnected called without a directly constructed type");
}

void Solid__DeviceNotifier_Delete(Solid__DeviceNotifier* self) {
    delete self;
}
