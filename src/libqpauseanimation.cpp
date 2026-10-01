#include <QAbstractAnimation>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPauseAnimation>
#include <QString>
#include <QTimerEvent>
#include <qpauseanimation.h>
#include "libqpauseanimation.h"
#include "libqpauseanimation.hxx"

QPauseAnimation* QPauseAnimation_new() {
    return new VirtualQPauseAnimation();
}

QPauseAnimation* QPauseAnimation_new2(int msecs) {
    return new VirtualQPauseAnimation(static_cast<int>(msecs));
}

QPauseAnimation* QPauseAnimation_new3(QObject* parent) {
    return new VirtualQPauseAnimation(parent);
}

QPauseAnimation* QPauseAnimation_new4(int msecs, QObject* parent) {
    return new VirtualQPauseAnimation(static_cast<int>(msecs), parent);
}

QMetaObject* QPauseAnimation_MetaObject(const QPauseAnimation* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPauseAnimation_Metacast(QPauseAnimation* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPauseAnimation_Metacall(QPauseAnimation* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPauseAnimation_Tr(const char* s) {
    auto _ret = QPauseAnimation::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QPauseAnimation_Duration(const QPauseAnimation* self) {
    return self->duration();
}

void QPauseAnimation_SetDuration(QPauseAnimation* self, int msecs) {
    self->setDuration(static_cast<int>(msecs));
}

bool QPauseAnimation_Event(QPauseAnimation* self, QEvent* e) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation) {
        return vqpauseanimation->event(e);
    }
    qFatal("Error: Protected method QPauseAnimation::event called without a directly constructed type");
}

void QPauseAnimation_UpdateCurrentTime(QPauseAnimation* self, int param1) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation) {
        vqpauseanimation->updateCurrentTime(static_cast<int>(param1));
    }
}

libqt_string QPauseAnimation_Tr2(const char* s, const char* c) {
    auto _ret = QPauseAnimation::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPauseAnimation_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPauseAnimation::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPauseAnimation_SuperMetaObject(const QPauseAnimation* self) {
    return (QMetaObject*)self->QPauseAnimation::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnMetaObject(QPauseAnimation* self, intptr_t slot) {
    if (auto* vqpauseanimation = const_cast<VirtualQPauseAnimation*>(dynamic_cast<const VirtualQPauseAnimation*>(self)))
        vqpauseanimation->qpauseanimation_metaobject_callback = reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPauseAnimation_SuperMetacast(QPauseAnimation* self, const char* param1) {
    return self->QPauseAnimation::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnMetacast(QPauseAnimation* self, intptr_t slot) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self))
        vqpauseanimation->qpauseanimation_metacast_callback = reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPauseAnimation_SuperMetacall(QPauseAnimation* self, int param1, int param2, void** param3) {
    return self->QPauseAnimation::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnMetacall(QPauseAnimation* self, intptr_t slot) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self))
        vqpauseanimation->qpauseanimation_metacall_callback = reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_Metacall_Callback>(slot);
}

// Base class handler implementation
int QPauseAnimation_SuperDuration(const QPauseAnimation* self) {
    return self->QPauseAnimation::duration();
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnDuration(QPauseAnimation* self, intptr_t slot) {
    if (auto* vqpauseanimation = const_cast<VirtualQPauseAnimation*>(dynamic_cast<const VirtualQPauseAnimation*>(self)))
        vqpauseanimation->qpauseanimation_duration_callback = reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_Duration_Callback>(slot);
}

// Base class handler implementation
bool QPauseAnimation_SuperEvent(QPauseAnimation* self, QEvent* e) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self)) {
        return vqpauseanimation->QPauseAnimation::event(e);
    } else
        qFatal("Error: Protected virtual method QPauseAnimation::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnEvent(QPauseAnimation* self, intptr_t slot) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self))
        vqpauseanimation->qpauseanimation_event_callback = reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_Event_Callback>(slot);
}

// Base class handler implementation
void QPauseAnimation_SuperUpdateCurrentTime(QPauseAnimation* self, int param1) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self)) {
        vqpauseanimation->QPauseAnimation::updateCurrentTime(static_cast<int>(param1));
    } else
        qFatal("Error: Protected virtual method QPauseAnimation::updateCurrentTime called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnUpdateCurrentTime(QPauseAnimation* self, intptr_t slot) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self))
        vqpauseanimation->qpauseanimation_updatecurrenttime_callback = reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_UpdateCurrentTime_Callback>(slot);
}

// Derived class handler implementation
void QPauseAnimation_UpdateState(QPauseAnimation* self, int newState, int oldState) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation) {
        vqpauseanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        qFatal("Error: Protected virtual method QPauseAnimation::updateState called without a directly constructed type");
    }
}

// Base class handler implementation
void QPauseAnimation_SuperUpdateState(QPauseAnimation* self, int newState, int oldState) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self)) {
        vqpauseanimation->QPauseAnimation::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else
        qFatal("Error: Protected virtual method QPauseAnimation::updateState called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnUpdateState(QPauseAnimation* self, intptr_t slot) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self))
        vqpauseanimation->qpauseanimation_updatestate_callback = reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_UpdateState_Callback>(slot);
}

// Derived class handler implementation
void QPauseAnimation_UpdateDirection(QPauseAnimation* self, int direction) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation) {
        vqpauseanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        qFatal("Error: Protected virtual method QPauseAnimation::updateDirection called without a directly constructed type");
    }
}

