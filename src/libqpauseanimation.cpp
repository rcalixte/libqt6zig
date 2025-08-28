#include <QAbstractAnimation>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPauseAnimation>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPauseAnimation*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPauseAnimation_Tr(const char* s) {
    QString _ret = QPauseAnimation::tr(s);
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
    auto* vqpauseanimation = dynamic_cast<const VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        return self->duration();
    } else {
        return ((VirtualQPauseAnimation*)self)->duration();
    }
}

void QPauseAnimation_SetDuration(QPauseAnimation* self, int msecs) {
    self->setDuration(static_cast<int>(msecs));
}

bool QPauseAnimation_Event(QPauseAnimation* self, QEvent* e) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        return vqpauseanimation->event(e);
    }
    return {};
}

void QPauseAnimation_UpdateCurrentTime(QPauseAnimation* self, int param1) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->updateCurrentTime(static_cast<int>(param1));
    }
}

libqt_string QPauseAnimation_Tr2(const char* s, const char* c) {
    QString _ret = QPauseAnimation::tr(s, c);
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
    QString _ret = QPauseAnimation::tr(s, c, static_cast<int>(n));
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
int QPauseAnimation_QBaseMetacall(QPauseAnimation* self, int param1, int param2, void** param3) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_Metacall_IsBase(true);
        return vqpauseanimation->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QPauseAnimation::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnMetacall(QPauseAnimation* self, intptr_t slot) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_Metacall_Callback(reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QPauseAnimation_QBaseDuration(const QPauseAnimation* self) {
    auto* vqpauseanimation = const_cast<VirtualQPauseAnimation*>(dynamic_cast<const VirtualQPauseAnimation*>(self));
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_Duration_IsBase(true);
        return vqpauseanimation->duration();
    } else {
        return self->QPauseAnimation::duration();
    }
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnDuration(const QPauseAnimation* self, intptr_t slot) {
    auto* vqpauseanimation = const_cast<VirtualQPauseAnimation*>(dynamic_cast<const VirtualQPauseAnimation*>(self));
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_Duration_Callback(reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_Duration_Callback>(slot));
    }
}

// Base class handler implementation
bool QPauseAnimation_QBaseEvent(QPauseAnimation* self, QEvent* e) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_Event_IsBase(true);
        return vqpauseanimation->event(e);
    } else {
        return ((VirtualQPauseAnimation*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnEvent(QPauseAnimation* self, intptr_t slot) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_Event_Callback(reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_Event_Callback>(slot));
    }
}

// Base class handler implementation
void QPauseAnimation_QBaseUpdateCurrentTime(QPauseAnimation* self, int param1) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_UpdateCurrentTime_IsBase(true);
        vqpauseanimation->updateCurrentTime(static_cast<int>(param1));
    } else {
        ((VirtualQPauseAnimation*)self)->updateCurrentTime(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnUpdateCurrentTime(QPauseAnimation* self, intptr_t slot) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_UpdateCurrentTime_Callback(reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_UpdateCurrentTime_Callback>(slot));
    }
}

// Derived class handler implementation
void QPauseAnimation_UpdateState(QPauseAnimation* self, int newState, int oldState) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        ((VirtualQPauseAnimation*)self)->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Base class handler implementation
void QPauseAnimation_QBaseUpdateState(QPauseAnimation* self, int newState, int oldState) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_UpdateState_IsBase(true);
        vqpauseanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        ((VirtualQPauseAnimation*)self)->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnUpdateState(QPauseAnimation* self, intptr_t slot) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_UpdateState_Callback(reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_UpdateState_Callback>(slot));
    }
}

