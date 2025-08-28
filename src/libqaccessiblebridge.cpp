#include <QAccessibleBridge>
#include <QAccessibleBridgePlugin>
#include <QAccessibleEvent>
#include <QAccessibleInterface>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qaccessiblebridge.h>
#include "libqaccessiblebridge.h"
#include "libqaccessiblebridge.hxx"

void QAccessibleBridge_SetRootObject(QAccessibleBridge* self, QAccessibleInterface* rootObject) {
    self->setRootObject(rootObject);
}

void QAccessibleBridge_NotifyAccessibilityUpdate(QAccessibleBridge* self, QAccessibleEvent* event) {
    self->notifyAccessibilityUpdate(event);
}

void QAccessibleBridge_OperatorAssign(QAccessibleBridge* self, const QAccessibleBridge* param1) {
    self->operator=(*param1);
}

void QAccessibleBridge_Delete(QAccessibleBridge* self) {
    delete self;
}

QAccessibleBridgePlugin* QAccessibleBridgePlugin_new() {
    return new VirtualQAccessibleBridgePlugin();
}

QAccessibleBridgePlugin* QAccessibleBridgePlugin_new2(QObject* parent) {
    return new VirtualQAccessibleBridgePlugin(parent);
}

QMetaObject* QAccessibleBridgePlugin_MetaObject(const QAccessibleBridgePlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAccessibleBridgePlugin_Metacast(QAccessibleBridgePlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAccessibleBridgePlugin_Metacall(QAccessibleBridgePlugin* self, int param1, int param2, void** param3) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAccessibleBridgePlugin*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAccessibleBridgePlugin_OnMetacall(QAccessibleBridgePlugin* self, intptr_t slot) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Metacall_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAccessibleBridgePlugin_QBaseMetacall(QAccessibleBridgePlugin* self, int param1, int param2, void** param3) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Metacall_IsBase(true);
        return vqaccessiblebridgeplugin->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAccessibleBridgePlugin*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAccessibleBridgePlugin_Tr(const char* s) {
    QString _ret = QAccessibleBridgePlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAccessibleBridge* QAccessibleBridgePlugin_Create(QAccessibleBridgePlugin* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        return vqaccessiblebridgeplugin->create(key_QString);
    } else {
        return ((VirtualQAccessibleBridgePlugin*)self)->create(key_QString);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAccessibleBridgePlugin_OnCreate(QAccessibleBridgePlugin* self, intptr_t slot) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Create_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_Create_Callback>(slot));
    }
}

// Virtual base class handler implementation
QAccessibleBridge* QAccessibleBridgePlugin_QBaseCreate(QAccessibleBridgePlugin* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Create_IsBase(true);
        return vqaccessiblebridgeplugin->create(key_QString);
    } else {
        return ((VirtualQAccessibleBridgePlugin*)self)->create(key_QString);
    }
}

libqt_string QAccessibleBridgePlugin_Tr2(const char* s, const char* c) {
    QString _ret = QAccessibleBridgePlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleBridgePlugin_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAccessibleBridgePlugin::tr(s, c, static_cast<int>(n));
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
bool QAccessibleBridgePlugin_Event(QAccessibleBridgePlugin* self, QEvent* event) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        return vqaccessiblebridgeplugin->event(event);
    } else {
        return self->QAccessibleBridgePlugin::event(event);
    }
}

