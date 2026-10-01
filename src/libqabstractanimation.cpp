#include <QAbstractAnimation>
#include <QAnimationDriver>
#include <QAnimationGroup>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qabstractanimation.h>
#include "libqabstractanimation.h"
#include "libqabstractanimation.hxx"

QAbstractAnimation* QAbstractAnimation_new() {
    return new VirtualQAbstractAnimation();
}

QAbstractAnimation* QAbstractAnimation_new2(QObject* parent) {
    return new VirtualQAbstractAnimation(parent);
}

QMetaObject* QAbstractAnimation_MetaObject(const QAbstractAnimation* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractAnimation_Metacast(QAbstractAnimation* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractAnimation_Metacall(QAbstractAnimation* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractAnimation_Tr(const char* s) {
    auto _ret = QAbstractAnimation::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QAbstractAnimation_State(const QAbstractAnimation* self) {
    return static_cast<int>(self->state());
}

QAnimationGroup* QAbstractAnimation_Group(const QAbstractAnimation* self) {
    return self->group();
}

int QAbstractAnimation_Direction(const QAbstractAnimation* self) {
    return static_cast<int>(self->direction());
}

void QAbstractAnimation_SetDirection(QAbstractAnimation* self, int direction) {
    self->setDirection(static_cast<QAbstractAnimation::Direction>(direction));
}

int QAbstractAnimation_CurrentTime(const QAbstractAnimation* self) {
    return self->currentTime();
}

int QAbstractAnimation_CurrentLoopTime(const QAbstractAnimation* self) {
    return self->currentLoopTime();
}

int QAbstractAnimation_LoopCount(const QAbstractAnimation* self) {
    return self->loopCount();
}

void QAbstractAnimation_SetLoopCount(QAbstractAnimation* self, int loopCount) {
    self->setLoopCount(static_cast<int>(loopCount));
}

int QAbstractAnimation_CurrentLoop(const QAbstractAnimation* self) {
    return self->currentLoop();
}

int QAbstractAnimation_Duration(const QAbstractAnimation* self) {
    return self->duration();
}

int QAbstractAnimation_TotalDuration(const QAbstractAnimation* self) {
    return self->totalDuration();
}

void QAbstractAnimation_Finished(QAbstractAnimation* self) {
    self->finished();
}

void QAbstractAnimation_Connect_Finished(QAbstractAnimation* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAnimation*) = reinterpret_cast<void (*)(QAbstractAnimation*)>(slot);
    QAbstractAnimation::connect(self,
                                static_cast<void (QAbstractAnimation::*)()>(&QAbstractAnimation::finished),
                                [self, slotFunc]() {
                                    slotFunc(self);
                                });
}

void QAbstractAnimation_StateChanged(QAbstractAnimation* self, int newState, int oldState) {
    self->stateChanged(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
}

void QAbstractAnimation_Connect_StateChanged(QAbstractAnimation* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAnimation*, int, int) = reinterpret_cast<void (*)(QAbstractAnimation*, int, int)>(slot);
    QAbstractAnimation::connect(self,
                                static_cast<void (QAbstractAnimation::*)(QAbstractAnimation::State, QAbstractAnimation::State)>(&QAbstractAnimation::stateChanged),
                                [self, slotFunc](QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
                                    int sigval1 = static_cast<int>(newState);
                                    int sigval2 = static_cast<int>(oldState);
                                    slotFunc(self, sigval1, sigval2);
                                });
}

void QAbstractAnimation_CurrentLoopChanged(QAbstractAnimation* self, int currentLoop) {
    self->currentLoopChanged(static_cast<int>(currentLoop));
}

void QAbstractAnimation_Connect_CurrentLoopChanged(QAbstractAnimation* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAnimation*, int) = reinterpret_cast<void (*)(QAbstractAnimation*, int)>(slot);
    QAbstractAnimation::connect(self,
                                static_cast<void (QAbstractAnimation::*)(int)>(&QAbstractAnimation::currentLoopChanged),
                                [self, slotFunc](int currentLoop) {
                                    int sigval1 = currentLoop;
                                    slotFunc(self, sigval1);
                                });
}

void QAbstractAnimation_DirectionChanged(QAbstractAnimation* self, int param1) {
    self->directionChanged(static_cast<QAbstractAnimation::Direction>(param1));
}

void QAbstractAnimation_Connect_DirectionChanged(QAbstractAnimation* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAnimation*, int) = reinterpret_cast<void (*)(QAbstractAnimation*, int)>(slot);
    QAbstractAnimation::connect(self,
                                static_cast<void (QAbstractAnimation::*)(QAbstractAnimation::Direction)>(&QAbstractAnimation::directionChanged),
                                [self, slotFunc](QAbstractAnimation::Direction param1) {
                                    int sigval1 = static_cast<int>(param1);
                                    slotFunc(self, sigval1);
                                });
}

void QAbstractAnimation_Start(QAbstractAnimation* self) {
    self->start();
}

void QAbstractAnimation_Pause(QAbstractAnimation* self) {
    self->pause();
}

void QAbstractAnimation_Resume(QAbstractAnimation* self) {
    self->resume();
}

void QAbstractAnimation_SetPaused(QAbstractAnimation* self, bool paused) {
    self->setPaused(paused);
}

void QAbstractAnimation_Stop(QAbstractAnimation* self) {
    self->stop();
}

void QAbstractAnimation_SetCurrentTime(QAbstractAnimation* self, int msecs) {
    self->setCurrentTime(static_cast<int>(msecs));
}

bool QAbstractAnimation_Event(QAbstractAnimation* self, QEvent* event) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation) {
        return vqabstractanimation->event(event);
    }
    qFatal("Error: Protected method QAbstractAnimation::event called without a directly constructed type");
}