// Derived class handler implementation
void QPauseAnimation_UpdateDirection(QPauseAnimation* self, int direction) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        ((VirtualQPauseAnimation*)self)->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Base class handler implementation
void QPauseAnimation_QBaseUpdateDirection(QPauseAnimation* self, int direction) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_UpdateDirection_IsBase(true);
        vqpauseanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        ((VirtualQPauseAnimation*)self)->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnUpdateDirection(QPauseAnimation* self, intptr_t slot) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_UpdateDirection_Callback(reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_UpdateDirection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPauseAnimation_EventFilter(QPauseAnimation* self, QObject* watched, QEvent* event) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        return vqpauseanimation->eventFilter(watched, event);
    } else {
        return self->QPauseAnimation::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPauseAnimation_QBaseEventFilter(QPauseAnimation* self, QObject* watched, QEvent* event) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_EventFilter_IsBase(true);
        return vqpauseanimation->eventFilter(watched, event);
    } else {
        return self->QPauseAnimation::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnEventFilter(QPauseAnimation* self, intptr_t slot) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_EventFilter_Callback(reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPauseAnimation_TimerEvent(QPauseAnimation* self, QTimerEvent* event) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->timerEvent(event);
    } else {
        ((VirtualQPauseAnimation*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPauseAnimation_QBaseTimerEvent(QPauseAnimation* self, QTimerEvent* event) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_TimerEvent_IsBase(true);
        vqpauseanimation->timerEvent(event);
    } else {
        ((VirtualQPauseAnimation*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnTimerEvent(QPauseAnimation* self, intptr_t slot) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_TimerEvent_Callback(reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPauseAnimation_ChildEvent(QPauseAnimation* self, QChildEvent* event) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->childEvent(event);
    } else {
        ((VirtualQPauseAnimation*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPauseAnimation_QBaseChildEvent(QPauseAnimation* self, QChildEvent* event) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_ChildEvent_IsBase(true);
        vqpauseanimation->childEvent(event);
    } else {
        ((VirtualQPauseAnimation*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnChildEvent(QPauseAnimation* self, intptr_t slot) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_ChildEvent_Callback(reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPauseAnimation_CustomEvent(QPauseAnimation* self, QEvent* event) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->customEvent(event);
    } else {
        ((VirtualQPauseAnimation*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPauseAnimation_QBaseCustomEvent(QPauseAnimation* self, QEvent* event) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_CustomEvent_IsBase(true);
        vqpauseanimation->customEvent(event);
    } else {
        ((VirtualQPauseAnimation*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnCustomEvent(QPauseAnimation* self, intptr_t slot) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_CustomEvent_Callback(reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPauseAnimation_ConnectNotify(QPauseAnimation* self, const QMetaMethod* signal) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->connectNotify(*signal);
    } else {
        ((VirtualQPauseAnimation*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPauseAnimation_QBaseConnectNotify(QPauseAnimation* self, const QMetaMethod* signal) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_ConnectNotify_IsBase(true);
        vqpauseanimation->connectNotify(*signal);
    } else {
        ((VirtualQPauseAnimation*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnConnectNotify(QPauseAnimation* self, intptr_t slot) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_ConnectNotify_Callback(reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPauseAnimation_DisconnectNotify(QPauseAnimation* self, const QMetaMethod* signal) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->disconnectNotify(*signal);
    } else {
        ((VirtualQPauseAnimation*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPauseAnimation_QBaseDisconnectNotify(QPauseAnimation* self, const QMetaMethod* signal) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_DisconnectNotify_IsBase(true);
        vqpauseanimation->disconnectNotify(*signal);
    } else {
        ((VirtualQPauseAnimation*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnDisconnectNotify(QPauseAnimation* self, intptr_t slot) {
    auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_DisconnectNotify_Callback(reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPauseAnimation_Sender(const QPauseAnimation* self) {
    auto* vqpauseanimation = const_cast<VirtualQPauseAnimation*>(dynamic_cast<const VirtualQPauseAnimation*>(self));
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        return vqpauseanimation->sender();
    } else {
        return ((VirtualQPauseAnimation*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPauseAnimation_QBaseSender(const QPauseAnimation* self) {
    auto* vqpauseanimation = const_cast<VirtualQPauseAnimation*>(dynamic_cast<const VirtualQPauseAnimation*>(self));
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_Sender_IsBase(true);
        return vqpauseanimation->sender();
    } else {
        return ((VirtualQPauseAnimation*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnSender(const QPauseAnimation* self, intptr_t slot) {
    auto* vqpauseanimation = const_cast<VirtualQPauseAnimation*>(dynamic_cast<const VirtualQPauseAnimation*>(self));
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_Sender_Callback(reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPauseAnimation_SenderSignalIndex(const QPauseAnimation* self) {
    auto* vqpauseanimation = const_cast<VirtualQPauseAnimation*>(dynamic_cast<const VirtualQPauseAnimation*>(self));
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        return vqpauseanimation->senderSignalIndex();
    } else {
        return ((VirtualQPauseAnimation*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPauseAnimation_QBaseSenderSignalIndex(const QPauseAnimation* self) {
    auto* vqpauseanimation = const_cast<VirtualQPauseAnimation*>(dynamic_cast<const VirtualQPauseAnimation*>(self));
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_SenderSignalIndex_IsBase(true);
        return vqpauseanimation->senderSignalIndex();
    } else {
        return ((VirtualQPauseAnimation*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnSenderSignalIndex(const QPauseAnimation* self, intptr_t slot) {
    auto* vqpauseanimation = const_cast<VirtualQPauseAnimation*>(dynamic_cast<const VirtualQPauseAnimation*>(self));
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPauseAnimation_Receivers(const QPauseAnimation* self, const char* signal) {
    auto* vqpauseanimation = const_cast<VirtualQPauseAnimation*>(dynamic_cast<const VirtualQPauseAnimation*>(self));
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        return vqpauseanimation->receivers(signal);
    } else {
        return ((VirtualQPauseAnimation*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPauseAnimation_QBaseReceivers(const QPauseAnimation* self, const char* signal) {
    auto* vqpauseanimation = const_cast<VirtualQPauseAnimation*>(dynamic_cast<const VirtualQPauseAnimation*>(self));
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_Receivers_IsBase(true);
        return vqpauseanimation->receivers(signal);
    } else {
        return ((VirtualQPauseAnimation*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnReceivers(const QPauseAnimation* self, intptr_t slot) {
    auto* vqpauseanimation = const_cast<VirtualQPauseAnimation*>(dynamic_cast<const VirtualQPauseAnimation*>(self));
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_Receivers_Callback(reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPauseAnimation_IsSignalConnected(const QPauseAnimation* self, const QMetaMethod* signal) {
    auto* vqpauseanimation = const_cast<VirtualQPauseAnimation*>(dynamic_cast<const VirtualQPauseAnimation*>(self));
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        return vqpauseanimation->isSignalConnected(*signal);
    } else {
        return ((VirtualQPauseAnimation*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPauseAnimation_QBaseIsSignalConnected(const QPauseAnimation* self, const QMetaMethod* signal) {
    auto* vqpauseanimation = const_cast<VirtualQPauseAnimation*>(dynamic_cast<const VirtualQPauseAnimation*>(self));
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_IsSignalConnected_IsBase(true);
        return vqpauseanimation->isSignalConnected(*signal);
    } else {
        return ((VirtualQPauseAnimation*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnIsSignalConnected(const QPauseAnimation* self, intptr_t slot) {
    auto* vqpauseanimation = const_cast<VirtualQPauseAnimation*>(dynamic_cast<const VirtualQPauseAnimation*>(self));
    if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
        vqpauseanimation->setQPauseAnimation_IsSignalConnected_Callback(reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_IsSignalConnected_Callback>(slot));
    }
}

void QPauseAnimation_Delete(QPauseAnimation* self) {
    delete self;
}
