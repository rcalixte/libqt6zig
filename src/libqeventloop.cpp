#include <QChildEvent>
#include <QDeadlineTimer>
#include <QEvent>
#include <QEventLoop>
#include <QEventLoopLocker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QThread>
#include <QTimerEvent>
#include <qeventloop.h>
#include "libqeventloop.h"
#include "libqeventloop.hxx"

QEventLoop* QEventLoop_new() {
    return new VirtualQEventLoop();
}

QEventLoop* QEventLoop_new2(QObject* parent) {
    return new VirtualQEventLoop(parent);
}

QMetaObject* QEventLoop_MetaObject(const QEventLoop* self) {
    return (QMetaObject*)self->metaObject();
}

void* QEventLoop_Metacast(QEventLoop* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QEventLoop_Metacall(QEventLoop* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QEventLoop_Tr(const char* s) {
    auto _ret = QEventLoop::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QEventLoop_ProcessEvents(QEventLoop* self) {
    return self->processEvents();
}

void QEventLoop_ProcessEvents2(QEventLoop* self, int flags, int maximumTime) {
    self->processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags), static_cast<int>(maximumTime));
}

void QEventLoop_ProcessEvents3(QEventLoop* self, int flags, QDeadlineTimer* deadline) {
    self->processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags), *deadline);
}

int QEventLoop_Exec(QEventLoop* self) {
    return self->exec();
}

bool QEventLoop_IsRunning(const QEventLoop* self) {
    return self->isRunning();
}

void QEventLoop_WakeUp(QEventLoop* self) {
    self->wakeUp();
}

bool QEventLoop_Event(QEventLoop* self, QEvent* event) {
    return self->event(event);
}

void QEventLoop_Exit(QEventLoop* self) {
    self->exit();
}

void QEventLoop_Quit(QEventLoop* self) {
    self->quit();
}

libqt_string QEventLoop_Tr2(const char* s, const char* c) {
    auto _ret = QEventLoop::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QEventLoop_Tr3(const char* s, const char* c, int n) {
    auto _ret = QEventLoop::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QEventLoop_ProcessEvents1(QEventLoop* self, int flags) {
    return self->processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags));
}

int QEventLoop_Exec1(QEventLoop* self, int flags) {
    return self->exec(static_cast<QEventLoop::ProcessEventsFlags>(flags));
}

void QEventLoop_Exit1(QEventLoop* self, int returnCode) {
    self->exit(static_cast<int>(returnCode));
}

