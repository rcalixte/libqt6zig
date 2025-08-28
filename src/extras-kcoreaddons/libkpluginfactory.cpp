#include <KPluginFactory>
#include <KPluginMetaData>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <kpluginfactory.h>
#include "libkpluginfactory.h"
#include "libkpluginfactory.hxx"

KPluginFactory* KPluginFactory_new() {
    return new VirtualKPluginFactory();
}

QMetaObject* KPluginFactory_MetaObject(const KPluginFactory* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPluginFactory_Metacast(KPluginFactory* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPluginFactory_Metacall(KPluginFactory* self, int param1, int param2, void** param3) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPluginFactory*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KPluginFactory_Tr(const char* s) {
    QString _ret = KPluginFactory::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KPluginMetaData* KPluginFactory_MetaData(const KPluginFactory* self) {
    return new KPluginMetaData(self->metaData());
}

void KPluginFactory_SetMetaData(KPluginFactory* self, const KPluginMetaData* metaData) {
    self->setMetaData(*metaData);
}

QObject* KPluginFactory_Create(KPluginFactory* self, const char* iface, QWidget* parentWidget, QObject* parent, const libqt_list /* of QVariant* */ args) {
    QList<QVariant> args_QList;
    args_QList.reserve(args.len);
    QVariant** args_arr = static_cast<QVariant**>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        args_QList.push_back(*(args_arr[i]));
    }
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        return vkpluginfactory->create(iface, parentWidget, parent, args_QList);
    }
    return {};
}

libqt_string KPluginFactory_Tr2(const char* s, const char* c) {
    QString _ret = KPluginFactory::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPluginFactory_Tr3(const char* s, const char* c, int n) {
    QString _ret = KPluginFactory::tr(s, c, static_cast<int>(n));
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
int KPluginFactory_QBaseMetacall(KPluginFactory* self, int param1, int param2, void** param3) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_Metacall_IsBase(true);
        return vkpluginfactory->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KPluginFactory::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnMetacall(KPluginFactory* self, intptr_t slot) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_Metacall_Callback(reinterpret_cast<VirtualKPluginFactory::KPluginFactory_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QObject* KPluginFactory_QBaseCreate(KPluginFactory* self, const char* iface, QWidget* parentWidget, QObject* parent, const libqt_list /* of QVariant* */ args) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    QList<QVariant> args_QList;
    args_QList.reserve(args.len);
    QVariant** args_arr = static_cast<QVariant**>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        args_QList.push_back(*(args_arr[i]));
    }
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_Create_IsBase(true);
        return vkpluginfactory->create(iface, parentWidget, parent, args_QList);
    } else {
        return ((VirtualKPluginFactory*)self)->create(iface, parentWidget, parent, args_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnCreate(KPluginFactory* self, intptr_t slot) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_Create_Callback(reinterpret_cast<VirtualKPluginFactory::KPluginFactory_Create_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPluginFactory_Event(KPluginFactory* self, QEvent* event) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        return vkpluginfactory->event(event);
    } else {
        return self->KPluginFactory::event(event);
    }
}

// Base class handler implementation
bool KPluginFactory_QBaseEvent(KPluginFactory* self, QEvent* event) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_Event_IsBase(true);
        return vkpluginfactory->event(event);
    } else {
        return self->KPluginFactory::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnEvent(KPluginFactory* self, intptr_t slot) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_Event_Callback(reinterpret_cast<VirtualKPluginFactory::KPluginFactory_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPluginFactory_EventFilter(KPluginFactory* self, QObject* watched, QEvent* event) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        return vkpluginfactory->eventFilter(watched, event);
    } else {
        return self->KPluginFactory::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KPluginFactory_QBaseEventFilter(KPluginFactory* self, QObject* watched, QEvent* event) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_EventFilter_IsBase(true);
        return vkpluginfactory->eventFilter(watched, event);
    } else {
        return self->KPluginFactory::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnEventFilter(KPluginFactory* self, intptr_t slot) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_EventFilter_Callback(reinterpret_cast<VirtualKPluginFactory::KPluginFactory_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluginFactory_TimerEvent(KPluginFactory* self, QTimerEvent* event) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->timerEvent(event);
    } else {
        ((VirtualKPluginFactory*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KPluginFactory_QBaseTimerEvent(KPluginFactory* self, QTimerEvent* event) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_TimerEvent_IsBase(true);
        vkpluginfactory->timerEvent(event);
    } else {
        ((VirtualKPluginFactory*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnTimerEvent(KPluginFactory* self, intptr_t slot) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_TimerEvent_Callback(reinterpret_cast<VirtualKPluginFactory::KPluginFactory_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluginFactory_ChildEvent(KPluginFactory* self, QChildEvent* event) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->childEvent(event);
    } else {
        ((VirtualKPluginFactory*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KPluginFactory_QBaseChildEvent(KPluginFactory* self, QChildEvent* event) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_ChildEvent_IsBase(true);
        vkpluginfactory->childEvent(event);
    } else {
        ((VirtualKPluginFactory*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnChildEvent(KPluginFactory* self, intptr_t slot) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_ChildEvent_Callback(reinterpret_cast<VirtualKPluginFactory::KPluginFactory_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluginFactory_CustomEvent(KPluginFactory* self, QEvent* event) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->customEvent(event);
    } else {
        ((VirtualKPluginFactory*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KPluginFactory_QBaseCustomEvent(KPluginFactory* self, QEvent* event) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_CustomEvent_IsBase(true);
        vkpluginfactory->customEvent(event);
    } else {
        ((VirtualKPluginFactory*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnCustomEvent(KPluginFactory* self, intptr_t slot) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_CustomEvent_Callback(reinterpret_cast<VirtualKPluginFactory::KPluginFactory_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluginFactory_ConnectNotify(KPluginFactory* self, const QMetaMethod* signal) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->connectNotify(*signal);
    } else {
        ((VirtualKPluginFactory*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KPluginFactory_QBaseConnectNotify(KPluginFactory* self, const QMetaMethod* signal) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_ConnectNotify_IsBase(true);
        vkpluginfactory->connectNotify(*signal);
    } else {
        ((VirtualKPluginFactory*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnConnectNotify(KPluginFactory* self, intptr_t slot) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_ConnectNotify_Callback(reinterpret_cast<VirtualKPluginFactory::KPluginFactory_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPluginFactory_DisconnectNotify(KPluginFactory* self, const QMetaMethod* signal) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->disconnectNotify(*signal);
    } else {
        ((VirtualKPluginFactory*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KPluginFactory_QBaseDisconnectNotify(KPluginFactory* self, const QMetaMethod* signal) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_DisconnectNotify_IsBase(true);
        vkpluginfactory->disconnectNotify(*signal);
    } else {
        ((VirtualKPluginFactory*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnDisconnectNotify(KPluginFactory* self, intptr_t slot) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_DisconnectNotify_Callback(reinterpret_cast<VirtualKPluginFactory::KPluginFactory_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KPluginFactory_Sender(const KPluginFactory* self) {
    auto* vkpluginfactory = const_cast<VirtualKPluginFactory*>(dynamic_cast<const VirtualKPluginFactory*>(self));
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        return vkpluginfactory->sender();
    } else {
        return ((VirtualKPluginFactory*)self)->sender();
    }
}

// Base class handler implementation
QObject* KPluginFactory_QBaseSender(const KPluginFactory* self) {
    auto* vkpluginfactory = const_cast<VirtualKPluginFactory*>(dynamic_cast<const VirtualKPluginFactory*>(self));
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_Sender_IsBase(true);
        return vkpluginfactory->sender();
    } else {
        return ((VirtualKPluginFactory*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnSender(const KPluginFactory* self, intptr_t slot) {
    auto* vkpluginfactory = const_cast<VirtualKPluginFactory*>(dynamic_cast<const VirtualKPluginFactory*>(self));
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_Sender_Callback(reinterpret_cast<VirtualKPluginFactory::KPluginFactory_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KPluginFactory_SenderSignalIndex(const KPluginFactory* self) {
    auto* vkpluginfactory = const_cast<VirtualKPluginFactory*>(dynamic_cast<const VirtualKPluginFactory*>(self));
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        return vkpluginfactory->senderSignalIndex();
    } else {
        return ((VirtualKPluginFactory*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KPluginFactory_QBaseSenderSignalIndex(const KPluginFactory* self) {
    auto* vkpluginfactory = const_cast<VirtualKPluginFactory*>(dynamic_cast<const VirtualKPluginFactory*>(self));
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_SenderSignalIndex_IsBase(true);
        return vkpluginfactory->senderSignalIndex();
    } else {
        return ((VirtualKPluginFactory*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnSenderSignalIndex(const KPluginFactory* self, intptr_t slot) {
    auto* vkpluginfactory = const_cast<VirtualKPluginFactory*>(dynamic_cast<const VirtualKPluginFactory*>(self));
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPluginFactory::KPluginFactory_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KPluginFactory_Receivers(const KPluginFactory* self, const char* signal) {
    auto* vkpluginfactory = const_cast<VirtualKPluginFactory*>(dynamic_cast<const VirtualKPluginFactory*>(self));
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        return vkpluginfactory->receivers(signal);
    } else {
        return ((VirtualKPluginFactory*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KPluginFactory_QBaseReceivers(const KPluginFactory* self, const char* signal) {
    auto* vkpluginfactory = const_cast<VirtualKPluginFactory*>(dynamic_cast<const VirtualKPluginFactory*>(self));
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_Receivers_IsBase(true);
        return vkpluginfactory->receivers(signal);
    } else {
        return ((VirtualKPluginFactory*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnReceivers(const KPluginFactory* self, intptr_t slot) {
    auto* vkpluginfactory = const_cast<VirtualKPluginFactory*>(dynamic_cast<const VirtualKPluginFactory*>(self));
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_Receivers_Callback(reinterpret_cast<VirtualKPluginFactory::KPluginFactory_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPluginFactory_IsSignalConnected(const KPluginFactory* self, const QMetaMethod* signal) {
    auto* vkpluginfactory = const_cast<VirtualKPluginFactory*>(dynamic_cast<const VirtualKPluginFactory*>(self));
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        return vkpluginfactory->isSignalConnected(*signal);
    } else {
        return ((VirtualKPluginFactory*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KPluginFactory_QBaseIsSignalConnected(const KPluginFactory* self, const QMetaMethod* signal) {
    auto* vkpluginfactory = const_cast<VirtualKPluginFactory*>(dynamic_cast<const VirtualKPluginFactory*>(self));
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_IsSignalConnected_IsBase(true);
        return vkpluginfactory->isSignalConnected(*signal);
    } else {
        return ((VirtualKPluginFactory*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnIsSignalConnected(const KPluginFactory* self, intptr_t slot) {
    auto* vkpluginfactory = const_cast<VirtualKPluginFactory*>(dynamic_cast<const VirtualKPluginFactory*>(self));
    if (vkpluginfactory && vkpluginfactory->isVirtualKPluginFactory) {
        vkpluginfactory->setKPluginFactory_IsSignalConnected_Callback(reinterpret_cast<VirtualKPluginFactory::KPluginFactory_IsSignalConnected_Callback>(slot));
    }
}

void KPluginFactory_Delete(KPluginFactory* self) {
    delete self;
}
