#include <KWindowShadow>
#include <KWindowShadowTile>
#include <QChildEvent>
#include <QEvent>
#include <QImage>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWindow>
#include <kwindowshadow.h>
#include "libkwindowshadow.h"
#include "libkwindowshadow.hxx"

KWindowShadowTile* KWindowShadowTile_new() {
    return new KWindowShadowTile();
}

QImage* KWindowShadowTile_Image(const KWindowShadowTile* self) {
    return new QImage(self->image());
}

void KWindowShadowTile_SetImage(KWindowShadowTile* self, const QImage* image) {
    self->setImage(*image);
}

bool KWindowShadowTile_IsCreated(const KWindowShadowTile* self) {
    return self->isCreated();
}

bool KWindowShadowTile_Create(KWindowShadowTile* self) {
    return self->create();
}

void KWindowShadowTile_Delete(KWindowShadowTile* self) {
    delete self;
}

KWindowShadow* KWindowShadow_new() {
    return new VirtualKWindowShadow();
}

KWindowShadow* KWindowShadow_new2(QObject* parent) {
    return new VirtualKWindowShadow(parent);
}

QMetaObject* KWindowShadow_MetaObject(const KWindowShadow* self) {
    return (QMetaObject*)self->metaObject();
}

void* KWindowShadow_Metacast(KWindowShadow* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KWindowShadow_Metacall(KWindowShadow* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KWindowShadow_Tr(const char* s) {
    auto _ret = KWindowShadow::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QMargins* KWindowShadow_Padding(const KWindowShadow* self) {
    return new QMargins(self->padding());
}

void KWindowShadow_SetPadding(KWindowShadow* self, const QMargins* padding) {
    self->setPadding(*padding);
}

QWindow* KWindowShadow_Window(const KWindowShadow* self) {
    return self->window();
}

void KWindowShadow_SetWindow(KWindowShadow* self, QWindow* window) {
    self->setWindow(window);
}

bool KWindowShadow_IsCreated(const KWindowShadow* self) {
    return self->isCreated();
}

bool KWindowShadow_Create(KWindowShadow* self) {
    return self->create();
}

void KWindowShadow_Destroy(KWindowShadow* self) {
    self->destroy();
}

libqt_string KWindowShadow_Tr2(const char* s, const char* c) {
    auto _ret = KWindowShadow::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWindowShadow_Tr3(const char* s, const char* c, int n) {
    auto _ret = KWindowShadow::tr(s, c, static_cast<int>(n));
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
QMetaObject* KWindowShadow_SuperMetaObject(const KWindowShadow* self) {
    return (QMetaObject*)self->KWindowShadow::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnMetaObject(KWindowShadow* self, intptr_t slot) {
    if (auto* vkwindowshadow = const_cast<VirtualKWindowShadow*>(dynamic_cast<const VirtualKWindowShadow*>(self)))
        vkwindowshadow->kwindowshadow_metaobject_callback = reinterpret_cast<VirtualKWindowShadow::KWindowShadow_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KWindowShadow_SuperMetacast(KWindowShadow* self, const char* param1) {
    return self->KWindowShadow::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnMetacast(KWindowShadow* self, intptr_t slot) {
    if (auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self))
        vkwindowshadow->kwindowshadow_metacast_callback = reinterpret_cast<VirtualKWindowShadow::KWindowShadow_Metacast_Callback>(slot);
}

// Base class handler implementation
int KWindowShadow_SuperMetacall(KWindowShadow* self, int param1, int param2, void** param3) {
    return self->KWindowShadow::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnMetacall(KWindowShadow* self, intptr_t slot) {
    if (auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self))
        vkwindowshadow->kwindowshadow_metacall_callback = reinterpret_cast<VirtualKWindowShadow::KWindowShadow_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KWindowShadow_Event(KWindowShadow* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KWindowShadow_SuperEvent(KWindowShadow* self, QEvent* event) {
    return self->KWindowShadow::event(event);
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnEvent(KWindowShadow* self, intptr_t slot) {
    if (auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self))
        vkwindowshadow->kwindowshadow_event_callback = reinterpret_cast<VirtualKWindowShadow::KWindowShadow_Event_Callback>(slot);
}

// Derived class handler implementation
bool KWindowShadow_EventFilter(KWindowShadow* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KWindowShadow_SuperEventFilter(KWindowShadow* self, QObject* watched, QEvent* event) {
    return self->KWindowShadow::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnEventFilter(KWindowShadow* self, intptr_t slot) {
    if (auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self))
        vkwindowshadow->kwindowshadow_eventfilter_callback = reinterpret_cast<VirtualKWindowShadow::KWindowShadow_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KWindowShadow_TimerEvent(KWindowShadow* self, QTimerEvent* event) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow) {
        vkwindowshadow->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KWindowShadow::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KWindowShadow_SuperTimerEvent(KWindowShadow* self, QTimerEvent* event) {
    if (auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self)) {
        vkwindowshadow->KWindowShadow::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KWindowShadow::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnTimerEvent(KWindowShadow* self, intptr_t slot) {
    if (auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self))
        vkwindowshadow->kwindowshadow_timerevent_callback = reinterpret_cast<VirtualKWindowShadow::KWindowShadow_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KWindowShadow_ChildEvent(KWindowShadow* self, QChildEvent* event) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow) {
        vkwindowshadow->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KWindowShadow::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KWindowShadow_SuperChildEvent(KWindowShadow* self, QChildEvent* event) {
    if (auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self)) {
        vkwindowshadow->KWindowShadow::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KWindowShadow::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnChildEvent(KWindowShadow* self, intptr_t slot) {
    if (auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self))
        vkwindowshadow->kwindowshadow_childevent_callback = reinterpret_cast<VirtualKWindowShadow::KWindowShadow_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KWindowShadow_CustomEvent(KWindowShadow* self, QEvent* event) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow) {
        vkwindowshadow->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KWindowShadow::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KWindowShadow_SuperCustomEvent(KWindowShadow* self, QEvent* event) {
    if (auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self)) {
        vkwindowshadow->KWindowShadow::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KWindowShadow::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnCustomEvent(KWindowShadow* self, intptr_t slot) {
    if (auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self))
        vkwindowshadow->kwindowshadow_customevent_callback = reinterpret_cast<VirtualKWindowShadow::KWindowShadow_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KWindowShadow_ConnectNotify(KWindowShadow* self, const QMetaMethod* signal) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow) {
        vkwindowshadow->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KWindowShadow::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KWindowShadow_SuperConnectNotify(KWindowShadow* self, const QMetaMethod* signal) {
    if (auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self)) {
        vkwindowshadow->KWindowShadow::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KWindowShadow::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnConnectNotify(KWindowShadow* self, intptr_t slot) {
    if (auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self))
        vkwindowshadow->kwindowshadow_connectnotify_callback = reinterpret_cast<VirtualKWindowShadow::KWindowShadow_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KWindowShadow_DisconnectNotify(KWindowShadow* self, const QMetaMethod* signal) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow) {
        vkwindowshadow->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KWindowShadow::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KWindowShadow_SuperDisconnectNotify(KWindowShadow* self, const QMetaMethod* signal) {
    if (auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self)) {
        vkwindowshadow->KWindowShadow::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KWindowShadow::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnDisconnectNotify(KWindowShadow* self, intptr_t slot) {
    if (auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self))
        vkwindowshadow->kwindowshadow_disconnectnotify_callback = reinterpret_cast<VirtualKWindowShadow::KWindowShadow_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KWindowShadow_Sender(const KWindowShadow* self) {
    if (auto* vkwindowshadow = const_cast<VirtualKWindowShadow*>(dynamic_cast<const VirtualKWindowShadow*>(self))) {
        return vkwindowshadow->VirtualKWindowShadow::sender();
    } else
        qFatal("Error: Protected method KWindowShadow::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KWindowShadow_SenderSignalIndex(const KWindowShadow* self) {
    if (auto* vkwindowshadow = const_cast<VirtualKWindowShadow*>(dynamic_cast<const VirtualKWindowShadow*>(self))) {
        return vkwindowshadow->VirtualKWindowShadow::senderSignalIndex();
    } else
        qFatal("Error: Protected method KWindowShadow::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KWindowShadow_Receivers(const KWindowShadow* self, const char* signal) {
    if (auto* vkwindowshadow = const_cast<VirtualKWindowShadow*>(dynamic_cast<const VirtualKWindowShadow*>(self))) {
        return vkwindowshadow->VirtualKWindowShadow::receivers(signal);
    } else
        qFatal("Error: Protected method KWindowShadow::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KWindowShadow_IsSignalConnected(const KWindowShadow* self, const QMetaMethod* signal) {
    if (auto* vkwindowshadow = const_cast<VirtualKWindowShadow*>(dynamic_cast<const VirtualKWindowShadow*>(self))) {
        return vkwindowshadow->VirtualKWindowShadow::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KWindowShadow::isSignalConnected called without a directly constructed type");
}

void KWindowShadow_Delete(KWindowShadow* self) {
    delete self;
}
