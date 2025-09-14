#include <KAbstractViewAdapter>
#include <QAbstractItemModel>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
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
    auto* vkabstractviewadapter = dynamic_cast<const VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        return vkabstractviewadapter->model();
    } else {
        return ((VirtualKAbstractViewAdapter*)self)->model();
    }
}

QSize* KAbstractViewAdapter_IconSize(const KAbstractViewAdapter* self) {
    auto* vkabstractviewadapter = dynamic_cast<const VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        return new QSize(vkabstractviewadapter->iconSize());
    } else {
        return new QSize(((VirtualKAbstractViewAdapter*)self)->iconSize());
    }
}

QPalette* KAbstractViewAdapter_Palette(const KAbstractViewAdapter* self) {
    auto* vkabstractviewadapter = dynamic_cast<const VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        return new QPalette(vkabstractviewadapter->palette());
    } else {
        return new QPalette(((VirtualKAbstractViewAdapter*)self)->palette());
    }
}

QRect* KAbstractViewAdapter_VisibleArea(const KAbstractViewAdapter* self) {
    auto* vkabstractviewadapter = dynamic_cast<const VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        return new QRect(vkabstractviewadapter->visibleArea());
    } else {
        return new QRect(((VirtualKAbstractViewAdapter*)self)->visibleArea());
    }
}

QRect* KAbstractViewAdapter_VisualRect(const KAbstractViewAdapter* self, const QModelIndex* index) {
    auto* vkabstractviewadapter = dynamic_cast<const VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        return new QRect(vkabstractviewadapter->visualRect(*index));
    } else {
        return new QRect(((VirtualKAbstractViewAdapter*)self)->visualRect(*index));
    }
}

void KAbstractViewAdapter_Connect(KAbstractViewAdapter* self, int signal, QObject* receiver, const char* slot) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->connect(static_cast<KAbstractViewAdapter::Signal>(signal), receiver, slot);
    } else {
        ((VirtualKAbstractViewAdapter*)self)->connect(static_cast<KAbstractViewAdapter::Signal>(signal), receiver, slot);
    }
}

// Base class handler implementation
QAbstractItemModel* KAbstractViewAdapter_QBaseModel(const KAbstractViewAdapter* self) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_Model_IsBase(true);
        return vkabstractviewadapter->model();
    } else {
        return ((VirtualKAbstractViewAdapter*)self)->model();
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnModel(const KAbstractViewAdapter* self, intptr_t slot) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_Model_Callback(reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_Model_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KAbstractViewAdapter_QBaseIconSize(const KAbstractViewAdapter* self) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_IconSize_IsBase(true);
        return new QSize(vkabstractviewadapter->iconSize());
    } else {
        return new QSize(((VirtualKAbstractViewAdapter*)self)->iconSize());
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnIconSize(const KAbstractViewAdapter* self, intptr_t slot) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_IconSize_Callback(reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_IconSize_Callback>(slot));
    }
}

// Base class handler implementation
QPalette* KAbstractViewAdapter_QBasePalette(const KAbstractViewAdapter* self) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_Palette_IsBase(true);
        return new QPalette(vkabstractviewadapter->palette());
    } else {
        return new QPalette(((VirtualKAbstractViewAdapter*)self)->palette());
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnPalette(const KAbstractViewAdapter* self, intptr_t slot) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_Palette_Callback(reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_Palette_Callback>(slot));
    }
}

// Base class handler implementation
QRect* KAbstractViewAdapter_QBaseVisibleArea(const KAbstractViewAdapter* self) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_VisibleArea_IsBase(true);
        return new QRect(vkabstractviewadapter->visibleArea());
    } else {
        return new QRect(((VirtualKAbstractViewAdapter*)self)->visibleArea());
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnVisibleArea(const KAbstractViewAdapter* self, intptr_t slot) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_VisibleArea_Callback(reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_VisibleArea_Callback>(slot));
    }
}

