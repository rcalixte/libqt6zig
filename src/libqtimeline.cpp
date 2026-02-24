#include <QChildEvent>
#include <QEasingCurve>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimeLine>
#include <QTimerEvent>
#include <qtimeline.h>
#include "libqtimeline.h"
#include "libqtimeline.hxx"

QTimeLine* QTimeLine_new() {
    return new VirtualQTimeLine();
}

QTimeLine* QTimeLine_new2(int duration) {
    return new VirtualQTimeLine(static_cast<int>(duration));
}

QTimeLine* QTimeLine_new3(int duration, QObject* parent) {
    return new VirtualQTimeLine(static_cast<int>(duration), parent);
}

QMetaObject* QTimeLine_MetaObject(const QTimeLine* self) {
    auto* vqtimeline = dynamic_cast<const VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQTimeLine*)self)->metaObject();
    }
}

void* QTimeLine_Metacast(QTimeLine* self, const char* param1) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQTimeLine*)self)->qt_metacast(param1);
    }
}

int QTimeLine_Metacall(QTimeLine* self, int param1, int param2, void** param3) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTimeLine*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

int QTimeLine_State(const QTimeLine* self) {
    return static_cast<int>(self->state());
}

int QTimeLine_LoopCount(const QTimeLine* self) {
    return self->loopCount();
}

void QTimeLine_SetLoopCount(QTimeLine* self, int count) {
    self->setLoopCount(static_cast<int>(count));
}

int QTimeLine_Direction(const QTimeLine* self) {
    return static_cast<int>(self->direction());
}

void QTimeLine_SetDirection(QTimeLine* self, int direction) {
    self->setDirection(static_cast<QTimeLine::Direction>(direction));
}

int QTimeLine_Duration(const QTimeLine* self) {
    return self->duration();
}

void QTimeLine_SetDuration(QTimeLine* self, int duration) {
    self->setDuration(static_cast<int>(duration));
}

int QTimeLine_StartFrame(const QTimeLine* self) {
    return self->startFrame();
}

void QTimeLine_SetStartFrame(QTimeLine* self, int frame) {
    self->setStartFrame(static_cast<int>(frame));
}

int QTimeLine_EndFrame(const QTimeLine* self) {
    return self->endFrame();
}

void QTimeLine_SetEndFrame(QTimeLine* self, int frame) {
    self->setEndFrame(static_cast<int>(frame));
}

void QTimeLine_SetFrameRange(QTimeLine* self, int startFrame, int endFrame) {
    self->setFrameRange(static_cast<int>(startFrame), static_cast<int>(endFrame));
}

int QTimeLine_UpdateInterval(const QTimeLine* self) {
    return self->updateInterval();
}

void QTimeLine_SetUpdateInterval(QTimeLine* self, int interval) {
    self->setUpdateInterval(static_cast<int>(interval));
}

QEasingCurve* QTimeLine_EasingCurve(const QTimeLine* self) {
    return new QEasingCurve(self->easingCurve());
}

void QTimeLine_SetEasingCurve(QTimeLine* self, const QEasingCurve* curve) {
    self->setEasingCurve(*curve);
}

int QTimeLine_CurrentTime(const QTimeLine* self) {
    return self->currentTime();
}

int QTimeLine_CurrentFrame(const QTimeLine* self) {
    return self->currentFrame();
}

double QTimeLine_CurrentValue(const QTimeLine* self) {
    return static_cast<double>(self->currentValue());
}

int QTimeLine_FrameForTime(const QTimeLine* self, int msec) {
    return self->frameForTime(static_cast<int>(msec));
}

double QTimeLine_ValueForTime(const QTimeLine* self, int msec) {
    auto* vqtimeline = dynamic_cast<const VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        return static_cast<double>(self->valueForTime(static_cast<int>(msec)));
    } else {
        return static_cast<double>(((VirtualQTimeLine*)self)->valueForTime(static_cast<int>(msec)));
    }
}

void QTimeLine_Start(QTimeLine* self) {
    self->start();
}

void QTimeLine_Resume(QTimeLine* self) {
    self->resume();
}

void QTimeLine_Stop(QTimeLine* self) {
    self->stop();
}

void QTimeLine_SetPaused(QTimeLine* self, bool paused) {
    self->setPaused(paused);
}

void QTimeLine_SetCurrentTime(QTimeLine* self, int msec) {
    self->setCurrentTime(static_cast<int>(msec));
}

