#include <KConfigGroup>
#include <KWindowStateSaver>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QWindow>
#include <kwindowstatesaver.h>
#include "libkwindowstatesaver.h"
#include "libkwindowstatesaver.hxx"

KWindowStateSaver* KWindowStateSaver_new(QWindow* window, const KConfigGroup* configGroup) {
    return new VirtualKWindowStateSaver(window, *configGroup);
}

KWindowStateSaver* KWindowStateSaver_new2(QWindow* window, const libqt_string configGroupName) {
    QString configGroupName_QString = QString::fromUtf8(configGroupName.data, configGroupName.len);
    return new VirtualKWindowStateSaver(window, configGroupName_QString);
}

QMetaObject* KWindowStateSaver_MetaObject(const KWindowStateSaver* self) {
    return (QMetaObject*)self->metaObject();
}

void* KWindowStateSaver_Metacast(KWindowStateSaver* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KWindowStateSaver_Metacall(KWindowStateSaver* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KWindowStateSaver_Tr(const char* s) {
    auto _ret = KWindowStateSaver::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWindowStateSaver_Tr2(const char* s, const char* c) {
    auto _ret = KWindowStateSaver::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWindowStateSaver_Tr3(const char* s, const char* c, int n) {
    auto _ret = KWindowStateSaver::tr(s, c, static_cast<int>(n));
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
QMetaObject* KWindowStateSaver_SuperMetaObject(const KWindowStateSaver* self) {
    return (QMetaObject*)self->KWindowStateSaver::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KWindowStateSaver_OnMetaObject(KWindowStateSaver* self, intptr_t slot) {
    if (auto* vkwindowstatesaver = const_cast<VirtualKWindowStateSaver*>(dynamic_cast<const VirtualKWindowStateSaver*>(self)))
        vkwindowstatesaver->kwindowstatesaver_metaobject_callback = reinterpret_cast<VirtualKWindowStateSaver::KWindowStateSaver_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KWindowStateSaver_SuperMetacast(KWindowStateSaver* self, const char* param1) {
    return self->KWindowStateSaver::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KWindowStateSaver_OnMetacast(KWindowStateSaver* self, intptr_t slot) {
    if (auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self))
        vkwindowstatesaver->kwindowstatesaver_metacast_callback = reinterpret_cast<VirtualKWindowStateSaver::KWindowStateSaver_Metacast_Callback>(slot);
}

// Base class handler implementation
int KWindowStateSaver_SuperMetacall(KWindowStateSaver* self, int param1, int param2, void** param3) {
    return self->KWindowStateSaver::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KWindowStateSaver_OnMetacall(KWindowStateSaver* self, intptr_t slot) {
    if (auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self))
        vkwindowstatesaver->kwindowstatesaver_metacall_callback = reinterpret_cast<VirtualKWindowStateSaver::KWindowStateSaver_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KWindowStateSaver_Event(KWindowStateSaver* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KWindowStateSaver_SuperEvent(KWindowStateSaver* self, QEvent* event) {
    return self->KWindowStateSaver::event(event);
}

// Auxiliary method to allow providing re-implementation
void KWindowStateSaver_OnEvent(KWindowStateSaver* self, intptr_t slot) {
    if (auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self))
        vkwindowstatesaver->kwindowstatesaver_event_callback = reinterpret_cast<VirtualKWindowStateSaver::KWindowStateSaver_Event_Callback>(slot);
}

// Derived class handler implementation
void KWindowStateSaver_ChildEvent(KWindowStateSaver* self, QChildEvent* event) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver) {
        vkwindowstatesaver->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KWindowStateSaver::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KWindowStateSaver_SuperChildEvent(KWindowStateSaver* self, QChildEvent* event) {
    if (auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self)) {
        vkwindowstatesaver->KWindowStateSaver::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KWindowStateSaver::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWindowStateSaver_OnChildEvent(KWindowStateSaver* self, intptr_t slot) {
    if (auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self))
        vkwindowstatesaver->kwindowstatesaver_childevent_callback = reinterpret_cast<VirtualKWindowStateSaver::KWindowStateSaver_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KWindowStateSaver_CustomEvent(KWindowStateSaver* self, QEvent* event) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver) {
        vkwindowstatesaver->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KWindowStateSaver::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KWindowStateSaver_SuperCustomEvent(KWindowStateSaver* self, QEvent* event) {
    if (auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self)) {
        vkwindowstatesaver->KWindowStateSaver::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KWindowStateSaver::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWindowStateSaver_OnCustomEvent(KWindowStateSaver* self, intptr_t slot) {
    if (auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self))
        vkwindowstatesaver->kwindowstatesaver_customevent_callback = reinterpret_cast<VirtualKWindowStateSaver::KWindowStateSaver_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KWindowStateSaver_ConnectNotify(KWindowStateSaver* self, const QMetaMethod* signal) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver) {
        vkwindowstatesaver->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KWindowStateSaver::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KWindowStateSaver_SuperConnectNotify(KWindowStateSaver* self, const QMetaMethod* signal) {
    if (auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self)) {
        vkwindowstatesaver->KWindowStateSaver::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KWindowStateSaver::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWindowStateSaver_OnConnectNotify(KWindowStateSaver* self, intptr_t slot) {
    if (auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self))
        vkwindowstatesaver->kwindowstatesaver_connectnotify_callback = reinterpret_cast<VirtualKWindowStateSaver::KWindowStateSaver_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KWindowStateSaver_DisconnectNotify(KWindowStateSaver* self, const QMetaMethod* signal) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver) {
        vkwindowstatesaver->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KWindowStateSaver::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KWindowStateSaver_SuperDisconnectNotify(KWindowStateSaver* self, const QMetaMethod* signal) {
    if (auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self)) {
        vkwindowstatesaver->KWindowStateSaver::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KWindowStateSaver::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWindowStateSaver_OnDisconnectNotify(KWindowStateSaver* self, intptr_t slot) {
    if (auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self))
        vkwindowstatesaver->kwindowstatesaver_disconnectnotify_callback = reinterpret_cast<VirtualKWindowStateSaver::KWindowStateSaver_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KWindowStateSaver_Sender(const KWindowStateSaver* self) {
    if (auto* vkwindowstatesaver = const_cast<VirtualKWindowStateSaver*>(dynamic_cast<const VirtualKWindowStateSaver*>(self))) {
        return vkwindowstatesaver->VirtualKWindowStateSaver::sender();
    } else
        qFatal("Error: Protected method KWindowStateSaver::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KWindowStateSaver_SenderSignalIndex(const KWindowStateSaver* self) {
    if (auto* vkwindowstatesaver = const_cast<VirtualKWindowStateSaver*>(dynamic_cast<const VirtualKWindowStateSaver*>(self))) {
        return vkwindowstatesaver->VirtualKWindowStateSaver::senderSignalIndex();
    } else
        qFatal("Error: Protected method KWindowStateSaver::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KWindowStateSaver_Receivers(const KWindowStateSaver* self, const char* signal) {
    if (auto* vkwindowstatesaver = const_cast<VirtualKWindowStateSaver*>(dynamic_cast<const VirtualKWindowStateSaver*>(self))) {
        return vkwindowstatesaver->VirtualKWindowStateSaver::receivers(signal);
    } else
        qFatal("Error: Protected method KWindowStateSaver::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KWindowStateSaver_IsSignalConnected(const KWindowStateSaver* self, const QMetaMethod* signal) {
    if (auto* vkwindowstatesaver = const_cast<VirtualKWindowStateSaver*>(dynamic_cast<const VirtualKWindowStateSaver*>(self))) {
        return vkwindowstatesaver->VirtualKWindowStateSaver::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KWindowStateSaver::isSignalConnected called without a directly constructed type");
}

void KWindowStateSaver_Delete(KWindowStateSaver* self) {
    delete self;
}
