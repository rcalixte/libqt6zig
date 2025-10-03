#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__FileInfoExtension
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
    auto* vkparts__fileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkparts__fileinfoextension && vkparts__fileinfoextension->isVirtualKPartsFileInfoExtension) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPartsFileInfoExtension*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KParts__FileInfoExtension_Tr(const char* s) {
    QString _ret = KParts::FileInfoExtension::tr(s);
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
    auto* vkparts__fileinfoextension = dynamic_cast<const VirtualKPartsFileInfoExtension*>(self);
    if (vkparts__fileinfoextension && vkparts__fileinfoextension->isVirtualKPartsFileInfoExtension) {
        return self->hasSelection();
    } else {
        return ((VirtualKPartsFileInfoExtension*)self)->hasSelection();
    }
}

int KParts__FileInfoExtension_SupportedQueryModes(const KParts__FileInfoExtension* self) {
    auto* vkparts__fileinfoextension = dynamic_cast<const VirtualKPartsFileInfoExtension*>(self);
    if (vkparts__fileinfoextension && vkparts__fileinfoextension->isVirtualKPartsFileInfoExtension) {
        return static_cast<int>(self->supportedQueryModes());
    } else {
        return static_cast<int>(((VirtualKPartsFileInfoExtension*)self)->supportedQueryModes());
    }
}

KFileItemList* KParts__FileInfoExtension_QueryFor(const KParts__FileInfoExtension* self, int mode) {
    auto* vkparts__fileinfoextension = dynamic_cast<const VirtualKPartsFileInfoExtension*>(self);
    if (vkparts__fileinfoextension && vkparts__fileinfoextension->isVirtualKPartsFileInfoExtension) {
        return new KFileItemList(vkparts__fileinfoextension->queryFor(static_cast<KParts::FileInfoExtension::QueryMode>(mode)));
    } else {
        return new KFileItemList(((VirtualKPartsFileInfoExtension*)self)->queryFor(static_cast<KParts::FileInfoExtension::QueryMode>(mode)));
    }
}

libqt_string KParts__FileInfoExtension_Tr2(const char* s, const char* c) {
    QString _ret = KParts::FileInfoExtension::tr(s, c);
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
    QString _ret = KParts::FileInfoExtension::tr(s, c, static_cast<int>(n));
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
int KParts__FileInfoExtension_QBaseMetacall(KParts__FileInfoExtension* self, int param1, int param2, void** param3) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_Metacall_IsBase(true);
        return vkpartsfileinfoextension->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KParts::FileInfoExtension::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnMetacall(KParts__FileInfoExtension* self, intptr_t slot) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_Metacall_Callback(reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool KParts__FileInfoExtension_QBaseHasSelection(const KParts__FileInfoExtension* self) {
    auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self));
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_HasSelection_IsBase(true);
        return vkpartsfileinfoextension->hasSelection();
    } else {
        return self->KParts::FileInfoExtension::hasSelection();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnHasSelection(const KParts__FileInfoExtension* self, intptr_t slot) {
    auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self));
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_HasSelection_Callback(reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_HasSelection_Callback>(slot));
    }
}

// Base class handler implementation
int KParts__FileInfoExtension_QBaseSupportedQueryModes(const KParts__FileInfoExtension* self) {
    auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self));
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_SupportedQueryModes_IsBase(true);
        return static_cast<int>(vkpartsfileinfoextension->supportedQueryModes());
    } else {
        return static_cast<int>(self->KParts::FileInfoExtension::supportedQueryModes());
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnSupportedQueryModes(const KParts__FileInfoExtension* self, intptr_t slot) {
    auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self));
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_SupportedQueryModes_Callback(reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_SupportedQueryModes_Callback>(slot));
    }
}

