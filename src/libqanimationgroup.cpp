#include <QAbstractAnimation>
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
#include <qanimationgroup.h>
#include "libqanimationgroup.h"
#include "libqanimationgroup.hxx"

QAnimationGroup* QAnimationGroup_new() {
    return new VirtualQAnimationGroup();
}

QAnimationGroup* QAnimationGroup_new2(QObject* parent) {
    return new VirtualQAnimationGroup(parent);
}

QMetaObject* QAnimationGroup_MetaObject(const QAnimationGroup* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAnimationGroup_Metacast(QAnimationGroup* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAnimationGroup_Metacall(QAnimationGroup* self, int param1, int param2, void** param3) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAnimationGroup*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAnimationGroup_OnMetacall(QAnimationGroup* self, intptr_t slot) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_Metacall_Callback(reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAnimationGroup_QBaseMetacall(QAnimationGroup* self, int param1, int param2, void** param3) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_Metacall_IsBase(true);
        return vqanimationgroup->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAnimationGroup*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAnimationGroup_Tr(const char* s) {
    QString _ret = QAnimationGroup::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QAbstractAnimation* QAnimationGroup_AnimationAt(const QAnimationGroup* self, int index) {
    return self->animationAt(static_cast<int>(index));
}

int QAnimationGroup_AnimationCount(const QAnimationGroup* self) {
    return self->animationCount();
}

int QAnimationGroup_IndexOfAnimation(const QAnimationGroup* self, QAbstractAnimation* animation) {
    return self->indexOfAnimation(animation);
}

void QAnimationGroup_AddAnimation(QAnimationGroup* self, QAbstractAnimation* animation) {
    self->addAnimation(animation);
}

void QAnimationGroup_InsertAnimation(QAnimationGroup* self, int index, QAbstractAnimation* animation) {
    self->insertAnimation(static_cast<int>(index), animation);
}

void QAnimationGroup_RemoveAnimation(QAnimationGroup* self, QAbstractAnimation* animation) {
    self->removeAnimation(animation);
}

QAbstractAnimation* QAnimationGroup_TakeAnimation(QAnimationGroup* self, int index) {
    return self->takeAnimation(static_cast<int>(index));
}

void QAnimationGroup_Clear(QAnimationGroup* self) {
    self->clear();
}

libqt_string QAnimationGroup_Tr2(const char* s, const char* c) {
    QString _ret = QAnimationGroup::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAnimationGroup_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAnimationGroup::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QAnimationGroup_Event(QAnimationGroup* self, QEvent* event) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        return vqanimationgroup->event(event);
    } else {
        return ((VirtualQAnimationGroup*)self)->event(event);
    }
}

// Base class handler implementation
bool QAnimationGroup_QBaseEvent(QAnimationGroup* self, QEvent* event) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_Event_IsBase(true);
        return vqanimationgroup->event(event);
    } else {
        return ((VirtualQAnimationGroup*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnEvent(QAnimationGroup* self, intptr_t slot) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_Event_Callback(reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_Event_Callback>(slot));
    }
}

// Derived class handler implementation
int QAnimationGroup_Duration(const QAnimationGroup* self) {
    auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self));
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        return vqanimationgroup->duration();
    } else {
        return ((VirtualQAnimationGroup*)self)->duration();
    }
}

// Base class handler implementation
int QAnimationGroup_QBaseDuration(const QAnimationGroup* self) {
    auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self));
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_Duration_IsBase(true);
        return vqanimationgroup->duration();
    } else {
        return ((VirtualQAnimationGroup*)self)->duration();
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnDuration(const QAnimationGroup* self, intptr_t slot) {
    auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self));
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_Duration_Callback(reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_Duration_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationGroup_UpdateCurrentTime(QAnimationGroup* self, int currentTime) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->updateCurrentTime(static_cast<int>(currentTime));
    } else {
        ((VirtualQAnimationGroup*)self)->updateCurrentTime(static_cast<int>(currentTime));
    }
}

