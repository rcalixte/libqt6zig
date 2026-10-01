#include <QChildEvent>
#include <QChronoTimer>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qchronotimer.h>
#include "libqchronotimer.h"
#include "libqchronotimer.hxx"

QChronoTimer* QChronoTimer_new(int64_t nsec) {
    return new VirtualQChronoTimer(static_cast<std::chrono::nanoseconds>(nsec));
}

QChronoTimer* QChronoTimer_new2() {
    return new VirtualQChronoTimer();
}

QChronoTimer* QChronoTimer_new3(int64_t nsec, QObject* parent) {
    return new VirtualQChronoTimer(static_cast<std::chrono::nanoseconds>(nsec), parent);
}

QChronoTimer* QChronoTimer_new4(QObject* parent) {
    return new VirtualQChronoTimer(parent);
}

QMetaObject* QChronoTimer_MetaObject(const QChronoTimer* self) {
    return (QMetaObject*)self->metaObject();
}

void* QChronoTimer_Metacast(QChronoTimer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QChronoTimer_Metacall(QChronoTimer* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QChronoTimer_Tr(const char* s) {
    auto _ret = QChronoTimer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QChronoTimer_IsActive(const QChronoTimer* self) {
    return self->isActive();
}

int QChronoTimer_Id(const QChronoTimer* self) {
    return static_cast<int>(self->id());
}

void QChronoTimer_SetInterval(QChronoTimer* self, int64_t nsec) {
    self->setInterval(static_cast<std::chrono::nanoseconds>(nsec));
}

int64_t QChronoTimer_Interval(const QChronoTimer* self) {
    std::chrono::nanoseconds _ret = self->interval();
    return _ret.count();
}

int64_t QChronoTimer_RemainingTime(const QChronoTimer* self) {
    std::chrono::nanoseconds _ret = self->remainingTime();
    return _ret.count();
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

void QChronoTimer_TimerEvent(QChronoTimer* self, QTimerEvent* param1) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer) {
        vqchronotimer->timerEvent(param1);
    }
}

libqt_string QChronoTimer_Tr2(const char* s, const char* c) {
    auto _ret = QChronoTimer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QChronoTimer_Tr3(const char* s, const char* c, int n) {
    auto _ret = QChronoTimer::tr(s, c, static_cast<int>(n));
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
QMetaObject* QChronoTimer_SuperMetaObject(const QChronoTimer* self) {
    return (QMetaObject*)self->QChronoTimer::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnMetaObject(QChronoTimer* self, intptr_t slot) {
    if (auto* vqchronotimer = const_cast<VirtualQChronoTimer*>(dynamic_cast<const VirtualQChronoTimer*>(self)))
        vqchronotimer->qchronotimer_metaobject_callback = reinterpret_cast<VirtualQChronoTimer::QChronoTimer_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QChronoTimer_SuperMetacast(QChronoTimer* self, const char* param1) {
    return self->QChronoTimer::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnMetacast(QChronoTimer* self, intptr_t slot) {
    if (auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self))
        vqchronotimer->qchronotimer_metacast_callback = reinterpret_cast<VirtualQChronoTimer::QChronoTimer_Metacast_Callback>(slot);
}

// Base class handler implementation
int QChronoTimer_SuperMetacall(QChronoTimer* self, int param1, int param2, void** param3) {
    return self->QChronoTimer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnMetacall(QChronoTimer* self, intptr_t slot) {
    if (auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self))
        vqchronotimer->qchronotimer_metacall_callback = reinterpret_cast<VirtualQChronoTimer::QChronoTimer_Metacall_Callback>(slot);
}

// Base class handler implementation
void QChronoTimer_SuperTimerEvent(QChronoTimer* self, QTimerEvent* param1) {
    if (auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self)) {
        vqchronotimer->QChronoTimer::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method QChronoTimer::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnTimerEvent(QChronoTimer* self, intptr_t slot) {
    if (auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self))
        vqchronotimer->qchronotimer_timerevent_callback = reinterpret_cast<VirtualQChronoTimer::QChronoTimer_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
bool QChronoTimer_Event(QChronoTimer* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QChronoTimer_SuperEvent(QChronoTimer* self, QEvent* event) {
    return self->QChronoTimer::event(event);
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnEvent(QChronoTimer* self, intptr_t slot) {
    if (auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self))
        vqchronotimer->qchronotimer_event_callback = reinterpret_cast<VirtualQChronoTimer::QChronoTimer_Event_Callback>(slot);
}

// Derived class handler implementation
bool QChronoTimer_EventFilter(QChronoTimer* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QChronoTimer_SuperEventFilter(QChronoTimer* self, QObject* watched, QEvent* event) {
    return self->QChronoTimer::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnEventFilter(QChronoTimer* self, intptr_t slot) {
    if (auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self))
        vqchronotimer->qchronotimer_eventfilter_callback = reinterpret_cast<VirtualQChronoTimer::QChronoTimer_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QChronoTimer_ChildEvent(QChronoTimer* self, QChildEvent* event) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer) {
        vqchronotimer->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChronoTimer::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChronoTimer_SuperChildEvent(QChronoTimer* self, QChildEvent* event) {
    if (auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self)) {
        vqchronotimer->QChronoTimer::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QChronoTimer::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnChildEvent(QChronoTimer* self, intptr_t slot) {
    if (auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self))
        vqchronotimer->qchronotimer_childevent_callback = reinterpret_cast<VirtualQChronoTimer::QChronoTimer_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QChronoTimer_CustomEvent(QChronoTimer* self, QEvent* event) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer) {
        vqchronotimer->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QChronoTimer::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QChronoTimer_SuperCustomEvent(QChronoTimer* self, QEvent* event) {
    if (auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self)) {
        vqchronotimer->QChronoTimer::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QChronoTimer::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnCustomEvent(QChronoTimer* self, intptr_t slot) {
    if (auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self))
        vqchronotimer->qchronotimer_customevent_callback = reinterpret_cast<VirtualQChronoTimer::QChronoTimer_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QChronoTimer_ConnectNotify(QChronoTimer* self, const QMetaMethod* signal) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer) {
        vqchronotimer->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QChronoTimer::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QChronoTimer_SuperConnectNotify(QChronoTimer* self, const QMetaMethod* signal) {
    if (auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self)) {
        vqchronotimer->QChronoTimer::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QChronoTimer::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnConnectNotify(QChronoTimer* self, intptr_t slot) {
    if (auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self))
        vqchronotimer->qchronotimer_connectnotify_callback = reinterpret_cast<VirtualQChronoTimer::QChronoTimer_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QChronoTimer_DisconnectNotify(QChronoTimer* self, const QMetaMethod* signal) {
    auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self);
    if (vqchronotimer) {
        vqchronotimer->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QChronoTimer::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QChronoTimer_SuperDisconnectNotify(QChronoTimer* self, const QMetaMethod* signal) {
    if (auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self)) {
        vqchronotimer->QChronoTimer::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QChronoTimer::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QChronoTimer_OnDisconnectNotify(QChronoTimer* self, intptr_t slot) {
    if (auto* vqchronotimer = dynamic_cast<VirtualQChronoTimer*>(self))
        vqchronotimer->qchronotimer_disconnectnotify_callback = reinterpret_cast<VirtualQChronoTimer::QChronoTimer_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QChronoTimer_Sender(const QChronoTimer* self) {
    if (auto* vqchronotimer = const_cast<VirtualQChronoTimer*>(dynamic_cast<const VirtualQChronoTimer*>(self))) {
        return vqchronotimer->VirtualQChronoTimer::sender();
    } else
        qFatal("Error: Protected method QChronoTimer::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QChronoTimer_SenderSignalIndex(const QChronoTimer* self) {
    if (auto* vqchronotimer = const_cast<VirtualQChronoTimer*>(dynamic_cast<const VirtualQChronoTimer*>(self))) {
        return vqchronotimer->VirtualQChronoTimer::senderSignalIndex();
    } else
        qFatal("Error: Protected method QChronoTimer::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QChronoTimer_Receivers(const QChronoTimer* self, const char* signal) {
    if (auto* vqchronotimer = const_cast<VirtualQChronoTimer*>(dynamic_cast<const VirtualQChronoTimer*>(self))) {
        return vqchronotimer->VirtualQChronoTimer::receivers(signal);
    } else
        qFatal("Error: Protected method QChronoTimer::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QChronoTimer_IsSignalConnected(const QChronoTimer* self, const QMetaMethod* signal) {
    if (auto* vqchronotimer = const_cast<VirtualQChronoTimer*>(dynamic_cast<const VirtualQChronoTimer*>(self))) {
        return vqchronotimer->VirtualQChronoTimer::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QChronoTimer::isSignalConnected called without a directly constructed type");
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
