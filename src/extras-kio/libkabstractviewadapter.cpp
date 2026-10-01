#include <KAbstractViewAdapter>
#include <QAbstractItemModel>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QPalette>
#include <QRect>
#include <QSize>
#include <QTimerEvent>
#include <kabstractviewadapter.h>
#include "libkabstractviewadapter.h"
#include "libkabstractviewadapter.hxx"

KAbstractViewAdapter* KAbstractViewAdapter_new(QObject* parent) {
    return new VirtualKAbstractViewAdapter(parent);
}

QAbstractItemModel* KAbstractViewAdapter_Model(const KAbstractViewAdapter* self) {
    return self->model();
}

QSize* KAbstractViewAdapter_IconSize(const KAbstractViewAdapter* self) {
    return new QSize(self->iconSize());
}

QPalette* KAbstractViewAdapter_Palette(const KAbstractViewAdapter* self) {
    return new QPalette(self->palette());
}

QRect* KAbstractViewAdapter_VisibleArea(const KAbstractViewAdapter* self) {
    return new QRect(self->visibleArea());
}

QRect* KAbstractViewAdapter_VisualRect(const KAbstractViewAdapter* self, const QModelIndex* index) {
    return new QRect(self->visualRect(*index));
}

void KAbstractViewAdapter_Connect(KAbstractViewAdapter* self, int signal, QObject* receiver, const char* slot) {
    self->connect(static_cast<KAbstractViewAdapter::Signal>(signal), receiver, slot);
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnModel(KAbstractViewAdapter* self, intptr_t slot) {
    if (auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self)))
        vkabstractviewadapter->kabstractviewadapter_model_callback = reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_Model_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnIconSize(KAbstractViewAdapter* self, intptr_t slot) {
    if (auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self)))
        vkabstractviewadapter->kabstractviewadapter_iconsize_callback = reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_IconSize_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnPalette(KAbstractViewAdapter* self, intptr_t slot) {
    if (auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self)))
        vkabstractviewadapter->kabstractviewadapter_palette_callback = reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_Palette_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnVisibleArea(KAbstractViewAdapter* self, intptr_t slot) {
    if (auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self)))
        vkabstractviewadapter->kabstractviewadapter_visiblearea_callback = reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_VisibleArea_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnVisualRect(KAbstractViewAdapter* self, intptr_t slot) {
    if (auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self)))
        vkabstractviewadapter->kabstractviewadapter_visualrect_callback = reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_VisualRect_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnConnect(KAbstractViewAdapter* self, intptr_t slot) {
    if (auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self))
        vkabstractviewadapter->kabstractviewadapter_connect_callback = reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_Connect_Callback>(slot);
}

// Derived class handler implementation
QMetaObject* KAbstractViewAdapter_MetaObject(const KAbstractViewAdapter* self) {
    return (QMetaObject*)self->metaObject();
}

// Base class handler implementation
QMetaObject* KAbstractViewAdapter_SuperMetaObject(const KAbstractViewAdapter* self) {
    return (QMetaObject*)self->KAbstractViewAdapter::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnMetaObject(KAbstractViewAdapter* self, intptr_t slot) {
    if (auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self)))
        vkabstractviewadapter->kabstractviewadapter_metaobject_callback = reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_MetaObject_Callback>(slot);
}

// Derived class handler implementation
void* KAbstractViewAdapter_Metacast(KAbstractViewAdapter* self, const char* param1) {
    return self->qt_metacast(param1);
}

// Base class handler implementation
void* KAbstractViewAdapter_SuperMetacast(KAbstractViewAdapter* self, const char* param1) {
    return self->KAbstractViewAdapter::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnMetacast(KAbstractViewAdapter* self, intptr_t slot) {
    if (auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self))
        vkabstractviewadapter->kabstractviewadapter_metacast_callback = reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_Metacast_Callback>(slot);
}