void QTimeLine_ToggleDirection(QTimeLine* self) {
    self->toggleDirection();
}

void QTimeLine_TimerEvent(QTimeLine* self, QTimerEvent* event) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->timerEvent(event);
    }
}

// Base class handler implementation
QMetaObject* QTimeLine_SuperMetaObject(const QTimeLine* self) {
    auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self));
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_MetaObject_IsBase(true);
        return (QMetaObject*)vqtimeline->metaObject();
    } else {
        return (QMetaObject*)self->QTimeLine::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnMetaObject(const QTimeLine* self, intptr_t slot) {
    auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self));
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_MetaObject_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QTimeLine_SuperMetacast(QTimeLine* self, const char* param1) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_Metacast_IsBase(true);
        return vqtimeline->qt_metacast(param1);
    } else {
        return self->QTimeLine::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnMetacast(QTimeLine* self, intptr_t slot) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_Metacast_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QTimeLine_SuperMetacall(QTimeLine* self, int param1, int param2, void** param3) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_Metacall_IsBase(true);
        return vqtimeline->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QTimeLine::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnMetacall(QTimeLine* self, intptr_t slot) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_Metacall_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
double QTimeLine_SuperValueForTime(const QTimeLine* self, int msec) {
    auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self));
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_ValueForTime_IsBase(true);
        return static_cast<double>(vqtimeline->valueForTime(static_cast<int>(msec)));
    } else {
        return static_cast<double>(self->QTimeLine::valueForTime(static_cast<int>(msec)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnValueForTime(const QTimeLine* self, intptr_t slot) {
    auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self));
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_ValueForTime_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_ValueForTime_Callback>(slot));
    }
}

