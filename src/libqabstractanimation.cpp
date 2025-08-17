#include <QAbstractAnimation>
#include <QAnimationDriver>
#include <QAnimationGroup>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractAnimation*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractAnimation_OnMetacall(QAbstractAnimation* self, intptr_t slot) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_Metacall_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractAnimation_QBaseMetacall(QAbstractAnimation* self, int param1, int param2, void** param3) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_Metacall_IsBase(true);
        return vqabstractanimation->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractAnimation*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractAnimation_Tr(const char* s) {
    QString _ret = QAbstractAnimation::tr(s);
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

int QAbstractAnimation_TotalDuration(const QAbstractAnimation* self) {
    return self->totalDuration();
}

void QAbstractAnimation_Finished(QAbstractAnimation* self) {
    self->finished();
}

void QAbstractAnimation_Connect_Finished(QAbstractAnimation* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAnimation*) = reinterpret_cast<void (*)(QAbstractAnimation*)>(slot);
    QAbstractAnimation::connect(self, &QAbstractAnimation::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractAnimation_StateChanged(QAbstractAnimation* self, int newState, int oldState) {
    self->stateChanged(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
}

void QAbstractAnimation_Connect_StateChanged(QAbstractAnimation* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAnimation*, int, int) = reinterpret_cast<void (*)(QAbstractAnimation*, int, int)>(slot);
    QAbstractAnimation::connect(self, &QAbstractAnimation::stateChanged, [self, slotFunc](QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
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
    QAbstractAnimation::connect(self, &QAbstractAnimation::currentLoopChanged, [self, slotFunc](int currentLoop) {
        int sigval1 = currentLoop;
        slotFunc(self, sigval1);
    });
}

void QAbstractAnimation_DirectionChanged(QAbstractAnimation* self, int param1) {
    self->directionChanged(static_cast<QAbstractAnimation::Direction>(param1));
}

void QAbstractAnimation_Connect_DirectionChanged(QAbstractAnimation* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAnimation*, int) = reinterpret_cast<void (*)(QAbstractAnimation*, int)>(slot);
    QAbstractAnimation::connect(self, &QAbstractAnimation::directionChanged, [self, slotFunc](QAbstractAnimation::Direction param1) {
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

libqt_string QAbstractAnimation_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractAnimation::tr(s, c);
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
    QString _ret = QAbstractAnimation::tr(s, c, static_cast<int>(n));
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

// Derived class handler implementation
int QAbstractAnimation_Duration(const QAbstractAnimation* self) {
    auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self));
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        return vqabstractanimation->duration();
    } else {
        return ((VirtualQAbstractAnimation*)self)->duration();
    }
}

// Base class handler implementation
int QAbstractAnimation_QBaseDuration(const QAbstractAnimation* self) {
    auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self));
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_Duration_IsBase(true);
        return vqabstractanimation->duration();
    } else {
        return ((VirtualQAbstractAnimation*)self)->duration();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnDuration(const QAbstractAnimation* self, intptr_t slot) {
    auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self));
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_Duration_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_Duration_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractAnimation_Event(QAbstractAnimation* self, QEvent* event) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        return vqabstractanimation->event(event);
    } else {
        return ((VirtualQAbstractAnimation*)self)->event(event);
    }
}