// Derived class handler implementation
int KAbstractViewAdapter_Metacall(KAbstractViewAdapter* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Base class handler implementation
int KAbstractViewAdapter_SuperMetacall(KAbstractViewAdapter* self, int param1, int param2, void** param3) {
    return self->KAbstractViewAdapter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnMetacall(KAbstractViewAdapter* self, intptr_t slot) {
    if (auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self))
        vkabstractviewadapter->kabstractviewadapter_metacall_callback = reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KAbstractViewAdapter_Event(KAbstractViewAdapter* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KAbstractViewAdapter_SuperEvent(KAbstractViewAdapter* self, QEvent* event) {
    return self->KAbstractViewAdapter::event(event);
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnEvent(KAbstractViewAdapter* self, intptr_t slot) {
    if (auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self))
        vkabstractviewadapter->kabstractviewadapter_event_callback = reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_Event_Callback>(slot);
}

// Derived class handler implementation
bool KAbstractViewAdapter_EventFilter(KAbstractViewAdapter* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KAbstractViewAdapter_SuperEventFilter(KAbstractViewAdapter* self, QObject* watched, QEvent* event) {
    return self->KAbstractViewAdapter::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnEventFilter(KAbstractViewAdapter* self, intptr_t slot) {
    if (auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self))
        vkabstractviewadapter->kabstractviewadapter_eventfilter_callback = reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KAbstractViewAdapter_TimerEvent(KAbstractViewAdapter* self, QTimerEvent* event) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter) {
        vkabstractviewadapter->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAbstractViewAdapter::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAbstractViewAdapter_SuperTimerEvent(KAbstractViewAdapter* self, QTimerEvent* event) {
    if (auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self)) {
        vkabstractviewadapter->KAbstractViewAdapter::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KAbstractViewAdapter::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnTimerEvent(KAbstractViewAdapter* self, intptr_t slot) {
    if (auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self))
        vkabstractviewadapter->kabstractviewadapter_timerevent_callback = reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KAbstractViewAdapter_ChildEvent(KAbstractViewAdapter* self, QChildEvent* event) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter) {
        vkabstractviewadapter->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAbstractViewAdapter::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAbstractViewAdapter_SuperChildEvent(KAbstractViewAdapter* self, QChildEvent* event) {
    if (auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self)) {
        vkabstractviewadapter->KAbstractViewAdapter::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KAbstractViewAdapter::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnChildEvent(KAbstractViewAdapter* self, intptr_t slot) {
    if (auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self))
        vkabstractviewadapter->kabstractviewadapter_childevent_callback = reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KAbstractViewAdapter_CustomEvent(KAbstractViewAdapter* self, QEvent* event) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter) {
        vkabstractviewadapter->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAbstractViewAdapter::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAbstractViewAdapter_SuperCustomEvent(KAbstractViewAdapter* self, QEvent* event) {
    if (auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self)) {
        vkabstractviewadapter->KAbstractViewAdapter::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KAbstractViewAdapter::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnCustomEvent(KAbstractViewAdapter* self, intptr_t slot) {
    if (auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self))
        vkabstractviewadapter->kabstractviewadapter_customevent_callback = reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KAbstractViewAdapter_ConnectNotify(KAbstractViewAdapter* self, const QMetaMethod* signal) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter) {
        vkabstractviewadapter->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KAbstractViewAdapter::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KAbstractViewAdapter_SuperConnectNotify(KAbstractViewAdapter* self, const QMetaMethod* signal) {
    if (auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self)) {
        vkabstractviewadapter->KAbstractViewAdapter::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KAbstractViewAdapter::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnConnectNotify(KAbstractViewAdapter* self, intptr_t slot) {
    if (auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self))
        vkabstractviewadapter->kabstractviewadapter_connectnotify_callback = reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KAbstractViewAdapter_DisconnectNotify(KAbstractViewAdapter* self, const QMetaMethod* signal) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter) {
        vkabstractviewadapter->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KAbstractViewAdapter::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KAbstractViewAdapter_SuperDisconnectNotify(KAbstractViewAdapter* self, const QMetaMethod* signal) {
    if (auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self)) {
        vkabstractviewadapter->KAbstractViewAdapter::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KAbstractViewAdapter::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnDisconnectNotify(KAbstractViewAdapter* self, intptr_t slot) {
    if (auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self))
        vkabstractviewadapter->kabstractviewadapter_disconnectnotify_callback = reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KAbstractViewAdapter_Sender(const KAbstractViewAdapter* self) {
    if (auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self))) {
        return vkabstractviewadapter->VirtualKAbstractViewAdapter::sender();
    } else
        qFatal("Error: Protected method KAbstractViewAdapter::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KAbstractViewAdapter_SenderSignalIndex(const KAbstractViewAdapter* self) {
    if (auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self))) {
        return vkabstractviewadapter->VirtualKAbstractViewAdapter::senderSignalIndex();
    } else
        qFatal("Error: Protected method KAbstractViewAdapter::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KAbstractViewAdapter_Receivers(const KAbstractViewAdapter* self, const char* signal) {
    if (auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self))) {
        return vkabstractviewadapter->VirtualKAbstractViewAdapter::receivers(signal);
    } else
        qFatal("Error: Protected method KAbstractViewAdapter::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KAbstractViewAdapter_IsSignalConnected(const KAbstractViewAdapter* self, const QMetaMethod* signal) {
    if (auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self))) {
        return vkabstractviewadapter->VirtualKAbstractViewAdapter::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KAbstractViewAdapter::isSignalConnected called without a directly constructed type");
}

void KAbstractViewAdapter_Delete(KAbstractViewAdapter* self) {
    delete self;
}
