#include <QChildEvent>
#include <QDBusConnection>
#include <QDBusMessage>
#include <QDBusVirtualObject>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qdbusvirtualobject.h>
#include "libqdbusvirtualobject.h"
#include "libqdbusvirtualobject.hxx"

QDBusVirtualObject* QDBusVirtualObject_new() {
    return new VirtualQDBusVirtualObject();
}

QDBusVirtualObject* QDBusVirtualObject_new2(QObject* parent) {
    return new VirtualQDBusVirtualObject(parent);
}

QMetaObject* QDBusVirtualObject_MetaObject(const QDBusVirtualObject* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDBusVirtualObject_Metacast(QDBusVirtualObject* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDBusVirtualObject_Metacall(QDBusVirtualObject* self, int param1, int param2, void** param3) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDBusVirtualObject*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDBusVirtualObject_Tr(const char* s) {
    QString _ret = QDBusVirtualObject::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDBusVirtualObject_Introspect(const QDBusVirtualObject* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    auto* vqdbusvirtualobject = dynamic_cast<const VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        QString _ret = vqdbusvirtualobject->introspect(path_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDBusVirtualObject*)self)->introspect(path_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

bool QDBusVirtualObject_HandleMessage(QDBusVirtualObject* self, const QDBusMessage* message, const QDBusConnection* connection) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        return vqdbusvirtualobject->handleMessage(*message, *connection);
    } else {
        return ((VirtualQDBusVirtualObject*)self)->handleMessage(*message, *connection);
    }
}

libqt_string QDBusVirtualObject_Tr2(const char* s, const char* c) {
    QString _ret = QDBusVirtualObject::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDBusVirtualObject_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDBusVirtualObject::tr(s, c, static_cast<int>(n));
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
int QDBusVirtualObject_QBaseMetacall(QDBusVirtualObject* self, int param1, int param2, void** param3) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_Metacall_IsBase(true);
        return vqdbusvirtualobject->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QDBusVirtualObject::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnMetacall(QDBusVirtualObject* self, intptr_t slot) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_Metacall_Callback(reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QDBusVirtualObject_QBaseIntrospect(const QDBusVirtualObject* self, const libqt_string path) {
    auto* vqdbusvirtualobject = const_cast<VirtualQDBusVirtualObject*>(dynamic_cast<const VirtualQDBusVirtualObject*>(self));
    QString path_QString = QString::fromUtf8(path.data, path.len);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_Introspect_IsBase(true);
        QString _ret = vqdbusvirtualobject->introspect(path_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDBusVirtualObject*)self)->introspect(path_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnIntrospect(const QDBusVirtualObject* self, intptr_t slot) {
    auto* vqdbusvirtualobject = const_cast<VirtualQDBusVirtualObject*>(dynamic_cast<const VirtualQDBusVirtualObject*>(self));
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_Introspect_Callback(reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_Introspect_Callback>(slot));
    }
}

// Base class handler implementation
bool QDBusVirtualObject_QBaseHandleMessage(QDBusVirtualObject* self, const QDBusMessage* message, const QDBusConnection* connection) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_HandleMessage_IsBase(true);
        return vqdbusvirtualobject->handleMessage(*message, *connection);
    } else {
        return ((VirtualQDBusVirtualObject*)self)->handleMessage(*message, *connection);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnHandleMessage(QDBusVirtualObject* self, intptr_t slot) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_HandleMessage_Callback(reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_HandleMessage_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDBusVirtualObject_Event(QDBusVirtualObject* self, QEvent* event) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        return vqdbusvirtualobject->event(event);
    } else {
        return self->QDBusVirtualObject::event(event);
    }
}

// Base class handler implementation
bool QDBusVirtualObject_QBaseEvent(QDBusVirtualObject* self, QEvent* event) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_Event_IsBase(true);
        return vqdbusvirtualobject->event(event);
    } else {
        return self->QDBusVirtualObject::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnEvent(QDBusVirtualObject* self, intptr_t slot) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_Event_Callback(reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDBusVirtualObject_EventFilter(QDBusVirtualObject* self, QObject* watched, QEvent* event) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        return vqdbusvirtualobject->eventFilter(watched, event);
    } else {
        return self->QDBusVirtualObject::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDBusVirtualObject_QBaseEventFilter(QDBusVirtualObject* self, QObject* watched, QEvent* event) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_EventFilter_IsBase(true);
        return vqdbusvirtualobject->eventFilter(watched, event);
    } else {
        return self->QDBusVirtualObject::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnEventFilter(QDBusVirtualObject* self, intptr_t slot) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_EventFilter_Callback(reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusVirtualObject_TimerEvent(QDBusVirtualObject* self, QTimerEvent* event) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->timerEvent(event);
    } else {
        ((VirtualQDBusVirtualObject*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDBusVirtualObject_QBaseTimerEvent(QDBusVirtualObject* self, QTimerEvent* event) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_TimerEvent_IsBase(true);
        vqdbusvirtualobject->timerEvent(event);
    } else {
        ((VirtualQDBusVirtualObject*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnTimerEvent(QDBusVirtualObject* self, intptr_t slot) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_TimerEvent_Callback(reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusVirtualObject_ChildEvent(QDBusVirtualObject* self, QChildEvent* event) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->childEvent(event);
    } else {
        ((VirtualQDBusVirtualObject*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDBusVirtualObject_QBaseChildEvent(QDBusVirtualObject* self, QChildEvent* event) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_ChildEvent_IsBase(true);
        vqdbusvirtualobject->childEvent(event);
    } else {
        ((VirtualQDBusVirtualObject*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnChildEvent(QDBusVirtualObject* self, intptr_t slot) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_ChildEvent_Callback(reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusVirtualObject_CustomEvent(QDBusVirtualObject* self, QEvent* event) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->customEvent(event);
    } else {
        ((VirtualQDBusVirtualObject*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDBusVirtualObject_QBaseCustomEvent(QDBusVirtualObject* self, QEvent* event) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_CustomEvent_IsBase(true);
        vqdbusvirtualobject->customEvent(event);
    } else {
        ((VirtualQDBusVirtualObject*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnCustomEvent(QDBusVirtualObject* self, intptr_t slot) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_CustomEvent_Callback(reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusVirtualObject_ConnectNotify(QDBusVirtualObject* self, const QMetaMethod* signal) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->connectNotify(*signal);
    } else {
        ((VirtualQDBusVirtualObject*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDBusVirtualObject_QBaseConnectNotify(QDBusVirtualObject* self, const QMetaMethod* signal) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_ConnectNotify_IsBase(true);
        vqdbusvirtualobject->connectNotify(*signal);
    } else {
        ((VirtualQDBusVirtualObject*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnConnectNotify(QDBusVirtualObject* self, intptr_t slot) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_ConnectNotify_Callback(reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusVirtualObject_DisconnectNotify(QDBusVirtualObject* self, const QMetaMethod* signal) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->disconnectNotify(*signal);
    } else {
        ((VirtualQDBusVirtualObject*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDBusVirtualObject_QBaseDisconnectNotify(QDBusVirtualObject* self, const QMetaMethod* signal) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_DisconnectNotify_IsBase(true);
        vqdbusvirtualobject->disconnectNotify(*signal);
    } else {
        ((VirtualQDBusVirtualObject*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnDisconnectNotify(QDBusVirtualObject* self, intptr_t slot) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_DisconnectNotify_Callback(reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDBusVirtualObject_Sender(const QDBusVirtualObject* self) {
    auto* vqdbusvirtualobject = const_cast<VirtualQDBusVirtualObject*>(dynamic_cast<const VirtualQDBusVirtualObject*>(self));
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        return vqdbusvirtualobject->sender();
    } else {
        return ((VirtualQDBusVirtualObject*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDBusVirtualObject_QBaseSender(const QDBusVirtualObject* self) {
    auto* vqdbusvirtualobject = const_cast<VirtualQDBusVirtualObject*>(dynamic_cast<const VirtualQDBusVirtualObject*>(self));
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_Sender_IsBase(true);
        return vqdbusvirtualobject->sender();
    } else {
        return ((VirtualQDBusVirtualObject*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnSender(const QDBusVirtualObject* self, intptr_t slot) {
    auto* vqdbusvirtualobject = const_cast<VirtualQDBusVirtualObject*>(dynamic_cast<const VirtualQDBusVirtualObject*>(self));
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_Sender_Callback(reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDBusVirtualObject_SenderSignalIndex(const QDBusVirtualObject* self) {
    auto* vqdbusvirtualobject = const_cast<VirtualQDBusVirtualObject*>(dynamic_cast<const VirtualQDBusVirtualObject*>(self));
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        return vqdbusvirtualobject->senderSignalIndex();
    } else {
        return ((VirtualQDBusVirtualObject*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDBusVirtualObject_QBaseSenderSignalIndex(const QDBusVirtualObject* self) {
    auto* vqdbusvirtualobject = const_cast<VirtualQDBusVirtualObject*>(dynamic_cast<const VirtualQDBusVirtualObject*>(self));
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_SenderSignalIndex_IsBase(true);
        return vqdbusvirtualobject->senderSignalIndex();
    } else {
        return ((VirtualQDBusVirtualObject*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnSenderSignalIndex(const QDBusVirtualObject* self, intptr_t slot) {
    auto* vqdbusvirtualobject = const_cast<VirtualQDBusVirtualObject*>(dynamic_cast<const VirtualQDBusVirtualObject*>(self));
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDBusVirtualObject_Receivers(const QDBusVirtualObject* self, const char* signal) {
    auto* vqdbusvirtualobject = const_cast<VirtualQDBusVirtualObject*>(dynamic_cast<const VirtualQDBusVirtualObject*>(self));
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        return vqdbusvirtualobject->receivers(signal);
    } else {
        return ((VirtualQDBusVirtualObject*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDBusVirtualObject_QBaseReceivers(const QDBusVirtualObject* self, const char* signal) {
    auto* vqdbusvirtualobject = const_cast<VirtualQDBusVirtualObject*>(dynamic_cast<const VirtualQDBusVirtualObject*>(self));
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_Receivers_IsBase(true);
        return vqdbusvirtualobject->receivers(signal);
    } else {
        return ((VirtualQDBusVirtualObject*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnReceivers(const QDBusVirtualObject* self, intptr_t slot) {
    auto* vqdbusvirtualobject = const_cast<VirtualQDBusVirtualObject*>(dynamic_cast<const VirtualQDBusVirtualObject*>(self));
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_Receivers_Callback(reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDBusVirtualObject_IsSignalConnected(const QDBusVirtualObject* self, const QMetaMethod* signal) {
    auto* vqdbusvirtualobject = const_cast<VirtualQDBusVirtualObject*>(dynamic_cast<const VirtualQDBusVirtualObject*>(self));
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        return vqdbusvirtualobject->isSignalConnected(*signal);
    } else {
        return ((VirtualQDBusVirtualObject*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDBusVirtualObject_QBaseIsSignalConnected(const QDBusVirtualObject* self, const QMetaMethod* signal) {
    auto* vqdbusvirtualobject = const_cast<VirtualQDBusVirtualObject*>(dynamic_cast<const VirtualQDBusVirtualObject*>(self));
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_IsSignalConnected_IsBase(true);
        return vqdbusvirtualobject->isSignalConnected(*signal);
    } else {
        return ((VirtualQDBusVirtualObject*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnIsSignalConnected(const QDBusVirtualObject* self, intptr_t slot) {
    auto* vqdbusvirtualobject = const_cast<VirtualQDBusVirtualObject*>(dynamic_cast<const VirtualQDBusVirtualObject*>(self));
    if (vqdbusvirtualobject && vqdbusvirtualobject->isVirtualQDBusVirtualObject) {
        vqdbusvirtualobject->setQDBusVirtualObject_IsSignalConnected_Callback(reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_IsSignalConnected_Callback>(slot));
    }
}

void QDBusVirtualObject_Delete(QDBusVirtualObject* self) {
    delete self;
}
