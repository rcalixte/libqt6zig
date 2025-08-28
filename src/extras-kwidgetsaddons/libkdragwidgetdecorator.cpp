#include <QChildEvent>
#include <QDrag>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKDragWidgetDecoratorBase*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KDragWidgetDecoratorBase_Tr(const char* s) {
    QString _ret = KDragWidgetDecoratorBase::tr(s);
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
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        return vkdragwidgetdecoratorbase->dragObject();
    }
    return {};
}

bool KDragWidgetDecoratorBase_EventFilter(KDragWidgetDecoratorBase* self, QObject* watched, QEvent* event) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        return vkdragwidgetdecoratorbase->eventFilter(watched, event);
    }
    return {};
}

void KDragWidgetDecoratorBase_StartDrag(KDragWidgetDecoratorBase* self) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->startDrag();
    }
}

libqt_string KDragWidgetDecoratorBase_Tr2(const char* s, const char* c) {
    QString _ret = KDragWidgetDecoratorBase::tr(s, c);
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
    QString _ret = KDragWidgetDecoratorBase::tr(s, c, static_cast<int>(n));
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
int KDragWidgetDecoratorBase_QBaseMetacall(KDragWidgetDecoratorBase* self, int param1, int param2, void** param3) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_Metacall_IsBase(true);
        return vkdragwidgetdecoratorbase->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KDragWidgetDecoratorBase::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnMetacall(KDragWidgetDecoratorBase* self, intptr_t slot) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_Metacall_Callback(reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QDrag* KDragWidgetDecoratorBase_QBaseDragObject(KDragWidgetDecoratorBase* self) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_DragObject_IsBase(true);
        return vkdragwidgetdecoratorbase->dragObject();
    } else {
        return ((VirtualKDragWidgetDecoratorBase*)self)->dragObject();
    }
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnDragObject(KDragWidgetDecoratorBase* self, intptr_t slot) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_DragObject_Callback(reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_DragObject_Callback>(slot));
    }
}

// Base class handler implementation
bool KDragWidgetDecoratorBase_QBaseEventFilter(KDragWidgetDecoratorBase* self, QObject* watched, QEvent* event) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_EventFilter_IsBase(true);
        return vkdragwidgetdecoratorbase->eventFilter(watched, event);
    } else {
        return ((VirtualKDragWidgetDecoratorBase*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnEventFilter(KDragWidgetDecoratorBase* self, intptr_t slot) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_EventFilter_Callback(reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_EventFilter_Callback>(slot));
    }
}

// Base class handler implementation
void KDragWidgetDecoratorBase_QBaseStartDrag(KDragWidgetDecoratorBase* self) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_StartDrag_IsBase(true);
        vkdragwidgetdecoratorbase->startDrag();
    } else {
        ((VirtualKDragWidgetDecoratorBase*)self)->startDrag();
    }
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnStartDrag(KDragWidgetDecoratorBase* self, intptr_t slot) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_StartDrag_Callback(reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_StartDrag_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDragWidgetDecoratorBase_Event(KDragWidgetDecoratorBase* self, QEvent* event) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        return vkdragwidgetdecoratorbase->event(event);
    } else {
        return self->KDragWidgetDecoratorBase::event(event);
    }
}

