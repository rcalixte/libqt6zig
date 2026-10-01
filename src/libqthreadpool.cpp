#include <QChildEvent>
#include <QDeadlineTimer>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRunnable>
#include <QString>
#include <QThread>
#include <QThreadPool>
#include <QTimerEvent>
#include <qthreadpool.h>
#include "libqthreadpool.h"
#include "libqthreadpool.hxx"

QThreadPool* QThreadPool_new() {
    return new VirtualQThreadPool();
}

QThreadPool* QThreadPool_new2(QObject* parent) {
    return new VirtualQThreadPool(parent);
}

QMetaObject* QThreadPool_MetaObject(const QThreadPool* self) {
    return (QMetaObject*)self->metaObject();
}

void* QThreadPool_Metacast(QThreadPool* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QThreadPool_Metacall(QThreadPool* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QThreadPool_Tr(const char* s) {
    auto _ret = QThreadPool::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QThreadPool* QThreadPool_GlobalInstance() {
    return QThreadPool::globalInstance();
}

void QThreadPool_Start(QThreadPool* self, QRunnable* runnable) {
    self->start(runnable);
}

bool QThreadPool_TryStart(QThreadPool* self, QRunnable* runnable) {
    return self->tryStart(runnable);
}

void QThreadPool_StartOnReservedThread(QThreadPool* self, QRunnable* runnable) {
    self->startOnReservedThread(runnable);
}

int QThreadPool_ExpiryTimeout(const QThreadPool* self) {
    return self->expiryTimeout();
}

void QThreadPool_SetExpiryTimeout(QThreadPool* self, int expiryTimeout) {
    self->setExpiryTimeout(static_cast<int>(expiryTimeout));
}

int QThreadPool_MaxThreadCount(const QThreadPool* self) {
    return self->maxThreadCount();
}

void QThreadPool_SetMaxThreadCount(QThreadPool* self, int maxThreadCount) {
    self->setMaxThreadCount(static_cast<int>(maxThreadCount));
}

int QThreadPool_ActiveThreadCount(const QThreadPool* self) {
    return self->activeThreadCount();
}

void QThreadPool_SetStackSize(QThreadPool* self, unsigned int stackSize) {
    self->setStackSize(static_cast<uint>(stackSize));
}

unsigned int QThreadPool_StackSize(const QThreadPool* self) {
    return static_cast<unsigned int>(self->stackSize());
}

void QThreadPool_SetThreadPriority(QThreadPool* self, int priority) {
    self->setThreadPriority(static_cast<QThread::Priority>(priority));
}

int QThreadPool_ThreadPriority(const QThreadPool* self) {
    return static_cast<int>(self->threadPriority());
}

void QThreadPool_ReserveThread(QThreadPool* self) {
    self->reserveThread();
}

void QThreadPool_ReleaseThread(QThreadPool* self) {
    self->releaseThread();
}

bool QThreadPool_WaitForDone(QThreadPool* self, int msecs) {
    return self->waitForDone(static_cast<int>(msecs));
}

bool QThreadPool_WaitForDone2(QThreadPool* self) {
    return self->waitForDone();
}

void QThreadPool_Clear(QThreadPool* self) {
    self->clear();
}

bool QThreadPool_Contains(const QThreadPool* self, const QThread* thread) {
    return self->contains(thread);
}

bool QThreadPool_TryTake(QThreadPool* self, QRunnable* runnable) {
    return self->tryTake(runnable);
}

libqt_string QThreadPool_Tr2(const char* s, const char* c) {
    auto _ret = QThreadPool::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QThreadPool_Tr3(const char* s, const char* c, int n) {
    auto _ret = QThreadPool::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QThreadPool_Start2(QThreadPool* self, QRunnable* runnable, int priority) {
    self->start(runnable, static_cast<int>(priority));
}

bool QThreadPool_WaitForDone1(QThreadPool* self, QDeadlineTimer* deadline) {
    return self->waitForDone(*deadline);
}

// Base class handler implementation
QMetaObject* QThreadPool_SuperMetaObject(const QThreadPool* self) {
    return (QMetaObject*)self->QThreadPool::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnMetaObject(QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = const_cast<VirtualQThreadPool*>(dynamic_cast<const VirtualQThreadPool*>(self)))
        vqthreadpool->qthreadpool_metaobject_callback = reinterpret_cast<VirtualQThreadPool::QThreadPool_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QThreadPool_SuperMetacast(QThreadPool* self, const char* param1) {
    return self->QThreadPool::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnMetacast(QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self))
        vqthreadpool->qthreadpool_metacast_callback = reinterpret_cast<VirtualQThreadPool::QThreadPool_Metacast_Callback>(slot);
}

// Base class handler implementation
int QThreadPool_SuperMetacall(QThreadPool* self, int param1, int param2, void** param3) {
    return self->QThreadPool::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnMetacall(QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self))
        vqthreadpool->qthreadpool_metacall_callback = reinterpret_cast<VirtualQThreadPool::QThreadPool_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QThreadPool_Event(QThreadPool* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QThreadPool_SuperEvent(QThreadPool* self, QEvent* event) {
    return self->QThreadPool::event(event);
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnEvent(QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self))
        vqthreadpool->qthreadpool_event_callback = reinterpret_cast<VirtualQThreadPool::QThreadPool_Event_Callback>(slot);
}

// Derived class handler implementation
bool QThreadPool_EventFilter(QThreadPool* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QThreadPool_SuperEventFilter(QThreadPool* self, QObject* watched, QEvent* event) {
    return self->QThreadPool::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnEventFilter(QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self))
        vqthreadpool->qthreadpool_eventfilter_callback = reinterpret_cast<VirtualQThreadPool::QThreadPool_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QThreadPool_TimerEvent(QThreadPool* self, QTimerEvent* event) {
    auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self);
    if (vqthreadpool) {
        vqthreadpool->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QThreadPool::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QThreadPool_SuperTimerEvent(QThreadPool* self, QTimerEvent* event) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->QThreadPool::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QThreadPool::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnTimerEvent(QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self))
        vqthreadpool->qthreadpool_timerevent_callback = reinterpret_cast<VirtualQThreadPool::QThreadPool_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QThreadPool_ChildEvent(QThreadPool* self, QChildEvent* event) {
    auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self);
    if (vqthreadpool) {
        vqthreadpool->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QThreadPool::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QThreadPool_SuperChildEvent(QThreadPool* self, QChildEvent* event) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->QThreadPool::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QThreadPool::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnChildEvent(QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self))
        vqthreadpool->qthreadpool_childevent_callback = reinterpret_cast<VirtualQThreadPool::QThreadPool_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QThreadPool_CustomEvent(QThreadPool* self, QEvent* event) {
    auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self);
    if (vqthreadpool) {
        vqthreadpool->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QThreadPool::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QThreadPool_SuperCustomEvent(QThreadPool* self, QEvent* event) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->QThreadPool::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QThreadPool::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnCustomEvent(QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self))
        vqthreadpool->qthreadpool_customevent_callback = reinterpret_cast<VirtualQThreadPool::QThreadPool_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QThreadPool_ConnectNotify(QThreadPool* self, const QMetaMethod* signal) {
    auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self);
    if (vqthreadpool) {
        vqthreadpool->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QThreadPool::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QThreadPool_SuperConnectNotify(QThreadPool* self, const QMetaMethod* signal) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->QThreadPool::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QThreadPool::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnConnectNotify(QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self))
        vqthreadpool->qthreadpool_connectnotify_callback = reinterpret_cast<VirtualQThreadPool::QThreadPool_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QThreadPool_DisconnectNotify(QThreadPool* self, const QMetaMethod* signal) {
    auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self);
    if (vqthreadpool) {
        vqthreadpool->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QThreadPool::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QThreadPool_SuperDisconnectNotify(QThreadPool* self, const QMetaMethod* signal) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->QThreadPool::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QThreadPool::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnDisconnectNotify(QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self))
        vqthreadpool->qthreadpool_disconnectnotify_callback = reinterpret_cast<VirtualQThreadPool::QThreadPool_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QThreadPool_Sender(const QThreadPool* self) {
    if (auto* vqthreadpool = const_cast<VirtualQThreadPool*>(dynamic_cast<const VirtualQThreadPool*>(self))) {
        return vqthreadpool->VirtualQThreadPool::sender();
    } else
        qFatal("Error: Protected method QThreadPool::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QThreadPool_SenderSignalIndex(const QThreadPool* self) {
    if (auto* vqthreadpool = const_cast<VirtualQThreadPool*>(dynamic_cast<const VirtualQThreadPool*>(self))) {
        return vqthreadpool->VirtualQThreadPool::senderSignalIndex();
    } else
        qFatal("Error: Protected method QThreadPool::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QThreadPool_Receivers(const QThreadPool* self, const char* signal) {
    if (auto* vqthreadpool = const_cast<VirtualQThreadPool*>(dynamic_cast<const VirtualQThreadPool*>(self))) {
        return vqthreadpool->VirtualQThreadPool::receivers(signal);
    } else
        qFatal("Error: Protected method QThreadPool::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QThreadPool_IsSignalConnected(const QThreadPool* self, const QMetaMethod* signal) {
    if (auto* vqthreadpool = const_cast<VirtualQThreadPool*>(dynamic_cast<const VirtualQThreadPool*>(self))) {
        return vqthreadpool->VirtualQThreadPool::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QThreadPool::isSignalConnected called without a directly constructed type");
}

void QThreadPool_Delete(QThreadPool* self) {
    delete self;
}
