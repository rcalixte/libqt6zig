#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <QVirtualKeyboardObserver>
#include <qvirtualkeyboardobserver.h>
#include "libqvirtualkeyboardobserver.h"
#include "libqvirtualkeyboardobserver.hxx"

QVirtualKeyboardObserver* QVirtualKeyboardObserver_new() {
    return new VirtualQVirtualKeyboardObserver();
}

QVirtualKeyboardObserver* QVirtualKeyboardObserver_new2(QObject* parent) {
    return new VirtualQVirtualKeyboardObserver(parent);
}

QMetaObject* QVirtualKeyboardObserver_MetaObject(const QVirtualKeyboardObserver* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVirtualKeyboardObserver_Metacast(QVirtualKeyboardObserver* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVirtualKeyboardObserver_Metacall(QVirtualKeyboardObserver* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QVirtualKeyboardObserver_Tr(const char* s) {
    auto _ret = QVirtualKeyboardObserver::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVariant* QVirtualKeyboardObserver_Layout(QVirtualKeyboardObserver* self) {
    return new QVariant(self->layout());
}

void QVirtualKeyboardObserver_LayoutChanged(QVirtualKeyboardObserver* self) {
    self->layoutChanged();
}

void QVirtualKeyboardObserver_Connect_LayoutChanged(QVirtualKeyboardObserver* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardObserver*) = reinterpret_cast<void (*)(QVirtualKeyboardObserver*)>(slot);
    QVirtualKeyboardObserver::connect(self,
                                      static_cast<void (QVirtualKeyboardObserver::*)()>(&QVirtualKeyboardObserver::layoutChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

libqt_string QVirtualKeyboardObserver_Tr2(const char* s, const char* c) {
    auto _ret = QVirtualKeyboardObserver::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVirtualKeyboardObserver_Tr3(const char* s, const char* c, int n) {
    auto _ret = QVirtualKeyboardObserver::tr(s, c, static_cast<int>(n));
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
QMetaObject* QVirtualKeyboardObserver_SuperMetaObject(const QVirtualKeyboardObserver* self) {
    auto* vqvirtualkeyboardobserver = const_cast<VirtualQVirtualKeyboardObserver*>(dynamic_cast<const VirtualQVirtualKeyboardObserver*>(self));
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_MetaObject_IsBase(true);
        return (QMetaObject*)vqvirtualkeyboardobserver->metaObject();
    } else {
        return (QMetaObject*)self->QVirtualKeyboardObserver::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnMetaObject(const QVirtualKeyboardObserver* self, intptr_t slot) {
    auto* vqvirtualkeyboardobserver = const_cast<VirtualQVirtualKeyboardObserver*>(dynamic_cast<const VirtualQVirtualKeyboardObserver*>(self));
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver)
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_MetaObject_Callback(reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QVirtualKeyboardObserver_SuperMetacast(QVirtualKeyboardObserver* self, const char* param1) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_Metacast_IsBase(true);
        return vqvirtualkeyboardobserver->qt_metacast(param1);
    } else {
        return self->QVirtualKeyboardObserver::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnMetacast(QVirtualKeyboardObserver* self, intptr_t slot) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver)
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_Metacast_Callback(reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_Metacast_Callback>(slot));
}

// Base class handler implementation
int QVirtualKeyboardObserver_SuperMetacall(QVirtualKeyboardObserver* self, int param1, int param2, void** param3) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_Metacall_IsBase(true);
        return vqvirtualkeyboardobserver->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QVirtualKeyboardObserver::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnMetacall(QVirtualKeyboardObserver* self, intptr_t slot) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver)
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_Metacall_Callback(reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_Metacall_Callback>(slot));
}

// Derived class handler implementation
bool QVirtualKeyboardObserver_Event(QVirtualKeyboardObserver* self, QEvent* event) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        return vqvirtualkeyboardobserver->event(event);
    } else {
        return self->QVirtualKeyboardObserver::event(event);
    }
}

// Base class handler implementation
bool QVirtualKeyboardObserver_SuperEvent(QVirtualKeyboardObserver* self, QEvent* event) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_Event_IsBase(true);
        return vqvirtualkeyboardobserver->event(event);
    } else {
        return self->QVirtualKeyboardObserver::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnEvent(QVirtualKeyboardObserver* self, intptr_t slot) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver)
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_Event_Callback(reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_Event_Callback>(slot));
}

// Derived class handler implementation
bool QVirtualKeyboardObserver_EventFilter(QVirtualKeyboardObserver* self, QObject* watched, QEvent* event) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        return vqvirtualkeyboardobserver->eventFilter(watched, event);
    } else {
        return self->QVirtualKeyboardObserver::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QVirtualKeyboardObserver_SuperEventFilter(QVirtualKeyboardObserver* self, QObject* watched, QEvent* event) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_EventFilter_IsBase(true);
        return vqvirtualkeyboardobserver->eventFilter(watched, event);
    } else {
        return self->QVirtualKeyboardObserver::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnEventFilter(QVirtualKeyboardObserver* self, intptr_t slot) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver)
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_EventFilter_Callback(reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QVirtualKeyboardObserver_TimerEvent(QVirtualKeyboardObserver* self, QTimerEvent* event) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        vqvirtualkeyboardobserver->timerEvent(event);
    } else {
        ((VirtualQVirtualKeyboardObserver*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QVirtualKeyboardObserver_SuperTimerEvent(QVirtualKeyboardObserver* self, QTimerEvent* event) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_TimerEvent_IsBase(true);
        vqvirtualkeyboardobserver->timerEvent(event);
    } else {
        ((VirtualQVirtualKeyboardObserver*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnTimerEvent(QVirtualKeyboardObserver* self, intptr_t slot) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver)
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_TimerEvent_Callback(reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QVirtualKeyboardObserver_ChildEvent(QVirtualKeyboardObserver* self, QChildEvent* event) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        vqvirtualkeyboardobserver->childEvent(event);
    } else {
        ((VirtualQVirtualKeyboardObserver*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QVirtualKeyboardObserver_SuperChildEvent(QVirtualKeyboardObserver* self, QChildEvent* event) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_ChildEvent_IsBase(true);
        vqvirtualkeyboardobserver->childEvent(event);
    } else {
        ((VirtualQVirtualKeyboardObserver*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnChildEvent(QVirtualKeyboardObserver* self, intptr_t slot) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver)
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_ChildEvent_Callback(reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QVirtualKeyboardObserver_CustomEvent(QVirtualKeyboardObserver* self, QEvent* event) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        vqvirtualkeyboardobserver->customEvent(event);
    } else {
        ((VirtualQVirtualKeyboardObserver*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QVirtualKeyboardObserver_SuperCustomEvent(QVirtualKeyboardObserver* self, QEvent* event) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_CustomEvent_IsBase(true);
        vqvirtualkeyboardobserver->customEvent(event);
    } else {
        ((VirtualQVirtualKeyboardObserver*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnCustomEvent(QVirtualKeyboardObserver* self, intptr_t slot) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver)
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_CustomEvent_Callback(reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QVirtualKeyboardObserver_ConnectNotify(QVirtualKeyboardObserver* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        vqvirtualkeyboardobserver->connectNotify(*signal);
    } else {
        ((VirtualQVirtualKeyboardObserver*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QVirtualKeyboardObserver_SuperConnectNotify(QVirtualKeyboardObserver* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_ConnectNotify_IsBase(true);
        vqvirtualkeyboardobserver->connectNotify(*signal);
    } else {
        ((VirtualQVirtualKeyboardObserver*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnConnectNotify(QVirtualKeyboardObserver* self, intptr_t slot) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver)
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_ConnectNotify_Callback(reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QVirtualKeyboardObserver_DisconnectNotify(QVirtualKeyboardObserver* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        vqvirtualkeyboardobserver->disconnectNotify(*signal);
    } else {
        ((VirtualQVirtualKeyboardObserver*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QVirtualKeyboardObserver_SuperDisconnectNotify(QVirtualKeyboardObserver* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_DisconnectNotify_IsBase(true);
        vqvirtualkeyboardobserver->disconnectNotify(*signal);
    } else {
        ((VirtualQVirtualKeyboardObserver*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnDisconnectNotify(QVirtualKeyboardObserver* self, intptr_t slot) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver)
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_DisconnectNotify_Callback(reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* QVirtualKeyboardObserver_Sender(const QVirtualKeyboardObserver* self) {
    auto* vqvirtualkeyboardobserver = const_cast<VirtualQVirtualKeyboardObserver*>(dynamic_cast<const VirtualQVirtualKeyboardObserver*>(self));
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        return vqvirtualkeyboardobserver->sender();
    } else {
        return ((VirtualQVirtualKeyboardObserver*)self)->sender();
    }
}

// Base class handler implementation
QObject* QVirtualKeyboardObserver_SuperSender(const QVirtualKeyboardObserver* self) {
    auto* vqvirtualkeyboardobserver = const_cast<VirtualQVirtualKeyboardObserver*>(dynamic_cast<const VirtualQVirtualKeyboardObserver*>(self));
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_Sender_IsBase(true);
        return vqvirtualkeyboardobserver->sender();
    } else {
        return ((VirtualQVirtualKeyboardObserver*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnSender(const QVirtualKeyboardObserver* self, intptr_t slot) {
    auto* vqvirtualkeyboardobserver = const_cast<VirtualQVirtualKeyboardObserver*>(dynamic_cast<const VirtualQVirtualKeyboardObserver*>(self));
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver)
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_Sender_Callback(reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_Sender_Callback>(slot));
}

// Derived class handler implementation
int QVirtualKeyboardObserver_SenderSignalIndex(const QVirtualKeyboardObserver* self) {
    auto* vqvirtualkeyboardobserver = const_cast<VirtualQVirtualKeyboardObserver*>(dynamic_cast<const VirtualQVirtualKeyboardObserver*>(self));
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        return vqvirtualkeyboardobserver->senderSignalIndex();
    } else {
        return ((VirtualQVirtualKeyboardObserver*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QVirtualKeyboardObserver_SuperSenderSignalIndex(const QVirtualKeyboardObserver* self) {
    auto* vqvirtualkeyboardobserver = const_cast<VirtualQVirtualKeyboardObserver*>(dynamic_cast<const VirtualQVirtualKeyboardObserver*>(self));
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_SenderSignalIndex_IsBase(true);
        return vqvirtualkeyboardobserver->senderSignalIndex();
    } else {
        return ((VirtualQVirtualKeyboardObserver*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnSenderSignalIndex(const QVirtualKeyboardObserver* self, intptr_t slot) {
    auto* vqvirtualkeyboardobserver = const_cast<VirtualQVirtualKeyboardObserver*>(dynamic_cast<const VirtualQVirtualKeyboardObserver*>(self));
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver)
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_SenderSignalIndex_Callback(reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QVirtualKeyboardObserver_Receivers(const QVirtualKeyboardObserver* self, const char* signal) {
    auto* vqvirtualkeyboardobserver = const_cast<VirtualQVirtualKeyboardObserver*>(dynamic_cast<const VirtualQVirtualKeyboardObserver*>(self));
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        return vqvirtualkeyboardobserver->receivers(signal);
    } else {
        return ((VirtualQVirtualKeyboardObserver*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QVirtualKeyboardObserver_SuperReceivers(const QVirtualKeyboardObserver* self, const char* signal) {
    auto* vqvirtualkeyboardobserver = const_cast<VirtualQVirtualKeyboardObserver*>(dynamic_cast<const VirtualQVirtualKeyboardObserver*>(self));
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_Receivers_IsBase(true);
        return vqvirtualkeyboardobserver->receivers(signal);
    } else {
        return ((VirtualQVirtualKeyboardObserver*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnReceivers(const QVirtualKeyboardObserver* self, intptr_t slot) {
    auto* vqvirtualkeyboardobserver = const_cast<VirtualQVirtualKeyboardObserver*>(dynamic_cast<const VirtualQVirtualKeyboardObserver*>(self));
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver)
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_Receivers_Callback(reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QVirtualKeyboardObserver_IsSignalConnected(const QVirtualKeyboardObserver* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardobserver = const_cast<VirtualQVirtualKeyboardObserver*>(dynamic_cast<const VirtualQVirtualKeyboardObserver*>(self));
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        return vqvirtualkeyboardobserver->isSignalConnected(*signal);
    } else {
        return ((VirtualQVirtualKeyboardObserver*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QVirtualKeyboardObserver_SuperIsSignalConnected(const QVirtualKeyboardObserver* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardobserver = const_cast<VirtualQVirtualKeyboardObserver*>(dynamic_cast<const VirtualQVirtualKeyboardObserver*>(self));
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver) {
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_IsSignalConnected_IsBase(true);
        return vqvirtualkeyboardobserver->isSignalConnected(*signal);
    } else {
        return ((VirtualQVirtualKeyboardObserver*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnIsSignalConnected(const QVirtualKeyboardObserver* self, intptr_t slot) {
    auto* vqvirtualkeyboardobserver = const_cast<VirtualQVirtualKeyboardObserver*>(dynamic_cast<const VirtualQVirtualKeyboardObserver*>(self));
    if (vqvirtualkeyboardobserver && vqvirtualkeyboardobserver->isVirtualQVirtualKeyboardObserver)
        vqvirtualkeyboardobserver->setQVirtualKeyboardObserver_IsSignalConnected_Callback(reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_IsSignalConnected_Callback>(slot));
}

void QVirtualKeyboardObserver_Delete(QVirtualKeyboardObserver* self) {
    delete self;
}
