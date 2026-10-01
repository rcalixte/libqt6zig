#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__FileInfoExtension
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <fileinfoextension.h>
#include "libfileinfoextension.h"
#include "libfileinfoextension.hxx"

KParts__FileInfoExtension* KParts__FileInfoExtension_new(KParts__ReadOnlyPart* parent) {
    return new VirtualKPartsFileInfoExtension(parent);
}

QMetaObject* KParts__FileInfoExtension_MetaObject(const KParts__FileInfoExtension* self) {
    return (QMetaObject*)self->metaObject();
}

void* KParts__FileInfoExtension_Metacast(KParts__FileInfoExtension* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KParts__FileInfoExtension_Metacall(KParts__FileInfoExtension* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KParts__FileInfoExtension_Tr(const char* s) {
    auto _ret = KParts::FileInfoExtension::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KParts__FileInfoExtension* KParts__FileInfoExtension_ChildObject(QObject* obj) {
    return KParts::FileInfoExtension::childObject(obj);
}

bool KParts__FileInfoExtension_HasSelection(const KParts__FileInfoExtension* self) {
    return self->hasSelection();
}

int KParts__FileInfoExtension_SupportedQueryModes(const KParts__FileInfoExtension* self) {
    return static_cast<int>(self->supportedQueryModes());
}

KFileItemList* KParts__FileInfoExtension_QueryFor(const KParts__FileInfoExtension* self, int mode) {
    return new KFileItemList(self->queryFor(static_cast<KParts::FileInfoExtension::QueryMode>(mode)));
}

libqt_string KParts__FileInfoExtension_Tr2(const char* s, const char* c) {
    auto _ret = KParts::FileInfoExtension::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KParts__FileInfoExtension_Tr3(const char* s, const char* c, int n) {
    auto _ret = KParts::FileInfoExtension::tr(s, c, static_cast<int>(n));
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
QMetaObject* KParts__FileInfoExtension_SuperMetaObject(const KParts__FileInfoExtension* self) {
    return (QMetaObject*)self->KParts::FileInfoExtension::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnMetaObject(KParts__FileInfoExtension* self, intptr_t slot) {
    if (auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self)))
        vkpartsfileinfoextension->kparts__fileinfoextension_metaobject_callback = reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KParts__FileInfoExtension_SuperMetacast(KParts__FileInfoExtension* self, const char* param1) {
    return self->KParts::FileInfoExtension::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnMetacast(KParts__FileInfoExtension* self, intptr_t slot) {
    if (auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self))
        vkpartsfileinfoextension->kparts__fileinfoextension_metacast_callback = reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_Metacast_Callback>(slot);
}

// Base class handler implementation
int KParts__FileInfoExtension_SuperMetacall(KParts__FileInfoExtension* self, int param1, int param2, void** param3) {
    return self->KParts::FileInfoExtension::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnMetacall(KParts__FileInfoExtension* self, intptr_t slot) {
    if (auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self))
        vkpartsfileinfoextension->kparts__fileinfoextension_metacall_callback = reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KParts__FileInfoExtension_SuperHasSelection(const KParts__FileInfoExtension* self) {
    return self->KParts::FileInfoExtension::hasSelection();
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnHasSelection(KParts__FileInfoExtension* self, intptr_t slot) {
    if (auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self)))
        vkpartsfileinfoextension->kparts__fileinfoextension_hasselection_callback = reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_HasSelection_Callback>(slot);
}

// Base class handler implementation
int KParts__FileInfoExtension_SuperSupportedQueryModes(const KParts__FileInfoExtension* self) {
    return static_cast<int>(self->KParts::FileInfoExtension::supportedQueryModes());
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnSupportedQueryModes(KParts__FileInfoExtension* self, intptr_t slot) {
    if (auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self)))
        vkpartsfileinfoextension->kparts__fileinfoextension_supportedquerymodes_callback = reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_SupportedQueryModes_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnQueryFor(KParts__FileInfoExtension* self, intptr_t slot) {
    if (auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self)))
        vkpartsfileinfoextension->kparts__fileinfoextension_queryfor_callback = reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_QueryFor_Callback>(slot);
}

// Derived class handler implementation
bool KParts__FileInfoExtension_Event(KParts__FileInfoExtension* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KParts__FileInfoExtension_SuperEvent(KParts__FileInfoExtension* self, QEvent* event) {
    return self->KParts::FileInfoExtension::event(event);
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnEvent(KParts__FileInfoExtension* self, intptr_t slot) {
    if (auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self))
        vkpartsfileinfoextension->kparts__fileinfoextension_event_callback = reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_Event_Callback>(slot);
}

// Derived class handler implementation
bool KParts__FileInfoExtension_EventFilter(KParts__FileInfoExtension* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KParts__FileInfoExtension_SuperEventFilter(KParts__FileInfoExtension* self, QObject* watched, QEvent* event) {
    return self->KParts::FileInfoExtension::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnEventFilter(KParts__FileInfoExtension* self, intptr_t slot) {
    if (auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self))
        vkpartsfileinfoextension->kparts__fileinfoextension_eventfilter_callback = reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KParts__FileInfoExtension_TimerEvent(KParts__FileInfoExtension* self, QTimerEvent* event) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension) {
        vkpartsfileinfoextension->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::FileInfoExtension::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__FileInfoExtension_SuperTimerEvent(KParts__FileInfoExtension* self, QTimerEvent* event) {
    if (auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self)) {
        vkpartsfileinfoextension->KParts::FileInfoExtension::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::FileInfoExtension::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnTimerEvent(KParts__FileInfoExtension* self, intptr_t slot) {
    if (auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self))
        vkpartsfileinfoextension->kparts__fileinfoextension_timerevent_callback = reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__FileInfoExtension_ChildEvent(KParts__FileInfoExtension* self, QChildEvent* event) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension) {
        vkpartsfileinfoextension->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::FileInfoExtension::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__FileInfoExtension_SuperChildEvent(KParts__FileInfoExtension* self, QChildEvent* event) {
    if (auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self)) {
        vkpartsfileinfoextension->KParts::FileInfoExtension::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::FileInfoExtension::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnChildEvent(KParts__FileInfoExtension* self, intptr_t slot) {
    if (auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self))
        vkpartsfileinfoextension->kparts__fileinfoextension_childevent_callback = reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__FileInfoExtension_CustomEvent(KParts__FileInfoExtension* self, QEvent* event) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension) {
        vkpartsfileinfoextension->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::FileInfoExtension::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__FileInfoExtension_SuperCustomEvent(KParts__FileInfoExtension* self, QEvent* event) {
    if (auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self)) {
        vkpartsfileinfoextension->KParts::FileInfoExtension::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::FileInfoExtension::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnCustomEvent(KParts__FileInfoExtension* self, intptr_t slot) {
    if (auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self))
        vkpartsfileinfoextension->kparts__fileinfoextension_customevent_callback = reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__FileInfoExtension_ConnectNotify(KParts__FileInfoExtension* self, const QMetaMethod* signal) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension) {
        vkpartsfileinfoextension->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KParts::FileInfoExtension::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__FileInfoExtension_SuperConnectNotify(KParts__FileInfoExtension* self, const QMetaMethod* signal) {
    if (auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self)) {
        vkpartsfileinfoextension->KParts::FileInfoExtension::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KParts::FileInfoExtension::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnConnectNotify(KParts__FileInfoExtension* self, intptr_t slot) {
    if (auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self))
        vkpartsfileinfoextension->kparts__fileinfoextension_connectnotify_callback = reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KParts__FileInfoExtension_DisconnectNotify(KParts__FileInfoExtension* self, const QMetaMethod* signal) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension) {
        vkpartsfileinfoextension->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KParts::FileInfoExtension::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__FileInfoExtension_SuperDisconnectNotify(KParts__FileInfoExtension* self, const QMetaMethod* signal) {
    if (auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self)) {
        vkpartsfileinfoextension->KParts::FileInfoExtension::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KParts::FileInfoExtension::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnDisconnectNotify(KParts__FileInfoExtension* self, intptr_t slot) {
    if (auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self))
        vkpartsfileinfoextension->kparts__fileinfoextension_disconnectnotify_callback = reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KParts__FileInfoExtension_Sender(const KParts__FileInfoExtension* self) {
    if (auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self))) {
        return vkpartsfileinfoextension->VirtualKPartsFileInfoExtension::sender();
    } else
        qFatal("Error: Protected method KParts::FileInfoExtension::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KParts__FileInfoExtension_SenderSignalIndex(const KParts__FileInfoExtension* self) {
    if (auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self))) {
        return vkpartsfileinfoextension->VirtualKPartsFileInfoExtension::senderSignalIndex();
    } else
        qFatal("Error: Protected method KParts::FileInfoExtension::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KParts__FileInfoExtension_Receivers(const KParts__FileInfoExtension* self, const char* signal) {
    if (auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self))) {
        return vkpartsfileinfoextension->VirtualKPartsFileInfoExtension::receivers(signal);
    } else
        qFatal("Error: Protected method KParts::FileInfoExtension::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KParts__FileInfoExtension_IsSignalConnected(const KParts__FileInfoExtension* self, const QMetaMethod* signal) {
    if (auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self))) {
        return vkpartsfileinfoextension->VirtualKPartsFileInfoExtension::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KParts::FileInfoExtension::isSignalConnected called without a directly constructed type");
}

void KParts__FileInfoExtension_Delete(KParts__FileInfoExtension* self) {
    delete self;
}
