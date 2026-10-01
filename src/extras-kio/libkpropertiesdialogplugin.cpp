#include <KPropertiesDialogPlugin>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kpropertiesdialogplugin.h>
#include "libkpropertiesdialogplugin.h"
#include "libkpropertiesdialogplugin.hxx"

KPropertiesDialogPlugin* KPropertiesDialogPlugin_new(QObject* parent) {
    return new VirtualKPropertiesDialogPlugin(parent);
}

QMetaObject* KPropertiesDialogPlugin_MetaObject(const KPropertiesDialogPlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPropertiesDialogPlugin_Metacast(KPropertiesDialogPlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPropertiesDialogPlugin_Metacall(KPropertiesDialogPlugin* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KPropertiesDialogPlugin_Tr(const char* s) {
    auto _ret = KPropertiesDialogPlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPropertiesDialogPlugin_ApplyChanges(KPropertiesDialogPlugin* self) {
    self->applyChanges();
}

void KPropertiesDialogPlugin_SetDirty(KPropertiesDialogPlugin* self) {
    self->setDirty();
}

bool KPropertiesDialogPlugin_IsDirty(const KPropertiesDialogPlugin* self) {
    return self->isDirty();
}

void KPropertiesDialogPlugin_Changed(KPropertiesDialogPlugin* self) {
    self->changed();
}

void KPropertiesDialogPlugin_Connect_Changed(KPropertiesDialogPlugin* self, intptr_t slot) {
    void (*slotFunc)(KPropertiesDialogPlugin*) = reinterpret_cast<void (*)(KPropertiesDialogPlugin*)>(slot);
    KPropertiesDialogPlugin::connect(self,
                                     static_cast<void (KPropertiesDialogPlugin::*)()>(&KPropertiesDialogPlugin::changed),
                                     [self, slotFunc]() {
                                         slotFunc(self);
                                     });
}

libqt_string KPropertiesDialogPlugin_Tr2(const char* s, const char* c) {
    auto _ret = KPropertiesDialogPlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPropertiesDialogPlugin_Tr3(const char* s, const char* c, int n) {
    auto _ret = KPropertiesDialogPlugin::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPropertiesDialogPlugin_SetDirty1(KPropertiesDialogPlugin* self, bool b) {
    self->setDirty(b);
}

// Base class handler implementation
QMetaObject* KPropertiesDialogPlugin_SuperMetaObject(const KPropertiesDialogPlugin* self) {
    return (QMetaObject*)self->KPropertiesDialogPlugin::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnMetaObject(KPropertiesDialogPlugin* self, intptr_t slot) {
    if (auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self)))
        vkpropertiesdialogplugin->kpropertiesdialogplugin_metaobject_callback = reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KPropertiesDialogPlugin_SuperMetacast(KPropertiesDialogPlugin* self, const char* param1) {
    return self->KPropertiesDialogPlugin::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnMetacast(KPropertiesDialogPlugin* self, intptr_t slot) {
    if (auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self))
        vkpropertiesdialogplugin->kpropertiesdialogplugin_metacast_callback = reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_Metacast_Callback>(slot);
}

// Base class handler implementation
int KPropertiesDialogPlugin_SuperMetacall(KPropertiesDialogPlugin* self, int param1, int param2, void** param3) {
    return self->KPropertiesDialogPlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnMetacall(KPropertiesDialogPlugin* self, intptr_t slot) {
    if (auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self))
        vkpropertiesdialogplugin->kpropertiesdialogplugin_metacall_callback = reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_Metacall_Callback>(slot);
}

// Base class handler implementation
void KPropertiesDialogPlugin_SuperApplyChanges(KPropertiesDialogPlugin* self) {
    self->KPropertiesDialogPlugin::applyChanges();
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnApplyChanges(KPropertiesDialogPlugin* self, intptr_t slot) {
    if (auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self))
        vkpropertiesdialogplugin->kpropertiesdialogplugin_applychanges_callback = reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_ApplyChanges_Callback>(slot);
}

// Derived class handler implementation
bool KPropertiesDialogPlugin_Event(KPropertiesDialogPlugin* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KPropertiesDialogPlugin_SuperEvent(KPropertiesDialogPlugin* self, QEvent* event) {
    return self->KPropertiesDialogPlugin::event(event);
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnEvent(KPropertiesDialogPlugin* self, intptr_t slot) {
    if (auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self))
        vkpropertiesdialogplugin->kpropertiesdialogplugin_event_callback = reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_Event_Callback>(slot);
}

// Derived class handler implementation
bool KPropertiesDialogPlugin_EventFilter(KPropertiesDialogPlugin* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KPropertiesDialogPlugin_SuperEventFilter(KPropertiesDialogPlugin* self, QObject* watched, QEvent* event) {
    return self->KPropertiesDialogPlugin::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnEventFilter(KPropertiesDialogPlugin* self, intptr_t slot) {
    if (auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self))
        vkpropertiesdialogplugin->kpropertiesdialogplugin_eventfilter_callback = reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialogPlugin_TimerEvent(KPropertiesDialogPlugin* self, QTimerEvent* event) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin) {
        vkpropertiesdialogplugin->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialogPlugin::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialogPlugin_SuperTimerEvent(KPropertiesDialogPlugin* self, QTimerEvent* event) {
    if (auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self)) {
        vkpropertiesdialogplugin->KPropertiesDialogPlugin::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialogPlugin::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnTimerEvent(KPropertiesDialogPlugin* self, intptr_t slot) {
    if (auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self))
        vkpropertiesdialogplugin->kpropertiesdialogplugin_timerevent_callback = reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialogPlugin_ChildEvent(KPropertiesDialogPlugin* self, QChildEvent* event) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin) {
        vkpropertiesdialogplugin->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialogPlugin::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialogPlugin_SuperChildEvent(KPropertiesDialogPlugin* self, QChildEvent* event) {
    if (auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self)) {
        vkpropertiesdialogplugin->KPropertiesDialogPlugin::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialogPlugin::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnChildEvent(KPropertiesDialogPlugin* self, intptr_t slot) {
    if (auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self))
        vkpropertiesdialogplugin->kpropertiesdialogplugin_childevent_callback = reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialogPlugin_CustomEvent(KPropertiesDialogPlugin* self, QEvent* event) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin) {
        vkpropertiesdialogplugin->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialogPlugin::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialogPlugin_SuperCustomEvent(KPropertiesDialogPlugin* self, QEvent* event) {
    if (auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self)) {
        vkpropertiesdialogplugin->KPropertiesDialogPlugin::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialogPlugin::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnCustomEvent(KPropertiesDialogPlugin* self, intptr_t slot) {
    if (auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self))
        vkpropertiesdialogplugin->kpropertiesdialogplugin_customevent_callback = reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialogPlugin_ConnectNotify(KPropertiesDialogPlugin* self, const QMetaMethod* signal) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin) {
        vkpropertiesdialogplugin->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialogPlugin::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialogPlugin_SuperConnectNotify(KPropertiesDialogPlugin* self, const QMetaMethod* signal) {
    if (auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self)) {
        vkpropertiesdialogplugin->KPropertiesDialogPlugin::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialogPlugin::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnConnectNotify(KPropertiesDialogPlugin* self, intptr_t slot) {
    if (auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self))
        vkpropertiesdialogplugin->kpropertiesdialogplugin_connectnotify_callback = reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialogPlugin_DisconnectNotify(KPropertiesDialogPlugin* self, const QMetaMethod* signal) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin) {
        vkpropertiesdialogplugin->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialogPlugin::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialogPlugin_SuperDisconnectNotify(KPropertiesDialogPlugin* self, const QMetaMethod* signal) {
    if (auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self)) {
        vkpropertiesdialogplugin->KPropertiesDialogPlugin::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialogPlugin::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnDisconnectNotify(KPropertiesDialogPlugin* self, intptr_t slot) {
    if (auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self))
        vkpropertiesdialogplugin->kpropertiesdialogplugin_disconnectnotify_callback = reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
int KPropertiesDialogPlugin_FontHeight(const KPropertiesDialogPlugin* self) {
    if (auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self))) {
        return vkpropertiesdialogplugin->VirtualKPropertiesDialogPlugin::fontHeight();
    } else
        qFatal("Error: Protected method KPropertiesDialogPlugin::fontHeight called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KPropertiesDialogPlugin_Sender(const KPropertiesDialogPlugin* self) {
    if (auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self))) {
        return vkpropertiesdialogplugin->VirtualKPropertiesDialogPlugin::sender();
    } else
        qFatal("Error: Protected method KPropertiesDialogPlugin::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KPropertiesDialogPlugin_SenderSignalIndex(const KPropertiesDialogPlugin* self) {
    if (auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self))) {
        return vkpropertiesdialogplugin->VirtualKPropertiesDialogPlugin::senderSignalIndex();
    } else
        qFatal("Error: Protected method KPropertiesDialogPlugin::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KPropertiesDialogPlugin_Receivers(const KPropertiesDialogPlugin* self, const char* signal) {
    if (auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self))) {
        return vkpropertiesdialogplugin->VirtualKPropertiesDialogPlugin::receivers(signal);
    } else
        qFatal("Error: Protected method KPropertiesDialogPlugin::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPropertiesDialogPlugin_IsSignalConnected(const KPropertiesDialogPlugin* self, const QMetaMethod* signal) {
    if (auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self))) {
        return vkpropertiesdialogplugin->VirtualKPropertiesDialogPlugin::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KPropertiesDialogPlugin::isSignalConnected called without a directly constructed type");
}

void KPropertiesDialogPlugin_Delete(KPropertiesDialogPlugin* self) {
    delete self;
}
