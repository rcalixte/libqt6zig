#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ListingNotificationExtension
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vkparts__listingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkparts__listingnotificationextension && vkparts__listingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPartsListingNotificationExtension*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KParts__ListingNotificationExtension_Tr(const char* s) {
    QString _ret = KParts::ListingNotificationExtension::tr(s);
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
    auto* vkparts__listingnotificationextension = dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self);
    if (vkparts__listingnotificationextension && vkparts__listingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        return static_cast<int>(self->supportedNotificationEventTypes());
    } else {
        return static_cast<int>(((VirtualKPartsListingNotificationExtension*)self)->supportedNotificationEventTypes());
    }
}

KParts__ListingNotificationExtension* KParts__ListingNotificationExtension_ChildObject(QObject* obj) {
    return KParts::ListingNotificationExtension::childObject(obj);
}

void KParts__ListingNotificationExtension_ListingEvent(KParts__ListingNotificationExtension* self, int param1, const KFileItemList* param2) {
    self->listingEvent(static_cast<KParts::ListingNotificationExtension::NotificationEventType>(param1), *param2);
}

void KParts__ListingNotificationExtension_Connect_ListingEvent(KParts__ListingNotificationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__ListingNotificationExtension*, int, KFileItemList*) = reinterpret_cast<void (*)(KParts__ListingNotificationExtension*, int, KFileItemList*)>(slot);
    KParts::ListingNotificationExtension::connect(self, &KParts::ListingNotificationExtension::listingEvent, [self, slotFunc](KParts::ListingNotificationExtension::NotificationEventType param1, const KFileItemList& param2) {
        int sigval1 = static_cast<int>(param1);
        const KFileItemList& param2_ret = param2;
        // Cast returned reference into pointer
        KFileItemList* sigval2 = const_cast<KFileItemList*>(&param2_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string KParts__ListingNotificationExtension_Tr2(const char* s, const char* c) {
    QString _ret = KParts::ListingNotificationExtension::tr(s, c);
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
    QString _ret = KParts::ListingNotificationExtension::tr(s, c, static_cast<int>(n));
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
int KParts__ListingNotificationExtension_QBaseMetacall(KParts__ListingNotificationExtension* self, int param1, int param2, void** param3) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_Metacall_IsBase(true);
        return vkpartslistingnotificationextension->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KParts::ListingNotificationExtension::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnMetacall(KParts__ListingNotificationExtension* self, intptr_t slot) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_Metacall_Callback(reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int KParts__ListingNotificationExtension_QBaseSupportedNotificationEventTypes(const KParts__ListingNotificationExtension* self) {
    auto* vkpartslistingnotificationextension = const_cast<VirtualKPartsListingNotificationExtension*>(dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self));
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_SupportedNotificationEventTypes_IsBase(true);
        return static_cast<int>(vkpartslistingnotificationextension->supportedNotificationEventTypes());
    } else {
        return static_cast<int>(self->KParts::ListingNotificationExtension::supportedNotificationEventTypes());
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnSupportedNotificationEventTypes(const KParts__ListingNotificationExtension* self, intptr_t slot) {
    auto* vkpartslistingnotificationextension = const_cast<VirtualKPartsListingNotificationExtension*>(dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self));
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_SupportedNotificationEventTypes_Callback(reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_SupportedNotificationEventTypes_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__ListingNotificationExtension_Event(KParts__ListingNotificationExtension* self, QEvent* event) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        return vkpartslistingnotificationextension->event(event);
    } else {
        return self->KParts::ListingNotificationExtension::event(event);
    }
}

// Base class handler implementation
bool KParts__ListingNotificationExtension_QBaseEvent(KParts__ListingNotificationExtension* self, QEvent* event) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_Event_IsBase(true);
        return vkpartslistingnotificationextension->event(event);
    } else {
        return self->KParts::ListingNotificationExtension::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnEvent(KParts__ListingNotificationExtension* self, intptr_t slot) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_Event_Callback(reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__ListingNotificationExtension_EventFilter(KParts__ListingNotificationExtension* self, QObject* watched, QEvent* event) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        return vkpartslistingnotificationextension->eventFilter(watched, event);
    } else {
        return self->KParts::ListingNotificationExtension::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KParts__ListingNotificationExtension_QBaseEventFilter(KParts__ListingNotificationExtension* self, QObject* watched, QEvent* event) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_EventFilter_IsBase(true);
        return vkpartslistingnotificationextension->eventFilter(watched, event);
    } else {
        return self->KParts::ListingNotificationExtension::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnEventFilter(KParts__ListingNotificationExtension* self, intptr_t slot) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_EventFilter_Callback(reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ListingNotificationExtension_TimerEvent(KParts__ListingNotificationExtension* self, QTimerEvent* event) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->timerEvent(event);
    } else {
        ((VirtualKPartsListingNotificationExtension*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KParts__ListingNotificationExtension_QBaseTimerEvent(KParts__ListingNotificationExtension* self, QTimerEvent* event) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_TimerEvent_IsBase(true);
        vkpartslistingnotificationextension->timerEvent(event);
    } else {
        ((VirtualKPartsListingNotificationExtension*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnTimerEvent(KParts__ListingNotificationExtension* self, intptr_t slot) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_TimerEvent_Callback(reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ListingNotificationExtension_ChildEvent(KParts__ListingNotificationExtension* self, QChildEvent* event) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->childEvent(event);
    } else {
        ((VirtualKPartsListingNotificationExtension*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KParts__ListingNotificationExtension_QBaseChildEvent(KParts__ListingNotificationExtension* self, QChildEvent* event) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_ChildEvent_IsBase(true);
        vkpartslistingnotificationextension->childEvent(event);
    } else {
        ((VirtualKPartsListingNotificationExtension*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnChildEvent(KParts__ListingNotificationExtension* self, intptr_t slot) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_ChildEvent_Callback(reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ListingNotificationExtension_CustomEvent(KParts__ListingNotificationExtension* self, QEvent* event) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->customEvent(event);
    } else {
        ((VirtualKPartsListingNotificationExtension*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KParts__ListingNotificationExtension_QBaseCustomEvent(KParts__ListingNotificationExtension* self, QEvent* event) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_CustomEvent_IsBase(true);
        vkpartslistingnotificationextension->customEvent(event);
    } else {
        ((VirtualKPartsListingNotificationExtension*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnCustomEvent(KParts__ListingNotificationExtension* self, intptr_t slot) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_CustomEvent_Callback(reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ListingNotificationExtension_ConnectNotify(KParts__ListingNotificationExtension* self, const QMetaMethod* signal) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->connectNotify(*signal);
    } else {
        ((VirtualKPartsListingNotificationExtension*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__ListingNotificationExtension_QBaseConnectNotify(KParts__ListingNotificationExtension* self, const QMetaMethod* signal) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_ConnectNotify_IsBase(true);
        vkpartslistingnotificationextension->connectNotify(*signal);
    } else {
        ((VirtualKPartsListingNotificationExtension*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnConnectNotify(KParts__ListingNotificationExtension* self, intptr_t slot) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_ConnectNotify_Callback(reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ListingNotificationExtension_DisconnectNotify(KParts__ListingNotificationExtension* self, const QMetaMethod* signal) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsListingNotificationExtension*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__ListingNotificationExtension_QBaseDisconnectNotify(KParts__ListingNotificationExtension* self, const QMetaMethod* signal) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_DisconnectNotify_IsBase(true);
        vkpartslistingnotificationextension->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsListingNotificationExtension*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnDisconnectNotify(KParts__ListingNotificationExtension* self, intptr_t slot) {
    auto* vkpartslistingnotificationextension = dynamic_cast<VirtualKPartsListingNotificationExtension*>(self);
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_DisconnectNotify_Callback(reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KParts__ListingNotificationExtension_Sender(const KParts__ListingNotificationExtension* self) {
    auto* vkpartslistingnotificationextension = const_cast<VirtualKPartsListingNotificationExtension*>(dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self));
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        return vkpartslistingnotificationextension->sender();
    } else {
        return ((VirtualKPartsListingNotificationExtension*)self)->sender();
    }
}

// Base class handler implementation
QObject* KParts__ListingNotificationExtension_QBaseSender(const KParts__ListingNotificationExtension* self) {
    auto* vkpartslistingnotificationextension = const_cast<VirtualKPartsListingNotificationExtension*>(dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self));
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_Sender_IsBase(true);
        return vkpartslistingnotificationextension->sender();
    } else {
        return ((VirtualKPartsListingNotificationExtension*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnSender(const KParts__ListingNotificationExtension* self, intptr_t slot) {
    auto* vkpartslistingnotificationextension = const_cast<VirtualKPartsListingNotificationExtension*>(dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self));
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_Sender_Callback(reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__ListingNotificationExtension_SenderSignalIndex(const KParts__ListingNotificationExtension* self) {
    auto* vkpartslistingnotificationextension = const_cast<VirtualKPartsListingNotificationExtension*>(dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self));
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        return vkpartslistingnotificationextension->senderSignalIndex();
    } else {
        return ((VirtualKPartsListingNotificationExtension*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KParts__ListingNotificationExtension_QBaseSenderSignalIndex(const KParts__ListingNotificationExtension* self) {
    auto* vkpartslistingnotificationextension = const_cast<VirtualKPartsListingNotificationExtension*>(dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self));
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_SenderSignalIndex_IsBase(true);
        return vkpartslistingnotificationextension->senderSignalIndex();
    } else {
        return ((VirtualKPartsListingNotificationExtension*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnSenderSignalIndex(const KParts__ListingNotificationExtension* self, intptr_t slot) {
    auto* vkpartslistingnotificationextension = const_cast<VirtualKPartsListingNotificationExtension*>(dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self));
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__ListingNotificationExtension_Receivers(const KParts__ListingNotificationExtension* self, const char* signal) {
    auto* vkpartslistingnotificationextension = const_cast<VirtualKPartsListingNotificationExtension*>(dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self));
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        return vkpartslistingnotificationextension->receivers(signal);
    } else {
        return ((VirtualKPartsListingNotificationExtension*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KParts__ListingNotificationExtension_QBaseReceivers(const KParts__ListingNotificationExtension* self, const char* signal) {
    auto* vkpartslistingnotificationextension = const_cast<VirtualKPartsListingNotificationExtension*>(dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self));
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_Receivers_IsBase(true);
        return vkpartslistingnotificationextension->receivers(signal);
    } else {
        return ((VirtualKPartsListingNotificationExtension*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnReceivers(const KParts__ListingNotificationExtension* self, intptr_t slot) {
    auto* vkpartslistingnotificationextension = const_cast<VirtualKPartsListingNotificationExtension*>(dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self));
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_Receivers_Callback(reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__ListingNotificationExtension_IsSignalConnected(const KParts__ListingNotificationExtension* self, const QMetaMethod* signal) {
    auto* vkpartslistingnotificationextension = const_cast<VirtualKPartsListingNotificationExtension*>(dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self));
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        return vkpartslistingnotificationextension->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsListingNotificationExtension*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KParts__ListingNotificationExtension_QBaseIsSignalConnected(const KParts__ListingNotificationExtension* self, const QMetaMethod* signal) {
    auto* vkpartslistingnotificationextension = const_cast<VirtualKPartsListingNotificationExtension*>(dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self));
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_IsSignalConnected_IsBase(true);
        return vkpartslistingnotificationextension->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsListingNotificationExtension*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingNotificationExtension_OnIsSignalConnected(const KParts__ListingNotificationExtension* self, intptr_t slot) {
    auto* vkpartslistingnotificationextension = const_cast<VirtualKPartsListingNotificationExtension*>(dynamic_cast<const VirtualKPartsListingNotificationExtension*>(self));
    if (vkpartslistingnotificationextension && vkpartslistingnotificationextension->isVirtualKPartsListingNotificationExtension) {
        vkpartslistingnotificationextension->setKParts__ListingNotificationExtension_IsSignalConnected_Callback(reinterpret_cast<VirtualKPartsListingNotificationExtension::KParts__ListingNotificationExtension_IsSignalConnected_Callback>(slot));
    }
}

void KParts__ListingNotificationExtension_Delete(KParts__ListingNotificationExtension* self) {
    delete self;
}
