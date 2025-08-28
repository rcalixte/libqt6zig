#include <KViewStateMaintainerBase>
#include <QAbstractItemView>
#include <QChildEvent>
#include <QEvent>
#include <QItemSelectionModel>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <kviewstatemaintainerbase.h>
#include "libkviewstatemaintainerbase.h"
#include "libkviewstatemaintainerbase.hxx"

KViewStateMaintainerBase* KViewStateMaintainerBase_new() {
    return new VirtualKViewStateMaintainerBase();
}

KViewStateMaintainerBase* KViewStateMaintainerBase_new2(QObject* parent) {
    return new VirtualKViewStateMaintainerBase(parent);
}

QMetaObject* KViewStateMaintainerBase_MetaObject(const KViewStateMaintainerBase* self) {
    return (QMetaObject*)self->metaObject();
}

void* KViewStateMaintainerBase_Metacast(KViewStateMaintainerBase* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KViewStateMaintainerBase_Metacall(KViewStateMaintainerBase* self, int param1, int param2, void** param3) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKViewStateMaintainerBase*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KViewStateMaintainerBase_OnMetacall(KViewStateMaintainerBase* self, intptr_t slot) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_Metacall_Callback(reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KViewStateMaintainerBase_QBaseMetacall(KViewStateMaintainerBase* self, int param1, int param2, void** param3) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_Metacall_IsBase(true);
        return vkviewstatemaintainerbase->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKViewStateMaintainerBase*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KViewStateMaintainerBase_Tr(const char* s) {
    QString _ret = KViewStateMaintainerBase::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KViewStateMaintainerBase_SetSelectionModel(KViewStateMaintainerBase* self, QItemSelectionModel* selectionModel) {
    self->setSelectionModel(selectionModel);
}

QItemSelectionModel* KViewStateMaintainerBase_SelectionModel(const KViewStateMaintainerBase* self) {
    return self->selectionModel();
}

void KViewStateMaintainerBase_SetView(KViewStateMaintainerBase* self, QAbstractItemView* view) {
    self->setView(view);
}

QAbstractItemView* KViewStateMaintainerBase_View(const KViewStateMaintainerBase* self) {
    return self->view();
}

void KViewStateMaintainerBase_SaveState(KViewStateMaintainerBase* self) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->saveState();
    } else {
        ((VirtualKViewStateMaintainerBase*)self)->saveState();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KViewStateMaintainerBase_OnSaveState(KViewStateMaintainerBase* self, intptr_t slot) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_SaveState_Callback(reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_SaveState_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KViewStateMaintainerBase_QBaseSaveState(KViewStateMaintainerBase* self) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_SaveState_IsBase(true);
        vkviewstatemaintainerbase->saveState();
    } else {
        ((VirtualKViewStateMaintainerBase*)self)->saveState();
    }
}

void KViewStateMaintainerBase_RestoreState(KViewStateMaintainerBase* self) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->restoreState();
    } else {
        ((VirtualKViewStateMaintainerBase*)self)->restoreState();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KViewStateMaintainerBase_OnRestoreState(KViewStateMaintainerBase* self, intptr_t slot) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_RestoreState_Callback(reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_RestoreState_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KViewStateMaintainerBase_QBaseRestoreState(KViewStateMaintainerBase* self) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_RestoreState_IsBase(true);
        vkviewstatemaintainerbase->restoreState();
    } else {
        ((VirtualKViewStateMaintainerBase*)self)->restoreState();
    }
}

libqt_string KViewStateMaintainerBase_Tr2(const char* s, const char* c) {
    QString _ret = KViewStateMaintainerBase::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KViewStateMaintainerBase_Tr3(const char* s, const char* c, int n) {
    QString _ret = KViewStateMaintainerBase::tr(s, c, static_cast<int>(n));
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
bool KViewStateMaintainerBase_Event(KViewStateMaintainerBase* self, QEvent* event) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        return vkviewstatemaintainerbase->event(event);
    } else {
        return self->KViewStateMaintainerBase::event(event);
    }
}

// Base class handler implementation
bool KViewStateMaintainerBase_QBaseEvent(KViewStateMaintainerBase* self, QEvent* event) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_Event_IsBase(true);
        return vkviewstatemaintainerbase->event(event);
    } else {
        return self->KViewStateMaintainerBase::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnEvent(KViewStateMaintainerBase* self, intptr_t slot) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_Event_Callback(reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KViewStateMaintainerBase_EventFilter(KViewStateMaintainerBase* self, QObject* watched, QEvent* event) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        return vkviewstatemaintainerbase->eventFilter(watched, event);
    } else {
        return self->KViewStateMaintainerBase::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KViewStateMaintainerBase_QBaseEventFilter(KViewStateMaintainerBase* self, QObject* watched, QEvent* event) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_EventFilter_IsBase(true);
        return vkviewstatemaintainerbase->eventFilter(watched, event);
    } else {
        return self->KViewStateMaintainerBase::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnEventFilter(KViewStateMaintainerBase* self, intptr_t slot) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_EventFilter_Callback(reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KViewStateMaintainerBase_TimerEvent(KViewStateMaintainerBase* self, QTimerEvent* event) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->timerEvent(event);
    } else {
        ((VirtualKViewStateMaintainerBase*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KViewStateMaintainerBase_QBaseTimerEvent(KViewStateMaintainerBase* self, QTimerEvent* event) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_TimerEvent_IsBase(true);
        vkviewstatemaintainerbase->timerEvent(event);
    } else {
        ((VirtualKViewStateMaintainerBase*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnTimerEvent(KViewStateMaintainerBase* self, intptr_t slot) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_TimerEvent_Callback(reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KViewStateMaintainerBase_ChildEvent(KViewStateMaintainerBase* self, QChildEvent* event) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->childEvent(event);
    } else {
        ((VirtualKViewStateMaintainerBase*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KViewStateMaintainerBase_QBaseChildEvent(KViewStateMaintainerBase* self, QChildEvent* event) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_ChildEvent_IsBase(true);
        vkviewstatemaintainerbase->childEvent(event);
    } else {
        ((VirtualKViewStateMaintainerBase*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnChildEvent(KViewStateMaintainerBase* self, intptr_t slot) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_ChildEvent_Callback(reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KViewStateMaintainerBase_CustomEvent(KViewStateMaintainerBase* self, QEvent* event) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->customEvent(event);
    } else {
        ((VirtualKViewStateMaintainerBase*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KViewStateMaintainerBase_QBaseCustomEvent(KViewStateMaintainerBase* self, QEvent* event) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_CustomEvent_IsBase(true);
        vkviewstatemaintainerbase->customEvent(event);
    } else {
        ((VirtualKViewStateMaintainerBase*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnCustomEvent(KViewStateMaintainerBase* self, intptr_t slot) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_CustomEvent_Callback(reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KViewStateMaintainerBase_ConnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->connectNotify(*signal);
    } else {
        ((VirtualKViewStateMaintainerBase*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KViewStateMaintainerBase_QBaseConnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_ConnectNotify_IsBase(true);
        vkviewstatemaintainerbase->connectNotify(*signal);
    } else {
        ((VirtualKViewStateMaintainerBase*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnConnectNotify(KViewStateMaintainerBase* self, intptr_t slot) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_ConnectNotify_Callback(reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KViewStateMaintainerBase_DisconnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->disconnectNotify(*signal);
    } else {
        ((VirtualKViewStateMaintainerBase*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KViewStateMaintainerBase_QBaseDisconnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_DisconnectNotify_IsBase(true);
        vkviewstatemaintainerbase->disconnectNotify(*signal);
    } else {
        ((VirtualKViewStateMaintainerBase*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnDisconnectNotify(KViewStateMaintainerBase* self, intptr_t slot) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_DisconnectNotify_Callback(reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KViewStateMaintainerBase_Sender(const KViewStateMaintainerBase* self) {
    auto* vkviewstatemaintainerbase = const_cast<VirtualKViewStateMaintainerBase*>(dynamic_cast<const VirtualKViewStateMaintainerBase*>(self));
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        return vkviewstatemaintainerbase->sender();
    } else {
        return ((VirtualKViewStateMaintainerBase*)self)->sender();
    }
}

// Base class handler implementation
QObject* KViewStateMaintainerBase_QBaseSender(const KViewStateMaintainerBase* self) {
    auto* vkviewstatemaintainerbase = const_cast<VirtualKViewStateMaintainerBase*>(dynamic_cast<const VirtualKViewStateMaintainerBase*>(self));
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_Sender_IsBase(true);
        return vkviewstatemaintainerbase->sender();
    } else {
        return ((VirtualKViewStateMaintainerBase*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnSender(const KViewStateMaintainerBase* self, intptr_t slot) {
    auto* vkviewstatemaintainerbase = const_cast<VirtualKViewStateMaintainerBase*>(dynamic_cast<const VirtualKViewStateMaintainerBase*>(self));
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_Sender_Callback(reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KViewStateMaintainerBase_SenderSignalIndex(const KViewStateMaintainerBase* self) {
    auto* vkviewstatemaintainerbase = const_cast<VirtualKViewStateMaintainerBase*>(dynamic_cast<const VirtualKViewStateMaintainerBase*>(self));
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        return vkviewstatemaintainerbase->senderSignalIndex();
    } else {
        return ((VirtualKViewStateMaintainerBase*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KViewStateMaintainerBase_QBaseSenderSignalIndex(const KViewStateMaintainerBase* self) {
    auto* vkviewstatemaintainerbase = const_cast<VirtualKViewStateMaintainerBase*>(dynamic_cast<const VirtualKViewStateMaintainerBase*>(self));
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_SenderSignalIndex_IsBase(true);
        return vkviewstatemaintainerbase->senderSignalIndex();
    } else {
        return ((VirtualKViewStateMaintainerBase*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnSenderSignalIndex(const KViewStateMaintainerBase* self, intptr_t slot) {
    auto* vkviewstatemaintainerbase = const_cast<VirtualKViewStateMaintainerBase*>(dynamic_cast<const VirtualKViewStateMaintainerBase*>(self));
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_SenderSignalIndex_Callback(reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KViewStateMaintainerBase_Receivers(const KViewStateMaintainerBase* self, const char* signal) {
    auto* vkviewstatemaintainerbase = const_cast<VirtualKViewStateMaintainerBase*>(dynamic_cast<const VirtualKViewStateMaintainerBase*>(self));
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        return vkviewstatemaintainerbase->receivers(signal);
    } else {
        return ((VirtualKViewStateMaintainerBase*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KViewStateMaintainerBase_QBaseReceivers(const KViewStateMaintainerBase* self, const char* signal) {
    auto* vkviewstatemaintainerbase = const_cast<VirtualKViewStateMaintainerBase*>(dynamic_cast<const VirtualKViewStateMaintainerBase*>(self));
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_Receivers_IsBase(true);
        return vkviewstatemaintainerbase->receivers(signal);
    } else {
        return ((VirtualKViewStateMaintainerBase*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnReceivers(const KViewStateMaintainerBase* self, intptr_t slot) {
    auto* vkviewstatemaintainerbase = const_cast<VirtualKViewStateMaintainerBase*>(dynamic_cast<const VirtualKViewStateMaintainerBase*>(self));
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_Receivers_Callback(reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KViewStateMaintainerBase_IsSignalConnected(const KViewStateMaintainerBase* self, const QMetaMethod* signal) {
    auto* vkviewstatemaintainerbase = const_cast<VirtualKViewStateMaintainerBase*>(dynamic_cast<const VirtualKViewStateMaintainerBase*>(self));
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        return vkviewstatemaintainerbase->isSignalConnected(*signal);
    } else {
        return ((VirtualKViewStateMaintainerBase*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KViewStateMaintainerBase_QBaseIsSignalConnected(const KViewStateMaintainerBase* self, const QMetaMethod* signal) {
    auto* vkviewstatemaintainerbase = const_cast<VirtualKViewStateMaintainerBase*>(dynamic_cast<const VirtualKViewStateMaintainerBase*>(self));
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_IsSignalConnected_IsBase(true);
        return vkviewstatemaintainerbase->isSignalConnected(*signal);
    } else {
        return ((VirtualKViewStateMaintainerBase*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnIsSignalConnected(const KViewStateMaintainerBase* self, intptr_t slot) {
    auto* vkviewstatemaintainerbase = const_cast<VirtualKViewStateMaintainerBase*>(dynamic_cast<const VirtualKViewStateMaintainerBase*>(self));
    if (vkviewstatemaintainerbase && vkviewstatemaintainerbase->isVirtualKViewStateMaintainerBase) {
        vkviewstatemaintainerbase->setKViewStateMaintainerBase_IsSignalConnected_Callback(reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_IsSignalConnected_Callback>(slot));
    }
}

void KViewStateMaintainerBase_Delete(KViewStateMaintainerBase* self) {
    delete self;
}
