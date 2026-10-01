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

QDBusPendingCall* QDBusPendingCallWatcher_AsQDBusPendingCall(const QDBusPendingCallWatcher* self) {
    return const_cast<QDBusPendingCallWatcher*>(self);
}

QMetaObject* QDBusPendingCallWatcher_MetaObject(const QDBusPendingCallWatcher* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDBusPendingCallWatcher_Metacast(QDBusPendingCallWatcher* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDBusPendingCallWatcher_Metacall(QDBusPendingCallWatcher* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDBusPendingCallWatcher_Tr(const char* s) {
    auto _ret = QDBusPendingCallWatcher::tr(s);
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
    QDBusPendingCallWatcher::connect(self,
                                     static_cast<void (QDBusPendingCallWatcher::*)(QDBusPendingCallWatcher*)>(&QDBusPendingCallWatcher::finished),
                                     [self, slotFunc]() {
                                         slotFunc(self);
                                     });
}

libqt_string QDBusPendingCallWatcher_Tr2(const char* s, const char* c) {
    auto _ret = QDBusPendingCallWatcher::tr(s, c);
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
    auto _ret = QDBusPendingCallWatcher::tr(s, c, static_cast<int>(n));
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
    QDBusPendingCallWatcher::connect(self,
                                     static_cast<void (QDBusPendingCallWatcher::*)(QDBusPendingCallWatcher*)>(&QDBusPendingCallWatcher::finished),
                                     [self, slotFunc](QDBusPendingCallWatcher* selfVal) {
                                         QDBusPendingCallWatcher* sigval1 = selfVal;
                                         slotFunc(self, sigval1);
                                     });
}

// Base class handler implementation
QMetaObject* QDBusPendingCallWatcher_SuperMetaObject(const QDBusPendingCallWatcher* self) {
    return (QMetaObject*)self->QDBusPendingCallWatcher::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnMetaObject(QDBusPendingCallWatcher* self, intptr_t slot) {
    if (auto* vqdbuspendingcallwatcher = const_cast<VirtualQDBusPendingCallWatcher*>(dynamic_cast<const VirtualQDBusPendingCallWatcher*>(self)))
        vqdbuspendingcallwatcher->qdbuspendingcallwatcher_metaobject_callback = reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDBusPendingCallWatcher_SuperMetacast(QDBusPendingCallWatcher* self, const char* param1) {
    return self->QDBusPendingCallWatcher::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnMetacast(QDBusPendingCallWatcher* self, intptr_t slot) {
    if (auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self))
        vqdbuspendingcallwatcher->qdbuspendingcallwatcher_metacast_callback = reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDBusPendingCallWatcher_SuperMetacall(QDBusPendingCallWatcher* self, int param1, int param2, void** param3) {
    return self->QDBusPendingCallWatcher::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnMetacall(QDBusPendingCallWatcher* self, intptr_t slot) {
    if (auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self))
        vqdbuspendingcallwatcher->qdbuspendingcallwatcher_metacall_callback = reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QDBusPendingCallWatcher_Event(QDBusPendingCallWatcher* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QDBusPendingCallWatcher_SuperEvent(QDBusPendingCallWatcher* self, QEvent* event) {
    return self->QDBusPendingCallWatcher::event(event);
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnEvent(QDBusPendingCallWatcher* self, intptr_t slot) {
    if (auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self))
        vqdbuspendingcallwatcher->qdbuspendingcallwatcher_event_callback = reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_Event_Callback>(slot);
}

// Derived class handler implementation
bool QDBusPendingCallWatcher_EventFilter(QDBusPendingCallWatcher* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDBusPendingCallWatcher_SuperEventFilter(QDBusPendingCallWatcher* self, QObject* watched, QEvent* event) {
    return self->QDBusPendingCallWatcher::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnEventFilter(QDBusPendingCallWatcher* self, intptr_t slot) {
    if (auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self))
        vqdbuspendingcallwatcher->qdbuspendingcallwatcher_eventfilter_callback = reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDBusPendingCallWatcher_TimerEvent(QDBusPendingCallWatcher* self, QTimerEvent* event) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher) {
        vqdbuspendingcallwatcher->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDBusPendingCallWatcher::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDBusPendingCallWatcher_SuperTimerEvent(QDBusPendingCallWatcher* self, QTimerEvent* event) {
    if (auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self)) {
        vqdbuspendingcallwatcher->QDBusPendingCallWatcher::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDBusPendingCallWatcher::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnTimerEvent(QDBusPendingCallWatcher* self, intptr_t slot) {
    if (auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self))
        vqdbuspendingcallwatcher->qdbuspendingcallwatcher_timerevent_callback = reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDBusPendingCallWatcher_ChildEvent(QDBusPendingCallWatcher* self, QChildEvent* event) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher) {
        vqdbuspendingcallwatcher->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDBusPendingCallWatcher::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDBusPendingCallWatcher_SuperChildEvent(QDBusPendingCallWatcher* self, QChildEvent* event) {
    if (auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self)) {
        vqdbuspendingcallwatcher->QDBusPendingCallWatcher::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDBusPendingCallWatcher::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnChildEvent(QDBusPendingCallWatcher* self, intptr_t slot) {
    if (auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self))
        vqdbuspendingcallwatcher->qdbuspendingcallwatcher_childevent_callback = reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDBusPendingCallWatcher_CustomEvent(QDBusPendingCallWatcher* self, QEvent* event) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher) {
        vqdbuspendingcallwatcher->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDBusPendingCallWatcher::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDBusPendingCallWatcher_SuperCustomEvent(QDBusPendingCallWatcher* self, QEvent* event) {
    if (auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self)) {
        vqdbuspendingcallwatcher->QDBusPendingCallWatcher::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDBusPendingCallWatcher::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnCustomEvent(QDBusPendingCallWatcher* self, intptr_t slot) {
    if (auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self))
        vqdbuspendingcallwatcher->qdbuspendingcallwatcher_customevent_callback = reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDBusPendingCallWatcher_ConnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher) {
        vqdbuspendingcallwatcher->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDBusPendingCallWatcher::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDBusPendingCallWatcher_SuperConnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal) {
    if (auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self)) {
        vqdbuspendingcallwatcher->QDBusPendingCallWatcher::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDBusPendingCallWatcher::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnConnectNotify(QDBusPendingCallWatcher* self, intptr_t slot) {
    if (auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self))
        vqdbuspendingcallwatcher->qdbuspendingcallwatcher_connectnotify_callback = reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDBusPendingCallWatcher_DisconnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal) {
    auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self);
    if (vqdbuspendingcallwatcher) {
        vqdbuspendingcallwatcher->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDBusPendingCallWatcher::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDBusPendingCallWatcher_SuperDisconnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal) {
    if (auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self)) {
        vqdbuspendingcallwatcher->QDBusPendingCallWatcher::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDBusPendingCallWatcher::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDBusPendingCallWatcher_OnDisconnectNotify(QDBusPendingCallWatcher* self, intptr_t slot) {
    if (auto* vqdbuspendingcallwatcher = dynamic_cast<VirtualQDBusPendingCallWatcher*>(self))
        vqdbuspendingcallwatcher->qdbuspendingcallwatcher_disconnectnotify_callback = reinterpret_cast<VirtualQDBusPendingCallWatcher::QDBusPendingCallWatcher_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QDBusPendingCallWatcher_Sender(const QDBusPendingCallWatcher* self) {
    if (auto* vqdbuspendingcallwatcher = const_cast<VirtualQDBusPendingCallWatcher*>(dynamic_cast<const VirtualQDBusPendingCallWatcher*>(self))) {
        return vqdbuspendingcallwatcher->VirtualQDBusPendingCallWatcher::sender();
    } else
        qFatal("Error: Protected method QDBusPendingCallWatcher::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDBusPendingCallWatcher_SenderSignalIndex(const QDBusPendingCallWatcher* self) {
    if (auto* vqdbuspendingcallwatcher = const_cast<VirtualQDBusPendingCallWatcher*>(dynamic_cast<const VirtualQDBusPendingCallWatcher*>(self))) {
        return vqdbuspendingcallwatcher->VirtualQDBusPendingCallWatcher::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDBusPendingCallWatcher::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDBusPendingCallWatcher_Receivers(const QDBusPendingCallWatcher* self, const char* signal) {
    if (auto* vqdbuspendingcallwatcher = const_cast<VirtualQDBusPendingCallWatcher*>(dynamic_cast<const VirtualQDBusPendingCallWatcher*>(self))) {
        return vqdbuspendingcallwatcher->VirtualQDBusPendingCallWatcher::receivers(signal);
    } else
        qFatal("Error: Protected method QDBusPendingCallWatcher::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDBusPendingCallWatcher_IsSignalConnected(const QDBusPendingCallWatcher* self, const QMetaMethod* signal) {
    if (auto* vqdbuspendingcallwatcher = const_cast<VirtualQDBusPendingCallWatcher*>(dynamic_cast<const VirtualQDBusPendingCallWatcher*>(self))) {
        return vqdbuspendingcallwatcher->VirtualQDBusPendingCallWatcher::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDBusPendingCallWatcher::isSignalConnected called without a directly constructed type");
}

void QDBusPendingCallWatcher_Delete(QDBusPendingCallWatcher* self) {
    delete self;
}
