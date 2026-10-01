#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTimer_Tr(const char* s) {
    auto _ret = QTimer::tr(s);
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

void QTimer_SingleShot(int msec, const QObject* receiver, const char* member) {
    QTimer::singleShot(static_cast<int>(msec), receiver, member);
}

void QTimer_SingleShot2(int msec, int timerType, const QObject* receiver, const char* member) {
    QTimer::singleShot(static_cast<int>(msec), static_cast<Qt::TimerType>(timerType), receiver, member);
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

void QTimer_SetInterval2(QTimer* self, int64_t value) {
    self->setInterval(static_cast<std::chrono::milliseconds>(value));
}

int64_t QTimer_IntervalAsDuration(const QTimer* self) {
    std::chrono::milliseconds _ret = self->intervalAsDuration();
    return _ret.count();
}

int64_t QTimer_RemainingTimeAsDuration(const QTimer* self) {
    std::chrono::milliseconds _ret = self->remainingTimeAsDuration();
    return _ret.count();
}

void QTimer_SingleShot3(int64_t value, const QObject* receiver, const char* member) {
    QTimer::singleShot(static_cast<std::chrono::nanoseconds>(value), receiver, member);
}

void QTimer_SingleShot4(int64_t interval, int timerType, const QObject* receiver, const char* member) {
    QTimer::singleShot(static_cast<std::chrono::nanoseconds>(interval), static_cast<Qt::TimerType>(timerType), receiver, member);
}

void QTimer_Start3(QTimer* self, int64_t value) {
    self->start(static_cast<std::chrono::milliseconds>(value));
}

void QTimer_TimerEvent(QTimer* self, QTimerEvent* param1) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer) {
        vqtimer->timerEvent(param1);
    }
}

