#include <QAbstractEventDispatcher>
#include <QChildEvent>
#include <QDeadlineTimer>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QThread>
#include <QTimerEvent>
#include <qthread.h>
#include "libqthread.h"
#include "libqthread.hxx"

QThread* QThread_new() {
    return new VirtualQThread();
}

QThread* QThread_new2(QObject* parent) {
    return new VirtualQThread(parent);
}

QMetaObject* QThread_MetaObject(const QThread* self) {
    return (QMetaObject*)self->metaObject();
}

void* QThread_Metacast(QThread* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QThread_Metacall(QThread* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QThread_Tr(const char* s) {
    auto _ret = QThread::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void* QThread_CurrentThreadId() {
    return static_cast<void*>(QThread::currentThreadId());
}

QThread* QThread_CurrentThread() {
    return QThread::currentThread();
}

bool QThread_IsMainThread() {
    return QThread::isMainThread();
}

int QThread_IdealThreadCount() {
    return QThread::idealThreadCount();
}

void QThread_YieldCurrentThread() {
    QThread::yieldCurrentThread();
}

void QThread_SetPriority(QThread* self, int priority) {
    self->setPriority(static_cast<QThread::Priority>(priority));
}

int QThread_Priority(const QThread* self) {
    return static_cast<int>(self->priority());
}

bool QThread_IsFinished(const QThread* self) {
    return self->isFinished();
}

bool QThread_IsRunning(const QThread* self) {
    return self->isRunning();
}

void QThread_RequestInterruption(QThread* self) {
    self->requestInterruption();
}

bool QThread_IsInterruptionRequested(const QThread* self) {
    return self->isInterruptionRequested();
}

void QThread_SetStackSize(QThread* self, unsigned int stackSize) {
    self->setStackSize(static_cast<uint>(stackSize));
}

unsigned int QThread_StackSize(const QThread* self) {
    return static_cast<unsigned int>(self->stackSize());
}

QAbstractEventDispatcher* QThread_EventDispatcher(const QThread* self) {
    return self->eventDispatcher();
}

void QThread_SetEventDispatcher(QThread* self, QAbstractEventDispatcher* eventDispatcher) {
    self->setEventDispatcher(eventDispatcher);
}

bool QThread_Event(QThread* self, QEvent* event) {
    return self->event(event);
}

int QThread_LoopLevel(const QThread* self) {
    return self->loopLevel();
}

bool QThread_IsCurrentThread(const QThread* self) {
    return self->isCurrentThread();
}

void QThread_Start(QThread* self) {
    self->start();
}

void QThread_Terminate(QThread* self) {
    self->terminate();
}

void QThread_Exit(QThread* self) {
    self->exit();
}

void QThread_Quit(QThread* self) {
    self->quit();
}

bool QThread_Wait(QThread* self) {
    return self->wait();
}

bool QThread_Wait2(QThread* self, unsigned long time) {
    return self->wait(static_cast<unsigned long>(time));
}

void QThread_Sleep(unsigned long param1) {
    QThread::sleep(static_cast<unsigned long>(param1));
}

void QThread_Msleep(unsigned long param1) {
    QThread::msleep(static_cast<unsigned long>(param1));
}

void QThread_Usleep(unsigned long param1) {
    QThread::usleep(static_cast<unsigned long>(param1));
}

void QThread_Sleep2(int64_t nsec) {
    QThread::sleep(static_cast<std::chrono::nanoseconds>(nsec));
}

void QThread_Run(QThread* self) {
    auto* vqthread = dynamic_cast<VirtualQThread*>(self);
    if (vqthread) {
        vqthread->run();
    }
}

libqt_string QThread_Tr2(const char* s, const char* c) {
    auto _ret = QThread::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QThread_Tr3(const char* s, const char* c, int n) {
    auto _ret = QThread::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QThread_Start1(QThread* self, int param1) {
    self->start(static_cast<QThread::Priority>(param1));
}

void QThread_Exit1(QThread* self, int retcode) {
    self->exit(static_cast<int>(retcode));
}

bool QThread_Wait1(QThread* self, QDeadlineTimer* deadline) {
    return self->wait(*deadline);
}

// Base class handler implementation
QMetaObject* QThread_SuperMetaObject(const QThread* self) {
    return (QMetaObject*)self->QThread::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QThread_OnMetaObject(QThread* self, intptr_t slot) {
    if (auto* vqthread = const_cast<VirtualQThread*>(dynamic_cast<const VirtualQThread*>(self)))
        vqthread->qthread_metaobject_callback = reinterpret_cast<VirtualQThread::QThread_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QThread_SuperMetacast(QThread* self, const char* param1) {
    return self->QThread::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QThread_OnMetacast(QThread* self, intptr_t slot) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self))
        vqthread->qthread_metacast_callback = reinterpret_cast<VirtualQThread::QThread_Metacast_Callback>(slot);
}

// Base class handler implementation
int QThread_SuperMetacall(QThread* self, int param1, int param2, void** param3) {
    return self->QThread::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QThread_OnMetacall(QThread* self, intptr_t slot) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self))
        vqthread->qthread_metacall_callback = reinterpret_cast<VirtualQThread::QThread_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QThread_SuperEvent(QThread* self, QEvent* event) {
    return self->QThread::event(event);
}

// Auxiliary method to allow providing re-implementation
void QThread_OnEvent(QThread* self, intptr_t slot) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self))
        vqthread->qthread_event_callback = reinterpret_cast<VirtualQThread::QThread_Event_Callback>(slot);
}

// Base class handler implementation
void QThread_SuperRun(QThread* self) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->QThread::run();
    } else
        qFatal("Error: Protected virtual method QThread::run called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QThread_OnRun(QThread* self, intptr_t slot) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self))
        vqthread->qthread_run_callback = reinterpret_cast<VirtualQThread::QThread_Run_Callback>(slot);
}