// Base class handler implementation
QRect* KAbstractViewAdapter_QBaseVisualRect(const KAbstractViewAdapter* self, const QModelIndex* index) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_VisualRect_IsBase(true);
        return new QRect(vkabstractviewadapter->visualRect(*index));
    } else {
        return new QRect(((VirtualKAbstractViewAdapter*)self)->visualRect(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnVisualRect(const KAbstractViewAdapter* self, intptr_t slot) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_VisualRect_Callback(reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_VisualRect_Callback>(slot));
    }
}

// Base class handler implementation
void KAbstractViewAdapter_QBaseConnect(KAbstractViewAdapter* self, int signal, QObject* receiver, const char* slot) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_Connect_IsBase(true);
        vkabstractviewadapter->connect(static_cast<KAbstractViewAdapter::Signal>(signal), receiver, slot);
    } else {
        ((VirtualKAbstractViewAdapter*)self)->connect(static_cast<KAbstractViewAdapter::Signal>(signal), receiver, slot);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnConnect(KAbstractViewAdapter* self, intptr_t slot) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_Connect_Callback(reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_Connect_Callback>(slot));
    }
}

// Derived class handler implementation
int KAbstractViewAdapter_Metacall(KAbstractViewAdapter* self, int param1, int param2, void** param3) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        return vkabstractviewadapter->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KAbstractViewAdapter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Base class handler implementation
int KAbstractViewAdapter_QBaseMetacall(KAbstractViewAdapter* self, int param1, int param2, void** param3) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_Metacall_IsBase(true);
        return vkabstractviewadapter->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KAbstractViewAdapter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnMetacall(KAbstractViewAdapter* self, intptr_t slot) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_Metacall_Callback(reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAbstractViewAdapter_Event(KAbstractViewAdapter* self, QEvent* event) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        return vkabstractviewadapter->event(event);
    } else {
        return self->KAbstractViewAdapter::event(event);
    }
}

