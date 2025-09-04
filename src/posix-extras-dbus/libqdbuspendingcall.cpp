#include <QChildEvent>
#include <QDBusError>
#include <QDBusMessage>
#include <QDBusPendingCall>
#include <QDBusPendingCallWatcher>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qdbuspendingcall.h>
#include "libqdbuspendingcall.h"
#include "libqdbuspendingcall.hxx"

QDBusPendingCall* QDBusPendingCall_new(const QDBusPendingCall* other) {
    return new QDBusPendingCall(*other);
}

void QDBusPendingCall_OperatorAssign(QDBusPendingCall* self, const QDBusPendingCall* other) {
    self->operator=(*other);
}

void QDBusPendingCall_Swap(QDBusPendingCall* self, QDBusPendingCall* other) {
    self->swap(*other);
}

bool QDBusPendingCall_IsFinished(const QDBusPendingCall* self) {
    return self->isFinished();
}

void QDBusPendingCall_WaitForFinished(QDBusPendingCall* self) {
    self->waitForFinished();
}

bool QDBusPendingCall_IsError(const QDBusPendingCall* self) {
    return self->isError();
}

bool QDBusPendingCall_IsValid(const QDBusPendingCall* self) {
    return self->isValid();
}

QDBusError* QDBusPendingCall_Error(const QDBusPendingCall* self) {
    return new QDBusError(self->error());
}

QDBusMessage* QDBusPendingCall_Reply(const QDBusPendingCall* self) {
    return new QDBusMessage(self->reply());
}

QDBusPendingCall* QDBusPendingCall_FromError(const QDBusError* errorVal) {
    return new QDBusPendingCall(QDBusPendingCall::fromError(*errorVal));
}

QDBusPendingCall* QDBusPendingCall_FromCompletedCall(const QDBusMessage* message) {
    return new QDBusPendingCall(QDBusPendingCall::fromCompletedCall(*message));
}

void QDBusPendingCall_Delete(QDBusPendingCall* self) {
    delete self;
}

QDBusPendingCallWatcher* QDBusPendingCallWatcher_new(const QDBusPendingCall* call) {
    return new VirtualQDBusPendingCallWatcher(*call);
}

QDBusPendingCallWatcher* QDBusPendingCallWatcher_new2(const QDBusPendingCall* call, QObject* parent) {
    return new VirtualQDBusPendingCallWatcher(*call, parent);
}

