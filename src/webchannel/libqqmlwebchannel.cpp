#include <QChildEvent>
#include <QEvent>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlWebChannel>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <QWebChannel>
#include <qqmlwebchannel.h>
#include "libqqmlwebchannel.h"
#include "libqqmlwebchannel.hxx"

QQmlWebChannel* QQmlWebChannel_new() {
    return new VirtualQQmlWebChannel();
}

QQmlWebChannel* QQmlWebChannel_new2(QObject* parent) {
    return new VirtualQQmlWebChannel(parent);
}

QMetaObject* QQmlWebChannel_MetaObject(const QQmlWebChannel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQmlWebChannel_Metacast(QQmlWebChannel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQmlWebChannel_Metacall(QQmlWebChannel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQmlWebChannel_Tr(const char* s) {
    auto _ret = QQmlWebChannel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQmlWebChannel_RegisterObjects(QQmlWebChannel* self, const libqt_map /* of libqt_string to QVariant* */ objects) {
    QMap<QString, QVariant> objects_QMap;
    libqt_string* objects_karr = static_cast<libqt_string*>(objects.keys);
    QVariant** objects_varr = static_cast<QVariant**>(objects.values);
    for (size_t i = 0; i < objects.len; ++i) {
        QString objects_karr_i_QString = QString::fromUtf8(objects_karr[i].data, objects_karr[i].len);
        objects_QMap.insert(objects_karr_i_QString, *(objects_varr[i]));
    }
    self->registerObjects(objects_QMap);
}

void QQmlWebChannel_ConnectTo(QQmlWebChannel* self, QObject* transport) {
    self->connectTo(transport);
}

void QQmlWebChannel_DisconnectFrom(QQmlWebChannel* self, QObject* transport) {
    self->disconnectFrom(transport);
}

libqt_string QQmlWebChannel_Tr2(const char* s, const char* c) {
    auto _ret = QQmlWebChannel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQmlWebChannel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQmlWebChannel::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQmlWebChannel_SuperMetaObject(const QQmlWebChannel* self) {
    auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self));
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        vqqmlwebchannel->setQQmlWebChannel_MetaObject_IsBase(true);
        return (QMetaObject*)vqqmlwebchannel->metaObject();
    } else {
        return (QMetaObject*)self->QQmlWebChannel::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnMetaObject(const QQmlWebChannel* self, intptr_t slot) {
    auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self));
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel)
        vqqmlwebchannel->setQQmlWebChannel_MetaObject_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQmlWebChannel_SuperMetacast(QQmlWebChannel* self, const char* param1) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        vqqmlwebchannel->setQQmlWebChannel_Metacast_IsBase(true);
        return vqqmlwebchannel->qt_metacast(param1);
    } else {
        return self->QQmlWebChannel::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnMetacast(QQmlWebChannel* self, intptr_t slot) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel)
        vqqmlwebchannel->setQQmlWebChannel_Metacast_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQmlWebChannel_SuperMetacall(QQmlWebChannel* self, int param1, int param2, void** param3) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        vqqmlwebchannel->setQQmlWebChannel_Metacall_IsBase(true);
        return vqqmlwebchannel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQmlWebChannel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnMetacall(QQmlWebChannel* self, intptr_t slot) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel)
        vqqmlwebchannel->setQQmlWebChannel_Metacall_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_Metacall_Callback>(slot));
}

// Derived class handler implementation
bool QQmlWebChannel_Event(QQmlWebChannel* self, QEvent* event) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        return vqqmlwebchannel->event(event);
    } else {
        return self->QQmlWebChannel::event(event);
    }
}