void QAbstractAnimation_UpdateCurrentTime(QAbstractAnimation* self, int currentTime) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation) {
        vqabstractanimation->updateCurrentTime(static_cast<int>(currentTime));
    }
}

void QAbstractAnimation_UpdateState(QAbstractAnimation* self, int newState, int oldState) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation) {
        vqabstractanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

void QAbstractAnimation_UpdateDirection(QAbstractAnimation* self, int direction) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation) {
        vqabstractanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

libqt_string QAbstractAnimation_Tr2(const char* s, const char* c) {
    auto _ret = QAbstractAnimation::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractAnimation_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAbstractAnimation::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractAnimation_Start1(QAbstractAnimation* self, int policy) {
    self->start(static_cast<QAbstractAnimation::DeletionPolicy>(policy));
}

// Base class handler implementation
QMetaObject* QAbstractAnimation_SuperMetaObject(const QAbstractAnimation* self) {
    return (QMetaObject*)self->QAbstractAnimation::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnMetaObject(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self)))
        vqabstractanimation->qabstractanimation_metaobject_callback = reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAbstractAnimation_SuperMetacast(QAbstractAnimation* self, const char* param1) {
    return self->QAbstractAnimation::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnMetacast(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self))
        vqabstractanimation->qabstractanimation_metacast_callback = reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAbstractAnimation_SuperMetacall(QAbstractAnimation* self, int param1, int param2, void** param3) {
    return self->QAbstractAnimation::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnMetacall(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self))
        vqabstractanimation->qabstractanimation_metacall_callback = reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnDuration(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self)))
        vqabstractanimation->qabstractanimation_duration_callback = reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_Duration_Callback>(slot);
}

// Base class handler implementation
bool QAbstractAnimation_SuperEvent(QAbstractAnimation* self, QEvent* event) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        return vqabstractanimation->QAbstractAnimation::event(event);
    } else
        qFatal("Error: Protected virtual method QAbstractAnimation::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnEvent(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self))
        vqabstractanimation->qabstractanimation_event_callback = reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_Event_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnUpdateCurrentTime(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self))
        vqabstractanimation->qabstractanimation_updatecurrenttime_callback = reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_UpdateCurrentTime_Callback>(slot);
}