// Base class handler implementation
QMetaObject* QEventLoop_SuperMetaObject(const QEventLoop* self) {
    return (QMetaObject*)self->QEventLoop::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QEventLoop_OnMetaObject(QEventLoop* self, intptr_t slot) {
    if (auto* vqeventloop = const_cast<VirtualQEventLoop*>(dynamic_cast<const VirtualQEventLoop*>(self)))
        vqeventloop->qeventloop_metaobject_callback = reinterpret_cast<VirtualQEventLoop::QEventLoop_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QEventLoop_SuperMetacast(QEventLoop* self, const char* param1) {
    return self->QEventLoop::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QEventLoop_OnMetacast(QEventLoop* self, intptr_t slot) {
    if (auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self))
        vqeventloop->qeventloop_metacast_callback = reinterpret_cast<VirtualQEventLoop::QEventLoop_Metacast_Callback>(slot);
}

// Base class handler implementation
int QEventLoop_SuperMetacall(QEventLoop* self, int param1, int param2, void** param3) {
    return self->QEventLoop::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QEventLoop_OnMetacall(QEventLoop* self, intptr_t slot) {
    if (auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self))
        vqeventloop->qeventloop_metacall_callback = reinterpret_cast<VirtualQEventLoop::QEventLoop_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QEventLoop_SuperEvent(QEventLoop* self, QEvent* event) {
    return self->QEventLoop::event(event);
}

// Auxiliary method to allow providing re-implementation
void QEventLoop_OnEvent(QEventLoop* self, intptr_t slot) {
    if (auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self))
        vqeventloop->qeventloop_event_callback = reinterpret_cast<VirtualQEventLoop::QEventLoop_Event_Callback>(slot);
}

// Derived class handler implementation
bool QEventLoop_EventFilter(QEventLoop* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QEventLoop_SuperEventFilter(QEventLoop* self, QObject* watched, QEvent* event) {
    return self->QEventLoop::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QEventLoop_OnEventFilter(QEventLoop* self, intptr_t slot) {
    if (auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self))
        vqeventloop->qeventloop_eventfilter_callback = reinterpret_cast<VirtualQEventLoop::QEventLoop_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QEventLoop_TimerEvent(QEventLoop* self, QTimerEvent* event) {
    auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self);
    if (vqeventloop) {
        vqeventloop->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QEventLoop::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QEventLoop_SuperTimerEvent(QEventLoop* self, QTimerEvent* event) {
    if (auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self)) {
        vqeventloop->QEventLoop::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QEventLoop::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QEventLoop_OnTimerEvent(QEventLoop* self, intptr_t slot) {
    if (auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self))
        vqeventloop->qeventloop_timerevent_callback = reinterpret_cast<VirtualQEventLoop::QEventLoop_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QEventLoop_ChildEvent(QEventLoop* self, QChildEvent* event) {
    auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self);
    if (vqeventloop) {
        vqeventloop->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QEventLoop::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QEventLoop_SuperChildEvent(QEventLoop* self, QChildEvent* event) {
    if (auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self)) {
        vqeventloop->QEventLoop::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QEventLoop::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QEventLoop_OnChildEvent(QEventLoop* self, intptr_t slot) {
    if (auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self))
        vqeventloop->qeventloop_childevent_callback = reinterpret_cast<VirtualQEventLoop::QEventLoop_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QEventLoop_CustomEvent(QEventLoop* self, QEvent* event) {
    auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self);
    if (vqeventloop) {
        vqeventloop->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QEventLoop::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QEventLoop_SuperCustomEvent(QEventLoop* self, QEvent* event) {
    if (auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self)) {
        vqeventloop->QEventLoop::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QEventLoop::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QEventLoop_OnCustomEvent(QEventLoop* self, intptr_t slot) {
    if (auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self))
        vqeventloop->qeventloop_customevent_callback = reinterpret_cast<VirtualQEventLoop::QEventLoop_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QEventLoop_ConnectNotify(QEventLoop* self, const QMetaMethod* signal) {
    auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self);
    if (vqeventloop) {
        vqeventloop->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QEventLoop::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QEventLoop_SuperConnectNotify(QEventLoop* self, const QMetaMethod* signal) {
    if (auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self)) {
        vqeventloop->QEventLoop::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QEventLoop::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QEventLoop_OnConnectNotify(QEventLoop* self, intptr_t slot) {
    if (auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self))
        vqeventloop->qeventloop_connectnotify_callback = reinterpret_cast<VirtualQEventLoop::QEventLoop_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QEventLoop_DisconnectNotify(QEventLoop* self, const QMetaMethod* signal) {
    auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self);
    if (vqeventloop) {
        vqeventloop->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QEventLoop::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QEventLoop_SuperDisconnectNotify(QEventLoop* self, const QMetaMethod* signal) {
    if (auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self)) {
        vqeventloop->QEventLoop::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QEventLoop::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QEventLoop_OnDisconnectNotify(QEventLoop* self, intptr_t slot) {
    if (auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self))
        vqeventloop->qeventloop_disconnectnotify_callback = reinterpret_cast<VirtualQEventLoop::QEventLoop_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QEventLoop_Sender(const QEventLoop* self) {
    if (auto* vqeventloop = const_cast<VirtualQEventLoop*>(dynamic_cast<const VirtualQEventLoop*>(self))) {
        return vqeventloop->VirtualQEventLoop::sender();
    } else
        qFatal("Error: Protected method QEventLoop::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QEventLoop_SenderSignalIndex(const QEventLoop* self) {
    if (auto* vqeventloop = const_cast<VirtualQEventLoop*>(dynamic_cast<const VirtualQEventLoop*>(self))) {
        return vqeventloop->VirtualQEventLoop::senderSignalIndex();
    } else
        qFatal("Error: Protected method QEventLoop::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QEventLoop_Receivers(const QEventLoop* self, const char* signal) {
    if (auto* vqeventloop = const_cast<VirtualQEventLoop*>(dynamic_cast<const VirtualQEventLoop*>(self))) {
        return vqeventloop->VirtualQEventLoop::receivers(signal);
    } else
        qFatal("Error: Protected method QEventLoop::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QEventLoop_IsSignalConnected(const QEventLoop* self, const QMetaMethod* signal) {
    if (auto* vqeventloop = const_cast<VirtualQEventLoop*>(dynamic_cast<const VirtualQEventLoop*>(self))) {
        return vqeventloop->VirtualQEventLoop::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QEventLoop::isSignalConnected called without a directly constructed type");
}

void QEventLoop_Delete(QEventLoop* self) {
    delete self;
}

QEventLoopLocker* QEventLoopLocker_new() {
    return new QEventLoopLocker();
}

QEventLoopLocker* QEventLoopLocker_new2(QEventLoop* loop) {
    return new QEventLoopLocker(loop);
}

QEventLoopLocker* QEventLoopLocker_new3(QThread* thread) {
    return new QEventLoopLocker(thread);
}

void QEventLoopLocker_Swap(QEventLoopLocker* self, QEventLoopLocker* other) {
    self->swap(*other);
}

void QEventLoopLocker_Delete(QEventLoopLocker* self) {
    delete self;
}