// Base class handler implementation
bool QAccessibleBridgePlugin_QBaseEvent(QAccessibleBridgePlugin* self, QEvent* event) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Event_IsBase(true);
        return vqaccessiblebridgeplugin->event(event);
    } else {
        return self->QAccessibleBridgePlugin::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnEvent(QAccessibleBridgePlugin* self, intptr_t slot) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Event_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAccessibleBridgePlugin_EventFilter(QAccessibleBridgePlugin* self, QObject* watched, QEvent* event) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        return vqaccessiblebridgeplugin->eventFilter(watched, event);
    } else {
        return self->QAccessibleBridgePlugin::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAccessibleBridgePlugin_QBaseEventFilter(QAccessibleBridgePlugin* self, QObject* watched, QEvent* event) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_EventFilter_IsBase(true);
        return vqaccessiblebridgeplugin->eventFilter(watched, event);
    } else {
        return self->QAccessibleBridgePlugin::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnEventFilter(QAccessibleBridgePlugin* self, intptr_t slot) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_EventFilter_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessibleBridgePlugin_TimerEvent(QAccessibleBridgePlugin* self, QTimerEvent* event) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->timerEvent(event);
    } else {
        ((VirtualQAccessibleBridgePlugin*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAccessibleBridgePlugin_QBaseTimerEvent(QAccessibleBridgePlugin* self, QTimerEvent* event) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_TimerEvent_IsBase(true);
        vqaccessiblebridgeplugin->timerEvent(event);
    } else {
        ((VirtualQAccessibleBridgePlugin*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnTimerEvent(QAccessibleBridgePlugin* self, intptr_t slot) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_TimerEvent_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessibleBridgePlugin_ChildEvent(QAccessibleBridgePlugin* self, QChildEvent* event) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->childEvent(event);
    } else {
        ((VirtualQAccessibleBridgePlugin*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAccessibleBridgePlugin_QBaseChildEvent(QAccessibleBridgePlugin* self, QChildEvent* event) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_ChildEvent_IsBase(true);
        vqaccessiblebridgeplugin->childEvent(event);
    } else {
        ((VirtualQAccessibleBridgePlugin*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnChildEvent(QAccessibleBridgePlugin* self, intptr_t slot) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_ChildEvent_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessibleBridgePlugin_CustomEvent(QAccessibleBridgePlugin* self, QEvent* event) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->customEvent(event);
    } else {
        ((VirtualQAccessibleBridgePlugin*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAccessibleBridgePlugin_QBaseCustomEvent(QAccessibleBridgePlugin* self, QEvent* event) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_CustomEvent_IsBase(true);
        vqaccessiblebridgeplugin->customEvent(event);
    } else {
        ((VirtualQAccessibleBridgePlugin*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnCustomEvent(QAccessibleBridgePlugin* self, intptr_t slot) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_CustomEvent_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessibleBridgePlugin_ConnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->connectNotify(*signal);
    } else {
        ((VirtualQAccessibleBridgePlugin*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAccessibleBridgePlugin_QBaseConnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_ConnectNotify_IsBase(true);
        vqaccessiblebridgeplugin->connectNotify(*signal);
    } else {
        ((VirtualQAccessibleBridgePlugin*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnConnectNotify(QAccessibleBridgePlugin* self, intptr_t slot) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_ConnectNotify_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessibleBridgePlugin_DisconnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->disconnectNotify(*signal);
    } else {
        ((VirtualQAccessibleBridgePlugin*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAccessibleBridgePlugin_QBaseDisconnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_DisconnectNotify_IsBase(true);
        vqaccessiblebridgeplugin->disconnectNotify(*signal);
    } else {
        ((VirtualQAccessibleBridgePlugin*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnDisconnectNotify(QAccessibleBridgePlugin* self, intptr_t slot) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_DisconnectNotify_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAccessibleBridgePlugin_Sender(const QAccessibleBridgePlugin* self) {
    auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self));
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        return vqaccessiblebridgeplugin->sender();
    } else {
        return ((VirtualQAccessibleBridgePlugin*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAccessibleBridgePlugin_QBaseSender(const QAccessibleBridgePlugin* self) {
    auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self));
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Sender_IsBase(true);
        return vqaccessiblebridgeplugin->sender();
    } else {
        return ((VirtualQAccessibleBridgePlugin*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnSender(const QAccessibleBridgePlugin* self, intptr_t slot) {
    auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self));
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Sender_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAccessibleBridgePlugin_SenderSignalIndex(const QAccessibleBridgePlugin* self) {
    auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self));
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        return vqaccessiblebridgeplugin->senderSignalIndex();
    } else {
        return ((VirtualQAccessibleBridgePlugin*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAccessibleBridgePlugin_QBaseSenderSignalIndex(const QAccessibleBridgePlugin* self) {
    auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self));
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_SenderSignalIndex_IsBase(true);
        return vqaccessiblebridgeplugin->senderSignalIndex();
    } else {
        return ((VirtualQAccessibleBridgePlugin*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnSenderSignalIndex(const QAccessibleBridgePlugin* self, intptr_t slot) {
    auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self));
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAccessibleBridgePlugin_Receivers(const QAccessibleBridgePlugin* self, const char* signal) {
    auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self));
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        return vqaccessiblebridgeplugin->receivers(signal);
    } else {
        return ((VirtualQAccessibleBridgePlugin*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAccessibleBridgePlugin_QBaseReceivers(const QAccessibleBridgePlugin* self, const char* signal) {
    auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self));
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Receivers_IsBase(true);
        return vqaccessiblebridgeplugin->receivers(signal);
    } else {
        return ((VirtualQAccessibleBridgePlugin*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnReceivers(const QAccessibleBridgePlugin* self, intptr_t slot) {
    auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self));
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Receivers_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAccessibleBridgePlugin_IsSignalConnected(const QAccessibleBridgePlugin* self, const QMetaMethod* signal) {
    auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self));
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        return vqaccessiblebridgeplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualQAccessibleBridgePlugin*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAccessibleBridgePlugin_QBaseIsSignalConnected(const QAccessibleBridgePlugin* self, const QMetaMethod* signal) {
    auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self));
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_IsSignalConnected_IsBase(true);
        return vqaccessiblebridgeplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualQAccessibleBridgePlugin*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnIsSignalConnected(const QAccessibleBridgePlugin* self, intptr_t slot) {
    auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self));
    if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_IsSignalConnected_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_IsSignalConnected_Callback>(slot));
    }
}

void QAccessibleBridgePlugin_Delete(QAccessibleBridgePlugin* self) {
    delete self;
}