// Base class handler implementation
void QAbstractAnimation_SuperUpdateState(QAbstractAnimation* self, int newState, int oldState) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->QAbstractAnimation::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else
        qFatal("Error: Protected virtual method QAbstractAnimation::updateState called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnUpdateState(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self))
        vqabstractanimation->qabstractanimation_updatestate_callback = reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_UpdateState_Callback>(slot);
}

// Base class handler implementation
void QAbstractAnimation_SuperUpdateDirection(QAbstractAnimation* self, int direction) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->QAbstractAnimation::updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else
        qFatal("Error: Protected virtual method QAbstractAnimation::updateDirection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnUpdateDirection(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self))
        vqabstractanimation->qabstractanimation_updatedirection_callback = reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_UpdateDirection_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractAnimation_EventFilter(QAbstractAnimation* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAbstractAnimation_SuperEventFilter(QAbstractAnimation* self, QObject* watched, QEvent* event) {
    return self->QAbstractAnimation::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnEventFilter(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self))
        vqabstractanimation->qabstractanimation_eventfilter_callback = reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAbstractAnimation_TimerEvent(QAbstractAnimation* self, QTimerEvent* event) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation) {
        vqabstractanimation->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractAnimation::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractAnimation_SuperTimerEvent(QAbstractAnimation* self, QTimerEvent* event) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->QAbstractAnimation::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractAnimation::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnTimerEvent(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self))
        vqabstractanimation->qabstractanimation_timerevent_callback = reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractAnimation_ChildEvent(QAbstractAnimation* self, QChildEvent* event) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation) {
        vqabstractanimation->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractAnimation::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractAnimation_SuperChildEvent(QAbstractAnimation* self, QChildEvent* event) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->QAbstractAnimation::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractAnimation::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnChildEvent(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self))
        vqabstractanimation->qabstractanimation_childevent_callback = reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractAnimation_CustomEvent(QAbstractAnimation* self, QEvent* event) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation) {
        vqabstractanimation->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractAnimation::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractAnimation_SuperCustomEvent(QAbstractAnimation* self, QEvent* event) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->QAbstractAnimation::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractAnimation::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnCustomEvent(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self))
        vqabstractanimation->qabstractanimation_customevent_callback = reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractAnimation_ConnectNotify(QAbstractAnimation* self, const QMetaMethod* signal) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation) {
        vqabstractanimation->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractAnimation::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractAnimation_SuperConnectNotify(QAbstractAnimation* self, const QMetaMethod* signal) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->QAbstractAnimation::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractAnimation::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnConnectNotify(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self))
        vqabstractanimation->qabstractanimation_connectnotify_callback = reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAbstractAnimation_DisconnectNotify(QAbstractAnimation* self, const QMetaMethod* signal) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation) {
        vqabstractanimation->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractAnimation::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractAnimation_SuperDisconnectNotify(QAbstractAnimation* self, const QMetaMethod* signal) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->QAbstractAnimation::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractAnimation::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnDisconnectNotify(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self))
        vqabstractanimation->qabstractanimation_disconnectnotify_callback = reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QAbstractAnimation_Sender(const QAbstractAnimation* self) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self))) {
        return vqabstractanimation->VirtualQAbstractAnimation::sender();
    } else
        qFatal("Error: Protected method QAbstractAnimation::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractAnimation_SenderSignalIndex(const QAbstractAnimation* self) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self))) {
        return vqabstractanimation->VirtualQAbstractAnimation::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAbstractAnimation::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractAnimation_Receivers(const QAbstractAnimation* self, const char* signal) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self))) {
        return vqabstractanimation->VirtualQAbstractAnimation::receivers(signal);
    } else
        qFatal("Error: Protected method QAbstractAnimation::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractAnimation_IsSignalConnected(const QAbstractAnimation* self, const QMetaMethod* signal) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self))) {
        return vqabstractanimation->VirtualQAbstractAnimation::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAbstractAnimation::isSignalConnected called without a directly constructed type");
}

void QAbstractAnimation_Delete(QAbstractAnimation* self) {
    delete self;
}

QAnimationDriver* QAnimationDriver_new() {
    return new VirtualQAnimationDriver();
}