// Base class handler implementation
void QAnimationGroup_QBaseUpdateCurrentTime(QAnimationGroup* self, int currentTime) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_UpdateCurrentTime_IsBase(true);
        vqanimationgroup->updateCurrentTime(static_cast<int>(currentTime));
    } else {
        ((VirtualQAnimationGroup*)self)->updateCurrentTime(static_cast<int>(currentTime));
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnUpdateCurrentTime(QAnimationGroup* self, intptr_t slot) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_UpdateCurrentTime_Callback(reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_UpdateCurrentTime_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationGroup_UpdateState(QAnimationGroup* self, int newState, int oldState) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        ((VirtualQAnimationGroup*)self)->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Base class handler implementation
void QAnimationGroup_QBaseUpdateState(QAnimationGroup* self, int newState, int oldState) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_UpdateState_IsBase(true);
        vqanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        ((VirtualQAnimationGroup*)self)->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnUpdateState(QAnimationGroup* self, intptr_t slot) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_UpdateState_Callback(reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_UpdateState_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationGroup_UpdateDirection(QAnimationGroup* self, int direction) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        ((VirtualQAnimationGroup*)self)->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Base class handler implementation
void QAnimationGroup_QBaseUpdateDirection(QAnimationGroup* self, int direction) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_UpdateDirection_IsBase(true);
        vqanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        ((VirtualQAnimationGroup*)self)->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnUpdateDirection(QAnimationGroup* self, intptr_t slot) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_UpdateDirection_Callback(reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_UpdateDirection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAnimationGroup_EventFilter(QAnimationGroup* self, QObject* watched, QEvent* event) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        return vqanimationgroup->eventFilter(watched, event);
    } else {
        return self->QAnimationGroup::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAnimationGroup_QBaseEventFilter(QAnimationGroup* self, QObject* watched, QEvent* event) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_EventFilter_IsBase(true);
        return vqanimationgroup->eventFilter(watched, event);
    } else {
        return self->QAnimationGroup::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnEventFilter(QAnimationGroup* self, intptr_t slot) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_EventFilter_Callback(reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationGroup_TimerEvent(QAnimationGroup* self, QTimerEvent* event) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->timerEvent(event);
    } else {
        ((VirtualQAnimationGroup*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAnimationGroup_QBaseTimerEvent(QAnimationGroup* self, QTimerEvent* event) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_TimerEvent_IsBase(true);
        vqanimationgroup->timerEvent(event);
    } else {
        ((VirtualQAnimationGroup*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnTimerEvent(QAnimationGroup* self, intptr_t slot) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_TimerEvent_Callback(reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationGroup_ChildEvent(QAnimationGroup* self, QChildEvent* event) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->childEvent(event);
    } else {
        ((VirtualQAnimationGroup*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAnimationGroup_QBaseChildEvent(QAnimationGroup* self, QChildEvent* event) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_ChildEvent_IsBase(true);
        vqanimationgroup->childEvent(event);
    } else {
        ((VirtualQAnimationGroup*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnChildEvent(QAnimationGroup* self, intptr_t slot) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_ChildEvent_Callback(reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationGroup_CustomEvent(QAnimationGroup* self, QEvent* event) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->customEvent(event);
    } else {
        ((VirtualQAnimationGroup*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAnimationGroup_QBaseCustomEvent(QAnimationGroup* self, QEvent* event) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_CustomEvent_IsBase(true);
        vqanimationgroup->customEvent(event);
    } else {
        ((VirtualQAnimationGroup*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnCustomEvent(QAnimationGroup* self, intptr_t slot) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_CustomEvent_Callback(reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationGroup_ConnectNotify(QAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->connectNotify(*signal);
    } else {
        ((VirtualQAnimationGroup*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAnimationGroup_QBaseConnectNotify(QAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_ConnectNotify_IsBase(true);
        vqanimationgroup->connectNotify(*signal);
    } else {
        ((VirtualQAnimationGroup*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnConnectNotify(QAnimationGroup* self, intptr_t slot) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_ConnectNotify_Callback(reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationGroup_DisconnectNotify(QAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->disconnectNotify(*signal);
    } else {
        ((VirtualQAnimationGroup*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAnimationGroup_QBaseDisconnectNotify(QAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_DisconnectNotify_IsBase(true);
        vqanimationgroup->disconnectNotify(*signal);
    } else {
        ((VirtualQAnimationGroup*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnDisconnectNotify(QAnimationGroup* self, intptr_t slot) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_DisconnectNotify_Callback(reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAnimationGroup_Sender(const QAnimationGroup* self) {
    auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self));
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        return vqanimationgroup->sender();
    } else {
        return ((VirtualQAnimationGroup*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAnimationGroup_QBaseSender(const QAnimationGroup* self) {
    auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self));
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_Sender_IsBase(true);
        return vqanimationgroup->sender();
    } else {
        return ((VirtualQAnimationGroup*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnSender(const QAnimationGroup* self, intptr_t slot) {
    auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self));
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_Sender_Callback(reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAnimationGroup_SenderSignalIndex(const QAnimationGroup* self) {
    auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self));
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        return vqanimationgroup->senderSignalIndex();
    } else {
        return ((VirtualQAnimationGroup*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAnimationGroup_QBaseSenderSignalIndex(const QAnimationGroup* self) {
    auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self));
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_SenderSignalIndex_IsBase(true);
        return vqanimationgroup->senderSignalIndex();
    } else {
        return ((VirtualQAnimationGroup*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnSenderSignalIndex(const QAnimationGroup* self, intptr_t slot) {
    auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self));
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAnimationGroup_Receivers(const QAnimationGroup* self, const char* signal) {
    auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self));
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        return vqanimationgroup->receivers(signal);
    } else {
        return ((VirtualQAnimationGroup*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAnimationGroup_QBaseReceivers(const QAnimationGroup* self, const char* signal) {
    auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self));
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_Receivers_IsBase(true);
        return vqanimationgroup->receivers(signal);
    } else {
        return ((VirtualQAnimationGroup*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnReceivers(const QAnimationGroup* self, intptr_t slot) {
    auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self));
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_Receivers_Callback(reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAnimationGroup_IsSignalConnected(const QAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self));
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        return vqanimationgroup->isSignalConnected(*signal);
    } else {
        return ((VirtualQAnimationGroup*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAnimationGroup_QBaseIsSignalConnected(const QAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self));
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_IsSignalConnected_IsBase(true);
        return vqanimationgroup->isSignalConnected(*signal);
    } else {
        return ((VirtualQAnimationGroup*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnIsSignalConnected(const QAnimationGroup* self, intptr_t slot) {
    auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self));
    if (vqanimationgroup && vqanimationgroup->isVirtualQAnimationGroup) {
        vqanimationgroup->setQAnimationGroup_IsSignalConnected_Callback(reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_IsSignalConnected_Callback>(slot));
    }
}

void QAnimationGroup_Delete(QAnimationGroup* self) {
    delete self;
}