QMetaObject* QDBusPendingCallWatcher_MetaObject(const QDBusPendingCallWatcher* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDBusPendingCallWatcher_Metacast(QDBusPendingCallWatcher* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDBusPendingCallWatcher_Metacall(QDBusPendingCallWatcher* self, int param1, int param2, void** param3) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDBusPendingCallWatcher*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDBusPendingCallWatcher_Tr(const char* s) {
    QString _ret = QDBusPendingCallWatcher::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDBusPendingCallWatcher_WaitForFinished(QDBusPendingCallWatcher* self) {
    self->waitForFinished();
}

void QDBusPendingCallWatcher_Finished(QDBusPendingCallWatcher* self) {
    self->finished();
}

void QDBusPendingCallWatcher_Connect_Finished(QDBusPendingCallWatcher* self, intptr_t slot) {
    void (*slotFunc)(QDBusPendingCallWatcher*) = reinterpret_cast<void (*)(QDBusPendingCallWatcher*)>(slot);
    QDBusPendingCallWatcher::connect(self, &QDBusPendingCallWatcher::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QDBusPendingCallWatcher_Tr2(const char* s, const char* c) {
    QString _ret = QDBusPendingCallWatcher::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDBusPendingCallWatcher_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDBusPendingCallWatcher::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDBusPendingCallWatcher_Finished1(QDBusPendingCallWatcher* self, QDBusPendingCallWatcher* selfVal) {
    self->finished(selfVal);
}

void QDBusPendingCallWatcher_Connect_Finished1(QDBusPendingCallWatcher* self, intptr_t slot) {
    void (*slotFunc)(QDBusPendingCallWatcher*, QDBusPendingCallWatcher*) = reinterpret_cast<void (*)(QDBusPendingCallWatcher*, QDBusPendingCallWatcher*)>(slot);
    QDBusPendingCallWatcher::connect(self, &QDBusPendingCallWatcher::finished, [self, slotFunc](QDBusPendingCallWatcher* selfVal) {
        QDBusPendingCallWatcher* sigval1 = selfVal;
        slotFunc(self, sigval1);
    });
}

// Base class handler implementation
int QDBusPendingCallWatcher_QBaseMetacall(QDBusPendingCallWatcher* self, int param1, int param2, void** param3) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_Metacall_IsBase(true);
        return vqdbuspendingcallwatcher->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QDBusPendingCallWatcher::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnMetacall(QDBusPendingCallWatcher* self, intptr_t slot) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_Metacall_Callback(reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDBusPendingCallWatcher_Event(QDBusPendingCallWatcher* self, QEvent* event) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        return vqdbuspendingcallwatcher->event(event);
    } else {
        return self->QDBusPendingCallWatcher::event(event);
    }
}

// Base class handler implementation
bool QDBusPendingCallWatcher_QBaseEvent(QDBusPendingCallWatcher* self, QEvent* event) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_Event_IsBase(true);
        return vqdbuspendingcallwatcher->event(event);
    } else {
        return self->QDBusPendingCallWatcher::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnEvent(QDBusPendingCallWatcher* self, intptr_t slot) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_Event_Callback(reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDBusPendingCallWatcher_EventFilter(QDBusPendingCallWatcher* self, QObject* watched, QEvent* event) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        return vqdbuspendingcallwatcher->eventFilter(watched, event);
    } else {
        return self->QDBusPendingCallWatcher::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDBusPendingCallWatcher_QBaseEventFilter(QDBusPendingCallWatcher* self, QObject* watched, QEvent* event) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_EventFilter_IsBase(true);
        return vqdbuspendingcallwatcher->eventFilter(watched, event);
    } else {
        return self->QDBusPendingCallWatcher::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnEventFilter(QDBusPendingCallWatcher* self, intptr_t slot) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_EventFilter_Callback(reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusPendingCallWatcher_TimerEvent(QDBusPendingCallWatcher* self, QTimerEvent* event) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->timerEvent(event);
    } else {
        ((VirtualQDBusPendingCallWatcher*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDBusPendingCallWatcher_QBaseTimerEvent(QDBusPendingCallWatcher* self, QTimerEvent* event) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_TimerEvent_IsBase(true);
        vqdbuspendingcallwatcher->timerEvent(event);
    } else {
        ((VirtualQDBusPendingCallWatcher*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnTimerEvent(QDBusPendingCallWatcher* self, intptr_t slot) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_TimerEvent_Callback(reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusPendingCallWatcher_ChildEvent(QDBusPendingCallWatcher* self, QChildEvent* event) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->childEvent(event);
    } else {
        ((VirtualQDBusPendingCallWatcher*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDBusPendingCallWatcher_QBaseChildEvent(QDBusPendingCallWatcher* self, QChildEvent* event) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_ChildEvent_IsBase(true);
        vqdbuspendingcallwatcher->childEvent(event);
    } else {
        ((VirtualQDBusPendingCallWatcher*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnChildEvent(QDBusPendingCallWatcher* self, intptr_t slot) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_ChildEvent_Callback(reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusPendingCallWatcher_CustomEvent(QDBusPendingCallWatcher* self, QEvent* event) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->customEvent(event);
    } else {
        ((VirtualQDBusPendingCallWatcher*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDBusPendingCallWatcher_QBaseCustomEvent(QDBusPendingCallWatcher* self, QEvent* event) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_CustomEvent_IsBase(true);
        vqdbuspendingcallwatcher->customEvent(event);
    } else {
        ((VirtualQDBusPendingCallWatcher*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnCustomEvent(QDBusPendingCallWatcher* self, intptr_t slot) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_CustomEvent_Callback(reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusPendingCallWatcher_ConnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->connectNotify(*signal);
    } else {
        ((VirtualQDBusPendingCallWatcher*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDBusPendingCallWatcher_QBaseConnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_ConnectNotify_IsBase(true);
        vqdbuspendingcallwatcher->connectNotify(*signal);
    } else {
        ((VirtualQDBusPendingCallWatcher*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnConnectNotify(QDBusPendingCallWatcher* self, intptr_t slot) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_ConnectNotify_Callback(reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusPendingCallWatcher_DisconnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->disconnectNotify(*signal);
    } else {
        ((VirtualQDBusPendingCallWatcher*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDBusPendingCallWatcher_QBaseDisconnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_DisconnectNotify_IsBase(true);
        vqdbuspendingcallwatcher->disconnectNotify(*signal);
    } else {
        ((VirtualQDBusPendingCallWatcher*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnDisconnectNotify(QDBusPendingCallWatcher* self, intptr_t slot) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_DisconnectNotify_Callback(reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDBusPendingCallWatcher_Sender(const QDBusPendingCallWatcher* self) {
    auto* vqdbuspendingcallwatcher = const_cast<VirtualQDBusPendingCallWatcher*>(dynamic_cast<const VirtualQDBusPendingCallWatcher*>(self));
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        return vqdbuspendingcallwatcher->sender();
    } else {
        return ((VirtualQDBusPendingCallWatcher*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDBusPendingCallWatcher_QBaseSender(const QDBusPendingCallWatcher* self) {
    auto* vqdbuspendingcallwatcher = const_cast<VirtualQDBusPendingCallWatcher*>(dynamic_cast<const VirtualQDBusPendingCallWatcher*>(self));
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_Sender_IsBase(true);
        return vqdbuspendingcallwatcher->sender();
    } else {
        return ((VirtualQDBusPendingCallWatcher*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnSender(const QDBusPendingCallWatcher* self, intptr_t slot) {
    auto* vqdbuspendingcallwatcher = const_cast<VirtualQDBusPendingCallWatcher*>(dynamic_cast<const VirtualQDBusPendingCallWatcher*>(self));
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_Sender_Callback(reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDBusPendingCallWatcher_SenderSignalIndex(const QDBusPendingCallWatcher* self) {
    auto* vqdbuspendingcallwatcher = const_cast<VirtualQDBusPendingCallWatcher*>(dynamic_cast<const VirtualQDBusPendingCallWatcher*>(self));
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        return vqdbuspendingcallwatcher->senderSignalIndex();
    } else {
        return ((VirtualQDBusPendingCallWatcher*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDBusPendingCallWatcher_QBaseSenderSignalIndex(const QDBusPendingCallWatcher* self) {
    auto* vqdbuspendingcallwatcher = const_cast<VirtualQDBusPendingCallWatcher*>(dynamic_cast<const VirtualQDBusPendingCallWatcher*>(self));
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_SenderSignalIndex_IsBase(true);
        return vqdbuspendingcallwatcher->senderSignalIndex();
    } else {
        return ((VirtualQDBusPendingCallWatcher*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnSenderSignalIndex(const QDBusPendingCallWatcher* self, intptr_t slot) {
    auto* vqdbuspendingcallwatcher = const_cast<VirtualQDBusPendingCallWatcher*>(dynamic_cast<const VirtualQDBusPendingCallWatcher*>(self));
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDBusPendingCallWatcher_Receivers(const QDBusPendingCallWatcher* self, const char* signal) {
    auto* vqdbuspendingcallwatcher = const_cast<VirtualQDBusPendingCallWatcher*>(dynamic_cast<const VirtualQDBusPendingCallWatcher*>(self));
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        return vqdbuspendingcallwatcher->receivers(signal);
    } else {
        return ((VirtualQDBusPendingCallWatcher*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDBusPendingCallWatcher_QBaseReceivers(const QDBusPendingCallWatcher* self, const char* signal) {
    auto* vqdbuspendingcallwatcher = const_cast<VirtualQDBusPendingCallWatcher*>(dynamic_cast<const VirtualQDBusPendingCallWatcher*>(self));
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_Receivers_IsBase(true);
        return vqdbuspendingcallwatcher->receivers(signal);
    } else {
        return ((VirtualQDBusPendingCallWatcher*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnReceivers(const QDBusPendingCallWatcher* self, intptr_t slot) {
    auto* vqdbuspendingcallwatcher = const_cast<VirtualQDBusPendingCallWatcher*>(dynamic_cast<const VirtualQDBusPendingCallWatcher*>(self));
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_Receivers_Callback(reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDBusPendingCallWatcher_IsSignalConnected(const QDBusPendingCallWatcher* self, const QMetaMethod* signal) {
    auto* vqdbuspendingcallwatcher = const_cast<VirtualQDBusPendingCallWatcher*>(dynamic_cast<const VirtualQDBusPendingCallWatcher*>(self));
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        return vqdbuspendingcallwatcher->isSignalConnected(*signal);
    } else {
        return ((VirtualQDBusPendingCallWatcher*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDBusPendingCallWatcher_QBaseIsSignalConnected(const QDBusPendingCallWatcher* self, const QMetaMethod* signal) {
    auto* vqdbuspendingcallwatcher = const_cast<VirtualQDBusPendingCallWatcher*>(dynamic_cast<const VirtualQDBusPendingCallWatcher*>(self));
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_IsSignalConnected_IsBase(true);
        return vqdbuspendingcallwatcher->isSignalConnected(*signal);
    } else {
        return ((VirtualQDBusPendingCallWatcher*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnIsSignalConnected(const QDBusPendingCallWatcher* self, intptr_t slot) {
    auto* vqdbuspendingcallwatcher = const_cast<VirtualQDBusPendingCallWatcher*>(dynamic_cast<const VirtualQDBusPendingCallWatcher*>(self));
    if (vqdbuspendingcallwatcher && vqdbuspendingcallwatcher->isVirtualQDBusPendingCallWatcher) {
        vqdbuspendingcallwatcher->setQDBusPendingCallWatcher_IsSignalConnected_Callback(reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_IsSignalConnected_Callback>(slot));
    }
}

void QDBusPendingCallWatcher_Delete(QDBusPendingCallWatcher* self) {
    delete self;
}