// Derived class handler implementation
bool QThread_EventFilter(QThread* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QThread_SuperEventFilter(QThread* self, QObject* watched, QEvent* event) {
    return self->QThread::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QThread_OnEventFilter(QThread* self, intptr_t slot) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self))
        vqthread->qthread_eventfilter_callback = reinterpret_cast<VirtualQThread::QThread_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QThread_TimerEvent(QThread* self, QTimerEvent* event) {
    auto* vqthread = dynamic_cast<VirtualQThread*>(self);
    if (vqthread) {
        vqthread->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QThread::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QThread_SuperTimerEvent(QThread* self, QTimerEvent* event) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->QThread::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QThread::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QThread_OnTimerEvent(QThread* self, intptr_t slot) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self))
        vqthread->qthread_timerevent_callback = reinterpret_cast<VirtualQThread::QThread_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QThread_ChildEvent(QThread* self, QChildEvent* event) {
    auto* vqthread = dynamic_cast<VirtualQThread*>(self);
    if (vqthread) {
        vqthread->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QThread::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QThread_SuperChildEvent(QThread* self, QChildEvent* event) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->QThread::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QThread::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QThread_OnChildEvent(QThread* self, intptr_t slot) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self))
        vqthread->qthread_childevent_callback = reinterpret_cast<VirtualQThread::QThread_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QThread_CustomEvent(QThread* self, QEvent* event) {
    auto* vqthread = dynamic_cast<VirtualQThread*>(self);
    if (vqthread) {
        vqthread->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QThread::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QThread_SuperCustomEvent(QThread* self, QEvent* event) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->QThread::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QThread::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QThread_OnCustomEvent(QThread* self, intptr_t slot) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self))
        vqthread->qthread_customevent_callback = reinterpret_cast<VirtualQThread::QThread_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QThread_ConnectNotify(QThread* self, const QMetaMethod* signal) {
    auto* vqthread = dynamic_cast<VirtualQThread*>(self);
    if (vqthread) {
        vqthread->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QThread::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QThread_SuperConnectNotify(QThread* self, const QMetaMethod* signal) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->QThread::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QThread::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QThread_OnConnectNotify(QThread* self, intptr_t slot) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self))
        vqthread->qthread_connectnotify_callback = reinterpret_cast<VirtualQThread::QThread_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QThread_DisconnectNotify(QThread* self, const QMetaMethod* signal) {
    auto* vqthread = dynamic_cast<VirtualQThread*>(self);
    if (vqthread) {
        vqthread->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QThread::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QThread_SuperDisconnectNotify(QThread* self, const QMetaMethod* signal) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->QThread::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QThread::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QThread_OnDisconnectNotify(QThread* self, intptr_t slot) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self))
        vqthread->qthread_disconnectnotify_callback = reinterpret_cast<VirtualQThread::QThread_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
int QThread_Exec(QThread* self) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        return vqthread->VirtualQThread::exec();
    } else
        qFatal("Error: Protected method QThread::exec called without a directly constructed type");
}

// Derived class protected handler implementation
void QThread_SetTerminationEnabled(QThread* self) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->VirtualQThread::setTerminationEnabled();
    } else
        qFatal("Error: Protected method QThread::setTerminationEnabled called without a directly constructed type");
}

// Derived class protected handler implementation
void QThread_SetTerminationEnabled1(QThread* self, bool enabled) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->VirtualQThread::setTerminationEnabled(enabled);
    } else
        qFatal("Error: Protected method QThread::setTerminationEnabled1 called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QThread_Sender(const QThread* self) {
    if (auto* vqthread = const_cast<VirtualQThread*>(dynamic_cast<const VirtualQThread*>(self))) {
        return vqthread->VirtualQThread::sender();
    } else
        qFatal("Error: Protected method QThread::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QThread_SenderSignalIndex(const QThread* self) {
    if (auto* vqthread = const_cast<VirtualQThread*>(dynamic_cast<const VirtualQThread*>(self))) {
        return vqthread->VirtualQThread::senderSignalIndex();
    } else
        qFatal("Error: Protected method QThread::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QThread_Receivers(const QThread* self, const char* signal) {
    if (auto* vqthread = const_cast<VirtualQThread*>(dynamic_cast<const VirtualQThread*>(self))) {
        return vqthread->VirtualQThread::receivers(signal);
    } else
        qFatal("Error: Protected method QThread::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QThread_IsSignalConnected(const QThread* self, const QMetaMethod* signal) {
    if (auto* vqthread = const_cast<VirtualQThread*>(dynamic_cast<const VirtualQThread*>(self))) {
        return vqthread->VirtualQThread::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QThread::isSignalConnected called without a directly constructed type");
}

void QThread_Connect_Started(QThread* self, intptr_t slot) {
    void (*slotFunc)(QThread*) = reinterpret_cast<void (*)(QThread*)>(slot);
    QThread::connect(self, &QThread::started, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QThread_Connect_Finished(QThread* self, intptr_t slot) {
    void (*slotFunc)(QThread*) = reinterpret_cast<void (*)(QThread*)>(slot);
    QThread::connect(self, &QThread::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QThread_Delete(QThread* self) {
    delete self;
}