libqt_string QTimer_Tr2(const char* s, const char* c) {
    auto _ret = QTimer::tr(s, c);
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
    auto _ret = QTimer::tr(s, c, static_cast<int>(n));
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
QMetaObject* QTimer_SuperMetaObject(const QTimer* self) {
    return (QMetaObject*)self->QTimer::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnMetaObject(QTimer* self, intptr_t slot) {
    if (auto* vqtimer = const_cast<VirtualQTimer*>(dynamic_cast<const VirtualQTimer*>(self)))
        vqtimer->qtimer_metaobject_callback = reinterpret_cast<VirtualQTimer::QTimer_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTimer_SuperMetacast(QTimer* self, const char* param1) {
    return self->QTimer::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnMetacast(QTimer* self, intptr_t slot) {
    if (auto* vqtimer = dynamic_cast<VirtualQTimer*>(self))
        vqtimer->qtimer_metacast_callback = reinterpret_cast<VirtualQTimer::QTimer_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTimer_SuperMetacall(QTimer* self, int param1, int param2, void** param3) {
    return self->QTimer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnMetacall(QTimer* self, intptr_t slot) {
    if (auto* vqtimer = dynamic_cast<VirtualQTimer*>(self))
        vqtimer->qtimer_metacall_callback = reinterpret_cast<VirtualQTimer::QTimer_Metacall_Callback>(slot);
}

// Base class handler implementation
void QTimer_SuperTimerEvent(QTimer* self, QTimerEvent* param1) {
    if (auto* vqtimer = dynamic_cast<VirtualQTimer*>(self)) {
        vqtimer->QTimer::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTimer::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnTimerEvent(QTimer* self, intptr_t slot) {
    if (auto* vqtimer = dynamic_cast<VirtualQTimer*>(self))
        vqtimer->qtimer_timerevent_callback = reinterpret_cast<VirtualQTimer::QTimer_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
bool QTimer_Event(QTimer* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QTimer_SuperEvent(QTimer* self, QEvent* event) {
    return self->QTimer::event(event);
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnEvent(QTimer* self, intptr_t slot) {
    if (auto* vqtimer = dynamic_cast<VirtualQTimer*>(self))
        vqtimer->qtimer_event_callback = reinterpret_cast<VirtualQTimer::QTimer_Event_Callback>(slot);
}

// Derived class handler implementation
bool QTimer_EventFilter(QTimer* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QTimer_SuperEventFilter(QTimer* self, QObject* watched, QEvent* event) {
    return self->QTimer::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnEventFilter(QTimer* self, intptr_t slot) {
    if (auto* vqtimer = dynamic_cast<VirtualQTimer*>(self))
        vqtimer->qtimer_eventfilter_callback = reinterpret_cast<VirtualQTimer::QTimer_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QTimer_ChildEvent(QTimer* self, QChildEvent* event) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer) {
        vqtimer->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimer::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimer_SuperChildEvent(QTimer* self, QChildEvent* event) {
    if (auto* vqtimer = dynamic_cast<VirtualQTimer*>(self)) {
        vqtimer->QTimer::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimer::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnChildEvent(QTimer* self, intptr_t slot) {
    if (auto* vqtimer = dynamic_cast<VirtualQTimer*>(self))
        vqtimer->qtimer_childevent_callback = reinterpret_cast<VirtualQTimer::QTimer_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimer_CustomEvent(QTimer* self, QEvent* event) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer) {
        vqtimer->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimer::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimer_SuperCustomEvent(QTimer* self, QEvent* event) {
    if (auto* vqtimer = dynamic_cast<VirtualQTimer*>(self)) {
        vqtimer->QTimer::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimer::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnCustomEvent(QTimer* self, intptr_t slot) {
    if (auto* vqtimer = dynamic_cast<VirtualQTimer*>(self))
        vqtimer->qtimer_customevent_callback = reinterpret_cast<VirtualQTimer::QTimer_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimer_ConnectNotify(QTimer* self, const QMetaMethod* signal) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer) {
        vqtimer->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTimer::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimer_SuperConnectNotify(QTimer* self, const QMetaMethod* signal) {
    if (auto* vqtimer = dynamic_cast<VirtualQTimer*>(self)) {
        vqtimer->QTimer::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTimer::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnConnectNotify(QTimer* self, intptr_t slot) {
    if (auto* vqtimer = dynamic_cast<VirtualQTimer*>(self))
        vqtimer->qtimer_connectnotify_callback = reinterpret_cast<VirtualQTimer::QTimer_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTimer_DisconnectNotify(QTimer* self, const QMetaMethod* signal) {
    auto* vqtimer = dynamic_cast<VirtualQTimer*>(self);
    if (vqtimer) {
        vqtimer->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTimer::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimer_SuperDisconnectNotify(QTimer* self, const QMetaMethod* signal) {
    if (auto* vqtimer = dynamic_cast<VirtualQTimer*>(self)) {
        vqtimer->QTimer::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTimer::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimer_OnDisconnectNotify(QTimer* self, intptr_t slot) {
    if (auto* vqtimer = dynamic_cast<VirtualQTimer*>(self))
        vqtimer->qtimer_disconnectnotify_callback = reinterpret_cast<VirtualQTimer::QTimer_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QTimer_Sender(const QTimer* self) {
    if (auto* vqtimer = const_cast<VirtualQTimer*>(dynamic_cast<const VirtualQTimer*>(self))) {
        return vqtimer->VirtualQTimer::sender();
    } else
        qFatal("Error: Protected method QTimer::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTimer_SenderSignalIndex(const QTimer* self) {
    if (auto* vqtimer = const_cast<VirtualQTimer*>(dynamic_cast<const VirtualQTimer*>(self))) {
        return vqtimer->VirtualQTimer::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTimer::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTimer_Receivers(const QTimer* self, const char* signal) {
    if (auto* vqtimer = const_cast<VirtualQTimer*>(dynamic_cast<const VirtualQTimer*>(self))) {
        return vqtimer->VirtualQTimer::receivers(signal);
    } else
        qFatal("Error: Protected method QTimer::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTimer_IsSignalConnected(const QTimer* self, const QMetaMethod* signal) {
    if (auto* vqtimer = const_cast<VirtualQTimer*>(dynamic_cast<const VirtualQTimer*>(self))) {
        return vqtimer->VirtualQTimer::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTimer::isSignalConnected called without a directly constructed type");
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
