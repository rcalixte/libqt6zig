#include <QChildEvent>
#include <QDrag>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <kdragwidgetdecorator.h>
#include "libkdragwidgetdecorator.h"
#include "libkdragwidgetdecorator.hxx"

KDragWidgetDecoratorBase* KDragWidgetDecoratorBase_new(QWidget* parent) {
    return new VirtualKDragWidgetDecoratorBase(parent);
}

KDragWidgetDecoratorBase* KDragWidgetDecoratorBase_new2() {
    return new VirtualKDragWidgetDecoratorBase();
}

QMetaObject* KDragWidgetDecoratorBase_MetaObject(const KDragWidgetDecoratorBase* self) {
    return (QMetaObject*)self->metaObject();
}

void* KDragWidgetDecoratorBase_Metacast(KDragWidgetDecoratorBase* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KDragWidgetDecoratorBase_Metacall(KDragWidgetDecoratorBase* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KDragWidgetDecoratorBase_Tr(const char* s) {
    auto _ret = KDragWidgetDecoratorBase::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KDragWidgetDecoratorBase_SetDragEnabled(KDragWidgetDecoratorBase* self, bool enable) {
    self->setDragEnabled(enable);
}

bool KDragWidgetDecoratorBase_IsDragEnabled(const KDragWidgetDecoratorBase* self) {
    return self->isDragEnabled();
}

QDrag* KDragWidgetDecoratorBase_DragObject(KDragWidgetDecoratorBase* self) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase) {
        return vkdragwidgetdecoratorbase->dragObject();
    }
    qFatal("Error: Protected method KDragWidgetDecoratorBase::dragObject called without a directly constructed type");
}

bool KDragWidgetDecoratorBase_EventFilter(KDragWidgetDecoratorBase* self, QObject* watched, QEvent* event) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase) {
        return vkdragwidgetdecoratorbase->eventFilter(watched, event);
    }
    qFatal("Error: Protected method KDragWidgetDecoratorBase::eventFilter called without a directly constructed type");
}

void KDragWidgetDecoratorBase_StartDrag(KDragWidgetDecoratorBase* self) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase) {
        vkdragwidgetdecoratorbase->startDrag();
    }
}