// Base class handler implementation
bool KDragWidgetDecoratorBase_QBaseEvent(KDragWidgetDecoratorBase* self, QEvent* event) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_Event_IsBase(true);
        return vkdragwidgetdecoratorbase->event(event);
    } else {
        return self->KDragWidgetDecoratorBase::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnEvent(KDragWidgetDecoratorBase* self, intptr_t slot) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_Event_Callback(reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KDragWidgetDecoratorBase_TimerEvent(KDragWidgetDecoratorBase* self, QTimerEvent* event) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->timerEvent(event);
    } else {
        ((VirtualKDragWidgetDecoratorBase*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KDragWidgetDecoratorBase_QBaseTimerEvent(KDragWidgetDecoratorBase* self, QTimerEvent* event) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_TimerEvent_IsBase(true);
        vkdragwidgetdecoratorbase->timerEvent(event);
    } else {
        ((VirtualKDragWidgetDecoratorBase*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnTimerEvent(KDragWidgetDecoratorBase* self, intptr_t slot) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_TimerEvent_Callback(reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDragWidgetDecoratorBase_ChildEvent(KDragWidgetDecoratorBase* self, QChildEvent* event) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->childEvent(event);
    } else {
        ((VirtualKDragWidgetDecoratorBase*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KDragWidgetDecoratorBase_QBaseChildEvent(KDragWidgetDecoratorBase* self, QChildEvent* event) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_ChildEvent_IsBase(true);
        vkdragwidgetdecoratorbase->childEvent(event);
    } else {
        ((VirtualKDragWidgetDecoratorBase*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnChildEvent(KDragWidgetDecoratorBase* self, intptr_t slot) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_ChildEvent_Callback(reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDragWidgetDecoratorBase_CustomEvent(KDragWidgetDecoratorBase* self, QEvent* event) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->customEvent(event);
    } else {
        ((VirtualKDragWidgetDecoratorBase*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KDragWidgetDecoratorBase_QBaseCustomEvent(KDragWidgetDecoratorBase* self, QEvent* event) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_CustomEvent_IsBase(true);
        vkdragwidgetdecoratorbase->customEvent(event);
    } else {
        ((VirtualKDragWidgetDecoratorBase*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnCustomEvent(KDragWidgetDecoratorBase* self, intptr_t slot) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_CustomEvent_Callback(reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDragWidgetDecoratorBase_ConnectNotify(KDragWidgetDecoratorBase* self, const QMetaMethod* signal) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->connectNotify(*signal);
    } else {
        ((VirtualKDragWidgetDecoratorBase*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KDragWidgetDecoratorBase_QBaseConnectNotify(KDragWidgetDecoratorBase* self, const QMetaMethod* signal) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_ConnectNotify_IsBase(true);
        vkdragwidgetdecoratorbase->connectNotify(*signal);
    } else {
        ((VirtualKDragWidgetDecoratorBase*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnConnectNotify(KDragWidgetDecoratorBase* self, intptr_t slot) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_ConnectNotify_Callback(reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KDragWidgetDecoratorBase_DisconnectNotify(KDragWidgetDecoratorBase* self, const QMetaMethod* signal) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->disconnectNotify(*signal);
    } else {
        ((VirtualKDragWidgetDecoratorBase*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KDragWidgetDecoratorBase_QBaseDisconnectNotify(KDragWidgetDecoratorBase* self, const QMetaMethod* signal) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_DisconnectNotify_IsBase(true);
        vkdragwidgetdecoratorbase->disconnectNotify(*signal);
    } else {
        ((VirtualKDragWidgetDecoratorBase*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnDisconnectNotify(KDragWidgetDecoratorBase* self, intptr_t slot) {
    auto* vkdragwidgetdecoratorbase = dynamic_cast<VirtualKDragWidgetDecoratorBase*>(self);
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_DisconnectNotify_Callback(reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* KDragWidgetDecoratorBase_DecoratedWidget(const KDragWidgetDecoratorBase* self) {
    auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self));
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        return vkdragwidgetdecoratorbase->decoratedWidget();
    } else {
        return ((VirtualKDragWidgetDecoratorBase*)self)->decoratedWidget();
    }
}

// Base class handler implementation
QWidget* KDragWidgetDecoratorBase_QBaseDecoratedWidget(const KDragWidgetDecoratorBase* self) {
    auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self));
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_DecoratedWidget_IsBase(true);
        return vkdragwidgetdecoratorbase->decoratedWidget();
    } else {
        return ((VirtualKDragWidgetDecoratorBase*)self)->decoratedWidget();
    }
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnDecoratedWidget(const KDragWidgetDecoratorBase* self, intptr_t slot) {
    auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self));
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_DecoratedWidget_Callback(reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_DecoratedWidget_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KDragWidgetDecoratorBase_Sender(const KDragWidgetDecoratorBase* self) {
    auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self));
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        return vkdragwidgetdecoratorbase->sender();
    } else {
        return ((VirtualKDragWidgetDecoratorBase*)self)->sender();
    }
}

// Base class handler implementation
QObject* KDragWidgetDecoratorBase_QBaseSender(const KDragWidgetDecoratorBase* self) {
    auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self));
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_Sender_IsBase(true);
        return vkdragwidgetdecoratorbase->sender();
    } else {
        return ((VirtualKDragWidgetDecoratorBase*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnSender(const KDragWidgetDecoratorBase* self, intptr_t slot) {
    auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self));
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_Sender_Callback(reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KDragWidgetDecoratorBase_SenderSignalIndex(const KDragWidgetDecoratorBase* self) {
    auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self));
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        return vkdragwidgetdecoratorbase->senderSignalIndex();
    } else {
        return ((VirtualKDragWidgetDecoratorBase*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KDragWidgetDecoratorBase_QBaseSenderSignalIndex(const KDragWidgetDecoratorBase* self) {
    auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self));
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_SenderSignalIndex_IsBase(true);
        return vkdragwidgetdecoratorbase->senderSignalIndex();
    } else {
        return ((VirtualKDragWidgetDecoratorBase*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnSenderSignalIndex(const KDragWidgetDecoratorBase* self, intptr_t slot) {
    auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self));
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_SenderSignalIndex_Callback(reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KDragWidgetDecoratorBase_Receivers(const KDragWidgetDecoratorBase* self, const char* signal) {
    auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self));
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        return vkdragwidgetdecoratorbase->receivers(signal);
    } else {
        return ((VirtualKDragWidgetDecoratorBase*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KDragWidgetDecoratorBase_QBaseReceivers(const KDragWidgetDecoratorBase* self, const char* signal) {
    auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self));
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_Receivers_IsBase(true);
        return vkdragwidgetdecoratorbase->receivers(signal);
    } else {
        return ((VirtualKDragWidgetDecoratorBase*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnReceivers(const KDragWidgetDecoratorBase* self, intptr_t slot) {
    auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self));
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_Receivers_Callback(reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDragWidgetDecoratorBase_IsSignalConnected(const KDragWidgetDecoratorBase* self, const QMetaMethod* signal) {
    auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self));
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        return vkdragwidgetdecoratorbase->isSignalConnected(*signal);
    } else {
        return ((VirtualKDragWidgetDecoratorBase*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KDragWidgetDecoratorBase_QBaseIsSignalConnected(const KDragWidgetDecoratorBase* self, const QMetaMethod* signal) {
    auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self));
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_IsSignalConnected_IsBase(true);
        return vkdragwidgetdecoratorbase->isSignalConnected(*signal);
    } else {
        return ((VirtualKDragWidgetDecoratorBase*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDragWidgetDecoratorBase_OnIsSignalConnected(const KDragWidgetDecoratorBase* self, intptr_t slot) {
    auto* vkdragwidgetdecoratorbase = const_cast<VirtualKDragWidgetDecoratorBase*>(dynamic_cast<const VirtualKDragWidgetDecoratorBase*>(self));
    if (vkdragwidgetdecoratorbase && vkdragwidgetdecoratorbase->isVirtualKDragWidgetDecoratorBase) {
        vkdragwidgetdecoratorbase->setKDragWidgetDecoratorBase_IsSignalConnected_Callback(reinterpret_cast<VirtualKDragWidgetDecoratorBase::KDragWidgetDecoratorBase_IsSignalConnected_Callback>(slot));
    }
}

void KDragWidgetDecoratorBase_Delete(KDragWidgetDecoratorBase* self) {
    delete self;
}
