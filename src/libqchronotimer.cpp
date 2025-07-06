#include <QChildEvent>
#include <QChronoTimer>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qchronotimer.h>
#include "libqchronotimer.h"
#include "libqchronotimer.hxx"

QChronoTimer* QChronoTimer_new() {
    return new VirtualQChronoTimer();
}

QChronoTimer* QChronoTimer_new2(QObject* parent) {
    return new VirtualQChronoTimer(parent);
}

QMetaObject* QChronoTimer_MetaObject(const QChronoTimer* self) {
    return (QMetaObject*)self->metaObject();
}

void* QChronoTimer_Metacast(QChronoTimer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QChronoTimer_Metacall(QChronoTimer* self, int param1, int param2, void** param3) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQChronoTimer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QChronoTimer_OnMetacall(QChronoTimer* self, intptr_t slot) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_Metacall_Callback(reinterpret_cast<VirtualQChronoTimer::QChronoTimer_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QChronoTimer_QBaseMetacall(QChronoTimer* self, int param1, int param2, void** param3) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_Metacall_IsBase(true);
        return vqchronotimer->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQChronoTimer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QChronoTimer_Tr(const char* s) {
    QString _ret = QChronoTimer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QChronoTimer_IsActive(const QChronoTimer* self) {
    return self->isActive();
}

void QChronoTimer_SetTimerType(QChronoTimer* self, int atype) {
    self->setTimerType(static_cast<Qt::TimerType>(atype));
}

int QChronoTimer_TimerType(const QChronoTimer* self) {
    return static_cast<int>(self->timerType());
}

void QChronoTimer_SetSingleShot(QChronoTimer* self, bool singleShot) {
    self->setSingleShot(singleShot);
}

bool QChronoTimer_IsSingleShot(const QChronoTimer* self) {
    return self->isSingleShot();
}

void QChronoTimer_Start(QChronoTimer* self) {
    self->start();
}

void QChronoTimer_Stop(QChronoTimer* self) {
    self->stop();
}

libqt_string QChronoTimer_Tr2(const char* s, const char* c) {
    QString _ret = QChronoTimer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QChronoTimer_Tr3(const char* s, const char* c, int n) {
    QString _ret = QChronoTimer::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QChronoTimer_TimerEvent(QChronoTimer* self, QTimerEvent* param1) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->timerEvent(param1);
    } else {
        ((VirtualQChronoTimer*)self)->timerEvent(param1);
    }
}

// Base class handler implementation
void QChronoTimer_QBaseTimerEvent(QChronoTimer* self, QTimerEvent* param1) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_TimerEvent_IsBase(true);
        vqchronotimer->timerEvent(param1);
    } else {
        ((VirtualQChronoTimer*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnTimerEvent(QChronoTimer* self, intptr_t slot) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_TimerEvent_Callback(reinterpret_cast<VirtualQChronoTimer::QChronoTimer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChronoTimer_Event(QChronoTimer* self, QEvent* event) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        return vqchronotimer->event(event);
    } else {
        return self->QChronoTimer::event(event);
    }
}

// Base class handler implementation
bool QChronoTimer_QBaseEvent(QChronoTimer* self, QEvent* event) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_Event_IsBase(true);
        return vqchronotimer->event(event);
    } else {
        return self->QChronoTimer::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnEvent(QChronoTimer* self, intptr_t slot) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_Event_Callback(reinterpret_cast<VirtualQChronoTimer::QChronoTimer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChronoTimer_EventFilter(QChronoTimer* self, QObject* watched, QEvent* event) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        return vqchronotimer->eventFilter(watched, event);
    } else {
        return self->QChronoTimer::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QChronoTimer_QBaseEventFilter(QChronoTimer* self, QObject* watched, QEvent* event) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_EventFilter_IsBase(true);
        return vqchronotimer->eventFilter(watched, event);
    } else {
        return self->QChronoTimer::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnEventFilter(QChronoTimer* self, intptr_t slot) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_EventFilter_Callback(reinterpret_cast<VirtualQChronoTimer::QChronoTimer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QChronoTimer_ChildEvent(QChronoTimer* self, QChildEvent* event) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->childEvent(event);
    } else {
        ((VirtualQChronoTimer*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QChronoTimer_QBaseChildEvent(QChronoTimer* self, QChildEvent* event) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_ChildEvent_IsBase(true);
        vqchronotimer->childEvent(event);
    } else {
        ((VirtualQChronoTimer*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnChildEvent(QChronoTimer* self, intptr_t slot) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_ChildEvent_Callback(reinterpret_cast<VirtualQChronoTimer::QChronoTimer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChronoTimer_CustomEvent(QChronoTimer* self, QEvent* event) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->customEvent(event);
    } else {
        ((VirtualQChronoTimer*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QChronoTimer_QBaseCustomEvent(QChronoTimer* self, QEvent* event) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_CustomEvent_IsBase(true);
        vqchronotimer->customEvent(event);
    } else {
        ((VirtualQChronoTimer*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnCustomEvent(QChronoTimer* self, intptr_t slot) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_CustomEvent_Callback(reinterpret_cast<VirtualQChronoTimer::QChronoTimer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QChronoTimer_ConnectNotify(QChronoTimer* self, const QMetaMethod* signal) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->connectNotify(*signal);
    } else {
        ((VirtualQChronoTimer*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QChronoTimer_QBaseConnectNotify(QChronoTimer* self, const QMetaMethod* signal) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_ConnectNotify_IsBase(true);
        vqchronotimer->connectNotify(*signal);
    } else {
        ((VirtualQChronoTimer*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnConnectNotify(QChronoTimer* self, intptr_t slot) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_ConnectNotify_Callback(reinterpret_cast<VirtualQChronoTimer::QChronoTimer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QChronoTimer_DisconnectNotify(QChronoTimer* self, const QMetaMethod* signal) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->disconnectNotify(*signal);
    } else {
        ((VirtualQChronoTimer*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QChronoTimer_QBaseDisconnectNotify(QChronoTimer* self, const QMetaMethod* signal) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_DisconnectNotify_IsBase(true);
        vqchronotimer->disconnectNotify(*signal);
    } else {
        ((VirtualQChronoTimer*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnDisconnectNotify(QChronoTimer* self, intptr_t slot) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_DisconnectNotify_Callback(reinterpret_cast<VirtualQChronoTimer::QChronoTimer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QChronoTimer_Sender(const QChronoTimer* self) {
    auto* vqchronotimer = const_cast<VirtualQChronoTimer*>(dynamic_cast<const VirtualQChronoTimer*>(self));
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        return vqchronotimer->sender();
    } else {
        return ((VirtualQChronoTimer*)self)->sender();
    }
}

// Base class handler implementation
QObject* QChronoTimer_QBaseSender(const QChronoTimer* self) {
    auto* vqchronotimer = const_cast<VirtualQChronoTimer*>(dynamic_cast<const VirtualQChronoTimer*>(self));
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_Sender_IsBase(true);
        return vqchronotimer->sender();
    } else {
        return ((VirtualQChronoTimer*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnSender(const QChronoTimer* self, intptr_t slot) {
    auto* vqchronotimer = const_cast<VirtualQChronoTimer*>(dynamic_cast<const VirtualQChronoTimer*>(self));
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_Sender_Callback(reinterpret_cast<VirtualQChronoTimer::QChronoTimer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QChronoTimer_SenderSignalIndex(const QChronoTimer* self) {
    auto* vqchronotimer = const_cast<VirtualQChronoTimer*>(dynamic_cast<const VirtualQChronoTimer*>(self));
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        return vqchronotimer->senderSignalIndex();
    } else {
        return ((VirtualQChronoTimer*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QChronoTimer_QBaseSenderSignalIndex(const QChronoTimer* self) {
    auto* vqchronotimer = const_cast<VirtualQChronoTimer*>(dynamic_cast<const VirtualQChronoTimer*>(self));
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_SenderSignalIndex_IsBase(true);
        return vqchronotimer->senderSignalIndex();
    } else {
        return ((VirtualQChronoTimer*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnSenderSignalIndex(const QChronoTimer* self, intptr_t slot) {
    auto* vqchronotimer = const_cast<VirtualQChronoTimer*>(dynamic_cast<const VirtualQChronoTimer*>(self));
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_SenderSignalIndex_Callback(reinterpret_cast<VirtualQChronoTimer::QChronoTimer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QChronoTimer_Receivers(const QChronoTimer* self, const char* signal) {
    auto* vqchronotimer = const_cast<VirtualQChronoTimer*>(dynamic_cast<const VirtualQChronoTimer*>(self));
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        return vqchronotimer->receivers(signal);
    } else {
        return ((VirtualQChronoTimer*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QChronoTimer_QBaseReceivers(const QChronoTimer* self, const char* signal) {
    auto* vqchronotimer = const_cast<VirtualQChronoTimer*>(dynamic_cast<const VirtualQChronoTimer*>(self));
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_Receivers_IsBase(true);
        return vqchronotimer->receivers(signal);
    } else {
        return ((VirtualQChronoTimer*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnReceivers(const QChronoTimer* self, intptr_t slot) {
    auto* vqchronotimer = const_cast<VirtualQChronoTimer*>(dynamic_cast<const VirtualQChronoTimer*>(self));
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_Receivers_Callback(reinterpret_cast<VirtualQChronoTimer::QChronoTimer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QChronoTimer_IsSignalConnected(const QChronoTimer* self, const QMetaMethod* signal) {
    auto* vqchronotimer = const_cast<VirtualQChronoTimer*>(dynamic_cast<const VirtualQChronoTimer*>(self));
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        return vqchronotimer->isSignalConnected(*signal);
    } else {
        return ((VirtualQChronoTimer*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QChronoTimer_QBaseIsSignalConnected(const QChronoTimer* self, const QMetaMethod* signal) {
    auto* vqchronotimer = const_cast<VirtualQChronoTimer*>(dynamic_cast<const VirtualQChronoTimer*>(self));
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_IsSignalConnected_IsBase(true);
        return vqchronotimer->isSignalConnected(*signal);
    } else {
        return ((VirtualQChronoTimer*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnIsSignalConnected(const QChronoTimer* self, intptr_t slot) {
    auto* vqchronotimer = const_cast<VirtualQChronoTimer*>(dynamic_cast<const VirtualQChronoTimer*>(self));
    if (vqchronotimer && vqchronotimer->isVirtualQChronoTimer) {
        vqchronotimer->setQChronoTimer_IsSignalConnected_Callback(reinterpret_cast<VirtualQChronoTimer::QChronoTimer_IsSignalConnected_Callback>(slot));
    }
}

void QChronoTimer_Connect_Timeout(QChronoTimer* self, intptr_t slot) {
    void (*slotFunc)(QChronoTimer*) = reinterpret_cast<void (*)(QChronoTimer*)>(slot);
    QChronoTimer::connect(self, &QChronoTimer::timeout, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QChronoTimer_Delete(QChronoTimer* self) {
    delete self;
}