QAnimationDriver* QAnimationDriver_new2(QObject* parent) {
    return new VirtualQAnimationDriver(parent);
}

QMetaObject* QAnimationDriver_MetaObject(const QAnimationDriver* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAnimationDriver_Metacast(QAnimationDriver* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAnimationDriver_Metacall(QAnimationDriver* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAnimationDriver_Tr(const char* s) {
    auto _ret = QAnimationDriver::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAnimationDriver_Advance(QAnimationDriver* self) {
    self->advance();
}

void QAnimationDriver_Install(QAnimationDriver* self) {
    self->install();
}

void QAnimationDriver_Uninstall(QAnimationDriver* self) {
    self->uninstall();
}

bool QAnimationDriver_IsRunning(const QAnimationDriver* self) {
    return self->isRunning();
}

long long QAnimationDriver_Elapsed(const QAnimationDriver* self) {
    return static_cast<long long>(self->elapsed());
}

void QAnimationDriver_Started(QAnimationDriver* self) {
    self->started();
}

void QAnimationDriver_Connect_Started(QAnimationDriver* self, intptr_t slot) {
    void (*slotFunc)(QAnimationDriver*) = reinterpret_cast<void (*)(QAnimationDriver*)>(slot);
    QAnimationDriver::connect(self,
                              static_cast<void (QAnimationDriver::*)()>(&QAnimationDriver::started),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QAnimationDriver_Stopped(QAnimationDriver* self) {
    self->stopped();
}

void QAnimationDriver_Connect_Stopped(QAnimationDriver* self, intptr_t slot) {
    void (*slotFunc)(QAnimationDriver*) = reinterpret_cast<void (*)(QAnimationDriver*)>(slot);
    QAnimationDriver::connect(self,
                              static_cast<void (QAnimationDriver::*)()>(&QAnimationDriver::stopped),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QAnimationDriver_Start(QAnimationDriver* self) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver) {
        vqanimationdriver->start();
    }
}

void QAnimationDriver_Stop(QAnimationDriver* self) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver) {
        vqanimationdriver->stop();
    }
}

libqt_string QAnimationDriver_Tr2(const char* s, const char* c) {
    auto _ret = QAnimationDriver::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAnimationDriver_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAnimationDriver::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAnimationDriver_SuperMetaObject(const QAnimationDriver* self) {
    return (QMetaObject*)self->QAnimationDriver::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnMetaObject(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self)))
        vqanimationdriver->qanimationdriver_metaobject_callback = reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAnimationDriver_SuperMetacast(QAnimationDriver* self, const char* param1) {
    return self->QAnimationDriver::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnMetacast(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self))
        vqanimationdriver->qanimationdriver_metacast_callback = reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAnimationDriver_SuperMetacall(QAnimationDriver* self, int param1, int param2, void** param3) {
    return self->QAnimationDriver::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnMetacall(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self))
        vqanimationdriver->qanimationdriver_metacall_callback = reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Metacall_Callback>(slot);
}

// Base class handler implementation
void QAnimationDriver_SuperAdvance(QAnimationDriver* self) {
    self->QAnimationDriver::advance();
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnAdvance(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self))
        vqanimationdriver->qanimationdriver_advance_callback = reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Advance_Callback>(slot);
}

// Base class handler implementation
long long QAnimationDriver_SuperElapsed(const QAnimationDriver* self) {
    return static_cast<long long>(self->QAnimationDriver::elapsed());
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnElapsed(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self)))
        vqanimationdriver->qanimationdriver_elapsed_callback = reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Elapsed_Callback>(slot);
}

// Base class handler implementation
void QAnimationDriver_SuperStart(QAnimationDriver* self) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->QAnimationDriver::start();
    } else
        qFatal("Error: Protected virtual method QAnimationDriver::start called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnStart(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self))
        vqanimationdriver->qanimationdriver_start_callback = reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Start_Callback>(slot);
}