// Base class handler implementation
void QTimeLine_SuperTimerEvent(QTimeLine* self, QTimerEvent* event) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_TimerEvent_IsBase(true);
        vqtimeline->timerEvent(event);
    } else {
        ((VirtualQTimeLine*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnTimerEvent(QTimeLine* self, intptr_t slot) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_TimerEvent_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeLine_Event(QTimeLine* self, QEvent* event) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        return vqtimeline->event(event);
    } else {
        return self->QTimeLine::event(event);
    }
}

// Base class handler implementation
bool QTimeLine_SuperEvent(QTimeLine* self, QEvent* event) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_Event_IsBase(true);
        return vqtimeline->event(event);
    } else {
        return self->QTimeLine::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnEvent(QTimeLine* self, intptr_t slot) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_Event_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeLine_EventFilter(QTimeLine* self, QObject* watched, QEvent* event) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        return vqtimeline->eventFilter(watched, event);
    } else {
        return self->QTimeLine::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTimeLine_SuperEventFilter(QTimeLine* self, QObject* watched, QEvent* event) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_EventFilter_IsBase(true);
        return vqtimeline->eventFilter(watched, event);
    } else {
        return self->QTimeLine::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnEventFilter(QTimeLine* self, intptr_t slot) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_EventFilter_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeLine_ChildEvent(QTimeLine* self, QChildEvent* event) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->childEvent(event);
    } else {
        ((VirtualQTimeLine*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QTimeLine_SuperChildEvent(QTimeLine* self, QChildEvent* event) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_ChildEvent_IsBase(true);
        vqtimeline->childEvent(event);
    } else {
        ((VirtualQTimeLine*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnChildEvent(QTimeLine* self, intptr_t slot) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_ChildEvent_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeLine_CustomEvent(QTimeLine* self, QEvent* event) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->customEvent(event);
    } else {
        ((VirtualQTimeLine*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QTimeLine_SuperCustomEvent(QTimeLine* self, QEvent* event) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_CustomEvent_IsBase(true);
        vqtimeline->customEvent(event);
    } else {
        ((VirtualQTimeLine*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnCustomEvent(QTimeLine* self, intptr_t slot) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_CustomEvent_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeLine_ConnectNotify(QTimeLine* self, const QMetaMethod* signal) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->connectNotify(*signal);
    } else {
        ((VirtualQTimeLine*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTimeLine_SuperConnectNotify(QTimeLine* self, const QMetaMethod* signal) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_ConnectNotify_IsBase(true);
        vqtimeline->connectNotify(*signal);
    } else {
        ((VirtualQTimeLine*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnConnectNotify(QTimeLine* self, intptr_t slot) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_ConnectNotify_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeLine_DisconnectNotify(QTimeLine* self, const QMetaMethod* signal) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->disconnectNotify(*signal);
    } else {
        ((VirtualQTimeLine*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTimeLine_SuperDisconnectNotify(QTimeLine* self, const QMetaMethod* signal) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_DisconnectNotify_IsBase(true);
        vqtimeline->disconnectNotify(*signal);
    } else {
        ((VirtualQTimeLine*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnDisconnectNotify(QTimeLine* self, intptr_t slot) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_DisconnectNotify_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTimeLine_Sender(const QTimeLine* self) {
    auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self));
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        return vqtimeline->sender();
    } else {
        return ((VirtualQTimeLine*)self)->sender();
    }
}

// Base class handler implementation
QObject* QTimeLine_SuperSender(const QTimeLine* self) {
    auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self));
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_Sender_IsBase(true);
        return vqtimeline->sender();
    } else {
        return ((VirtualQTimeLine*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnSender(const QTimeLine* self, intptr_t slot) {
    auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self));
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_Sender_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTimeLine_SenderSignalIndex(const QTimeLine* self) {
    auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self));
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        return vqtimeline->senderSignalIndex();
    } else {
        return ((VirtualQTimeLine*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QTimeLine_SuperSenderSignalIndex(const QTimeLine* self) {
    auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self));
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_SenderSignalIndex_IsBase(true);
        return vqtimeline->senderSignalIndex();
    } else {
        return ((VirtualQTimeLine*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnSenderSignalIndex(const QTimeLine* self, intptr_t slot) {
    auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self));
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTimeLine_Receivers(const QTimeLine* self, const char* signal) {
    auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self));
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        return vqtimeline->receivers(signal);
    } else {
        return ((VirtualQTimeLine*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QTimeLine_SuperReceivers(const QTimeLine* self, const char* signal) {
    auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self));
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_Receivers_IsBase(true);
        return vqtimeline->receivers(signal);
    } else {
        return ((VirtualQTimeLine*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnReceivers(const QTimeLine* self, intptr_t slot) {
    auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self));
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_Receivers_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeLine_IsSignalConnected(const QTimeLine* self, const QMetaMethod* signal) {
    auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self));
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        return vqtimeline->isSignalConnected(*signal);
    } else {
        return ((VirtualQTimeLine*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTimeLine_SuperIsSignalConnected(const QTimeLine* self, const QMetaMethod* signal) {
    auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self));
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_IsSignalConnected_IsBase(true);
        return vqtimeline->isSignalConnected(*signal);
    } else {
        return ((VirtualQTimeLine*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnIsSignalConnected(const QTimeLine* self, intptr_t slot) {
    auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self));
    if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
        vqtimeline->setQTimeLine_IsSignalConnected_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_IsSignalConnected_Callback>(slot));
    }
}

void QTimeLine_Connect_ValueChanged(QTimeLine* self, intptr_t slot) {
    void (*slotFunc)(QTimeLine*, double) = reinterpret_cast<void (*)(QTimeLine*, double)>(slot);
    QTimeLine::connect(self, &QTimeLine::valueChanged, [self, slotFunc](qreal x) {
        double sigval1 = x;
        slotFunc(self, sigval1);
    });
}

void QTimeLine_Connect_FrameChanged(QTimeLine* self, intptr_t slot) {
    void (*slotFunc)(QTimeLine*, int) = reinterpret_cast<void (*)(QTimeLine*, int)>(slot);
    QTimeLine::connect(self, &QTimeLine::frameChanged, [self, slotFunc](int param1) {
        int sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QTimeLine_Connect_StateChanged(QTimeLine* self, intptr_t slot) {
    void (*slotFunc)(QTimeLine*, int) = reinterpret_cast<void (*)(QTimeLine*, int)>(slot);
    QTimeLine::connect(self, &QTimeLine::stateChanged, [self, slotFunc](QTimeLine::State newState) {
        int sigval1 = static_cast<int>(newState);
        slotFunc(self, sigval1);
    });
}

void QTimeLine_Connect_Finished(QTimeLine* self, intptr_t slot) {
    void (*slotFunc)(QTimeLine*) = reinterpret_cast<void (*)(QTimeLine*)>(slot);
    QTimeLine::connect(self, &QTimeLine::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QTimeLine_Delete(QTimeLine* self) {
    delete self;
}
