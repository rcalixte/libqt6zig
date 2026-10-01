#include <KLineEditUrlDropEventFilter>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KLineEditUrlDropEventFilter_Tr(const char* s) {
    auto _ret = KLineEditUrlDropEventFilter::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KLineEditUrlDropEventFilter_EventFilter(KLineEditUrlDropEventFilter* self, QObject* object, QEvent* event) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter) {
        return vklineediturldropeventfilter->eventFilter(object, event);
    }
    qFatal("Error: Protected method KLineEditUrlDropEventFilter::eventFilter called without a directly constructed type");
}

libqt_string KLineEditUrlDropEventFilter_Tr2(const char* s, const char* c) {
    auto _ret = KLineEditUrlDropEventFilter::tr(s, c);
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
    auto _ret = KLineEditUrlDropEventFilter::tr(s, c, static_cast<int>(n));
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
QMetaObject* KLineEditUrlDropEventFilter_SuperMetaObject(const KLineEditUrlDropEventFilter* self) {
    return (QMetaObject*)self->KLineEditUrlDropEventFilter::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnMetaObject(KLineEditUrlDropEventFilter* self, intptr_t slot) {
    if (auto* vklineediturldropeventfilter = const_cast<VirtualKLineEditUrlDropEventFilter*>(dynamic_cast<const VirtualKLineEditUrlDropEventFilter*>(self)))
        vklineediturldropeventfilter->klineediturldropeventfilter_metaobject_callback = reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KLineEditUrlDropEventFilter_SuperMetacast(KLineEditUrlDropEventFilter* self, const char* param1) {
    return self->KLineEditUrlDropEventFilter::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnMetacast(KLineEditUrlDropEventFilter* self, intptr_t slot) {
    if (auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self))
        vklineediturldropeventfilter->klineediturldropeventfilter_metacast_callback = reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_Metacast_Callback>(slot);
}

// Base class handler implementation
int KLineEditUrlDropEventFilter_SuperMetacall(KLineEditUrlDropEventFilter* self, int param1, int param2, void** param3) {
    return self->KLineEditUrlDropEventFilter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnMetacall(KLineEditUrlDropEventFilter* self, intptr_t slot) {
    if (auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self))
        vklineediturldropeventfilter->klineediturldropeventfilter_metacall_callback = reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KLineEditUrlDropEventFilter_SuperEventFilter(KLineEditUrlDropEventFilter* self, QObject* object, QEvent* event) {
    if (auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self)) {
        return vklineediturldropeventfilter->KLineEditUrlDropEventFilter::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method KLineEditUrlDropEventFilter::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnEventFilter(KLineEditUrlDropEventFilter* self, intptr_t slot) {
    if (auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self))
        vklineediturldropeventfilter->klineediturldropeventfilter_eventfilter_callback = reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool KLineEditUrlDropEventFilter_Event(KLineEditUrlDropEventFilter* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KLineEditUrlDropEventFilter_SuperEvent(KLineEditUrlDropEventFilter* self, QEvent* event) {
    return self->KLineEditUrlDropEventFilter::event(event);
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnEvent(KLineEditUrlDropEventFilter* self, intptr_t slot) {
    if (auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self))
        vklineediturldropeventfilter->klineediturldropeventfilter_event_callback = reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_Event_Callback>(slot);
}

// Derived class handler implementation
void KLineEditUrlDropEventFilter_TimerEvent(KLineEditUrlDropEventFilter* self, QTimerEvent* event) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter) {
        vklineediturldropeventfilter->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLineEditUrlDropEventFilter::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEditUrlDropEventFilter_SuperTimerEvent(KLineEditUrlDropEventFilter* self, QTimerEvent* event) {
    if (auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self)) {
        vklineediturldropeventfilter->KLineEditUrlDropEventFilter::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KLineEditUrlDropEventFilter::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnTimerEvent(KLineEditUrlDropEventFilter* self, intptr_t slot) {
    if (auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self))
        vklineediturldropeventfilter->klineediturldropeventfilter_timerevent_callback = reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEditUrlDropEventFilter_ChildEvent(KLineEditUrlDropEventFilter* self, QChildEvent* event) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter) {
        vklineediturldropeventfilter->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLineEditUrlDropEventFilter::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEditUrlDropEventFilter_SuperChildEvent(KLineEditUrlDropEventFilter* self, QChildEvent* event) {
    if (auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self)) {
        vklineediturldropeventfilter->KLineEditUrlDropEventFilter::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KLineEditUrlDropEventFilter::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnChildEvent(KLineEditUrlDropEventFilter* self, intptr_t slot) {
    if (auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self))
        vklineediturldropeventfilter->klineediturldropeventfilter_childevent_callback = reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEditUrlDropEventFilter_CustomEvent(KLineEditUrlDropEventFilter* self, QEvent* event) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter) {
        vklineediturldropeventfilter->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLineEditUrlDropEventFilter::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEditUrlDropEventFilter_SuperCustomEvent(KLineEditUrlDropEventFilter* self, QEvent* event) {
    if (auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self)) {
        vklineediturldropeventfilter->KLineEditUrlDropEventFilter::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KLineEditUrlDropEventFilter::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnCustomEvent(KLineEditUrlDropEventFilter* self, intptr_t slot) {
    if (auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self))
        vklineediturldropeventfilter->klineediturldropeventfilter_customevent_callback = reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEditUrlDropEventFilter_ConnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter) {
        vklineediturldropeventfilter->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KLineEditUrlDropEventFilter::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEditUrlDropEventFilter_SuperConnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal) {
    if (auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self)) {
        vklineediturldropeventfilter->KLineEditUrlDropEventFilter::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KLineEditUrlDropEventFilter::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnConnectNotify(KLineEditUrlDropEventFilter* self, intptr_t slot) {
    if (auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self))
        vklineediturldropeventfilter->klineediturldropeventfilter_connectnotify_callback = reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KLineEditUrlDropEventFilter_DisconnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal) {
    auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self);
    if (vklineediturldropeventfilter) {
        vklineediturldropeventfilter->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KLineEditUrlDropEventFilter::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEditUrlDropEventFilter_SuperDisconnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal) {
    if (auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self)) {
        vklineediturldropeventfilter->KLineEditUrlDropEventFilter::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KLineEditUrlDropEventFilter::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEditUrlDropEventFilter_OnDisconnectNotify(KLineEditUrlDropEventFilter* self, intptr_t slot) {
    if (auto* vklineediturldropeventfilter = dynamic_cast<VirtualKLineEditUrlDropEventFilter*>(self))
        vklineediturldropeventfilter->klineediturldropeventfilter_disconnectnotify_callback = reinterpret_cast<VirtualKLineEditUrlDropEventFilter::KLineEditUrlDropEventFilter_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KLineEditUrlDropEventFilter_Sender(const KLineEditUrlDropEventFilter* self) {
    if (auto* vklineediturldropeventfilter = const_cast<VirtualKLineEditUrlDropEventFilter*>(dynamic_cast<const VirtualKLineEditUrlDropEventFilter*>(self))) {
        return vklineediturldropeventfilter->VirtualKLineEditUrlDropEventFilter::sender();
    } else
        qFatal("Error: Protected method KLineEditUrlDropEventFilter::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KLineEditUrlDropEventFilter_SenderSignalIndex(const KLineEditUrlDropEventFilter* self) {
    if (auto* vklineediturldropeventfilter = const_cast<VirtualKLineEditUrlDropEventFilter*>(dynamic_cast<const VirtualKLineEditUrlDropEventFilter*>(self))) {
        return vklineediturldropeventfilter->VirtualKLineEditUrlDropEventFilter::senderSignalIndex();
    } else
        qFatal("Error: Protected method KLineEditUrlDropEventFilter::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KLineEditUrlDropEventFilter_Receivers(const KLineEditUrlDropEventFilter* self, const char* signal) {
    if (auto* vklineediturldropeventfilter = const_cast<VirtualKLineEditUrlDropEventFilter*>(dynamic_cast<const VirtualKLineEditUrlDropEventFilter*>(self))) {
        return vklineediturldropeventfilter->VirtualKLineEditUrlDropEventFilter::receivers(signal);
    } else
        qFatal("Error: Protected method KLineEditUrlDropEventFilter::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KLineEditUrlDropEventFilter_IsSignalConnected(const KLineEditUrlDropEventFilter* self, const QMetaMethod* signal) {
    if (auto* vklineediturldropeventfilter = const_cast<VirtualKLineEditUrlDropEventFilter*>(dynamic_cast<const VirtualKLineEditUrlDropEventFilter*>(self))) {
        return vklineediturldropeventfilter->VirtualKLineEditUrlDropEventFilter::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KLineEditUrlDropEventFilter::isSignalConnected called without a directly constructed type");
}

void KLineEditUrlDropEventFilter_Delete(KLineEditUrlDropEventFilter* self) {
    delete self;
}