// Base class handler implementation
void QAnimationDriver_SuperStop(QAnimationDriver* self) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->QAnimationDriver::stop();
    } else
        qFatal("Error: Protected virtual method QAnimationDriver::stop called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnStop(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self))
        vqanimationdriver->qanimationdriver_stop_callback = reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Stop_Callback>(slot);
}

// Derived class handler implementation
bool QAnimationDriver_Event(QAnimationDriver* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAnimationDriver_SuperEvent(QAnimationDriver* self, QEvent* event) {
    return self->QAnimationDriver::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnEvent(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self))
        vqanimationdriver->qanimationdriver_event_callback = reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAnimationDriver_EventFilter(QAnimationDriver* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAnimationDriver_SuperEventFilter(QAnimationDriver* self, QObject* watched, QEvent* event) {
    return self->QAnimationDriver::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnEventFilter(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self))
        vqanimationdriver->qanimationdriver_eventfilter_callback = reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAnimationDriver_TimerEvent(QAnimationDriver* self, QTimerEvent* event) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver) {
        vqanimationdriver->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAnimationDriver::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAnimationDriver_SuperTimerEvent(QAnimationDriver* self, QTimerEvent* event) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->QAnimationDriver::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAnimationDriver::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnTimerEvent(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self))
        vqanimationdriver->qanimationdriver_timerevent_callback = reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAnimationDriver_ChildEvent(QAnimationDriver* self, QChildEvent* event) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver) {
        vqanimationdriver->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAnimationDriver::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAnimationDriver_SuperChildEvent(QAnimationDriver* self, QChildEvent* event) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->QAnimationDriver::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAnimationDriver::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnChildEvent(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self))
        vqanimationdriver->qanimationdriver_childevent_callback = reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAnimationDriver_CustomEvent(QAnimationDriver* self, QEvent* event) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver) {
        vqanimationdriver->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAnimationDriver::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAnimationDriver_SuperCustomEvent(QAnimationDriver* self, QEvent* event) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->QAnimationDriver::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAnimationDriver::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnCustomEvent(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self))
        vqanimationdriver->qanimationdriver_customevent_callback = reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAnimationDriver_ConnectNotify(QAnimationDriver* self, const QMetaMethod* signal) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver) {
        vqanimationdriver->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAnimationDriver::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAnimationDriver_SuperConnectNotify(QAnimationDriver* self, const QMetaMethod* signal) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->QAnimationDriver::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAnimationDriver::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnConnectNotify(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self))
        vqanimationdriver->qanimationdriver_connectnotify_callback = reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAnimationDriver_DisconnectNotify(QAnimationDriver* self, const QMetaMethod* signal) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver) {
        vqanimationdriver->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAnimationDriver::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAnimationDriver_SuperDisconnectNotify(QAnimationDriver* self, const QMetaMethod* signal) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->QAnimationDriver::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAnimationDriver::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnDisconnectNotify(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self))
        vqanimationdriver->qanimationdriver_disconnectnotify_callback = reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QAnimationDriver_AdvanceAnimation(QAnimationDriver* self) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->VirtualQAnimationDriver::advanceAnimation();
    } else
        qFatal("Error: Protected method QAnimationDriver::advanceAnimation called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QAnimationDriver_Sender(const QAnimationDriver* self) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self))) {
        return vqanimationdriver->VirtualQAnimationDriver::sender();
    } else
        qFatal("Error: Protected method QAnimationDriver::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAnimationDriver_SenderSignalIndex(const QAnimationDriver* self) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self))) {
        return vqanimationdriver->VirtualQAnimationDriver::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAnimationDriver::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAnimationDriver_Receivers(const QAnimationDriver* self, const char* signal) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self))) {
        return vqanimationdriver->VirtualQAnimationDriver::receivers(signal);
    } else
        qFatal("Error: Protected method QAnimationDriver::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAnimationDriver_IsSignalConnected(const QAnimationDriver* self, const QMetaMethod* signal) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self))) {
        return vqanimationdriver->VirtualQAnimationDriver::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAnimationDriver::isSignalConnected called without a directly constructed type");
}

void QAnimationDriver_Delete(QAnimationDriver* self) {
    delete self;
}
