#include <QChildEvent>
#include <QEvent>
#include <QIconEngine>
#include <QIconEnginePlugin>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qiconengineplugin.h>
#include "libqiconengineplugin.h"
#include "libqiconengineplugin.hxx"

QIconEnginePlugin* QIconEnginePlugin_new() {
    return new VirtualQIconEnginePlugin();
}

QIconEnginePlugin* QIconEnginePlugin_new2(QObject* parent) {
    return new VirtualQIconEnginePlugin(parent);
}

QMetaObject* QIconEnginePlugin_MetaObject(const QIconEnginePlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* QIconEnginePlugin_Metacast(QIconEnginePlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QIconEnginePlugin_Metacall(QIconEnginePlugin* self, int param1, int param2, void** param3) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQIconEnginePlugin*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QIconEnginePlugin_OnMetacall(QIconEnginePlugin* self, intptr_t slot) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_Metacall_Callback(reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QIconEnginePlugin_QBaseMetacall(QIconEnginePlugin* self, int param1, int param2, void** param3) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_Metacall_IsBase(true);
        return vqiconengineplugin->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQIconEnginePlugin*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QIconEnginePlugin_Tr(const char* s) {
    QString _ret = QIconEnginePlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QIconEngine* QIconEnginePlugin_Create(QIconEnginePlugin* self, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        return vqiconengineplugin->create(filename_QString);
    } else {
        return ((VirtualQIconEnginePlugin*)self)->create(filename_QString);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QIconEnginePlugin_OnCreate(QIconEnginePlugin* self, intptr_t slot) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_Create_Callback(reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_Create_Callback>(slot));
    }
}

// Virtual base class handler implementation
QIconEngine* QIconEnginePlugin_QBaseCreate(QIconEnginePlugin* self, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_Create_IsBase(true);
        return vqiconengineplugin->create(filename_QString);
    } else {
        return ((VirtualQIconEnginePlugin*)self)->create(filename_QString);
    }
}

libqt_string QIconEnginePlugin_Tr2(const char* s, const char* c) {
    QString _ret = QIconEnginePlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QIconEnginePlugin_Tr3(const char* s, const char* c, int n) {
    QString _ret = QIconEnginePlugin::tr(s, c, static_cast<int>(n));
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
bool QIconEnginePlugin_Event(QIconEnginePlugin* self, QEvent* event) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        return vqiconengineplugin->event(event);
    } else {
        return self->QIconEnginePlugin::event(event);
    }
}

// Base class handler implementation
bool QIconEnginePlugin_QBaseEvent(QIconEnginePlugin* self, QEvent* event) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_Event_IsBase(true);
        return vqiconengineplugin->event(event);
    } else {
        return self->QIconEnginePlugin::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnEvent(QIconEnginePlugin* self, intptr_t slot) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_Event_Callback(reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIconEnginePlugin_EventFilter(QIconEnginePlugin* self, QObject* watched, QEvent* event) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        return vqiconengineplugin->eventFilter(watched, event);
    } else {
        return self->QIconEnginePlugin::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QIconEnginePlugin_QBaseEventFilter(QIconEnginePlugin* self, QObject* watched, QEvent* event) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_EventFilter_IsBase(true);
        return vqiconengineplugin->eventFilter(watched, event);
    } else {
        return self->QIconEnginePlugin::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnEventFilter(QIconEnginePlugin* self, intptr_t slot) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_EventFilter_Callback(reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QIconEnginePlugin_TimerEvent(QIconEnginePlugin* self, QTimerEvent* event) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->timerEvent(event);
    } else {
        ((VirtualQIconEnginePlugin*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QIconEnginePlugin_QBaseTimerEvent(QIconEnginePlugin* self, QTimerEvent* event) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_TimerEvent_IsBase(true);
        vqiconengineplugin->timerEvent(event);
    } else {
        ((VirtualQIconEnginePlugin*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnTimerEvent(QIconEnginePlugin* self, intptr_t slot) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_TimerEvent_Callback(reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QIconEnginePlugin_ChildEvent(QIconEnginePlugin* self, QChildEvent* event) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->childEvent(event);
    } else {
        ((VirtualQIconEnginePlugin*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QIconEnginePlugin_QBaseChildEvent(QIconEnginePlugin* self, QChildEvent* event) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_ChildEvent_IsBase(true);
        vqiconengineplugin->childEvent(event);
    } else {
        ((VirtualQIconEnginePlugin*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnChildEvent(QIconEnginePlugin* self, intptr_t slot) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_ChildEvent_Callback(reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QIconEnginePlugin_CustomEvent(QIconEnginePlugin* self, QEvent* event) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->customEvent(event);
    } else {
        ((VirtualQIconEnginePlugin*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QIconEnginePlugin_QBaseCustomEvent(QIconEnginePlugin* self, QEvent* event) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_CustomEvent_IsBase(true);
        vqiconengineplugin->customEvent(event);
    } else {
        ((VirtualQIconEnginePlugin*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnCustomEvent(QIconEnginePlugin* self, intptr_t slot) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_CustomEvent_Callback(reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QIconEnginePlugin_ConnectNotify(QIconEnginePlugin* self, const QMetaMethod* signal) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->connectNotify(*signal);
    } else {
        ((VirtualQIconEnginePlugin*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QIconEnginePlugin_QBaseConnectNotify(QIconEnginePlugin* self, const QMetaMethod* signal) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_ConnectNotify_IsBase(true);
        vqiconengineplugin->connectNotify(*signal);
    } else {
        ((VirtualQIconEnginePlugin*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnConnectNotify(QIconEnginePlugin* self, intptr_t slot) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_ConnectNotify_Callback(reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QIconEnginePlugin_DisconnectNotify(QIconEnginePlugin* self, const QMetaMethod* signal) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->disconnectNotify(*signal);
    } else {
        ((VirtualQIconEnginePlugin*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QIconEnginePlugin_QBaseDisconnectNotify(QIconEnginePlugin* self, const QMetaMethod* signal) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_DisconnectNotify_IsBase(true);
        vqiconengineplugin->disconnectNotify(*signal);
    } else {
        ((VirtualQIconEnginePlugin*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnDisconnectNotify(QIconEnginePlugin* self, intptr_t slot) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_DisconnectNotify_Callback(reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QIconEnginePlugin_Sender(const QIconEnginePlugin* self) {
    auto* vqiconengineplugin = const_cast<VirtualQIconEnginePlugin*>(dynamic_cast<const VirtualQIconEnginePlugin*>(self));
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        return vqiconengineplugin->sender();
    } else {
        return ((VirtualQIconEnginePlugin*)self)->sender();
    }
}

// Base class handler implementation
QObject* QIconEnginePlugin_QBaseSender(const QIconEnginePlugin* self) {
    auto* vqiconengineplugin = const_cast<VirtualQIconEnginePlugin*>(dynamic_cast<const VirtualQIconEnginePlugin*>(self));
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_Sender_IsBase(true);
        return vqiconengineplugin->sender();
    } else {
        return ((VirtualQIconEnginePlugin*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnSender(const QIconEnginePlugin* self, intptr_t slot) {
    auto* vqiconengineplugin = const_cast<VirtualQIconEnginePlugin*>(dynamic_cast<const VirtualQIconEnginePlugin*>(self));
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_Sender_Callback(reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QIconEnginePlugin_SenderSignalIndex(const QIconEnginePlugin* self) {
    auto* vqiconengineplugin = const_cast<VirtualQIconEnginePlugin*>(dynamic_cast<const VirtualQIconEnginePlugin*>(self));
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        return vqiconengineplugin->senderSignalIndex();
    } else {
        return ((VirtualQIconEnginePlugin*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QIconEnginePlugin_QBaseSenderSignalIndex(const QIconEnginePlugin* self) {
    auto* vqiconengineplugin = const_cast<VirtualQIconEnginePlugin*>(dynamic_cast<const VirtualQIconEnginePlugin*>(self));
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_SenderSignalIndex_IsBase(true);
        return vqiconengineplugin->senderSignalIndex();
    } else {
        return ((VirtualQIconEnginePlugin*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnSenderSignalIndex(const QIconEnginePlugin* self, intptr_t slot) {
    auto* vqiconengineplugin = const_cast<VirtualQIconEnginePlugin*>(dynamic_cast<const VirtualQIconEnginePlugin*>(self));
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_SenderSignalIndex_Callback(reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QIconEnginePlugin_Receivers(const QIconEnginePlugin* self, const char* signal) {
    auto* vqiconengineplugin = const_cast<VirtualQIconEnginePlugin*>(dynamic_cast<const VirtualQIconEnginePlugin*>(self));
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        return vqiconengineplugin->receivers(signal);
    } else {
        return ((VirtualQIconEnginePlugin*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QIconEnginePlugin_QBaseReceivers(const QIconEnginePlugin* self, const char* signal) {
    auto* vqiconengineplugin = const_cast<VirtualQIconEnginePlugin*>(dynamic_cast<const VirtualQIconEnginePlugin*>(self));
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_Receivers_IsBase(true);
        return vqiconengineplugin->receivers(signal);
    } else {
        return ((VirtualQIconEnginePlugin*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnReceivers(const QIconEnginePlugin* self, intptr_t slot) {
    auto* vqiconengineplugin = const_cast<VirtualQIconEnginePlugin*>(dynamic_cast<const VirtualQIconEnginePlugin*>(self));
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_Receivers_Callback(reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIconEnginePlugin_IsSignalConnected(const QIconEnginePlugin* self, const QMetaMethod* signal) {
    auto* vqiconengineplugin = const_cast<VirtualQIconEnginePlugin*>(dynamic_cast<const VirtualQIconEnginePlugin*>(self));
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        return vqiconengineplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualQIconEnginePlugin*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QIconEnginePlugin_QBaseIsSignalConnected(const QIconEnginePlugin* self, const QMetaMethod* signal) {
    auto* vqiconengineplugin = const_cast<VirtualQIconEnginePlugin*>(dynamic_cast<const VirtualQIconEnginePlugin*>(self));
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_IsSignalConnected_IsBase(true);
        return vqiconengineplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualQIconEnginePlugin*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnIsSignalConnected(const QIconEnginePlugin* self, intptr_t slot) {
    auto* vqiconengineplugin = const_cast<VirtualQIconEnginePlugin*>(dynamic_cast<const VirtualQIconEnginePlugin*>(self));
    if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
        vqiconengineplugin->setQIconEnginePlugin_IsSignalConnected_Callback(reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_IsSignalConnected_Callback>(slot));
    }
}

void QIconEnginePlugin_Delete(QIconEnginePlugin* self) {
    delete self;
}
