#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimer>
#include <QTimerEvent>
#include <qtimer.h>
#include "libqtimer.h"
#include "libqtimer.hxx"

QTimer* QTimer_new() {
    return new VirtualQTimer();
}

QTimer* QTimer_new2(QObject* parent) {
    return new VirtualQTimer(parent);
}

QMetaObject* QTimer_MetaObject(const QTimer* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTimer_Metacast(QTimer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTimer_Metacall(QTimer* self, int param1, int param2, void** param3) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTimer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTimer_OnMetacall(QTimer* self, intptr_t slot) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_Metacall_Callback(reinterpret_cast<VirtualQTimer::QTimer_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTimer_QBaseMetacall(QTimer* self, int param1, int param2, void** param3) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_Metacall_IsBase(true);
        return vqtimer->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTimer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTimer_Tr(const char* s) {
    QString _ret = QTimer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QTimer_IsActive(const QTimer* self) {
    return self->isActive();
}

int QTimer_TimerId(const QTimer* self) {
    return self->timerId();
}

int QTimer_Id(const QTimer* self) {
    return static_cast<int>(self->id());
}

void QTimer_SetInterval(QTimer* self, int msec) {
    self->setInterval(static_cast<int>(msec));
}

int QTimer_Interval(const QTimer* self) {
    return self->interval();
}

int QTimer_RemainingTime(const QTimer* self) {
    return self->remainingTime();
}

void QTimer_SetTimerType(QTimer* self, int atype) {
    self->setTimerType(static_cast<Qt::TimerType>(atype));
}

int QTimer_TimerType(const QTimer* self) {
    return static_cast<int>(self->timerType());
}

void QTimer_SetSingleShot(QTimer* self, bool singleShot) {
    self->setSingleShot(singleShot);
}

bool QTimer_IsSingleShot(const QTimer* self) {
    return self->isSingleShot();
}

void QTimer_Start(QTimer* self, int msec) {
    self->start(static_cast<int>(msec));
}

void QTimer_Start2(QTimer* self) {
    self->start();
}

void QTimer_Stop(QTimer* self) {
    self->stop();
}

libqt_string QTimer_Tr2(const char* s, const char* c) {
    QString _ret = QTimer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTimer_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTimer::tr(s, c, static_cast<int>(n));
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
void QTimer_TimerEvent(QTimer* self, QTimerEvent* param1) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->timerEvent(param1);
    } else {
        ((VirtualQTimer*)self)->timerEvent(param1);
    }
}

// Base class handler implementation
void QTimer_QBaseTimerEvent(QTimer* self, QTimerEvent* param1) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_TimerEvent_IsBase(true);
        vqtimer->timerEvent(param1);
    } else {
        ((VirtualQTimer*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnTimerEvent(QTimer* self, intptr_t slot) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_TimerEvent_Callback(reinterpret_cast<VirtualQTimer::QTimer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimer_Event(QTimer* self, QEvent* event) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        return vqtimer->event(event);
    } else {
        return self->QTimer::event(event);
    }
}

// Base class handler implementation
bool QTimer_QBaseEvent(QTimer* self, QEvent* event) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_Event_IsBase(true);
        return vqtimer->event(event);
    } else {
        return self->QTimer::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnEvent(QTimer* self, intptr_t slot) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_Event_Callback(reinterpret_cast<VirtualQTimer::QTimer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimer_EventFilter(QTimer* self, QObject* watched, QEvent* event) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        return vqtimer->eventFilter(watched, event);
    } else {
        return self->QTimer::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTimer_QBaseEventFilter(QTimer* self, QObject* watched, QEvent* event) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_EventFilter_IsBase(true);
        return vqtimer->eventFilter(watched, event);
    } else {
        return self->QTimer::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnEventFilter(QTimer* self, intptr_t slot) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_EventFilter_Callback(reinterpret_cast<VirtualQTimer::QTimer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimer_ChildEvent(QTimer* self, QChildEvent* event) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->childEvent(event);
    } else {
        ((VirtualQTimer*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QTimer_QBaseChildEvent(QTimer* self, QChildEvent* event) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_ChildEvent_IsBase(true);
        vqtimer->childEvent(event);
    } else {
        ((VirtualQTimer*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnChildEvent(QTimer* self, intptr_t slot) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_ChildEvent_Callback(reinterpret_cast<VirtualQTimer::QTimer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimer_CustomEvent(QTimer* self, QEvent* event) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->customEvent(event);
    } else {
        ((VirtualQTimer*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QTimer_QBaseCustomEvent(QTimer* self, QEvent* event) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_CustomEvent_IsBase(true);
        vqtimer->customEvent(event);
    } else {
        ((VirtualQTimer*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnCustomEvent(QTimer* self, intptr_t slot) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_CustomEvent_Callback(reinterpret_cast<VirtualQTimer::QTimer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimer_ConnectNotify(QTimer* self, const QMetaMethod* signal) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->connectNotify(*signal);
    } else {
        ((VirtualQTimer*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTimer_QBaseConnectNotify(QTimer* self, const QMetaMethod* signal) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_ConnectNotify_IsBase(true);
        vqtimer->connectNotify(*signal);
    } else {
        ((VirtualQTimer*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnConnectNotify(QTimer* self, intptr_t slot) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_ConnectNotify_Callback(reinterpret_cast<VirtualQTimer::QTimer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimer_DisconnectNotify(QTimer* self, const QMetaMethod* signal) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->disconnectNotify(*signal);
    } else {
        ((VirtualQTimer*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTimer_QBaseDisconnectNotify(QTimer* self, const QMetaMethod* signal) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_DisconnectNotify_IsBase(true);
        vqtimer->disconnectNotify(*signal);
    } else {
        ((VirtualQTimer*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnDisconnectNotify(QTimer* self, intptr_t slot) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_DisconnectNotify_Callback(reinterpret_cast<VirtualQTimer::QTimer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTimer_Sender(const QTimer* self) {
    auto* vqtimer = const_cast<VirtualQTimer*>(dynamic_cast<const VirtualQTimer*>(self));
    if (vqtimer && vqtimer->isVirtualQTimer) {
        return vqtimer->sender();
    } else {
        return ((VirtualQTimer*)self)->sender();
    }
}

// Base class handler implementation
QObject* QTimer_QBaseSender(const QTimer* self) {
    auto* vqtimer = const_cast<VirtualQTimer*>(dynamic_cast<const VirtualQTimer*>(self));
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_Sender_IsBase(true);
        return vqtimer->sender();
    } else {
        return ((VirtualQTimer*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnSender(const QTimer* self, intptr_t slot) {
    auto* vqtimer = const_cast<VirtualQTimer*>(dynamic_cast<const VirtualQTimer*>(self));
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_Sender_Callback(reinterpret_cast<VirtualQTimer::QTimer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTimer_SenderSignalIndex(const QTimer* self) {
    auto* vqtimer = const_cast<VirtualQTimer*>(dynamic_cast<const VirtualQTimer*>(self));
    if (vqtimer && vqtimer->isVirtualQTimer) {
        return vqtimer->senderSignalIndex();
    } else {
        return ((VirtualQTimer*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QTimer_QBaseSenderSignalIndex(const QTimer* self) {
    auto* vqtimer = const_cast<VirtualQTimer*>(dynamic_cast<const VirtualQTimer*>(self));
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_SenderSignalIndex_IsBase(true);
        return vqtimer->senderSignalIndex();
    } else {
        return ((VirtualQTimer*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnSenderSignalIndex(const QTimer* self, intptr_t slot) {
    auto* vqtimer = const_cast<VirtualQTimer*>(dynamic_cast<const VirtualQTimer*>(self));
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTimer::QTimer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTimer_Receivers(const QTimer* self, const char* signal) {
    auto* vqtimer = const_cast<VirtualQTimer*>(dynamic_cast<const VirtualQTimer*>(self));
    if (vqtimer && vqtimer->isVirtualQTimer) {
        return vqtimer->receivers(signal);
    } else {
        return ((VirtualQTimer*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QTimer_QBaseReceivers(const QTimer* self, const char* signal) {
    auto* vqtimer = const_cast<VirtualQTimer*>(dynamic_cast<const VirtualQTimer*>(self));
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_Receivers_IsBase(true);
        return vqtimer->receivers(signal);
    } else {
        return ((VirtualQTimer*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnReceivers(const QTimer* self, intptr_t slot) {
    auto* vqtimer = const_cast<VirtualQTimer*>(dynamic_cast<const VirtualQTimer*>(self));
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_Receivers_Callback(reinterpret_cast<VirtualQTimer::QTimer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimer_IsSignalConnected(const QTimer* self, const QMetaMethod* signal) {
    auto* vqtimer = const_cast<VirtualQTimer*>(dynamic_cast<const VirtualQTimer*>(self));
    if (vqtimer && vqtimer->isVirtualQTimer) {
        return vqtimer->isSignalConnected(*signal);
    } else {
        return ((VirtualQTimer*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTimer_QBaseIsSignalConnected(const QTimer* self, const QMetaMethod* signal) {
    auto* vqtimer = const_cast<VirtualQTimer*>(dynamic_cast<const VirtualQTimer*>(self));
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_IsSignalConnected_IsBase(true);
        return vqtimer->isSignalConnected(*signal);
    } else {
        return ((VirtualQTimer*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnIsSignalConnected(const QTimer* self, intptr_t slot) {
    auto* vqtimer = const_cast<VirtualQTimer*>(dynamic_cast<const VirtualQTimer*>(self));
    if (vqtimer && vqtimer->isVirtualQTimer) {
        vqtimer->setQTimer_IsSignalConnected_Callback(reinterpret_cast<VirtualQTimer::QTimer_IsSignalConnected_Callback>(slot));
    }
}

void QTimer_Connect_Timeout(QTimer* self, intptr_t slot) {
    void (*slotFunc)(QTimer*) = reinterpret_cast<void (*)(QTimer*)>(slot);
    QTimer::connect(self, &QTimer::timeout, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QTimer_Delete(QTimer* self) {
    delete self;
}
