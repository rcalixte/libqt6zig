#include <KModelIndexProxyMapper>
#include <QAbstractItemModel>
#include <QChildEvent>
#include <QEvent>
#include <QItemSelection>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <kmodelindexproxymapper.h>
#include "libkmodelindexproxymapper.h"
#include "libkmodelindexproxymapper.hxx"

KModelIndexProxyMapper* KModelIndexProxyMapper_new(const QAbstractItemModel* leftModel, const QAbstractItemModel* rightModel) {
    return new VirtualKModelIndexProxyMapper(leftModel, rightModel);
}

KModelIndexProxyMapper* KModelIndexProxyMapper_new2(const QAbstractItemModel* leftModel, const QAbstractItemModel* rightModel, QObject* parent) {
    return new VirtualKModelIndexProxyMapper(leftModel, rightModel, parent);
}

QMetaObject* KModelIndexProxyMapper_MetaObject(const KModelIndexProxyMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* KModelIndexProxyMapper_Metacast(KModelIndexProxyMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KModelIndexProxyMapper_Metacall(KModelIndexProxyMapper* self, int param1, int param2, void** param3) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKModelIndexProxyMapper*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KModelIndexProxyMapper_Tr(const char* s) {
    QString _ret = KModelIndexProxyMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QModelIndex* KModelIndexProxyMapper_MapLeftToRight(const KModelIndexProxyMapper* self, const QModelIndex* index) {
    return new QModelIndex(self->mapLeftToRight(*index));
}

QModelIndex* KModelIndexProxyMapper_MapRightToLeft(const KModelIndexProxyMapper* self, const QModelIndex* index) {
    return new QModelIndex(self->mapRightToLeft(*index));
}

QItemSelection* KModelIndexProxyMapper_MapSelectionLeftToRight(const KModelIndexProxyMapper* self, const QItemSelection* selection) {
    return new QItemSelection(self->mapSelectionLeftToRight(*selection));
}

QItemSelection* KModelIndexProxyMapper_MapSelectionRightToLeft(const KModelIndexProxyMapper* self, const QItemSelection* selection) {
    return new QItemSelection(self->mapSelectionRightToLeft(*selection));
}

bool KModelIndexProxyMapper_IsConnected(const KModelIndexProxyMapper* self) {
    return self->isConnected();
}

void KModelIndexProxyMapper_IsConnectedChanged(KModelIndexProxyMapper* self) {
    self->isConnectedChanged();
}

void KModelIndexProxyMapper_Connect_IsConnectedChanged(KModelIndexProxyMapper* self, intptr_t slot) {
    void (*slotFunc)(KModelIndexProxyMapper*) = reinterpret_cast<void (*)(KModelIndexProxyMapper*)>(slot);
    KModelIndexProxyMapper::connect(self, &KModelIndexProxyMapper::isConnectedChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KModelIndexProxyMapper_Tr2(const char* s, const char* c) {
    QString _ret = KModelIndexProxyMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KModelIndexProxyMapper_Tr3(const char* s, const char* c, int n) {
    QString _ret = KModelIndexProxyMapper::tr(s, c, static_cast<int>(n));
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
int KModelIndexProxyMapper_QBaseMetacall(KModelIndexProxyMapper* self, int param1, int param2, void** param3) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_Metacall_IsBase(true);
        return vkmodelindexproxymapper->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KModelIndexProxyMapper::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnMetacall(KModelIndexProxyMapper* self, intptr_t slot) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_Metacall_Callback(reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KModelIndexProxyMapper_Event(KModelIndexProxyMapper* self, QEvent* event) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        return vkmodelindexproxymapper->event(event);
    } else {
        return self->KModelIndexProxyMapper::event(event);
    }
}

// Base class handler implementation
bool KModelIndexProxyMapper_QBaseEvent(KModelIndexProxyMapper* self, QEvent* event) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_Event_IsBase(true);
        return vkmodelindexproxymapper->event(event);
    } else {
        return self->KModelIndexProxyMapper::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnEvent(KModelIndexProxyMapper* self, intptr_t slot) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_Event_Callback(reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KModelIndexProxyMapper_EventFilter(KModelIndexProxyMapper* self, QObject* watched, QEvent* event) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        return vkmodelindexproxymapper->eventFilter(watched, event);
    } else {
        return self->KModelIndexProxyMapper::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KModelIndexProxyMapper_QBaseEventFilter(KModelIndexProxyMapper* self, QObject* watched, QEvent* event) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_EventFilter_IsBase(true);
        return vkmodelindexproxymapper->eventFilter(watched, event);
    } else {
        return self->KModelIndexProxyMapper::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnEventFilter(KModelIndexProxyMapper* self, intptr_t slot) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_EventFilter_Callback(reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KModelIndexProxyMapper_TimerEvent(KModelIndexProxyMapper* self, QTimerEvent* event) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->timerEvent(event);
    } else {
        ((VirtualKModelIndexProxyMapper*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KModelIndexProxyMapper_QBaseTimerEvent(KModelIndexProxyMapper* self, QTimerEvent* event) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_TimerEvent_IsBase(true);
        vkmodelindexproxymapper->timerEvent(event);
    } else {
        ((VirtualKModelIndexProxyMapper*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnTimerEvent(KModelIndexProxyMapper* self, intptr_t slot) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_TimerEvent_Callback(reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KModelIndexProxyMapper_ChildEvent(KModelIndexProxyMapper* self, QChildEvent* event) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->childEvent(event);
    } else {
        ((VirtualKModelIndexProxyMapper*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KModelIndexProxyMapper_QBaseChildEvent(KModelIndexProxyMapper* self, QChildEvent* event) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_ChildEvent_IsBase(true);
        vkmodelindexproxymapper->childEvent(event);
    } else {
        ((VirtualKModelIndexProxyMapper*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnChildEvent(KModelIndexProxyMapper* self, intptr_t slot) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_ChildEvent_Callback(reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KModelIndexProxyMapper_CustomEvent(KModelIndexProxyMapper* self, QEvent* event) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->customEvent(event);
    } else {
        ((VirtualKModelIndexProxyMapper*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KModelIndexProxyMapper_QBaseCustomEvent(KModelIndexProxyMapper* self, QEvent* event) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_CustomEvent_IsBase(true);
        vkmodelindexproxymapper->customEvent(event);
    } else {
        ((VirtualKModelIndexProxyMapper*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnCustomEvent(KModelIndexProxyMapper* self, intptr_t slot) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_CustomEvent_Callback(reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KModelIndexProxyMapper_ConnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->connectNotify(*signal);
    } else {
        ((VirtualKModelIndexProxyMapper*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KModelIndexProxyMapper_QBaseConnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_ConnectNotify_IsBase(true);
        vkmodelindexproxymapper->connectNotify(*signal);
    } else {
        ((VirtualKModelIndexProxyMapper*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnConnectNotify(KModelIndexProxyMapper* self, intptr_t slot) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_ConnectNotify_Callback(reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KModelIndexProxyMapper_DisconnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->disconnectNotify(*signal);
    } else {
        ((VirtualKModelIndexProxyMapper*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KModelIndexProxyMapper_QBaseDisconnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_DisconnectNotify_IsBase(true);
        vkmodelindexproxymapper->disconnectNotify(*signal);
    } else {
        ((VirtualKModelIndexProxyMapper*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnDisconnectNotify(KModelIndexProxyMapper* self, intptr_t slot) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_DisconnectNotify_Callback(reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KModelIndexProxyMapper_Sender(const KModelIndexProxyMapper* self) {
    auto* vkmodelindexproxymapper = const_cast<VirtualKModelIndexProxyMapper*>(dynamic_cast<const VirtualKModelIndexProxyMapper*>(self));
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        return vkmodelindexproxymapper->sender();
    } else {
        return ((VirtualKModelIndexProxyMapper*)self)->sender();
    }
}

// Base class handler implementation
QObject* KModelIndexProxyMapper_QBaseSender(const KModelIndexProxyMapper* self) {
    auto* vkmodelindexproxymapper = const_cast<VirtualKModelIndexProxyMapper*>(dynamic_cast<const VirtualKModelIndexProxyMapper*>(self));
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_Sender_IsBase(true);
        return vkmodelindexproxymapper->sender();
    } else {
        return ((VirtualKModelIndexProxyMapper*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnSender(const KModelIndexProxyMapper* self, intptr_t slot) {
    auto* vkmodelindexproxymapper = const_cast<VirtualKModelIndexProxyMapper*>(dynamic_cast<const VirtualKModelIndexProxyMapper*>(self));
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_Sender_Callback(reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KModelIndexProxyMapper_SenderSignalIndex(const KModelIndexProxyMapper* self) {
    auto* vkmodelindexproxymapper = const_cast<VirtualKModelIndexProxyMapper*>(dynamic_cast<const VirtualKModelIndexProxyMapper*>(self));
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        return vkmodelindexproxymapper->senderSignalIndex();
    } else {
        return ((VirtualKModelIndexProxyMapper*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KModelIndexProxyMapper_QBaseSenderSignalIndex(const KModelIndexProxyMapper* self) {
    auto* vkmodelindexproxymapper = const_cast<VirtualKModelIndexProxyMapper*>(dynamic_cast<const VirtualKModelIndexProxyMapper*>(self));
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_SenderSignalIndex_IsBase(true);
        return vkmodelindexproxymapper->senderSignalIndex();
    } else {
        return ((VirtualKModelIndexProxyMapper*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnSenderSignalIndex(const KModelIndexProxyMapper* self, intptr_t slot) {
    auto* vkmodelindexproxymapper = const_cast<VirtualKModelIndexProxyMapper*>(dynamic_cast<const VirtualKModelIndexProxyMapper*>(self));
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_SenderSignalIndex_Callback(reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KModelIndexProxyMapper_Receivers(const KModelIndexProxyMapper* self, const char* signal) {
    auto* vkmodelindexproxymapper = const_cast<VirtualKModelIndexProxyMapper*>(dynamic_cast<const VirtualKModelIndexProxyMapper*>(self));
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        return vkmodelindexproxymapper->receivers(signal);
    } else {
        return ((VirtualKModelIndexProxyMapper*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KModelIndexProxyMapper_QBaseReceivers(const KModelIndexProxyMapper* self, const char* signal) {
    auto* vkmodelindexproxymapper = const_cast<VirtualKModelIndexProxyMapper*>(dynamic_cast<const VirtualKModelIndexProxyMapper*>(self));
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_Receivers_IsBase(true);
        return vkmodelindexproxymapper->receivers(signal);
    } else {
        return ((VirtualKModelIndexProxyMapper*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnReceivers(const KModelIndexProxyMapper* self, intptr_t slot) {
    auto* vkmodelindexproxymapper = const_cast<VirtualKModelIndexProxyMapper*>(dynamic_cast<const VirtualKModelIndexProxyMapper*>(self));
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_Receivers_Callback(reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KModelIndexProxyMapper_IsSignalConnected(const KModelIndexProxyMapper* self, const QMetaMethod* signal) {
    auto* vkmodelindexproxymapper = const_cast<VirtualKModelIndexProxyMapper*>(dynamic_cast<const VirtualKModelIndexProxyMapper*>(self));
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        return vkmodelindexproxymapper->isSignalConnected(*signal);
    } else {
        return ((VirtualKModelIndexProxyMapper*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KModelIndexProxyMapper_QBaseIsSignalConnected(const KModelIndexProxyMapper* self, const QMetaMethod* signal) {
    auto* vkmodelindexproxymapper = const_cast<VirtualKModelIndexProxyMapper*>(dynamic_cast<const VirtualKModelIndexProxyMapper*>(self));
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_IsSignalConnected_IsBase(true);
        return vkmodelindexproxymapper->isSignalConnected(*signal);
    } else {
        return ((VirtualKModelIndexProxyMapper*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnIsSignalConnected(const KModelIndexProxyMapper* self, intptr_t slot) {
    auto* vkmodelindexproxymapper = const_cast<VirtualKModelIndexProxyMapper*>(dynamic_cast<const VirtualKModelIndexProxyMapper*>(self));
    if (vkmodelindexproxymapper && vkmodelindexproxymapper->isVirtualKModelIndexProxyMapper) {
        vkmodelindexproxymapper->setKModelIndexProxyMapper_IsSignalConnected_Callback(reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_IsSignalConnected_Callback>(slot));
    }
}

void KModelIndexProxyMapper_Delete(KModelIndexProxyMapper* self) {
    delete self;
}