// Base class handler implementation
bool QQmlWebChannel_SuperEvent(QQmlWebChannel* self, QEvent* event) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        vqqmlwebchannel->setQQmlWebChannel_Event_IsBase(true);
        return vqqmlwebchannel->event(event);
    } else {
        return self->QQmlWebChannel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnEvent(QQmlWebChannel* self, intptr_t slot) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel)
        vqqmlwebchannel->setQQmlWebChannel_Event_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQmlWebChannel_EventFilter(QQmlWebChannel* self, QObject* watched, QEvent* event) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        return vqqmlwebchannel->eventFilter(watched, event);
    } else {
        return self->QQmlWebChannel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQmlWebChannel_SuperEventFilter(QQmlWebChannel* self, QObject* watched, QEvent* event) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        vqqmlwebchannel->setQQmlWebChannel_EventFilter_IsBase(true);
        return vqqmlwebchannel->eventFilter(watched, event);
    } else {
        return self->QQmlWebChannel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnEventFilter(QQmlWebChannel* self, intptr_t slot) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel)
        vqqmlwebchannel->setQQmlWebChannel_EventFilter_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQmlWebChannel_TimerEvent(QQmlWebChannel* self, QTimerEvent* event) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        vqqmlwebchannel->timerEvent(event);
    } else {
        ((VirtualQQmlWebChannel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQmlWebChannel_SuperTimerEvent(QQmlWebChannel* self, QTimerEvent* event) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        vqqmlwebchannel->setQQmlWebChannel_TimerEvent_IsBase(true);
        vqqmlwebchannel->timerEvent(event);
    } else {
        ((VirtualQQmlWebChannel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnTimerEvent(QQmlWebChannel* self, intptr_t slot) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel)
        vqqmlwebchannel->setQQmlWebChannel_TimerEvent_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlWebChannel_ChildEvent(QQmlWebChannel* self, QChildEvent* event) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        vqqmlwebchannel->childEvent(event);
    } else {
        ((VirtualQQmlWebChannel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQmlWebChannel_SuperChildEvent(QQmlWebChannel* self, QChildEvent* event) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        vqqmlwebchannel->setQQmlWebChannel_ChildEvent_IsBase(true);
        vqqmlwebchannel->childEvent(event);
    } else {
        ((VirtualQQmlWebChannel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnChildEvent(QQmlWebChannel* self, intptr_t slot) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel)
        vqqmlwebchannel->setQQmlWebChannel_ChildEvent_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlWebChannel_CustomEvent(QQmlWebChannel* self, QEvent* event) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        vqqmlwebchannel->customEvent(event);
    } else {
        ((VirtualQQmlWebChannel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQmlWebChannel_SuperCustomEvent(QQmlWebChannel* self, QEvent* event) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        vqqmlwebchannel->setQQmlWebChannel_CustomEvent_IsBase(true);
        vqqmlwebchannel->customEvent(event);
    } else {
        ((VirtualQQmlWebChannel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnCustomEvent(QQmlWebChannel* self, intptr_t slot) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel)
        vqqmlwebchannel->setQQmlWebChannel_CustomEvent_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlWebChannel_ConnectNotify(QQmlWebChannel* self, const QMetaMethod* signal) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        vqqmlwebchannel->connectNotify(*signal);
    } else {
        ((VirtualQQmlWebChannel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQmlWebChannel_SuperConnectNotify(QQmlWebChannel* self, const QMetaMethod* signal) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        vqqmlwebchannel->setQQmlWebChannel_ConnectNotify_IsBase(true);
        vqqmlwebchannel->connectNotify(*signal);
    } else {
        ((VirtualQQmlWebChannel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnConnectNotify(QQmlWebChannel* self, intptr_t slot) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel)
        vqqmlwebchannel->setQQmlWebChannel_ConnectNotify_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQmlWebChannel_DisconnectNotify(QQmlWebChannel* self, const QMetaMethod* signal) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        vqqmlwebchannel->disconnectNotify(*signal);
    } else {
        ((VirtualQQmlWebChannel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQmlWebChannel_SuperDisconnectNotify(QQmlWebChannel* self, const QMetaMethod* signal) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        vqqmlwebchannel->setQQmlWebChannel_DisconnectNotify_IsBase(true);
        vqqmlwebchannel->disconnectNotify(*signal);
    } else {
        ((VirtualQQmlWebChannel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnDisconnectNotify(QQmlWebChannel* self, intptr_t slot) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel)
        vqqmlwebchannel->setQQmlWebChannel_DisconnectNotify_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* QQmlWebChannel_Sender(const QQmlWebChannel* self) {
    auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self));
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        return vqqmlwebchannel->sender();
    } else {
        return ((VirtualQQmlWebChannel*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQmlWebChannel_SuperSender(const QQmlWebChannel* self) {
    auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self));
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        vqqmlwebchannel->setQQmlWebChannel_Sender_IsBase(true);
        return vqqmlwebchannel->sender();
    } else {
        return ((VirtualQQmlWebChannel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnSender(const QQmlWebChannel* self, intptr_t slot) {
    auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self));
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel)
        vqqmlwebchannel->setQQmlWebChannel_Sender_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQmlWebChannel_SenderSignalIndex(const QQmlWebChannel* self) {
    auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self));
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        return vqqmlwebchannel->senderSignalIndex();
    } else {
        return ((VirtualQQmlWebChannel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQmlWebChannel_SuperSenderSignalIndex(const QQmlWebChannel* self) {
    auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self));
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        vqqmlwebchannel->setQQmlWebChannel_SenderSignalIndex_IsBase(true);
        return vqqmlwebchannel->senderSignalIndex();
    } else {
        return ((VirtualQQmlWebChannel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnSenderSignalIndex(const QQmlWebChannel* self, intptr_t slot) {
    auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self));
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel)
        vqqmlwebchannel->setQQmlWebChannel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQmlWebChannel_Receivers(const QQmlWebChannel* self, const char* signal) {
    auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self));
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        return vqqmlwebchannel->receivers(signal);
    } else {
        return ((VirtualQQmlWebChannel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQmlWebChannel_SuperReceivers(const QQmlWebChannel* self, const char* signal) {
    auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self));
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        vqqmlwebchannel->setQQmlWebChannel_Receivers_IsBase(true);
        return vqqmlwebchannel->receivers(signal);
    } else {
        return ((VirtualQQmlWebChannel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnReceivers(const QQmlWebChannel* self, intptr_t slot) {
    auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self));
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel)
        vqqmlwebchannel->setQQmlWebChannel_Receivers_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQmlWebChannel_IsSignalConnected(const QQmlWebChannel* self, const QMetaMethod* signal) {
    auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self));
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        return vqqmlwebchannel->isSignalConnected(*signal);
    } else {
        return ((VirtualQQmlWebChannel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQmlWebChannel_SuperIsSignalConnected(const QQmlWebChannel* self, const QMetaMethod* signal) {
    auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self));
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel) {
        vqqmlwebchannel->setQQmlWebChannel_IsSignalConnected_IsBase(true);
        return vqqmlwebchannel->isSignalConnected(*signal);
    } else {
        return ((VirtualQQmlWebChannel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnIsSignalConnected(const QQmlWebChannel* self, intptr_t slot) {
    auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self));
    if (vqqmlwebchannel && vqqmlwebchannel->isVirtualQQmlWebChannel)
        vqqmlwebchannel->setQQmlWebChannel_IsSignalConnected_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_IsSignalConnected_Callback>(slot));
}

void QQmlWebChannel_Delete(QQmlWebChannel* self) {
    delete self;
}
