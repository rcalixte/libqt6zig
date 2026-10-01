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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KModelIndexProxyMapper_Tr(const char* s) {
    auto _ret = KModelIndexProxyMapper::tr(s);
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
    KModelIndexProxyMapper::connect(self,
                                    static_cast<void (KModelIndexProxyMapper::*)()>(&KModelIndexProxyMapper::isConnectedChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

libqt_string KModelIndexProxyMapper_Tr2(const char* s, const char* c) {
    auto _ret = KModelIndexProxyMapper::tr(s, c);
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
    auto _ret = KModelIndexProxyMapper::tr(s, c, static_cast<int>(n));
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
QMetaObject* KModelIndexProxyMapper_SuperMetaObject(const KModelIndexProxyMapper* self) {
    return (QMetaObject*)self->KModelIndexProxyMapper::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnMetaObject(KModelIndexProxyMapper* self, intptr_t slot) {
    if (auto* vkmodelindexproxymapper = const_cast<VirtualKModelIndexProxyMapper*>(dynamic_cast<const VirtualKModelIndexProxyMapper*>(self)))
        vkmodelindexproxymapper->kmodelindexproxymapper_metaobject_callback = reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KModelIndexProxyMapper_SuperMetacast(KModelIndexProxyMapper* self, const char* param1) {
    return self->KModelIndexProxyMapper::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnMetacast(KModelIndexProxyMapper* self, intptr_t slot) {
    if (auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self))
        vkmodelindexproxymapper->kmodelindexproxymapper_metacast_callback = reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_Metacast_Callback>(slot);
}

// Base class handler implementation
int KModelIndexProxyMapper_SuperMetacall(KModelIndexProxyMapper* self, int param1, int param2, void** param3) {
    return self->KModelIndexProxyMapper::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnMetacall(KModelIndexProxyMapper* self, intptr_t slot) {
    if (auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self))
        vkmodelindexproxymapper->kmodelindexproxymapper_metacall_callback = reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KModelIndexProxyMapper_Event(KModelIndexProxyMapper* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KModelIndexProxyMapper_SuperEvent(KModelIndexProxyMapper* self, QEvent* event) {
    return self->KModelIndexProxyMapper::event(event);
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnEvent(KModelIndexProxyMapper* self, intptr_t slot) {
    if (auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self))
        vkmodelindexproxymapper->kmodelindexproxymapper_event_callback = reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_Event_Callback>(slot);
}

// Derived class handler implementation
bool KModelIndexProxyMapper_EventFilter(KModelIndexProxyMapper* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KModelIndexProxyMapper_SuperEventFilter(KModelIndexProxyMapper* self, QObject* watched, QEvent* event) {
    return self->KModelIndexProxyMapper::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnEventFilter(KModelIndexProxyMapper* self, intptr_t slot) {
    if (auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self))
        vkmodelindexproxymapper->kmodelindexproxymapper_eventfilter_callback = reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KModelIndexProxyMapper_TimerEvent(KModelIndexProxyMapper* self, QTimerEvent* event) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper) {
        vkmodelindexproxymapper->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KModelIndexProxyMapper::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KModelIndexProxyMapper_SuperTimerEvent(KModelIndexProxyMapper* self, QTimerEvent* event) {
    if (auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self)) {
        vkmodelindexproxymapper->KModelIndexProxyMapper::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KModelIndexProxyMapper::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnTimerEvent(KModelIndexProxyMapper* self, intptr_t slot) {
    if (auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self))
        vkmodelindexproxymapper->kmodelindexproxymapper_timerevent_callback = reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KModelIndexProxyMapper_ChildEvent(KModelIndexProxyMapper* self, QChildEvent* event) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper) {
        vkmodelindexproxymapper->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KModelIndexProxyMapper::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KModelIndexProxyMapper_SuperChildEvent(KModelIndexProxyMapper* self, QChildEvent* event) {
    if (auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self)) {
        vkmodelindexproxymapper->KModelIndexProxyMapper::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KModelIndexProxyMapper::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnChildEvent(KModelIndexProxyMapper* self, intptr_t slot) {
    if (auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self))
        vkmodelindexproxymapper->kmodelindexproxymapper_childevent_callback = reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KModelIndexProxyMapper_CustomEvent(KModelIndexProxyMapper* self, QEvent* event) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper) {
        vkmodelindexproxymapper->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KModelIndexProxyMapper::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KModelIndexProxyMapper_SuperCustomEvent(KModelIndexProxyMapper* self, QEvent* event) {
    if (auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self)) {
        vkmodelindexproxymapper->KModelIndexProxyMapper::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KModelIndexProxyMapper::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnCustomEvent(KModelIndexProxyMapper* self, intptr_t slot) {
    if (auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self))
        vkmodelindexproxymapper->kmodelindexproxymapper_customevent_callback = reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KModelIndexProxyMapper_ConnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper) {
        vkmodelindexproxymapper->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KModelIndexProxyMapper::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KModelIndexProxyMapper_SuperConnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal) {
    if (auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self)) {
        vkmodelindexproxymapper->KModelIndexProxyMapper::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KModelIndexProxyMapper::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnConnectNotify(KModelIndexProxyMapper* self, intptr_t slot) {
    if (auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self))
        vkmodelindexproxymapper->kmodelindexproxymapper_connectnotify_callback = reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KModelIndexProxyMapper_DisconnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal) {
    auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self);
    if (vkmodelindexproxymapper) {
        vkmodelindexproxymapper->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KModelIndexProxyMapper::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KModelIndexProxyMapper_SuperDisconnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal) {
    if (auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self)) {
        vkmodelindexproxymapper->KModelIndexProxyMapper::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KModelIndexProxyMapper::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KModelIndexProxyMapper_OnDisconnectNotify(KModelIndexProxyMapper* self, intptr_t slot) {
    if (auto* vkmodelindexproxymapper = dynamic_cast<VirtualKModelIndexProxyMapper*>(self))
        vkmodelindexproxymapper->kmodelindexproxymapper_disconnectnotify_callback = reinterpret_cast<VirtualKModelIndexProxyMapper::KModelIndexProxyMapper_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KModelIndexProxyMapper_Sender(const KModelIndexProxyMapper* self) {
    if (auto* vkmodelindexproxymapper = const_cast<VirtualKModelIndexProxyMapper*>(dynamic_cast<const VirtualKModelIndexProxyMapper*>(self))) {
        return vkmodelindexproxymapper->VirtualKModelIndexProxyMapper::sender();
    } else
        qFatal("Error: Protected method KModelIndexProxyMapper::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KModelIndexProxyMapper_SenderSignalIndex(const KModelIndexProxyMapper* self) {
    if (auto* vkmodelindexproxymapper = const_cast<VirtualKModelIndexProxyMapper*>(dynamic_cast<const VirtualKModelIndexProxyMapper*>(self))) {
        return vkmodelindexproxymapper->VirtualKModelIndexProxyMapper::senderSignalIndex();
    } else
        qFatal("Error: Protected method KModelIndexProxyMapper::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KModelIndexProxyMapper_Receivers(const KModelIndexProxyMapper* self, const char* signal) {
    if (auto* vkmodelindexproxymapper = const_cast<VirtualKModelIndexProxyMapper*>(dynamic_cast<const VirtualKModelIndexProxyMapper*>(self))) {
        return vkmodelindexproxymapper->VirtualKModelIndexProxyMapper::receivers(signal);
    } else
        qFatal("Error: Protected method KModelIndexProxyMapper::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KModelIndexProxyMapper_IsSignalConnected(const KModelIndexProxyMapper* self, const QMetaMethod* signal) {
    if (auto* vkmodelindexproxymapper = const_cast<VirtualKModelIndexProxyMapper*>(dynamic_cast<const VirtualKModelIndexProxyMapper*>(self))) {
        return vkmodelindexproxymapper->VirtualKModelIndexProxyMapper::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KModelIndexProxyMapper::isSignalConnected called without a directly constructed type");
}

void KModelIndexProxyMapper_Delete(KModelIndexProxyMapper* self) {
    delete self;
}