libqt_string KDragWidgetDecoratorBase_Tr2(const char* s, const char* c) {
    auto _ret = KDragWidgetDecoratorBase::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDragWidgetDecoratorBase_Tr3(const char* s, const char* c, int n) {
    auto _ret = KDragWidgetDecoratorBase::tr(s, c, static_cast<int>(n));
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
QMetaObject* KDragWidgetDecoratorBase_SuperMetaObject(const KDragWidgetDecoratorBase* self) {
    return (QMetaObject*)self->KDragWidgetDecoratorBase::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnMetaObject(KDragWidgetDecoratorBase* self, intptr_t slot) {
    if (auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self)))
        vkdragwidgetdecoratorbase->kdragwidgetdecoratorbase_metaobject_callback = reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KDragWidgetDecoratorBase_SuperMetacast(KDragWidgetDecoratorBase* self, const char* param1) {
    return self->KDragWidgetDecoratorBase::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnMetacast(KDragWidgetDecoratorBase* self, intptr_t slot) {
    if (auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self))
        vkdragwidgetdecoratorbase->kdragwidgetdecoratorbase_metacast_callback = reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_Metacast_Callback>(slot);
}

// Base class handler implementation
int KDragWidgetDecoratorBase_SuperMetacall(KDragWidgetDecoratorBase* self, int param1, int param2, void** param3) {
    return self->KDragWidgetDecoratorBase::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnMetacall(KDragWidgetDecoratorBase* self, intptr_t slot) {
    if (auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self))
        vkdragwidgetdecoratorbase->kdragwidgetdecoratorbase_metacall_callback = reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_Metacall_Callback>(slot);
}

// Base class handler implementation
QDrag* KDragWidgetDecoratorBase_SuperDragObject(KDragWidgetDecoratorBase* self) {
    if (auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self)) {
        return vkdragwidgetdecoratorbase->KDragWidgetDecoratorBase::dragObject();
    } else
        qFatal("Error: Protected virtual method KDragWidgetDecoratorBase::dragObject called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnDragObject(KDragWidgetDecoratorBase* self, intptr_t slot) {
    if (auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self))
        vkdragwidgetdecoratorbase->kdragwidgetdecoratorbase_dragobject_callback = reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_DragObject_Callback>(slot);
}

// Base class handler implementation
bool KDragWidgetDecoratorBase_SuperEventFilter(KDragWidgetDecoratorBase* self, QObject* watched, QEvent* event) {
    if (auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self)) {
        return vkdragwidgetdecoratorbase->KDragWidgetDecoratorBase::eventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method KDragWidgetDecoratorBase::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnEventFilter(KDragWidgetDecoratorBase* self, intptr_t slot) {
    if (auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self))
        vkdragwidgetdecoratorbase->kdragwidgetdecoratorbase_eventfilter_callback = reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_EventFilter_Callback>(slot);
}

// Base class handler implementation
void KDragWidgetDecoratorBase_SuperStartDrag(KDragWidgetDecoratorBase* self) {
    if (auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self)) {
        vkdragwidgetdecoratorbase->KDragWidgetDecoratorBase::startDrag();
    } else
        qFatal("Error: Protected virtual method KDragWidgetDecoratorBase::startDrag called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnStartDrag(KDragWidgetDecoratorBase* self, intptr_t slot) {
    if (auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self))
        vkdragwidgetdecoratorbase->kdragwidgetdecoratorbase_startdrag_callback = reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_StartDrag_Callback>(slot);
}

