#include <KColorSchemeWatcher>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kcolorschemewatcher.h>
#include "libkcolorschemewatcher.h"
#include "libkcolorschemewatcher.hxx"

KColorSchemeWatcher* KColorSchemeWatcher_new() {
    return new VirtualKColorSchemeWatcher();
}

KColorSchemeWatcher* KColorSchemeWatcher_new2(QObject* parent) {
    return new VirtualKColorSchemeWatcher(parent);
}

QMetaObject* KColorSchemeWatcher_MetaObject(const KColorSchemeWatcher* self) {
    return (QMetaObject*)self->metaObject();
}

void* KColorSchemeWatcher_Metacast(KColorSchemeWatcher* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KColorSchemeWatcher_Metacall(KColorSchemeWatcher* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KColorSchemeWatcher_Tr(const char* s) {
    auto _ret = KColorSchemeWatcher::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KColorSchemeWatcher_SystemPreference(const KColorSchemeWatcher* self) {
    return static_cast<int>(self->systemPreference());
}

void KColorSchemeWatcher_SystemPreferenceChanged(KColorSchemeWatcher* self) {
    self->systemPreferenceChanged();
}

void KColorSchemeWatcher_Connect_SystemPreferenceChanged(KColorSchemeWatcher* self, intptr_t slot) {
    void (*slotFunc)(KColorSchemeWatcher*) = reinterpret_cast<void (*)(KColorSchemeWatcher*)>(slot);
    KColorSchemeWatcher::connect(self,
                                 static_cast<void (KColorSchemeWatcher::*)()>(&KColorSchemeWatcher::systemPreferenceChanged),
                                 [self, slotFunc]() {
                                     slotFunc(self);
                                 });
}

libqt_string KColorSchemeWatcher_Tr2(const char* s, const char* c) {
    auto _ret = KColorSchemeWatcher::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KColorSchemeWatcher_Tr3(const char* s, const char* c, int n) {
    auto _ret = KColorSchemeWatcher::tr(s, c, static_cast<int>(n));
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
QMetaObject* KColorSchemeWatcher_SuperMetaObject(const KColorSchemeWatcher* self) {
    return (QMetaObject*)self->KColorSchemeWatcher::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnMetaObject(KColorSchemeWatcher* self, intptr_t slot) {
    if (auto* vkcolorschemewatcher = const_cast<VirtualKColorSchemeWatcher*>(dynamic_cast<const VirtualKColorSchemeWatcher*>(self)))
        vkcolorschemewatcher->kcolorschemewatcher_metaobject_callback = reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KColorSchemeWatcher_SuperMetacast(KColorSchemeWatcher* self, const char* param1) {
    return self->KColorSchemeWatcher::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnMetacast(KColorSchemeWatcher* self, intptr_t slot) {
    if (auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self))
        vkcolorschemewatcher->kcolorschemewatcher_metacast_callback = reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_Metacast_Callback>(slot);
}

// Base class handler implementation
int KColorSchemeWatcher_SuperMetacall(KColorSchemeWatcher* self, int param1, int param2, void** param3) {
    return self->KColorSchemeWatcher::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnMetacall(KColorSchemeWatcher* self, intptr_t slot) {
    if (auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self))
        vkcolorschemewatcher->kcolorschemewatcher_metacall_callback = reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KColorSchemeWatcher_Event(KColorSchemeWatcher* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KColorSchemeWatcher_SuperEvent(KColorSchemeWatcher* self, QEvent* event) {
    return self->KColorSchemeWatcher::event(event);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnEvent(KColorSchemeWatcher* self, intptr_t slot) {
    if (auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self))
        vkcolorschemewatcher->kcolorschemewatcher_event_callback = reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_Event_Callback>(slot);
}

// Derived class handler implementation
bool KColorSchemeWatcher_EventFilter(KColorSchemeWatcher* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KColorSchemeWatcher_SuperEventFilter(KColorSchemeWatcher* self, QObject* watched, QEvent* event) {
    return self->KColorSchemeWatcher::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnEventFilter(KColorSchemeWatcher* self, intptr_t slot) {
    if (auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self))
        vkcolorschemewatcher->kcolorschemewatcher_eventfilter_callback = reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KColorSchemeWatcher_TimerEvent(KColorSchemeWatcher* self, QTimerEvent* event) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher) {
        vkcolorschemewatcher->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorSchemeWatcher::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorSchemeWatcher_SuperTimerEvent(KColorSchemeWatcher* self, QTimerEvent* event) {
    if (auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self)) {
        vkcolorschemewatcher->KColorSchemeWatcher::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorSchemeWatcher::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnTimerEvent(KColorSchemeWatcher* self, intptr_t slot) {
    if (auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self))
        vkcolorschemewatcher->kcolorschemewatcher_timerevent_callback = reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorSchemeWatcher_ChildEvent(KColorSchemeWatcher* self, QChildEvent* event) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher) {
        vkcolorschemewatcher->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorSchemeWatcher::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorSchemeWatcher_SuperChildEvent(KColorSchemeWatcher* self, QChildEvent* event) {
    if (auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self)) {
        vkcolorschemewatcher->KColorSchemeWatcher::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorSchemeWatcher::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnChildEvent(KColorSchemeWatcher* self, intptr_t slot) {
    if (auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self))
        vkcolorschemewatcher->kcolorschemewatcher_childevent_callback = reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorSchemeWatcher_CustomEvent(KColorSchemeWatcher* self, QEvent* event) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher) {
        vkcolorschemewatcher->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorSchemeWatcher::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorSchemeWatcher_SuperCustomEvent(KColorSchemeWatcher* self, QEvent* event) {
    if (auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self)) {
        vkcolorschemewatcher->KColorSchemeWatcher::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorSchemeWatcher::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnCustomEvent(KColorSchemeWatcher* self, intptr_t slot) {
    if (auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self))
        vkcolorschemewatcher->kcolorschemewatcher_customevent_callback = reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorSchemeWatcher_ConnectNotify(KColorSchemeWatcher* self, const QMetaMethod* signal) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher) {
        vkcolorschemewatcher->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KColorSchemeWatcher::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorSchemeWatcher_SuperConnectNotify(KColorSchemeWatcher* self, const QMetaMethod* signal) {
    if (auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self)) {
        vkcolorschemewatcher->KColorSchemeWatcher::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KColorSchemeWatcher::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnConnectNotify(KColorSchemeWatcher* self, intptr_t slot) {
    if (auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self))
        vkcolorschemewatcher->kcolorschemewatcher_connectnotify_callback = reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KColorSchemeWatcher_DisconnectNotify(KColorSchemeWatcher* self, const QMetaMethod* signal) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher) {
        vkcolorschemewatcher->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KColorSchemeWatcher::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorSchemeWatcher_SuperDisconnectNotify(KColorSchemeWatcher* self, const QMetaMethod* signal) {
    if (auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self)) {
        vkcolorschemewatcher->KColorSchemeWatcher::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KColorSchemeWatcher::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnDisconnectNotify(KColorSchemeWatcher* self, intptr_t slot) {
    if (auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self))
        vkcolorschemewatcher->kcolorschemewatcher_disconnectnotify_callback = reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KColorSchemeWatcher_Sender(const KColorSchemeWatcher* self) {
    if (auto* vkcolorschemewatcher = const_cast<VirtualKColorSchemeWatcher*>(dynamic_cast<const VirtualKColorSchemeWatcher*>(self))) {
        return vkcolorschemewatcher->VirtualKColorSchemeWatcher::sender();
    } else
        qFatal("Error: Protected method KColorSchemeWatcher::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KColorSchemeWatcher_SenderSignalIndex(const KColorSchemeWatcher* self) {
    if (auto* vkcolorschemewatcher = const_cast<VirtualKColorSchemeWatcher*>(dynamic_cast<const VirtualKColorSchemeWatcher*>(self))) {
        return vkcolorschemewatcher->VirtualKColorSchemeWatcher::senderSignalIndex();
    } else
        qFatal("Error: Protected method KColorSchemeWatcher::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KColorSchemeWatcher_Receivers(const KColorSchemeWatcher* self, const char* signal) {
    if (auto* vkcolorschemewatcher = const_cast<VirtualKColorSchemeWatcher*>(dynamic_cast<const VirtualKColorSchemeWatcher*>(self))) {
        return vkcolorschemewatcher->VirtualKColorSchemeWatcher::receivers(signal);
    } else
        qFatal("Error: Protected method KColorSchemeWatcher::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KColorSchemeWatcher_IsSignalConnected(const KColorSchemeWatcher* self, const QMetaMethod* signal) {
    if (auto* vkcolorschemewatcher = const_cast<VirtualKColorSchemeWatcher*>(dynamic_cast<const VirtualKColorSchemeWatcher*>(self))) {
        return vkcolorschemewatcher->VirtualKColorSchemeWatcher::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KColorSchemeWatcher::isSignalConnected called without a directly constructed type");
}

void KColorSchemeWatcher_Delete(KColorSchemeWatcher* self) {
    delete self;
}
