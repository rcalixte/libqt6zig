#include <KLineEditUrlDropEventFilter>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <klineediturldropeventfilter.h>
#include "libklineediturldropeventfilter.h"
#include "libklineediturldropeventfilter.hxx"

KLineEditUrlDropEventFilter* KLineEditUrlDropEventFilter_new() {
    return new VirtualKLineEditUrlDropEventFilter();
}

KLineEditUrlDropEventFilter* KLineEditUrlDropEventFilter_new2(QObject* parent) {
    return new VirtualKLineEditUrlDropEventFilter(parent);
}

QMetaObject* KLineEditUrlDropEventFilter_MetaObject(const KLineEditUrlDropEventFilter* self) {
    return (QMetaObject*)self->metaObject();
}

void* KLineEditUrlDropEventFilter_Metacast(KLineEditUrlDropEventFilter* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KLineEditUrlDropEventFilter_Metacall(KLineEditUrlDropEventFilter* self, int param1, int param2, void** param3) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKLineEditUrlDropEventFilter*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KLineEditUrlDropEventFilter_OnMetacall(KLineEditUrlDropEventFilter* self, intptr_t slot) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_Metacall_Callback(reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KLineEditUrlDropEventFilter_QBaseMetacall(KLineEditUrlDropEventFilter* self, int param1, int param2, void** param3) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_Metacall_IsBase(true);
        return vklineediturldropeventfilter->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKLineEditUrlDropEventFilter*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KLineEditUrlDropEventFilter_Tr(const char* s) {
    QString _ret = KLineEditUrlDropEventFilter::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLineEditUrlDropEventFilter_Tr2(const char* s, const char* c) {
    QString _ret = KLineEditUrlDropEventFilter::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLineEditUrlDropEventFilter_Tr3(const char* s, const char* c, int n) {
    QString _ret = KLineEditUrlDropEventFilter::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool KLineEditUrlDropEventFilter_EventFilter(KLineEditUrlDropEventFilter* self, QObject* object, QEvent* event) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        return vklineediturldropeventfilter->eventFilter(object, event);
    } else {
        return ((VirtualKLineEditUrlDropEventFilter*)self)->eventFilter(object, event);
    }
}

// Base class handler implementation
bool KLineEditUrlDropEventFilter_QBaseEventFilter(KLineEditUrlDropEventFilter* self, QObject* object, QEvent* event) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_EventFilter_IsBase(true);
        return vklineediturldropeventfilter->eventFilter(object, event);
    } else {
        return ((VirtualKLineEditUrlDropEventFilter*)self)->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnEventFilter(KLineEditUrlDropEventFilter* self, intptr_t slot) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_EventFilter_Callback(reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLineEditUrlDropEventFilter_Event(KLineEditUrlDropEventFilter* self, QEvent* event) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        return vklineediturldropeventfilter->event(event);
    } else {
        return self->KLineEditUrlDropEventFilter::event(event);
    }
}

// Base class handler implementation
bool KLineEditUrlDropEventFilter_QBaseEvent(KLineEditUrlDropEventFilter* self, QEvent* event) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_Event_IsBase(true);
        return vklineediturldropeventfilter->event(event);
    } else {
        return self->KLineEditUrlDropEventFilter::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnEvent(KLineEditUrlDropEventFilter* self, intptr_t slot) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_Event_Callback(reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEditUrlDropEventFilter_TimerEvent(KLineEditUrlDropEventFilter* self, QTimerEvent* event) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->timerEvent(event);
    } else {
        ((VirtualKLineEditUrlDropEventFilter*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KLineEditUrlDropEventFilter_QBaseTimerEvent(KLineEditUrlDropEventFilter* self, QTimerEvent* event) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_TimerEvent_IsBase(true);
        vklineediturldropeventfilter->timerEvent(event);
    } else {
        ((VirtualKLineEditUrlDropEventFilter*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnTimerEvent(KLineEditUrlDropEventFilter* self, intptr_t slot) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_TimerEvent_Callback(reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEditUrlDropEventFilter_ChildEvent(KLineEditUrlDropEventFilter* self, QChildEvent* event) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->childEvent(event);
    } else {
        ((VirtualKLineEditUrlDropEventFilter*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KLineEditUrlDropEventFilter_QBaseChildEvent(KLineEditUrlDropEventFilter* self, QChildEvent* event) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_ChildEvent_IsBase(true);
        vklineediturldropeventfilter->childEvent(event);
    } else {
        ((VirtualKLineEditUrlDropEventFilter*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnChildEvent(KLineEditUrlDropEventFilter* self, intptr_t slot) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_ChildEvent_Callback(reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEditUrlDropEventFilter_CustomEvent(KLineEditUrlDropEventFilter* self, QEvent* event) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->customEvent(event);
    } else {
        ((VirtualKLineEditUrlDropEventFilter*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KLineEditUrlDropEventFilter_QBaseCustomEvent(KLineEditUrlDropEventFilter* self, QEvent* event) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_CustomEvent_IsBase(true);
        vklineediturldropeventfilter->customEvent(event);
    } else {
        ((VirtualKLineEditUrlDropEventFilter*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnCustomEvent(KLineEditUrlDropEventFilter* self, intptr_t slot) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_CustomEvent_Callback(reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEditUrlDropEventFilter_ConnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->connectNotify(*signal);
    } else {
        ((VirtualKLineEditUrlDropEventFilter*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KLineEditUrlDropEventFilter_QBaseConnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_ConnectNotify_IsBase(true);
        vklineediturldropeventfilter->connectNotify(*signal);
    } else {
        ((VirtualKLineEditUrlDropEventFilter*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnConnectNotify(KLineEditUrlDropEventFilter* self, intptr_t slot) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_ConnectNotify_Callback(reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEditUrlDropEventFilter_DisconnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->disconnectNotify(*signal);
    } else {
        ((VirtualKLineEditUrlDropEventFilter*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KLineEditUrlDropEventFilter_QBaseDisconnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_DisconnectNotify_IsBase(true);
        vklineediturldropeventfilter->disconnectNotify(*signal);
    } else {
        ((VirtualKLineEditUrlDropEventFilter*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnDisconnectNotify(KLineEditUrlDropEventFilter* self, intptr_t slot) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_DisconnectNotify_Callback(reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KLineEditUrlDropEventFilter_Sender(const KLineEditUrlDropEventFilter* self) {
    auto* vklineediturldropeventfilter = const_cast<VirtualKLineEditUrlDropEventFilter*>(dynamic_cast<const VirtualKLineEditUrlDropEventFilter*>(self));
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        return vklineediturldropeventfilter->sender();
    } else {
        return ((VirtualKLineEditUrlDropEventFilter*)self)->sender();
    }
}

// Base class handler implementation
QObject* KLineEditUrlDropEventFilter_QBaseSender(const KLineEditUrlDropEventFilter* self) {
    auto* vklineediturldropeventfilter = const_cast<VirtualKLineEditUrlDropEventFilter*>(dynamic_cast<const VirtualKLineEditUrlDropEventFilter*>(self));
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_Sender_IsBase(true);
        return vklineediturldropeventfilter->sender();
    } else {
        return ((VirtualKLineEditUrlDropEventFilter*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnSender(const KLineEditUrlDropEventFilter* self, intptr_t slot) {
    auto* vklineediturldropeventfilter = const_cast<VirtualKLineEditUrlDropEventFilter*>(dynamic_cast<const VirtualKLineEditUrlDropEventFilter*>(self));
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_Sender_Callback(reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KLineEditUrlDropEventFilter_SenderSignalIndex(const KLineEditUrlDropEventFilter* self) {
    auto* vklineediturldropeventfilter = const_cast<VirtualKLineEditUrlDropEventFilter*>(dynamic_cast<const VirtualKLineEditUrlDropEventFilter*>(self));
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        return vklineediturldropeventfilter->senderSignalIndex();
    } else {
        return ((VirtualKLineEditUrlDropEventFilter*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KLineEditUrlDropEventFilter_QBaseSenderSignalIndex(const KLineEditUrlDropEventFilter* self) {
    auto* vklineediturldropeventfilter = const_cast<VirtualKLineEditUrlDropEventFilter*>(dynamic_cast<const VirtualKLineEditUrlDropEventFilter*>(self));
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_SenderSignalIndex_IsBase(true);
        return vklineediturldropeventfilter->senderSignalIndex();
    } else {
        return ((VirtualKLineEditUrlDropEventFilter*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnSenderSignalIndex(const KLineEditUrlDropEventFilter* self, intptr_t slot) {
    auto* vklineediturldropeventfilter = const_cast<VirtualKLineEditUrlDropEventFilter*>(dynamic_cast<const VirtualKLineEditUrlDropEventFilter*>(self));
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_SenderSignalIndex_Callback(reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KLineEditUrlDropEventFilter_Receivers(const KLineEditUrlDropEventFilter* self, const char* signal) {
    auto* vklineediturldropeventfilter = const_cast<VirtualKLineEditUrlDropEventFilter*>(dynamic_cast<const VirtualKLineEditUrlDropEventFilter*>(self));
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        return vklineediturldropeventfilter->receivers(signal);
    } else {
        return ((VirtualKLineEditUrlDropEventFilter*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KLineEditUrlDropEventFilter_QBaseReceivers(const KLineEditUrlDropEventFilter* self, const char* signal) {
    auto* vklineediturldropeventfilter = const_cast<VirtualKLineEditUrlDropEventFilter*>(dynamic_cast<const VirtualKLineEditUrlDropEventFilter*>(self));
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_Receivers_IsBase(true);
        return vklineediturldropeventfilter->receivers(signal);
    } else {
        return ((VirtualKLineEditUrlDropEventFilter*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnReceivers(const KLineEditUrlDropEventFilter* self, intptr_t slot) {
    auto* vklineediturldropeventfilter = const_cast<VirtualKLineEditUrlDropEventFilter*>(dynamic_cast<const VirtualKLineEditUrlDropEventFilter*>(self));
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_Receivers_Callback(reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLineEditUrlDropEventFilter_IsSignalConnected(const KLineEditUrlDropEventFilter* self, const QMetaMethod* signal) {
    auto* vklineediturldropeventfilter = const_cast<VirtualKLineEditUrlDropEventFilter*>(dynamic_cast<const VirtualKLineEditUrlDropEventFilter*>(self));
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        return vklineediturldropeventfilter->isSignalConnected(*signal);
    } else {
        return ((VirtualKLineEditUrlDropEventFilter*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KLineEditUrlDropEventFilter_QBaseIsSignalConnected(const KLineEditUrlDropEventFilter* self, const QMetaMethod* signal) {
    auto* vklineediturldropeventfilter = const_cast<VirtualKLineEditUrlDropEventFilter*>(dynamic_cast<const VirtualKLineEditUrlDropEventFilter*>(self));
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_IsSignalConnected_IsBase(true);
        return vklineediturldropeventfilter->isSignalConnected(*signal);
    } else {
        return ((VirtualKLineEditUrlDropEventFilter*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnIsSignalConnected(const KLineEditUrlDropEventFilter* self, intptr_t slot) {
    auto* vklineediturldropeventfilter = const_cast<VirtualKLineEditUrlDropEventFilter*>(dynamic_cast<const VirtualKLineEditUrlDropEventFilter*>(self));
    if (vklineediturldropeventfilter && vklineediturldropeventfilter->isVirtualKLineEditUrlDropEventFilter) {
        vklineediturldropeventfilter->setKLineEditUrlDropEventFilter_IsSignalConnected_Callback(reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_IsSignalConnected_Callback>(slot));
    }
}

void KLineEditUrlDropEventFilter_Delete(KLineEditUrlDropEventFilter* self) {
    delete self;
}