// Base class handler implementation
KFileItemList* KParts__FileInfoExtension_QBaseQueryFor(const KParts__FileInfoExtension* self, int mode) {
    auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self));
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_QueryFor_IsBase(true);
        return new KFileItemList(vkpartsfileinfoextension->queryFor(static_cast<KParts::FileInfoExtension::QueryMode>(mode)));
    } else {
        return new KFileItemList(((VirtualKPartsFileInfoExtension*)self)->queryFor(static_cast<KParts::FileInfoExtension::QueryMode>(mode)));
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnQueryFor(const KParts__FileInfoExtension* self, intptr_t slot) {
    auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self));
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_QueryFor_Callback(reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_QueryFor_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__FileInfoExtension_Event(KParts__FileInfoExtension* self, QEvent* event) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        return vkpartsfileinfoextension->event(event);
    } else {
        return self->KParts::FileInfoExtension::event(event);
    }
}

// Base class handler implementation
bool KParts__FileInfoExtension_QBaseEvent(KParts__FileInfoExtension* self, QEvent* event) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_Event_IsBase(true);
        return vkpartsfileinfoextension->event(event);
    } else {
        return self->KParts::FileInfoExtension::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnEvent(KParts__FileInfoExtension* self, intptr_t slot) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_Event_Callback(reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__FileInfoExtension_EventFilter(KParts__FileInfoExtension* self, QObject* watched, QEvent* event) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        return vkpartsfileinfoextension->eventFilter(watched, event);
    } else {
        return self->KParts::FileInfoExtension::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KParts__FileInfoExtension_QBaseEventFilter(KParts__FileInfoExtension* self, QObject* watched, QEvent* event) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_EventFilter_IsBase(true);
        return vkpartsfileinfoextension->eventFilter(watched, event);
    } else {
        return self->KParts::FileInfoExtension::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnEventFilter(KParts__FileInfoExtension* self, intptr_t slot) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_EventFilter_Callback(reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__FileInfoExtension_TimerEvent(KParts__FileInfoExtension* self, QTimerEvent* event) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->timerEvent(event);
    } else {
        ((VirtualKPartsFileInfoExtension*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KParts__FileInfoExtension_QBaseTimerEvent(KParts__FileInfoExtension* self, QTimerEvent* event) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_TimerEvent_IsBase(true);
        vkpartsfileinfoextension->timerEvent(event);
    } else {
        ((VirtualKPartsFileInfoExtension*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnTimerEvent(KParts__FileInfoExtension* self, intptr_t slot) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_TimerEvent_Callback(reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__FileInfoExtension_ChildEvent(KParts__FileInfoExtension* self, QChildEvent* event) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->childEvent(event);
    } else {
        ((VirtualKPartsFileInfoExtension*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KParts__FileInfoExtension_QBaseChildEvent(KParts__FileInfoExtension* self, QChildEvent* event) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_ChildEvent_IsBase(true);
        vkpartsfileinfoextension->childEvent(event);
    } else {
        ((VirtualKPartsFileInfoExtension*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnChildEvent(KParts__FileInfoExtension* self, intptr_t slot) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_ChildEvent_Callback(reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__FileInfoExtension_CustomEvent(KParts__FileInfoExtension* self, QEvent* event) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->customEvent(event);
    } else {
        ((VirtualKPartsFileInfoExtension*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KParts__FileInfoExtension_QBaseCustomEvent(KParts__FileInfoExtension* self, QEvent* event) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_CustomEvent_IsBase(true);
        vkpartsfileinfoextension->customEvent(event);
    } else {
        ((VirtualKPartsFileInfoExtension*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnCustomEvent(KParts__FileInfoExtension* self, intptr_t slot) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_CustomEvent_Callback(reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__FileInfoExtension_ConnectNotify(KParts__FileInfoExtension* self, const QMetaMethod* signal) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->connectNotify(*signal);
    } else {
        ((VirtualKPartsFileInfoExtension*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__FileInfoExtension_QBaseConnectNotify(KParts__FileInfoExtension* self, const QMetaMethod* signal) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_ConnectNotify_IsBase(true);
        vkpartsfileinfoextension->connectNotify(*signal);
    } else {
        ((VirtualKPartsFileInfoExtension*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnConnectNotify(KParts__FileInfoExtension* self, intptr_t slot) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_ConnectNotify_Callback(reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__FileInfoExtension_DisconnectNotify(KParts__FileInfoExtension* self, const QMetaMethod* signal) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsFileInfoExtension*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__FileInfoExtension_QBaseDisconnectNotify(KParts__FileInfoExtension* self, const QMetaMethod* signal) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_DisconnectNotify_IsBase(true);
        vkpartsfileinfoextension->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsFileInfoExtension*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnDisconnectNotify(KParts__FileInfoExtension* self, intptr_t slot) {
    auto* vkpartsfileinfoextension = dynamic_cast<VirtualKPartsFileInfoExtension*>(self);
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_DisconnectNotify_Callback(reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KParts__FileInfoExtension_Sender(const KParts__FileInfoExtension* self) {
    auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self));
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        return vkpartsfileinfoextension->sender();
    } else {
        return ((VirtualKPartsFileInfoExtension*)self)->sender();
    }
}

// Base class handler implementation
QObject* KParts__FileInfoExtension_QBaseSender(const KParts__FileInfoExtension* self) {
    auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self));
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_Sender_IsBase(true);
        return vkpartsfileinfoextension->sender();
    } else {
        return ((VirtualKPartsFileInfoExtension*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnSender(const KParts__FileInfoExtension* self, intptr_t slot) {
    auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self));
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_Sender_Callback(reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__FileInfoExtension_SenderSignalIndex(const KParts__FileInfoExtension* self) {
    auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self));
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        return vkpartsfileinfoextension->senderSignalIndex();
    } else {
        return ((VirtualKPartsFileInfoExtension*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KParts__FileInfoExtension_QBaseSenderSignalIndex(const KParts__FileInfoExtension* self) {
    auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self));
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_SenderSignalIndex_IsBase(true);
        return vkpartsfileinfoextension->senderSignalIndex();
    } else {
        return ((VirtualKPartsFileInfoExtension*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnSenderSignalIndex(const KParts__FileInfoExtension* self, intptr_t slot) {
    auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self));
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__FileInfoExtension_Receivers(const KParts__FileInfoExtension* self, const char* signal) {
    auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self));
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        return vkpartsfileinfoextension->receivers(signal);
    } else {
        return ((VirtualKPartsFileInfoExtension*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KParts__FileInfoExtension_QBaseReceivers(const KParts__FileInfoExtension* self, const char* signal) {
    auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self));
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_Receivers_IsBase(true);
        return vkpartsfileinfoextension->receivers(signal);
    } else {
        return ((VirtualKPartsFileInfoExtension*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnReceivers(const KParts__FileInfoExtension* self, intptr_t slot) {
    auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self));
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_Receivers_Callback(reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__FileInfoExtension_IsSignalConnected(const KParts__FileInfoExtension* self, const QMetaMethod* signal) {
    auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self));
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        return vkpartsfileinfoextension->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsFileInfoExtension*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KParts__FileInfoExtension_QBaseIsSignalConnected(const KParts__FileInfoExtension* self, const QMetaMethod* signal) {
    auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self));
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_IsSignalConnected_IsBase(true);
        return vkpartsfileinfoextension->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsFileInfoExtension*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__FileInfoExtension_OnIsSignalConnected(const KParts__FileInfoExtension* self, intptr_t slot) {
    auto* vkpartsfileinfoextension = const_cast<VirtualKPartsFileInfoExtension*>(dynamic_cast<const VirtualKPartsFileInfoExtension*>(self));
    if (vkpartsfileinfoextension && vkpartsfileinfoextension->isVirtualKPartsFileInfoExtension) {
        vkpartsfileinfoextension->setKParts__FileInfoExtension_IsSignalConnected_Callback(reinterpret_cast<VirtualKPartsFileInfoExtension::KParts__FileInfoExtension_IsSignalConnected_Callback>(slot));
    }
}

void KParts__FileInfoExtension_Delete(KParts__FileInfoExtension* self) {
    delete self;
}