// Base class handler implementation
bool QAbstractAnimation_QBaseEvent(QAbstractAnimation* self, QEvent* event) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_Event_IsBase(true);
        return vqabstractanimation->event(event);
    } else {
        return ((VirtualQAbstractAnimation*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnEvent(QAbstractAnimation* self, intptr_t slot) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_Event_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractAnimation_UpdateCurrentTime(QAbstractAnimation* self, int currentTime) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->updateCurrentTime(static_cast<int>(currentTime));
    } else {
        ((VirtualQAbstractAnimation*)self)->updateCurrentTime(static_cast<int>(currentTime));
    }
}

// Base class handler implementation
void QAbstractAnimation_QBaseUpdateCurrentTime(QAbstractAnimation* self, int currentTime) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_UpdateCurrentTime_IsBase(true);
        vqabstractanimation->updateCurrentTime(static_cast<int>(currentTime));
    } else {
        ((VirtualQAbstractAnimation*)self)->updateCurrentTime(static_cast<int>(currentTime));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnUpdateCurrentTime(QAbstractAnimation* self, intptr_t slot) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_UpdateCurrentTime_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_UpdateCurrentTime_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractAnimation_UpdateState(QAbstractAnimation* self, int newState, int oldState) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        ((VirtualQAbstractAnimation*)self)->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Base class handler implementation
void QAbstractAnimation_QBaseUpdateState(QAbstractAnimation* self, int newState, int oldState) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_UpdateState_IsBase(true);
        vqabstractanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        ((VirtualQAbstractAnimation*)self)->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnUpdateState(QAbstractAnimation* self, intptr_t slot) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_UpdateState_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_UpdateState_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractAnimation_UpdateDirection(QAbstractAnimation* self, int direction) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        ((VirtualQAbstractAnimation*)self)->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Base class handler implementation
void QAbstractAnimation_QBaseUpdateDirection(QAbstractAnimation* self, int direction) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_UpdateDirection_IsBase(true);
        vqabstractanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        ((VirtualQAbstractAnimation*)self)->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnUpdateDirection(QAbstractAnimation* self, intptr_t slot) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_UpdateDirection_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_UpdateDirection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractAnimation_EventFilter(QAbstractAnimation* self, QObject* watched, QEvent* event) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        return vqabstractanimation->eventFilter(watched, event);
    } else {
        return self->QAbstractAnimation::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAbstractAnimation_QBaseEventFilter(QAbstractAnimation* self, QObject* watched, QEvent* event) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_EventFilter_IsBase(true);
        return vqabstractanimation->eventFilter(watched, event);
    } else {
        return self->QAbstractAnimation::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnEventFilter(QAbstractAnimation* self, intptr_t slot) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_EventFilter_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractAnimation_TimerEvent(QAbstractAnimation* self, QTimerEvent* event) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->timerEvent(event);
    } else {
        ((VirtualQAbstractAnimation*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAbstractAnimation_QBaseTimerEvent(QAbstractAnimation* self, QTimerEvent* event) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_TimerEvent_IsBase(true);
        vqabstractanimation->timerEvent(event);
    } else {
        ((VirtualQAbstractAnimation*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnTimerEvent(QAbstractAnimation* self, intptr_t slot) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractAnimation_ChildEvent(QAbstractAnimation* self, QChildEvent* event) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->childEvent(event);
    } else {
        ((VirtualQAbstractAnimation*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractAnimation_QBaseChildEvent(QAbstractAnimation* self, QChildEvent* event) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_ChildEvent_IsBase(true);
        vqabstractanimation->childEvent(event);
    } else {
        ((VirtualQAbstractAnimation*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnChildEvent(QAbstractAnimation* self, intptr_t slot) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractAnimation_CustomEvent(QAbstractAnimation* self, QEvent* event) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->customEvent(event);
    } else {
        ((VirtualQAbstractAnimation*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractAnimation_QBaseCustomEvent(QAbstractAnimation* self, QEvent* event) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_CustomEvent_IsBase(true);
        vqabstractanimation->customEvent(event);
    } else {
        ((VirtualQAbstractAnimation*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnCustomEvent(QAbstractAnimation* self, intptr_t slot) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractAnimation_ConnectNotify(QAbstractAnimation* self, const QMetaMethod* signal) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->connectNotify(*signal);
    } else {
        ((VirtualQAbstractAnimation*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractAnimation_QBaseConnectNotify(QAbstractAnimation* self, const QMetaMethod* signal) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_ConnectNotify_IsBase(true);
        vqabstractanimation->connectNotify(*signal);
    } else {
        ((VirtualQAbstractAnimation*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnConnectNotify(QAbstractAnimation* self, intptr_t slot) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractAnimation_DisconnectNotify(QAbstractAnimation* self, const QMetaMethod* signal) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractAnimation*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractAnimation_QBaseDisconnectNotify(QAbstractAnimation* self, const QMetaMethod* signal) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_DisconnectNotify_IsBase(true);
        vqabstractanimation->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractAnimation*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnDisconnectNotify(QAbstractAnimation* self, intptr_t slot) {
    auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractAnimation_Sender(const QAbstractAnimation* self) {
    auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self));
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        return vqabstractanimation->sender();
    } else {
        return ((VirtualQAbstractAnimation*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAbstractAnimation_QBaseSender(const QAbstractAnimation* self) {
    auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self));
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_Sender_IsBase(true);
        return vqabstractanimation->sender();
    } else {
        return ((VirtualQAbstractAnimation*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnSender(const QAbstractAnimation* self, intptr_t slot) {
    auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self));
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_Sender_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractAnimation_SenderSignalIndex(const QAbstractAnimation* self) {
    auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self));
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        return vqabstractanimation->senderSignalIndex();
    } else {
        return ((VirtualQAbstractAnimation*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractAnimation_QBaseSenderSignalIndex(const QAbstractAnimation* self) {
    auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self));
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_SenderSignalIndex_IsBase(true);
        return vqabstractanimation->senderSignalIndex();
    } else {
        return ((VirtualQAbstractAnimation*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnSenderSignalIndex(const QAbstractAnimation* self, intptr_t slot) {
    auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self));
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractAnimation_Receivers(const QAbstractAnimation* self, const char* signal) {
    auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self));
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        return vqabstractanimation->receivers(signal);
    } else {
        return ((VirtualQAbstractAnimation*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractAnimation_QBaseReceivers(const QAbstractAnimation* self, const char* signal) {
    auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self));
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_Receivers_IsBase(true);
        return vqabstractanimation->receivers(signal);
    } else {
        return ((VirtualQAbstractAnimation*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnReceivers(const QAbstractAnimation* self, intptr_t slot) {
    auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self));
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_Receivers_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractAnimation_IsSignalConnected(const QAbstractAnimation* self, const QMetaMethod* signal) {
    auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self));
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        return vqabstractanimation->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractAnimation*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractAnimation_QBaseIsSignalConnected(const QAbstractAnimation* self, const QMetaMethod* signal) {
    auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self));
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_IsSignalConnected_IsBase(true);
        return vqabstractanimation->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractAnimation*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnIsSignalConnected(const QAbstractAnimation* self, intptr_t slot) {
    auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self));
    if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
        vqabstractanimation->setQAbstractAnimation_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_IsSignalConnected_Callback>(slot));
    }
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
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAnimationDriver*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAnimationDriver_OnMetacall(QAnimationDriver* self, intptr_t slot) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_Metacall_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAnimationDriver_QBaseMetacall(QAnimationDriver* self, int param1, int param2, void** param3) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_Metacall_IsBase(true);
        return vqanimationdriver->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAnimationDriver*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAnimationDriver_Tr(const char* s) {
    QString _ret = QAnimationDriver::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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

void QAnimationDriver_Started(QAnimationDriver* self) {
    self->started();
}

void QAnimationDriver_Connect_Started(QAnimationDriver* self, intptr_t slot) {
    void (*slotFunc)(QAnimationDriver*) = reinterpret_cast<void (*)(QAnimationDriver*)>(slot);
    QAnimationDriver::connect(self, &QAnimationDriver::started, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAnimationDriver_Stopped(QAnimationDriver* self) {
    self->stopped();
}

void QAnimationDriver_Connect_Stopped(QAnimationDriver* self, intptr_t slot) {
    void (*slotFunc)(QAnimationDriver*) = reinterpret_cast<void (*)(QAnimationDriver*)>(slot);
    QAnimationDriver::connect(self, &QAnimationDriver::stopped, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QAnimationDriver_Tr2(const char* s, const char* c) {
    QString _ret = QAnimationDriver::tr(s, c);
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
    QString _ret = QAnimationDriver::tr(s, c, static_cast<int>(n));
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
void QAnimationDriver_Advance(QAnimationDriver* self) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->advance();
    } else {
        self->QAnimationDriver::advance();
    }
}

// Base class handler implementation
void QAnimationDriver_QBaseAdvance(QAnimationDriver* self) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_Advance_IsBase(true);
        vqanimationdriver->advance();
    } else {
        self->QAnimationDriver::advance();
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnAdvance(QAnimationDriver* self, intptr_t slot) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_Advance_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
long long QAnimationDriver_Elapsed(const QAnimationDriver* self) {
    auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self));
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        return static_cast<long long>(vqanimationdriver->elapsed());
    } else {
        return static_cast<long long>(self->QAnimationDriver::elapsed());
    }
}

// Base class handler implementation
long long QAnimationDriver_QBaseElapsed(const QAnimationDriver* self) {
    auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self));
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_Elapsed_IsBase(true);
        return static_cast<long long>(vqanimationdriver->elapsed());
    } else {
        return static_cast<long long>(self->QAnimationDriver::elapsed());
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnElapsed(const QAnimationDriver* self, intptr_t slot) {
    auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self));
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_Elapsed_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Elapsed_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationDriver_Start(QAnimationDriver* self) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->start();
    } else {
        ((VirtualQAnimationDriver*)self)->start();
    }
}

// Base class handler implementation
void QAnimationDriver_QBaseStart(QAnimationDriver* self) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_Start_IsBase(true);
        vqanimationdriver->start();
    } else {
        ((VirtualQAnimationDriver*)self)->start();
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnStart(QAnimationDriver* self, intptr_t slot) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_Start_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Start_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationDriver_Stop(QAnimationDriver* self) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->stop();
    } else {
        ((VirtualQAnimationDriver*)self)->stop();
    }
}

// Base class handler implementation
void QAnimationDriver_QBaseStop(QAnimationDriver* self) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_Stop_IsBase(true);
        vqanimationdriver->stop();
    } else {
        ((VirtualQAnimationDriver*)self)->stop();
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnStop(QAnimationDriver* self, intptr_t slot) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_Stop_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Stop_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAnimationDriver_Event(QAnimationDriver* self, QEvent* event) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        return vqanimationdriver->event(event);
    } else {
        return self->QAnimationDriver::event(event);
    }
}

// Base class handler implementation
bool QAnimationDriver_QBaseEvent(QAnimationDriver* self, QEvent* event) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_Event_IsBase(true);
        return vqanimationdriver->event(event);
    } else {
        return self->QAnimationDriver::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnEvent(QAnimationDriver* self, intptr_t slot) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_Event_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAnimationDriver_EventFilter(QAnimationDriver* self, QObject* watched, QEvent* event) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        return vqanimationdriver->eventFilter(watched, event);
    } else {
        return self->QAnimationDriver::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAnimationDriver_QBaseEventFilter(QAnimationDriver* self, QObject* watched, QEvent* event) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_EventFilter_IsBase(true);
        return vqanimationdriver->eventFilter(watched, event);
    } else {
        return self->QAnimationDriver::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnEventFilter(QAnimationDriver* self, intptr_t slot) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_EventFilter_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationDriver_TimerEvent(QAnimationDriver* self, QTimerEvent* event) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->timerEvent(event);
    } else {
        ((VirtualQAnimationDriver*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAnimationDriver_QBaseTimerEvent(QAnimationDriver* self, QTimerEvent* event) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_TimerEvent_IsBase(true);
        vqanimationdriver->timerEvent(event);
    } else {
        ((VirtualQAnimationDriver*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnTimerEvent(QAnimationDriver* self, intptr_t slot) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_TimerEvent_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationDriver_ChildEvent(QAnimationDriver* self, QChildEvent* event) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->childEvent(event);
    } else {
        ((VirtualQAnimationDriver*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAnimationDriver_QBaseChildEvent(QAnimationDriver* self, QChildEvent* event) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_ChildEvent_IsBase(true);
        vqanimationdriver->childEvent(event);
    } else {
        ((VirtualQAnimationDriver*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnChildEvent(QAnimationDriver* self, intptr_t slot) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_ChildEvent_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationDriver_CustomEvent(QAnimationDriver* self, QEvent* event) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->customEvent(event);
    } else {
        ((VirtualQAnimationDriver*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAnimationDriver_QBaseCustomEvent(QAnimationDriver* self, QEvent* event) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_CustomEvent_IsBase(true);
        vqanimationdriver->customEvent(event);
    } else {
        ((VirtualQAnimationDriver*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnCustomEvent(QAnimationDriver* self, intptr_t slot) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_CustomEvent_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationDriver_ConnectNotify(QAnimationDriver* self, const QMetaMethod* signal) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->connectNotify(*signal);
    } else {
        ((VirtualQAnimationDriver*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAnimationDriver_QBaseConnectNotify(QAnimationDriver* self, const QMetaMethod* signal) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_ConnectNotify_IsBase(true);
        vqanimationdriver->connectNotify(*signal);
    } else {
        ((VirtualQAnimationDriver*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnConnectNotify(QAnimationDriver* self, intptr_t slot) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_ConnectNotify_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationDriver_DisconnectNotify(QAnimationDriver* self, const QMetaMethod* signal) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->disconnectNotify(*signal);
    } else {
        ((VirtualQAnimationDriver*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAnimationDriver_QBaseDisconnectNotify(QAnimationDriver* self, const QMetaMethod* signal) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_DisconnectNotify_IsBase(true);
        vqanimationdriver->disconnectNotify(*signal);
    } else {
        ((VirtualQAnimationDriver*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnDisconnectNotify(QAnimationDriver* self, intptr_t slot) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_DisconnectNotify_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationDriver_AdvanceAnimation(QAnimationDriver* self) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->advanceAnimation();
    } else {
        ((VirtualQAnimationDriver*)self)->advanceAnimation();
    }
}

// Base class handler implementation
void QAnimationDriver_QBaseAdvanceAnimation(QAnimationDriver* self) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_AdvanceAnimation_IsBase(true);
        vqanimationdriver->advanceAnimation();
    } else {
        ((VirtualQAnimationDriver*)self)->advanceAnimation();
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnAdvanceAnimation(QAnimationDriver* self, intptr_t slot) {
    auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_AdvanceAnimation_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_AdvanceAnimation_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAnimationDriver_Sender(const QAnimationDriver* self) {
    auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self));
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        return vqanimationdriver->sender();
    } else {
        return ((VirtualQAnimationDriver*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAnimationDriver_QBaseSender(const QAnimationDriver* self) {
    auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self));
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_Sender_IsBase(true);
        return vqanimationdriver->sender();
    } else {
        return ((VirtualQAnimationDriver*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnSender(const QAnimationDriver* self, intptr_t slot) {
    auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self));
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_Sender_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAnimationDriver_SenderSignalIndex(const QAnimationDriver* self) {
    auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self));
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        return vqanimationdriver->senderSignalIndex();
    } else {
        return ((VirtualQAnimationDriver*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAnimationDriver_QBaseSenderSignalIndex(const QAnimationDriver* self) {
    auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self));
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_SenderSignalIndex_IsBase(true);
        return vqanimationdriver->senderSignalIndex();
    } else {
        return ((VirtualQAnimationDriver*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnSenderSignalIndex(const QAnimationDriver* self, intptr_t slot) {
    auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self));
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAnimationDriver_Receivers(const QAnimationDriver* self, const char* signal) {
    auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self));
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        return vqanimationdriver->receivers(signal);
    } else {
        return ((VirtualQAnimationDriver*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAnimationDriver_QBaseReceivers(const QAnimationDriver* self, const char* signal) {
    auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self));
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_Receivers_IsBase(true);
        return vqanimationdriver->receivers(signal);
    } else {
        return ((VirtualQAnimationDriver*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnReceivers(const QAnimationDriver* self, intptr_t slot) {
    auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self));
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_Receivers_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAnimationDriver_IsSignalConnected(const QAnimationDriver* self, const QMetaMethod* signal) {
    auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self));
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        return vqanimationdriver->isSignalConnected(*signal);
    } else {
        return ((VirtualQAnimationDriver*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAnimationDriver_QBaseIsSignalConnected(const QAnimationDriver* self, const QMetaMethod* signal) {
    auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self));
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_IsSignalConnected_IsBase(true);
        return vqanimationdriver->isSignalConnected(*signal);
    } else {
        return ((VirtualQAnimationDriver*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnIsSignalConnected(const QAnimationDriver* self, intptr_t slot) {
    auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self));
    if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
        vqanimationdriver->setQAnimationDriver_IsSignalConnected_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_IsSignalConnected_Callback>(slot));
    }
}

void QAnimationDriver_Delete(QAnimationDriver* self) {
    delete self;
}
