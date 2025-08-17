#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStylePlugin>
#include <QTimerEvent>
#include <qstyleplugin.h>
#include "libqstyleplugin.h"
#include "libqstyleplugin.hxx"

QStylePlugin* QStylePlugin_new() {
    return new VirtualQStylePlugin();
}

QStylePlugin* QStylePlugin_new2(QObject* parent) {
    return new VirtualQStylePlugin(parent);
}

QMetaObject* QStylePlugin_MetaObject(const QStylePlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* QStylePlugin_Metacast(QStylePlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QStylePlugin_Metacall(QStylePlugin* self, int param1, int param2, void** param3) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQStylePlugin*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStylePlugin_OnMetacall(QStylePlugin* self, intptr_t slot) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_Metacall_Callback(reinterpret_cast<VirtualQStylePlugin::QStylePlugin_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QStylePlugin_QBaseMetacall(QStylePlugin* self, int param1, int param2, void** param3) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_Metacall_IsBase(true);
        return vqstyleplugin->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQStylePlugin*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QStylePlugin_Tr(const char* s) {
    QString _ret = QStylePlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStylePlugin_Tr2(const char* s, const char* c) {
    QString _ret = QStylePlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStylePlugin_Tr3(const char* s, const char* c, int n) {
    QString _ret = QStylePlugin::tr(s, c, static_cast<int>(n));
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
QStyle* QStylePlugin_Create(QStylePlugin* self, const libqt_string key) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        return vqstyleplugin->create(key_QString);
    } else {
        return ((VirtualQStylePlugin*)self)->create(key_QString);
    }
}

// Base class handler implementation
QStyle* QStylePlugin_QBaseCreate(QStylePlugin* self, const libqt_string key) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_Create_IsBase(true);
        return vqstyleplugin->create(key_QString);
    } else {
        return ((VirtualQStylePlugin*)self)->create(key_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnCreate(QStylePlugin* self, intptr_t slot) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_Create_Callback(reinterpret_cast<VirtualQStylePlugin::QStylePlugin_Create_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStylePlugin_Event(QStylePlugin* self, QEvent* event) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        return vqstyleplugin->event(event);
    } else {
        return self->QStylePlugin::event(event);
    }
}

// Base class handler implementation
bool QStylePlugin_QBaseEvent(QStylePlugin* self, QEvent* event) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_Event_IsBase(true);
        return vqstyleplugin->event(event);
    } else {
        return self->QStylePlugin::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnEvent(QStylePlugin* self, intptr_t slot) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_Event_Callback(reinterpret_cast<VirtualQStylePlugin::QStylePlugin_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStylePlugin_EventFilter(QStylePlugin* self, QObject* watched, QEvent* event) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        return vqstyleplugin->eventFilter(watched, event);
    } else {
        return self->QStylePlugin::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QStylePlugin_QBaseEventFilter(QStylePlugin* self, QObject* watched, QEvent* event) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_EventFilter_IsBase(true);
        return vqstyleplugin->eventFilter(watched, event);
    } else {
        return self->QStylePlugin::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnEventFilter(QStylePlugin* self, intptr_t slot) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_EventFilter_Callback(reinterpret_cast<VirtualQStylePlugin::QStylePlugin_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QStylePlugin_TimerEvent(QStylePlugin* self, QTimerEvent* event) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->timerEvent(event);
    } else {
        ((VirtualQStylePlugin*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QStylePlugin_QBaseTimerEvent(QStylePlugin* self, QTimerEvent* event) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_TimerEvent_IsBase(true);
        vqstyleplugin->timerEvent(event);
    } else {
        ((VirtualQStylePlugin*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnTimerEvent(QStylePlugin* self, intptr_t slot) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_TimerEvent_Callback(reinterpret_cast<VirtualQStylePlugin::QStylePlugin_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStylePlugin_ChildEvent(QStylePlugin* self, QChildEvent* event) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->childEvent(event);
    } else {
        ((VirtualQStylePlugin*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QStylePlugin_QBaseChildEvent(QStylePlugin* self, QChildEvent* event) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_ChildEvent_IsBase(true);
        vqstyleplugin->childEvent(event);
    } else {
        ((VirtualQStylePlugin*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnChildEvent(QStylePlugin* self, intptr_t slot) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_ChildEvent_Callback(reinterpret_cast<VirtualQStylePlugin::QStylePlugin_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStylePlugin_CustomEvent(QStylePlugin* self, QEvent* event) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->customEvent(event);
    } else {
        ((VirtualQStylePlugin*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QStylePlugin_QBaseCustomEvent(QStylePlugin* self, QEvent* event) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_CustomEvent_IsBase(true);
        vqstyleplugin->customEvent(event);
    } else {
        ((VirtualQStylePlugin*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnCustomEvent(QStylePlugin* self, intptr_t slot) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_CustomEvent_Callback(reinterpret_cast<VirtualQStylePlugin::QStylePlugin_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStylePlugin_ConnectNotify(QStylePlugin* self, const QMetaMethod* signal) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->connectNotify(*signal);
    } else {
        ((VirtualQStylePlugin*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QStylePlugin_QBaseConnectNotify(QStylePlugin* self, const QMetaMethod* signal) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_ConnectNotify_IsBase(true);
        vqstyleplugin->connectNotify(*signal);
    } else {
        ((VirtualQStylePlugin*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnConnectNotify(QStylePlugin* self, intptr_t slot) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_ConnectNotify_Callback(reinterpret_cast<VirtualQStylePlugin::QStylePlugin_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QStylePlugin_DisconnectNotify(QStylePlugin* self, const QMetaMethod* signal) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->disconnectNotify(*signal);
    } else {
        ((VirtualQStylePlugin*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QStylePlugin_QBaseDisconnectNotify(QStylePlugin* self, const QMetaMethod* signal) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_DisconnectNotify_IsBase(true);
        vqstyleplugin->disconnectNotify(*signal);
    } else {
        ((VirtualQStylePlugin*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnDisconnectNotify(QStylePlugin* self, intptr_t slot) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_DisconnectNotify_Callback(reinterpret_cast<VirtualQStylePlugin::QStylePlugin_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QStylePlugin_Sender(const QStylePlugin* self) {
    auto* vqstyleplugin = const_cast<VirtualQStylePlugin*>(dynamic_cast<const VirtualQStylePlugin*>(self));
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        return vqstyleplugin->sender();
    } else {
        return ((VirtualQStylePlugin*)self)->sender();
    }
}

// Base class handler implementation
QObject* QStylePlugin_QBaseSender(const QStylePlugin* self) {
    auto* vqstyleplugin = const_cast<VirtualQStylePlugin*>(dynamic_cast<const VirtualQStylePlugin*>(self));
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_Sender_IsBase(true);
        return vqstyleplugin->sender();
    } else {
        return ((VirtualQStylePlugin*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnSender(const QStylePlugin* self, intptr_t slot) {
    auto* vqstyleplugin = const_cast<VirtualQStylePlugin*>(dynamic_cast<const VirtualQStylePlugin*>(self));
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_Sender_Callback(reinterpret_cast<VirtualQStylePlugin::QStylePlugin_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QStylePlugin_SenderSignalIndex(const QStylePlugin* self) {
    auto* vqstyleplugin = const_cast<VirtualQStylePlugin*>(dynamic_cast<const VirtualQStylePlugin*>(self));
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        return vqstyleplugin->senderSignalIndex();
    } else {
        return ((VirtualQStylePlugin*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QStylePlugin_QBaseSenderSignalIndex(const QStylePlugin* self) {
    auto* vqstyleplugin = const_cast<VirtualQStylePlugin*>(dynamic_cast<const VirtualQStylePlugin*>(self));
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_SenderSignalIndex_IsBase(true);
        return vqstyleplugin->senderSignalIndex();
    } else {
        return ((VirtualQStylePlugin*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnSenderSignalIndex(const QStylePlugin* self, intptr_t slot) {
    auto* vqstyleplugin = const_cast<VirtualQStylePlugin*>(dynamic_cast<const VirtualQStylePlugin*>(self));
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_SenderSignalIndex_Callback(reinterpret_cast<VirtualQStylePlugin::QStylePlugin_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QStylePlugin_Receivers(const QStylePlugin* self, const char* signal) {
    auto* vqstyleplugin = const_cast<VirtualQStylePlugin*>(dynamic_cast<const VirtualQStylePlugin*>(self));
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        return vqstyleplugin->receivers(signal);
    } else {
        return ((VirtualQStylePlugin*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QStylePlugin_QBaseReceivers(const QStylePlugin* self, const char* signal) {
    auto* vqstyleplugin = const_cast<VirtualQStylePlugin*>(dynamic_cast<const VirtualQStylePlugin*>(self));
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_Receivers_IsBase(true);
        return vqstyleplugin->receivers(signal);
    } else {
        return ((VirtualQStylePlugin*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnReceivers(const QStylePlugin* self, intptr_t slot) {
    auto* vqstyleplugin = const_cast<VirtualQStylePlugin*>(dynamic_cast<const VirtualQStylePlugin*>(self));
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_Receivers_Callback(reinterpret_cast<VirtualQStylePlugin::QStylePlugin_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStylePlugin_IsSignalConnected(const QStylePlugin* self, const QMetaMethod* signal) {
    auto* vqstyleplugin = const_cast<VirtualQStylePlugin*>(dynamic_cast<const VirtualQStylePlugin*>(self));
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        return vqstyleplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualQStylePlugin*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QStylePlugin_QBaseIsSignalConnected(const QStylePlugin* self, const QMetaMethod* signal) {
    auto* vqstyleplugin = const_cast<VirtualQStylePlugin*>(dynamic_cast<const VirtualQStylePlugin*>(self));
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_IsSignalConnected_IsBase(true);
        return vqstyleplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualQStylePlugin*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnIsSignalConnected(const QStylePlugin* self, intptr_t slot) {
    auto* vqstyleplugin = const_cast<VirtualQStylePlugin*>(dynamic_cast<const VirtualQStylePlugin*>(self));
    if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
        vqstyleplugin->setQStylePlugin_IsSignalConnected_Callback(reinterpret_cast<VirtualQStylePlugin::QStylePlugin_IsSignalConnected_Callback>(slot));
    }
}

void QStylePlugin_Delete(QStylePlugin* self) {
    delete self;
}