// Derived class handler implementation
bool KDragWidgetDecoratorBase_Event(KDragWidgetDecoratorBase* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KDragWidgetDecoratorBase_SuperEvent(KDragWidgetDecoratorBase* self, QEvent* event) {
    return self->KDragWidgetDecoratorBase::event(event);
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnEvent(KDragWidgetDecoratorBase* self, intptr_t slot) {
    if (auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self))
        vkdragwidgetdecoratorbase->kdragwidgetdecoratorbase_event_callback = reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_Event_Callback>(slot);
}

// Derived class handler implementation
void KDragWidgetDecoratorBase_TimerEvent(KDragWidgetDecoratorBase* self, QTimerEvent* event) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase) {
        vkdragwidgetdecoratorbase->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDragWidgetDecoratorBase::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDragWidgetDecoratorBase_SuperTimerEvent(KDragWidgetDecoratorBase* self, QTimerEvent* event) {
    if (auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self)) {
        vkdragwidgetdecoratorbase->KDragWidgetDecoratorBase::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KDragWidgetDecoratorBase::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnTimerEvent(KDragWidgetDecoratorBase* self, intptr_t slot) {
    if (auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self))
        vkdragwidgetdecoratorbase->kdragwidgetdecoratorbase_timerevent_callback = reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KDragWidgetDecoratorBase_ChildEvent(KDragWidgetDecoratorBase* self, QChildEvent* event) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase) {
        vkdragwidgetdecoratorbase->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDragWidgetDecoratorBase::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDragWidgetDecoratorBase_SuperChildEvent(KDragWidgetDecoratorBase* self, QChildEvent* event) {
    if (auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self)) {
        vkdragwidgetdecoratorbase->KDragWidgetDecoratorBase::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KDragWidgetDecoratorBase::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnChildEvent(KDragWidgetDecoratorBase* self, intptr_t slot) {
    if (auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self))
        vkdragwidgetdecoratorbase->kdragwidgetdecoratorbase_childevent_callback = reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KDragWidgetDecoratorBase_CustomEvent(KDragWidgetDecoratorBase* self, QEvent* event) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase) {
        vkdragwidgetdecoratorbase->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDragWidgetDecoratorBase::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDragWidgetDecoratorBase_SuperCustomEvent(KDragWidgetDecoratorBase* self, QEvent* event) {
    if (auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self)) {
        vkdragwidgetdecoratorbase->KDragWidgetDecoratorBase::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KDragWidgetDecoratorBase::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnCustomEvent(KDragWidgetDecoratorBase* self, intptr_t slot) {
    if (auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self))
        vkdragwidgetdecoratorbase->kdragwidgetdecoratorbase_customevent_callback = reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KDragWidgetDecoratorBase_ConnectNotify(KDragWidgetDecoratorBase* self, const QMetaMethod* signal) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase) {
        vkdragwidgetdecoratorbase->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDragWidgetDecoratorBase::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDragWidgetDecoratorBase_SuperConnectNotify(KDragWidgetDecoratorBase* self, const QMetaMethod* signal) {
    if (auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self)) {
        vkdragwidgetdecoratorbase->KDragWidgetDecoratorBase::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDragWidgetDecoratorBase::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnConnectNotify(KDragWidgetDecoratorBase* self, intptr_t slot) {
    if (auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self))
        vkdragwidgetdecoratorbase->kdragwidgetdecoratorbase_connectnotify_callback = reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KDragWidgetDecoratorBase_DisconnectNotify(KDragWidgetDecoratorBase* self, const QMetaMethod* signal) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase) {
        vkdragwidgetdecoratorbase->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDragWidgetDecoratorBase::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDragWidgetDecoratorBase_SuperDisconnectNotify(KDragWidgetDecoratorBase* self, const QMetaMethod* signal) {
    if (auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self)) {
        vkdragwidgetdecoratorbase->KDragWidgetDecoratorBase::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDragWidgetDecoratorBase::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnDisconnectNotify(KDragWidgetDecoratorBase* self, intptr_t slot) {
    if (auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self))
        vkdragwidgetdecoratorbase->kdragwidgetdecoratorbase_disconnectnotify_callback = reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QWidget* KDragWidgetDecoratorBase_DecoratedWidget(const KDragWidgetDecoratorBase* self) {
    if (auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self))) {
        return vkdragwidgetdecoratorbase->VirtualKDragWidgetDecoratorBase::decoratedWidget();
    } else
        qFatal("Error: Protected method KDragWidgetDecoratorBase::decoratedWidget called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KDragWidgetDecoratorBase_Sender(const KDragWidgetDecoratorBase* self) {
    if (auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self))) {
        return vkdragwidgetdecoratorbase->VirtualKDragWidgetDecoratorBase::sender();
    } else
        qFatal("Error: Protected method KDragWidgetDecoratorBase::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KDragWidgetDecoratorBase_SenderSignalIndex(const KDragWidgetDecoratorBase* self) {
    if (auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self))) {
        return vkdragwidgetdecoratorbase->VirtualKDragWidgetDecoratorBase::senderSignalIndex();
    } else
        qFatal("Error: Protected method KDragWidgetDecoratorBase::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KDragWidgetDecoratorBase_Receivers(const KDragWidgetDecoratorBase* self, const char* signal) {
    if (auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self))) {
        return vkdragwidgetdecoratorbase->VirtualKDragWidgetDecoratorBase::receivers(signal);
    } else
        qFatal("Error: Protected method KDragWidgetDecoratorBase::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDragWidgetDecoratorBase_IsSignalConnected(const KDragWidgetDecoratorBase* self, const QMetaMethod* signal) {
    if (auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self))) {
        return vkdragwidgetdecoratorbase->VirtualKDragWidgetDecoratorBase::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KDragWidgetDecoratorBase::isSignalConnected called without a directly constructed type");
}

void KDragWidgetDecoratorBase_Delete(KDragWidgetDecoratorBase* self) {
    delete self;
}
