#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ListingNotificationExtension
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <listingnotificationextension.h>
#include "liblistingnotificationextension.h"
#include "liblistingnotificationextension.hxx"

KParts__ListingNotificationExtension* KParts__ListingNotificationExtension_new(KParts__ReadOnlyPart* parent) {
    return new VirtualKPartsListingNotificationExtension(parent);
}

QMetaObject* KParts__ListingNotificationExtension_MetaObject(const KParts__ListingNotificationExtension* self) {
    return (QMetaObject*)self->metaObject();
}

void* KParts__ListingNotificationExtension_Metacast(KParts__ListingNotificationExtension* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KParts__ListingNotificationExtension_Metacall(KParts__ListingNotificationExtension* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KParts__ListingNotificationExtension_Tr(const char* s) {
    auto _ret = KParts::ListingNotificationExtension::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KParts__ListingNotificationExtension_SupportedNotificationEventTypes(const KParts__ListingNotificationExtension* self) {
    return static_cast<int>(self->supportedNotificationEventTypes());
}

KParts__ListingNotificationExtension* KParts__ListingNotificationExtension_ChildObject(QObject* obj) {
    return KParts::ListingNotificationExtension::childObject(obj);
}

void KParts__ListingNotificationExtension_ListingEvent(KParts__ListingNotificationExtension* self, int param1, const KFileItemList* param2) {
    self->listingEvent(static_cast<KParts::ListingNotificationExtension::NotificationEventType>(param1), *param2);
}

void KParts__ListingNotificationExtension_Connect_ListingEvent(KParts__ListingNotificationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__ListingNotificationExtension*, int, KFileItemList*) = reinterpret_cast<void (*)(KParts__ListingNotificationExtension*, int, KFileItemList*)>(slot);
    KParts::ListingNotificationExtension::connect(self,
                                                  static_cast<void (KParts::ListingNotificationExtension::*)(KParts::ListingNotificationExtension::NotificationEventType, const KFileItemList&)>(&KParts::ListingNotificationExtension::listingEvent),
                                                  [self, slotFunc](KParts::ListingNotificationExtension::NotificationEventType param1, const KFileItemList& param2) {
                                                      int sigval1 = static_cast<int>(param1);
                                                      const KFileItemList& param2_ret = param2;
                                                      // Cast returned reference into pointer
                                                      KFileItemList* sigval2 = const_cast<KFileItemList*>(&param2_ret);
                                                      slotFunc(self, sigval1, sigval2);
                                                  });
}

libqt_string KParts__ListingNotificationExtension_Tr2(const char* s, const char* c) {
    auto _ret = KParts::ListingNotificationExtension::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KParts__ListingNotificationExtension_Tr3(const char* s, const char* c, int n) {
    auto _ret = KParts::ListingNotificationExtension::tr(s, c, static_cast<int>(n));
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
QMetaObject* KParts__ListingNotificationExtension_SuperMetaObject(const KParts__ListingNotificationExtension* self) {
    return (QMetaObject*)self->KParts::ListingNotificationExtension::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnMetaObject(KParts__ListingNotificationExtension* self, intptr_t slot) {
    if (auto* vkpartslistingnotificationextension = const_cast<VirtualKPartsListingNotificationExtension*>(dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self)))
        vkpartslistingnotificationextension->kparts__listingnotificationextension_metaobject_callback = reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KParts__ListingNotificationExtension_SuperMetacast(KParts__ListingNotificationExtension* self, const char* param1) {
    return self->KParts::ListingNotificationExtension::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnMetacast(KParts__ListingNotificationExtension* self, intptr_t slot) {
    if (auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self))
        vkpartslistingnotificationextension->kparts__listingnotificationextension_metacast_callback = reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_Metacast_Callback>(slot);
}

// Base class handler implementation
int KParts__ListingNotificationExtension_SuperMetacall(KParts__ListingNotificationExtension* self, int param1, int param2, void** param3) {
    return self->KParts::ListingNotificationExtension::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnMetacall(KParts__ListingNotificationExtension* self, intptr_t slot) {
    if (auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self))
        vkpartslistingnotificationextension->kparts__listingnotificationextension_metacall_callback = reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_Metacall_Callback>(slot);
}

// Base class handler implementation
int KParts__ListingNotificationExtension_SuperSupportedNotificationEventTypes(const KParts__ListingNotificationExtension* self) {
    return static_cast<int>(self->KParts::ListingNotificationExtension::supportedNotificationEventTypes());
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnSupportedNotificationEventTypes(KParts__ListingNotificationExtension* self, intptr_t slot) {
    if (auto* vkpartslistingnotificationextension = const_cast<VirtualKPartsListingNotificationExtension*>(dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self)))
        vkpartslistingnotificationextension->kparts__listingnotificationextension_supportednotificationeventtypes_callback = reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_SupportedNotificationEventTypes_Callback>(slot);
}

// Derived class handler implementation
bool KParts__ListingNotificationExtension_Event(KParts__ListingNotificationExtension* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KParts__ListingNotificationExtension_SuperEvent(KParts__ListingNotificationExtension* self, QEvent* event) {
    return self->KParts::ListingNotificationExtension::event(event);
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnEvent(KParts__ListingNotificationExtension* self, intptr_t slot) {
    if (auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self))
        vkpartslistingnotificationextension->kparts__listingnotificationextension_event_callback = reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_Event_Callback>(slot);
}

// Derived class handler implementation
bool KParts__ListingNotificationExtension_EventFilter(KParts__ListingNotificationExtension* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KParts__ListingNotificationExtension_SuperEventFilter(KParts__ListingNotificationExtension* self, QObject* watched, QEvent* event) {
    return self->KParts::ListingNotificationExtension::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnEventFilter(KParts__ListingNotificationExtension* self, intptr_t slot) {
    if (auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self))
        vkpartslistingnotificationextension->kparts__listingnotificationextension_eventfilter_callback = reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KParts__ListingNotificationExtension_TimerEvent(KParts__ListingNotificationExtension* self, QTimerEvent* event) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension) {
        vkpartslistingnotificationextension->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::ListingNotificationExtension::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ListingNotificationExtension_SuperTimerEvent(KParts__ListingNotificationExtension* self, QTimerEvent* event) {
    if (auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self)) {
        vkpartslistingnotificationextension->KParts::ListingNotificationExtension::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::ListingNotificationExtension::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnTimerEvent(KParts__ListingNotificationExtension* self, intptr_t slot) {
    if (auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self))
        vkpartslistingnotificationextension->kparts__listingnotificationextension_timerevent_callback = reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__ListingNotificationExtension_ChildEvent(KParts__ListingNotificationExtension* self, QChildEvent* event) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension) {
        vkpartslistingnotificationextension->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::ListingNotificationExtension::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ListingNotificationExtension_SuperChildEvent(KParts__ListingNotificationExtension* self, QChildEvent* event) {
    if (auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self)) {
        vkpartslistingnotificationextension->KParts::ListingNotificationExtension::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::ListingNotificationExtension::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnChildEvent(KParts__ListingNotificationExtension* self, intptr_t slot) {
    if (auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self))
        vkpartslistingnotificationextension->kparts__listingnotificationextension_childevent_callback = reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__ListingNotificationExtension_CustomEvent(KParts__ListingNotificationExtension* self, QEvent* event) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension) {
        vkpartslistingnotificationextension->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::ListingNotificationExtension::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ListingNotificationExtension_SuperCustomEvent(KParts__ListingNotificationExtension* self, QEvent* event) {
    if (auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self)) {
        vkpartslistingnotificationextension->KParts::ListingNotificationExtension::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::ListingNotificationExtension::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnCustomEvent(KParts__ListingNotificationExtension* self, intptr_t slot) {
    if (auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self))
        vkpartslistingnotificationextension->kparts__listingnotificationextension_customevent_callback = reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__ListingNotificationExtension_ConnectNotify(KParts__ListingNotificationExtension* self, const QMetaMethod* signal) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension) {
        vkpartslistingnotificationextension->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KParts::ListingNotificationExtension::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ListingNotificationExtension_SuperConnectNotify(KParts__ListingNotificationExtension* self, const QMetaMethod* signal) {
    if (auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self)) {
        vkpartslistingnotificationextension->KParts::ListingNotificationExtension::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KParts::ListingNotificationExtension::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnConnectNotify(KParts__ListingNotificationExtension* self, intptr_t slot) {
    if (auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self))
        vkpartslistingnotificationextension->kparts__listingnotificationextension_connectnotify_callback = reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KParts__ListingNotificationExtension_DisconnectNotify(KParts__ListingNotificationExtension* self, const QMetaMethod* signal) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension) {
        vkpartslistingnotificationextension->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KParts::ListingNotificationExtension::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ListingNotificationExtension_SuperDisconnectNotify(KParts__ListingNotificationExtension* self, const QMetaMethod* signal) {
    if (auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self)) {
        vkpartslistingnotificationextension->KParts::ListingNotificationExtension::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KParts::ListingNotificationExtension::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnDisconnectNotify(KParts__ListingNotificationExtension* self, intptr_t slot) {
    if (auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self))
        vkpartslistingnotificationextension->kparts__listingnotificationextension_disconnectnotify_callback = reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KParts__ListingNotificationExtension_Sender(const KParts__ListingNotificationExtension* self) {
    if (auto* vkpartslistingnotificationextension = const_cast<VirtualKPartsListingNotificationExtension*>(dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self))) {
        return vkpartslistingnotificationextension->VirtualKPartsListingNotificationExtension::sender();
    } else
        qFatal("Error: Protected method KParts::ListingNotificationExtension::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KParts__ListingNotificationExtension_SenderSignalIndex(const KParts__ListingNotificationExtension* self) {
    if (auto* vkpartslistingnotificationextension = const_cast<VirtualKPartsListingNotificationExtension*>(dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self))) {
        return vkpartslistingnotificationextension->VirtualKPartsListingNotificationExtension::senderSignalIndex();
    } else
        qFatal("Error: Protected method KParts::ListingNotificationExtension::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KParts__ListingNotificationExtension_Receivers(const KParts__ListingNotificationExtension* self, const char* signal) {
    if (auto* vkpartslistingnotificationextension = const_cast<VirtualKPartsListingNotificationExtension*>(dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self))) {
        return vkpartslistingnotificationextension->VirtualKPartsListingNotificationExtension::receivers(signal);
    } else
        qFatal("Error: Protected method KParts::ListingNotificationExtension::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KParts__ListingNotificationExtension_IsSignalConnected(const KParts__ListingNotificationExtension* self, const QMetaMethod* signal) {
    if (auto* vkpartslistingnotificationextension = const_cast<VirtualKPartsListingNotificationExtension*>(dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self))) {
        return vkpartslistingnotificationextension->VirtualKPartsListingNotificationExtension::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KParts::ListingNotificationExtension::isSignalConnected called without a directly constructed type");
}

void KParts__ListingNotificationExtension_Delete(KParts__ListingNotificationExtension* self) {
    delete self;
}