// Base class handler implementation
void QPauseAnimation_SuperUpdateDirection(QPauseAnimation* self, int direction) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self)) {
        vqpauseanimation->QPauseAnimation::updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else
        qFatal("Error: Protected virtual method QPauseAnimation::updateDirection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnUpdateDirection(QPauseAnimation* self, intptr_t slot) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self))
        vqpauseanimation->qpauseanimation_updatedirection_callback = reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_UpdateDirection_Callback>(slot);
}

// Derived class handler implementation
bool QPauseAnimation_EventFilter(QPauseAnimation* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPauseAnimation_SuperEventFilter(QPauseAnimation* self, QObject* watched, QEvent* event) {
    return self->QPauseAnimation::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnEventFilter(QPauseAnimation* self, intptr_t slot) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self))
        vqpauseanimation->qpauseanimation_eventfilter_callback = reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPauseAnimation_TimerEvent(QPauseAnimation* self, QTimerEvent* event) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation) {
        vqpauseanimation->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPauseAnimation::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPauseAnimation_SuperTimerEvent(QPauseAnimation* self, QTimerEvent* event) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self)) {
        vqpauseanimation->QPauseAnimation::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPauseAnimation::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnTimerEvent(QPauseAnimation* self, intptr_t slot) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self))
        vqpauseanimation->qpauseanimation_timerevent_callback = reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPauseAnimation_ChildEvent(QPauseAnimation* self, QChildEvent* event) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation) {
        vqpauseanimation->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPauseAnimation::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPauseAnimation_SuperChildEvent(QPauseAnimation* self, QChildEvent* event) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self)) {
        vqpauseanimation->QPauseAnimation::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPauseAnimation::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnChildEvent(QPauseAnimation* self, intptr_t slot) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self))
        vqpauseanimation->qpauseanimation_childevent_callback = reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPauseAnimation_CustomEvent(QPauseAnimation* self, QEvent* event) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation) {
        vqpauseanimation->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPauseAnimation::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPauseAnimation_SuperCustomEvent(QPauseAnimation* self, QEvent* event) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self)) {
        vqpauseanimation->QPauseAnimation::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPauseAnimation::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnCustomEvent(QPauseAnimation* self, intptr_t slot) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self))
        vqpauseanimation->qpauseanimation_customevent_callback = reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPauseAnimation_ConnectNotify(QPauseAnimation* self, const QMetaMethod* signal) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation) {
        vqpauseanimation->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPauseAnimation::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPauseAnimation_SuperConnectNotify(QPauseAnimation* self, const QMetaMethod* signal) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self)) {
        vqpauseanimation->QPauseAnimation::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPauseAnimation::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnConnectNotify(QPauseAnimation* self, intptr_t slot) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self))
        vqpauseanimation->qpauseanimation_connectnotify_callback = reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPauseAnimation_DisconnectNotify(QPauseAnimation* self, const QMetaMethod* signal) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation) {
        vqpauseanimation->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPauseAnimation::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPauseAnimation_SuperDisconnectNotify(QPauseAnimation* self, const QMetaMethod* signal) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self)) {
        vqpauseanimation->QPauseAnimation::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPauseAnimation::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnDisconnectNotify(QPauseAnimation* self, intptr_t slot) {
    if (auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self))
        vqpauseanimation->qpauseanimation_disconnectnotify_callback = reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QPauseAnimation_Sender(const QPauseAnimation* self) {
    if (auto* vqpauseanimation = const_cast<VirtualQPauseAnimation*>(dynamic_cast<const VirtualQPauseAnimation*>(self))) {
        return vqpauseanimation->VirtualQPauseAnimation::sender();
    } else
        qFatal("Error: Protected method QPauseAnimation::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPauseAnimation_SenderSignalIndex(const QPauseAnimation* self) {
    if (auto* vqpauseanimation = const_cast<VirtualQPauseAnimation*>(dynamic_cast<const VirtualQPauseAnimation*>(self))) {
        return vqpauseanimation->VirtualQPauseAnimation::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPauseAnimation::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPauseAnimation_Receivers(const QPauseAnimation* self, const char* signal) {
    if (auto* vqpauseanimation = const_cast<VirtualQPauseAnimation*>(dynamic_cast<const VirtualQPauseAnimation*>(self))) {
        return vqpauseanimation->VirtualQPauseAnimation::receivers(signal);
    } else
        qFatal("Error: Protected method QPauseAnimation::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPauseAnimation_IsSignalConnected(const QPauseAnimation* self, const QMetaMethod* signal) {
    if (auto* vqpauseanimation = const_cast<VirtualQPauseAnimation*>(dynamic_cast<const VirtualQPauseAnimation*>(self))) {
        return vqpauseanimation->VirtualQPauseAnimation::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPauseAnimation::isSignalConnected called without a directly constructed type");
}

void QPauseAnimation_Delete(QPauseAnimation* self) {
    delete self;
}
