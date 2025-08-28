#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSqlDriver>
#include <QSqlDriverPlugin>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qsqldriverplugin.h>
#include "libqsqldriverplugin.h"
#include "libqsqldriverplugin.hxx"

QSqlDriverPlugin* QSqlDriverPlugin_new() {
    return new VirtualQSqlDriverPlugin();
}

QSqlDriverPlugin* QSqlDriverPlugin_new2(QObject* parent) {
    return new VirtualQSqlDriverPlugin(parent);
}

QMetaObject* QSqlDriverPlugin_MetaObject(const QSqlDriverPlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSqlDriverPlugin_Metacast(QSqlDriverPlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSqlDriverPlugin_Metacall(QSqlDriverPlugin* self, int param1, int param2, void** param3) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSqlDriverPlugin*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSqlDriverPlugin_OnMetacall(QSqlDriverPlugin* self, intptr_t slot) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_Metacall_Callback(reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSqlDriverPlugin_QBaseMetacall(QSqlDriverPlugin* self, int param1, int param2, void** param3) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_Metacall_IsBase(true);
        return vqsqldriverplugin->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSqlDriverPlugin*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSqlDriverPlugin_Tr(const char* s) {
    QString _ret = QSqlDriverPlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSqlDriver* QSqlDriverPlugin_Create(QSqlDriverPlugin* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        return vqsqldriverplugin->create(key_QString);
    } else {
        return ((VirtualQSqlDriverPlugin*)self)->create(key_QString);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSqlDriverPlugin_OnCreate(QSqlDriverPlugin* self, intptr_t slot) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_Create_Callback(reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_Create_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSqlDriver* QSqlDriverPlugin_QBaseCreate(QSqlDriverPlugin* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_Create_IsBase(true);
        return vqsqldriverplugin->create(key_QString);
    } else {
        return ((VirtualQSqlDriverPlugin*)self)->create(key_QString);
    }
}

libqt_string QSqlDriverPlugin_Tr2(const char* s, const char* c) {
    QString _ret = QSqlDriverPlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSqlDriverPlugin_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSqlDriverPlugin::tr(s, c, static_cast<int>(n));
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
bool QSqlDriverPlugin_Event(QSqlDriverPlugin* self, QEvent* event) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        return vqsqldriverplugin->event(event);
    } else {
        return self->QSqlDriverPlugin::event(event);
    }
}

// Base class handler implementation
bool QSqlDriverPlugin_QBaseEvent(QSqlDriverPlugin* self, QEvent* event) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_Event_IsBase(true);
        return vqsqldriverplugin->event(event);
    } else {
        return self->QSqlDriverPlugin::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnEvent(QSqlDriverPlugin* self, intptr_t slot) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_Event_Callback(reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlDriverPlugin_EventFilter(QSqlDriverPlugin* self, QObject* watched, QEvent* event) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        return vqsqldriverplugin->eventFilter(watched, event);
    } else {
        return self->QSqlDriverPlugin::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSqlDriverPlugin_QBaseEventFilter(QSqlDriverPlugin* self, QObject* watched, QEvent* event) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_EventFilter_IsBase(true);
        return vqsqldriverplugin->eventFilter(watched, event);
    } else {
        return self->QSqlDriverPlugin::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnEventFilter(QSqlDriverPlugin* self, intptr_t slot) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_EventFilter_Callback(reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlDriverPlugin_TimerEvent(QSqlDriverPlugin* self, QTimerEvent* event) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->timerEvent(event);
    } else {
        ((VirtualQSqlDriverPlugin*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSqlDriverPlugin_QBaseTimerEvent(QSqlDriverPlugin* self, QTimerEvent* event) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_TimerEvent_IsBase(true);
        vqsqldriverplugin->timerEvent(event);
    } else {
        ((VirtualQSqlDriverPlugin*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnTimerEvent(QSqlDriverPlugin* self, intptr_t slot) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_TimerEvent_Callback(reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlDriverPlugin_ChildEvent(QSqlDriverPlugin* self, QChildEvent* event) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->childEvent(event);
    } else {
        ((VirtualQSqlDriverPlugin*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSqlDriverPlugin_QBaseChildEvent(QSqlDriverPlugin* self, QChildEvent* event) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_ChildEvent_IsBase(true);
        vqsqldriverplugin->childEvent(event);
    } else {
        ((VirtualQSqlDriverPlugin*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnChildEvent(QSqlDriverPlugin* self, intptr_t slot) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_ChildEvent_Callback(reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlDriverPlugin_CustomEvent(QSqlDriverPlugin* self, QEvent* event) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->customEvent(event);
    } else {
        ((VirtualQSqlDriverPlugin*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSqlDriverPlugin_QBaseCustomEvent(QSqlDriverPlugin* self, QEvent* event) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_CustomEvent_IsBase(true);
        vqsqldriverplugin->customEvent(event);
    } else {
        ((VirtualQSqlDriverPlugin*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnCustomEvent(QSqlDriverPlugin* self, intptr_t slot) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_CustomEvent_Callback(reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlDriverPlugin_ConnectNotify(QSqlDriverPlugin* self, const QMetaMethod* signal) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->connectNotify(*signal);
    } else {
        ((VirtualQSqlDriverPlugin*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSqlDriverPlugin_QBaseConnectNotify(QSqlDriverPlugin* self, const QMetaMethod* signal) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_ConnectNotify_IsBase(true);
        vqsqldriverplugin->connectNotify(*signal);
    } else {
        ((VirtualQSqlDriverPlugin*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnConnectNotify(QSqlDriverPlugin* self, intptr_t slot) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_ConnectNotify_Callback(reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSqlDriverPlugin_DisconnectNotify(QSqlDriverPlugin* self, const QMetaMethod* signal) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->disconnectNotify(*signal);
    } else {
        ((VirtualQSqlDriverPlugin*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSqlDriverPlugin_QBaseDisconnectNotify(QSqlDriverPlugin* self, const QMetaMethod* signal) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_DisconnectNotify_IsBase(true);
        vqsqldriverplugin->disconnectNotify(*signal);
    } else {
        ((VirtualQSqlDriverPlugin*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnDisconnectNotify(QSqlDriverPlugin* self, intptr_t slot) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_DisconnectNotify_Callback(reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSqlDriverPlugin_Sender(const QSqlDriverPlugin* self) {
    auto* vqsqldriverplugin = const_cast<VirtualQSqlDriverPlugin*>(dynamic_cast<const VirtualQSqlDriverPlugin*>(self));
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        return vqsqldriverplugin->sender();
    } else {
        return ((VirtualQSqlDriverPlugin*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSqlDriverPlugin_QBaseSender(const QSqlDriverPlugin* self) {
    auto* vqsqldriverplugin = const_cast<VirtualQSqlDriverPlugin*>(dynamic_cast<const VirtualQSqlDriverPlugin*>(self));
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_Sender_IsBase(true);
        return vqsqldriverplugin->sender();
    } else {
        return ((VirtualQSqlDriverPlugin*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnSender(const QSqlDriverPlugin* self, intptr_t slot) {
    auto* vqsqldriverplugin = const_cast<VirtualQSqlDriverPlugin*>(dynamic_cast<const VirtualQSqlDriverPlugin*>(self));
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_Sender_Callback(reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlDriverPlugin_SenderSignalIndex(const QSqlDriverPlugin* self) {
    auto* vqsqldriverplugin = const_cast<VirtualQSqlDriverPlugin*>(dynamic_cast<const VirtualQSqlDriverPlugin*>(self));
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        return vqsqldriverplugin->senderSignalIndex();
    } else {
        return ((VirtualQSqlDriverPlugin*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSqlDriverPlugin_QBaseSenderSignalIndex(const QSqlDriverPlugin* self) {
    auto* vqsqldriverplugin = const_cast<VirtualQSqlDriverPlugin*>(dynamic_cast<const VirtualQSqlDriverPlugin*>(self));
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_SenderSignalIndex_IsBase(true);
        return vqsqldriverplugin->senderSignalIndex();
    } else {
        return ((VirtualQSqlDriverPlugin*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnSenderSignalIndex(const QSqlDriverPlugin* self, intptr_t slot) {
    auto* vqsqldriverplugin = const_cast<VirtualQSqlDriverPlugin*>(dynamic_cast<const VirtualQSqlDriverPlugin*>(self));
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSqlDriverPlugin_Receivers(const QSqlDriverPlugin* self, const char* signal) {
    auto* vqsqldriverplugin = const_cast<VirtualQSqlDriverPlugin*>(dynamic_cast<const VirtualQSqlDriverPlugin*>(self));
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        return vqsqldriverplugin->receivers(signal);
    } else {
        return ((VirtualQSqlDriverPlugin*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSqlDriverPlugin_QBaseReceivers(const QSqlDriverPlugin* self, const char* signal) {
    auto* vqsqldriverplugin = const_cast<VirtualQSqlDriverPlugin*>(dynamic_cast<const VirtualQSqlDriverPlugin*>(self));
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_Receivers_IsBase(true);
        return vqsqldriverplugin->receivers(signal);
    } else {
        return ((VirtualQSqlDriverPlugin*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnReceivers(const QSqlDriverPlugin* self, intptr_t slot) {
    auto* vqsqldriverplugin = const_cast<VirtualQSqlDriverPlugin*>(dynamic_cast<const VirtualQSqlDriverPlugin*>(self));
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_Receivers_Callback(reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSqlDriverPlugin_IsSignalConnected(const QSqlDriverPlugin* self, const QMetaMethod* signal) {
    auto* vqsqldriverplugin = const_cast<VirtualQSqlDriverPlugin*>(dynamic_cast<const VirtualQSqlDriverPlugin*>(self));
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        return vqsqldriverplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualQSqlDriverPlugin*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSqlDriverPlugin_QBaseIsSignalConnected(const QSqlDriverPlugin* self, const QMetaMethod* signal) {
    auto* vqsqldriverplugin = const_cast<VirtualQSqlDriverPlugin*>(dynamic_cast<const VirtualQSqlDriverPlugin*>(self));
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_IsSignalConnected_IsBase(true);
        return vqsqldriverplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualQSqlDriverPlugin*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnIsSignalConnected(const QSqlDriverPlugin* self, intptr_t slot) {
    auto* vqsqldriverplugin = const_cast<VirtualQSqlDriverPlugin*>(dynamic_cast<const VirtualQSqlDriverPlugin*>(self));
    if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
        vqsqldriverplugin->setQSqlDriverPlugin_IsSignalConnected_Callback(reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_IsSignalConnected_Callback>(slot));
    }
}

void QSqlDriverPlugin_Delete(QSqlDriverPlugin* self) {
    delete self;
}
