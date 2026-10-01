#include <KCoreDirLister>
#include <KDirLister>
#include <KIO/ListJob>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <kdirlister.h>
#include "libkdirlister.h"
#include "libkdirlister.hxx"

KDirLister* KDirLister_new() {
    return new VirtualKDirLister();
}

KDirLister* KDirLister_new2(QObject* parent) {
    return new VirtualKDirLister(parent);
}

QMetaObject* KDirLister_MetaObject(const KDirLister* self) {
    return (QMetaObject*)self->metaObject();
}

void* KDirLister_Metacast(KDirLister* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KDirLister_Metacall(KDirLister* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KDirLister_Tr(const char* s) {
    auto _ret = KDirLister::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KDirLister_AutoErrorHandlingEnabled(const KDirLister* self) {
    return self->autoErrorHandlingEnabled();
}

void KDirLister_SetMainWindow(KDirLister* self, QWidget* window) {
    self->setMainWindow(window);
}

QWidget* KDirLister_MainWindow(KDirLister* self) {
    return self->mainWindow();
}

void KDirLister_JobStarted(KDirLister* self, KIO__ListJob* param1) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister) {
        vkdirlister->jobStarted(param1);
    }
}

libqt_string KDirLister_Tr2(const char* s, const char* c) {
    auto _ret = KDirLister::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDirLister_Tr3(const char* s, const char* c, int n) {
    auto _ret = KDirLister::tr(s, c, static_cast<int>(n));
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
QMetaObject* KDirLister_SuperMetaObject(const KDirLister* self) {
    return (QMetaObject*)self->KDirLister::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnMetaObject(KDirLister* self, intptr_t slot) {
    if (auto* vkdirlister = const_cast<VirtualKDirLister*>(dynamic_cast<const VirtualKDirLister*>(self)))
        vkdirlister->kdirlister_metaobject_callback = reinterpret_cast<VirtualKDirLister::KDirLister_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KDirLister_SuperMetacast(KDirLister* self, const char* param1) {
    return self->KDirLister::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnMetacast(KDirLister* self, intptr_t slot) {
    if (auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self))
        vkdirlister->kdirlister_metacast_callback = reinterpret_cast<VirtualKDirLister::KDirLister_Metacast_Callback>(slot);
}

// Base class handler implementation
int KDirLister_SuperMetacall(KDirLister* self, int param1, int param2, void** param3) {
    return self->KDirLister::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnMetacall(KDirLister* self, intptr_t slot) {
    if (auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self))
        vkdirlister->kdirlister_metacall_callback = reinterpret_cast<VirtualKDirLister::KDirLister_Metacall_Callback>(slot);
}

// Base class handler implementation
void KDirLister_SuperJobStarted(KDirLister* self, KIO__ListJob* param1) {
    if (auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self)) {
        vkdirlister->KDirLister::jobStarted(param1);
    } else
        qFatal("Error: Protected virtual method KDirLister::jobStarted called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnJobStarted(KDirLister* self, intptr_t slot) {
    if (auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self))
        vkdirlister->kdirlister_jobstarted_callback = reinterpret_cast<VirtualKDirLister::KDirLister_JobStarted_Callback>(slot);
}

// Derived class handler implementation
bool KDirLister_Event(KDirLister* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KDirLister_SuperEvent(KDirLister* self, QEvent* event) {
    return self->KDirLister::event(event);
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnEvent(KDirLister* self, intptr_t slot) {
    if (auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self))
        vkdirlister->kdirlister_event_callback = reinterpret_cast<VirtualKDirLister::KDirLister_Event_Callback>(slot);
}

// Derived class handler implementation
bool KDirLister_EventFilter(KDirLister* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KDirLister_SuperEventFilter(KDirLister* self, QObject* watched, QEvent* event) {
    return self->KDirLister::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnEventFilter(KDirLister* self, intptr_t slot) {
    if (auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self))
        vkdirlister->kdirlister_eventfilter_callback = reinterpret_cast<VirtualKDirLister::KDirLister_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KDirLister_TimerEvent(KDirLister* self, QTimerEvent* event) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister) {
        vkdirlister->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirLister::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirLister_SuperTimerEvent(KDirLister* self, QTimerEvent* event) {
    if (auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self)) {
        vkdirlister->KDirLister::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirLister::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnTimerEvent(KDirLister* self, intptr_t slot) {
    if (auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self))
        vkdirlister->kdirlister_timerevent_callback = reinterpret_cast<VirtualKDirLister::KDirLister_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirLister_ChildEvent(KDirLister* self, QChildEvent* event) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister) {
        vkdirlister->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirLister::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirLister_SuperChildEvent(KDirLister* self, QChildEvent* event) {
    if (auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self)) {
        vkdirlister->KDirLister::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirLister::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnChildEvent(KDirLister* self, intptr_t slot) {
    if (auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self))
        vkdirlister->kdirlister_childevent_callback = reinterpret_cast<VirtualKDirLister::KDirLister_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirLister_CustomEvent(KDirLister* self, QEvent* event) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister) {
        vkdirlister->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirLister::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirLister_SuperCustomEvent(KDirLister* self, QEvent* event) {
    if (auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self)) {
        vkdirlister->KDirLister::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirLister::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnCustomEvent(KDirLister* self, intptr_t slot) {
    if (auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self))
        vkdirlister->kdirlister_customevent_callback = reinterpret_cast<VirtualKDirLister::KDirLister_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirLister_ConnectNotify(KDirLister* self, const QMetaMethod* signal) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister) {
        vkdirlister->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDirLister::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirLister_SuperConnectNotify(KDirLister* self, const QMetaMethod* signal) {
    if (auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self)) {
        vkdirlister->KDirLister::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDirLister::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnConnectNotify(KDirLister* self, intptr_t slot) {
    if (auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self))
        vkdirlister->kdirlister_connectnotify_callback = reinterpret_cast<VirtualKDirLister::KDirLister_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KDirLister_DisconnectNotify(KDirLister* self, const QMetaMethod* signal) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister) {
        vkdirlister->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDirLister::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirLister_SuperDisconnectNotify(KDirLister* self, const QMetaMethod* signal) {
    if (auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self)) {
        vkdirlister->KDirLister::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDirLister::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnDisconnectNotify(KDirLister* self, intptr_t slot) {
    if (auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self))
        vkdirlister->kdirlister_disconnectnotify_callback = reinterpret_cast<VirtualKDirLister::KDirLister_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KDirLister_Sender(const KDirLister* self) {
    if (auto* vkdirlister = const_cast<VirtualKDirLister*>(dynamic_cast<const VirtualKDirLister*>(self))) {
        return vkdirlister->VirtualKDirLister::sender();
    } else
        qFatal("Error: Protected method KDirLister::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KDirLister_SenderSignalIndex(const KDirLister* self) {
    if (auto* vkdirlister = const_cast<VirtualKDirLister*>(dynamic_cast<const VirtualKDirLister*>(self))) {
        return vkdirlister->VirtualKDirLister::senderSignalIndex();
    } else
        qFatal("Error: Protected method KDirLister::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KDirLister_Receivers(const KDirLister* self, const char* signal) {
    if (auto* vkdirlister = const_cast<VirtualKDirLister*>(dynamic_cast<const VirtualKDirLister*>(self))) {
        return vkdirlister->VirtualKDirLister::receivers(signal);
    } else
        qFatal("Error: Protected method KDirLister::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDirLister_IsSignalConnected(const KDirLister* self, const QMetaMethod* signal) {
    if (auto* vkdirlister = const_cast<VirtualKDirLister*>(dynamic_cast<const VirtualKDirLister*>(self))) {
        return vkdirlister->VirtualKDirLister::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KDirLister::isSignalConnected called without a directly constructed type");
}

void KDirLister_Delete(KDirLister* self) {
    delete self;
}
