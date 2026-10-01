#include <KWindowInsetsController>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kwindowinsetscontroller.h>
#include "libkwindowinsetscontroller.h"
#include "libkwindowinsetscontroller.hxx"

KWindowInsetsController* KWindowInsetsController_new() {
    return new VirtualKWindowInsetsController();
}

KWindowInsetsController* KWindowInsetsController_new2(QObject* parent) {
    return new VirtualKWindowInsetsController(parent);
}

QMetaObject* KWindowInsetsController_MetaObject(const KWindowInsetsController* self) {
    return (QMetaObject*)self->metaObject();
}

void* KWindowInsetsController_Metacast(KWindowInsetsController* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KWindowInsetsController_Metacall(KWindowInsetsController* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KWindowInsetsController_Tr(const char* s) {
    auto _ret = KWindowInsetsController::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* KWindowInsetsController_StatusBarBackgroundColor(const KWindowInsetsController* self) {
    return new QColor(self->statusBarBackgroundColor());
}

void KWindowInsetsController_SetStatusBarBackgroundColor(KWindowInsetsController* self, const QColor* color) {
    self->setStatusBarBackgroundColor(*color);
}

QColor* KWindowInsetsController_NavigationBarBackgroundColor(const KWindowInsetsController* self) {
    return new QColor(self->navigationBarBackgroundColor());
}

void KWindowInsetsController_SetNavigationBarBackgroundColor(KWindowInsetsController* self, const QColor* color) {
    self->setNavigationBarBackgroundColor(*color);
}

void KWindowInsetsController_StatusBarBackgroundColorChanged(KWindowInsetsController* self) {
    self->statusBarBackgroundColorChanged();
}

void KWindowInsetsController_Connect_StatusBarBackgroundColorChanged(KWindowInsetsController* self, intptr_t slot) {
    void (*slotFunc)(KWindowInsetsController*) = reinterpret_cast<void (*)(KWindowInsetsController*)>(slot);
    KWindowInsetsController::connect(self,
                                     static_cast<void (KWindowInsetsController::*)()>(&KWindowInsetsController::statusBarBackgroundColorChanged),
                                     [self, slotFunc]() {
                                         slotFunc(self);
                                     });
}

void KWindowInsetsController_NavigationBarBackgroundColorChanged(KWindowInsetsController* self) {
    self->navigationBarBackgroundColorChanged();
}

void KWindowInsetsController_Connect_NavigationBarBackgroundColorChanged(KWindowInsetsController* self, intptr_t slot) {
    void (*slotFunc)(KWindowInsetsController*) = reinterpret_cast<void (*)(KWindowInsetsController*)>(slot);
    KWindowInsetsController::connect(self,
                                     static_cast<void (KWindowInsetsController::*)()>(&KWindowInsetsController::navigationBarBackgroundColorChanged),
                                     [self, slotFunc]() {
                                         slotFunc(self);
                                     });
}

libqt_string KWindowInsetsController_Tr2(const char* s, const char* c) {
    auto _ret = KWindowInsetsController::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWindowInsetsController_Tr3(const char* s, const char* c, int n) {
    auto _ret = KWindowInsetsController::tr(s, c, static_cast<int>(n));
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
QMetaObject* KWindowInsetsController_SuperMetaObject(const KWindowInsetsController* self) {
    return (QMetaObject*)self->KWindowInsetsController::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnMetaObject(KWindowInsetsController* self, intptr_t slot) {
    if (auto* vkwindowinsetscontroller = const_cast<VirtualKWindowInsetsController*>(dynamic_cast<const VirtualKWindowInsetsController*>(self)))
        vkwindowinsetscontroller->kwindowinsetscontroller_metaobject_callback = reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KWindowInsetsController_SuperMetacast(KWindowInsetsController* self, const char* param1) {
    return self->KWindowInsetsController::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnMetacast(KWindowInsetsController* self, intptr_t slot) {
    if (auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self))
        vkwindowinsetscontroller->kwindowinsetscontroller_metacast_callback = reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_Metacast_Callback>(slot);
}

// Base class handler implementation
int KWindowInsetsController_SuperMetacall(KWindowInsetsController* self, int param1, int param2, void** param3) {
    return self->KWindowInsetsController::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnMetacall(KWindowInsetsController* self, intptr_t slot) {
    if (auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self))
        vkwindowinsetscontroller->kwindowinsetscontroller_metacall_callback = reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KWindowInsetsController_Event(KWindowInsetsController* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KWindowInsetsController_SuperEvent(KWindowInsetsController* self, QEvent* event) {
    return self->KWindowInsetsController::event(event);
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnEvent(KWindowInsetsController* self, intptr_t slot) {
    if (auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self))
        vkwindowinsetscontroller->kwindowinsetscontroller_event_callback = reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_Event_Callback>(slot);
}

// Derived class handler implementation
bool KWindowInsetsController_EventFilter(KWindowInsetsController* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KWindowInsetsController_SuperEventFilter(KWindowInsetsController* self, QObject* watched, QEvent* event) {
    return self->KWindowInsetsController::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnEventFilter(KWindowInsetsController* self, intptr_t slot) {
    if (auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self))
        vkwindowinsetscontroller->kwindowinsetscontroller_eventfilter_callback = reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KWindowInsetsController_TimerEvent(KWindowInsetsController* self, QTimerEvent* event) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller) {
        vkwindowinsetscontroller->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KWindowInsetsController::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KWindowInsetsController_SuperTimerEvent(KWindowInsetsController* self, QTimerEvent* event) {
    if (auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self)) {
        vkwindowinsetscontroller->KWindowInsetsController::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KWindowInsetsController::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnTimerEvent(KWindowInsetsController* self, intptr_t slot) {
    if (auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self))
        vkwindowinsetscontroller->kwindowinsetscontroller_timerevent_callback = reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KWindowInsetsController_ChildEvent(KWindowInsetsController* self, QChildEvent* event) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller) {
        vkwindowinsetscontroller->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KWindowInsetsController::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KWindowInsetsController_SuperChildEvent(KWindowInsetsController* self, QChildEvent* event) {
    if (auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self)) {
        vkwindowinsetscontroller->KWindowInsetsController::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KWindowInsetsController::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnChildEvent(KWindowInsetsController* self, intptr_t slot) {
    if (auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self))
        vkwindowinsetscontroller->kwindowinsetscontroller_childevent_callback = reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KWindowInsetsController_CustomEvent(KWindowInsetsController* self, QEvent* event) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller) {
        vkwindowinsetscontroller->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KWindowInsetsController::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KWindowInsetsController_SuperCustomEvent(KWindowInsetsController* self, QEvent* event) {
    if (auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self)) {
        vkwindowinsetscontroller->KWindowInsetsController::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KWindowInsetsController::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnCustomEvent(KWindowInsetsController* self, intptr_t slot) {
    if (auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self))
        vkwindowinsetscontroller->kwindowinsetscontroller_customevent_callback = reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KWindowInsetsController_ConnectNotify(KWindowInsetsController* self, const QMetaMethod* signal) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller) {
        vkwindowinsetscontroller->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KWindowInsetsController::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KWindowInsetsController_SuperConnectNotify(KWindowInsetsController* self, const QMetaMethod* signal) {
    if (auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self)) {
        vkwindowinsetscontroller->KWindowInsetsController::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KWindowInsetsController::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnConnectNotify(KWindowInsetsController* self, intptr_t slot) {
    if (auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self))
        vkwindowinsetscontroller->kwindowinsetscontroller_connectnotify_callback = reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KWindowInsetsController_DisconnectNotify(KWindowInsetsController* self, const QMetaMethod* signal) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller) {
        vkwindowinsetscontroller->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KWindowInsetsController::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KWindowInsetsController_SuperDisconnectNotify(KWindowInsetsController* self, const QMetaMethod* signal) {
    if (auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self)) {
        vkwindowinsetscontroller->KWindowInsetsController::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KWindowInsetsController::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnDisconnectNotify(KWindowInsetsController* self, intptr_t slot) {
    if (auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self))
        vkwindowinsetscontroller->kwindowinsetscontroller_disconnectnotify_callback = reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KWindowInsetsController_Sender(const KWindowInsetsController* self) {
    if (auto* vkwindowinsetscontroller = const_cast<VirtualKWindowInsetsController*>(dynamic_cast<const VirtualKWindowInsetsController*>(self))) {
        return vkwindowinsetscontroller->VirtualKWindowInsetsController::sender();
    } else
        qFatal("Error: Protected method KWindowInsetsController::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KWindowInsetsController_SenderSignalIndex(const KWindowInsetsController* self) {
    if (auto* vkwindowinsetscontroller = const_cast<VirtualKWindowInsetsController*>(dynamic_cast<const VirtualKWindowInsetsController*>(self))) {
        return vkwindowinsetscontroller->VirtualKWindowInsetsController::senderSignalIndex();
    } else
        qFatal("Error: Protected method KWindowInsetsController::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KWindowInsetsController_Receivers(const KWindowInsetsController* self, const char* signal) {
    if (auto* vkwindowinsetscontroller = const_cast<VirtualKWindowInsetsController*>(dynamic_cast<const VirtualKWindowInsetsController*>(self))) {
        return vkwindowinsetscontroller->VirtualKWindowInsetsController::receivers(signal);
    } else
        qFatal("Error: Protected method KWindowInsetsController::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KWindowInsetsController_IsSignalConnected(const KWindowInsetsController* self, const QMetaMethod* signal) {
    if (auto* vkwindowinsetscontroller = const_cast<VirtualKWindowInsetsController*>(dynamic_cast<const VirtualKWindowInsetsController*>(self))) {
        return vkwindowinsetscontroller->VirtualKWindowInsetsController::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KWindowInsetsController::isSignalConnected called without a directly constructed type");
}

void KWindowInsetsController_Delete(KWindowInsetsController* self) {
    delete self;
}