// Base class handler implementation
bool KAbstractViewAdapter_QBaseEvent(KAbstractViewAdapter* self, QEvent* event) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_Event_IsBase(true);
        return vkabstractviewadapter->event(event);
    } else {
        return self->KAbstractViewAdapter::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnEvent(KAbstractViewAdapter* self, intptr_t slot) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_Event_Callback(reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAbstractViewAdapter_EventFilter(KAbstractViewAdapter* self, QObject* watched, QEvent* event) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        return vkabstractviewadapter->eventFilter(watched, event);
    } else {
        return self->KAbstractViewAdapter::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KAbstractViewAdapter_QBaseEventFilter(KAbstractViewAdapter* self, QObject* watched, QEvent* event) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_EventFilter_IsBase(true);
        return vkabstractviewadapter->eventFilter(watched, event);
    } else {
        return self->KAbstractViewAdapter::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnEventFilter(KAbstractViewAdapter* self, intptr_t slot) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_EventFilter_Callback(reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractViewAdapter_TimerEvent(KAbstractViewAdapter* self, QTimerEvent* event) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->timerEvent(event);
    } else {
        ((VirtualKAbstractViewAdapter*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KAbstractViewAdapter_QBaseTimerEvent(KAbstractViewAdapter* self, QTimerEvent* event) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_TimerEvent_IsBase(true);
        vkabstractviewadapter->timerEvent(event);
    } else {
        ((VirtualKAbstractViewAdapter*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnTimerEvent(KAbstractViewAdapter* self, intptr_t slot) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_TimerEvent_Callback(reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractViewAdapter_ChildEvent(KAbstractViewAdapter* self, QChildEvent* event) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->childEvent(event);
    } else {
        ((VirtualKAbstractViewAdapter*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KAbstractViewAdapter_QBaseChildEvent(KAbstractViewAdapter* self, QChildEvent* event) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_ChildEvent_IsBase(true);
        vkabstractviewadapter->childEvent(event);
    } else {
        ((VirtualKAbstractViewAdapter*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnChildEvent(KAbstractViewAdapter* self, intptr_t slot) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_ChildEvent_Callback(reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractViewAdapter_CustomEvent(KAbstractViewAdapter* self, QEvent* event) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->customEvent(event);
    } else {
        ((VirtualKAbstractViewAdapter*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KAbstractViewAdapter_QBaseCustomEvent(KAbstractViewAdapter* self, QEvent* event) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_CustomEvent_IsBase(true);
        vkabstractviewadapter->customEvent(event);
    } else {
        ((VirtualKAbstractViewAdapter*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnCustomEvent(KAbstractViewAdapter* self, intptr_t slot) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_CustomEvent_Callback(reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractViewAdapter_ConnectNotify(KAbstractViewAdapter* self, const QMetaMethod* signal) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->connectNotify(*signal);
    } else {
        ((VirtualKAbstractViewAdapter*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KAbstractViewAdapter_QBaseConnectNotify(KAbstractViewAdapter* self, const QMetaMethod* signal) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_ConnectNotify_IsBase(true);
        vkabstractviewadapter->connectNotify(*signal);
    } else {
        ((VirtualKAbstractViewAdapter*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnConnectNotify(KAbstractViewAdapter* self, intptr_t slot) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_ConnectNotify_Callback(reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractViewAdapter_DisconnectNotify(KAbstractViewAdapter* self, const QMetaMethod* signal) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->disconnectNotify(*signal);
    } else {
        ((VirtualKAbstractViewAdapter*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KAbstractViewAdapter_QBaseDisconnectNotify(KAbstractViewAdapter* self, const QMetaMethod* signal) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_DisconnectNotify_IsBase(true);
        vkabstractviewadapter->disconnectNotify(*signal);
    } else {
        ((VirtualKAbstractViewAdapter*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnDisconnectNotify(KAbstractViewAdapter* self, intptr_t slot) {
    auto* vkabstractviewadapter = dynamic_cast<VirtualKAbstractViewAdapter*>(self);
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_DisconnectNotify_Callback(reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KAbstractViewAdapter_Sender(const KAbstractViewAdapter* self) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        return vkabstractviewadapter->sender();
    } else {
        return ((VirtualKAbstractViewAdapter*)self)->sender();
    }
}

// Base class handler implementation
QObject* KAbstractViewAdapter_QBaseSender(const KAbstractViewAdapter* self) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_Sender_IsBase(true);
        return vkabstractviewadapter->sender();
    } else {
        return ((VirtualKAbstractViewAdapter*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnSender(const KAbstractViewAdapter* self, intptr_t slot) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_Sender_Callback(reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KAbstractViewAdapter_SenderSignalIndex(const KAbstractViewAdapter* self) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        return vkabstractviewadapter->senderSignalIndex();
    } else {
        return ((VirtualKAbstractViewAdapter*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KAbstractViewAdapter_QBaseSenderSignalIndex(const KAbstractViewAdapter* self) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_SenderSignalIndex_IsBase(true);
        return vkabstractviewadapter->senderSignalIndex();
    } else {
        return ((VirtualKAbstractViewAdapter*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnSenderSignalIndex(const KAbstractViewAdapter* self, intptr_t slot) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_SenderSignalIndex_Callback(reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KAbstractViewAdapter_Receivers(const KAbstractViewAdapter* self, const char* signal) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        return vkabstractviewadapter->receivers(signal);
    } else {
        return ((VirtualKAbstractViewAdapter*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KAbstractViewAdapter_QBaseReceivers(const KAbstractViewAdapter* self, const char* signal) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_Receivers_IsBase(true);
        return vkabstractviewadapter->receivers(signal);
    } else {
        return ((VirtualKAbstractViewAdapter*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnReceivers(const KAbstractViewAdapter* self, intptr_t slot) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_Receivers_Callback(reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAbstractViewAdapter_IsSignalConnected(const KAbstractViewAdapter* self, const QMetaMethod* signal) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        return vkabstractviewadapter->isSignalConnected(*signal);
    } else {
        return ((VirtualKAbstractViewAdapter*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KAbstractViewAdapter_QBaseIsSignalConnected(const KAbstractViewAdapter* self, const QMetaMethod* signal) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_IsSignalConnected_IsBase(true);
        return vkabstractviewadapter->isSignalConnected(*signal);
    } else {
        return ((VirtualKAbstractViewAdapter*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractViewAdapter_OnIsSignalConnected(const KAbstractViewAdapter* self, intptr_t slot) {
    auto* vkabstractviewadapter = const_cast<VirtualKAbstractViewAdapter*>(dynamic_cast<const VirtualKAbstractViewAdapter*>(self));
    if (vkabstractviewadapter && vkabstractviewadapter->isVirtualKAbstractViewAdapter) {
        vkabstractviewadapter->setKAbstractViewAdapter_IsSignalConnected_Callback(reinterpret_cast<VirtualKAbstractViewAdapter::KAbstractViewAdapter_IsSignalConnected_Callback>(slot));
    }
}

void KAbstractViewAdapter_Delete(KAbstractViewAdapter* self) {
    delete self;
}
