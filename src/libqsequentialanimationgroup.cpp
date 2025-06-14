#include <QAbstractAnimation>
#include <QAnimationGroup>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPauseAnimation>
#include <QSequentialAnimationGroup>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qsequentialanimationgroup.h>
#include "libqsequentialanimationgroup.h"
#include "libqsequentialanimationgroup.hxx"

QSequentialAnimationGroup* QSequentialAnimationGroup_new() {
    return new VirtualQSequentialAnimationGroup();
}

QSequentialAnimationGroup* QSequentialAnimationGroup_new2(QObject* parent) {
    return new VirtualQSequentialAnimationGroup(parent);
}

QMetaObject* QSequentialAnimationGroup_MetaObject(const QSequentialAnimationGroup* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSequentialAnimationGroup_Metacast(QSequentialAnimationGroup* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSequentialAnimationGroup_Metacall(QSequentialAnimationGroup* self, int param1, int param2, void** param3) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSequentialAnimationGroup*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSequentialAnimationGroup_OnMetacall(QSequentialAnimationGroup* self, intptr_t slot) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_Metacall_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSequentialAnimationGroup_QBaseMetacall(QSequentialAnimationGroup* self, int param1, int param2, void** param3) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_Metacall_IsBase(true);
        return vqsequentialanimationgroup->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSequentialAnimationGroup*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSequentialAnimationGroup_Tr(const char* s) {
    QString _ret = QSequentialAnimationGroup::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QPauseAnimation* QSequentialAnimationGroup_AddPause(QSequentialAnimationGroup* self, int msecs) {
    return self->addPause(static_cast<int>(msecs));
}

QPauseAnimation* QSequentialAnimationGroup_InsertPause(QSequentialAnimationGroup* self, int index, int msecs) {
    return self->insertPause(static_cast<int>(index), static_cast<int>(msecs));
}

QAbstractAnimation* QSequentialAnimationGroup_CurrentAnimation(const QSequentialAnimationGroup* self) {
    return self->currentAnimation();
}

void QSequentialAnimationGroup_CurrentAnimationChanged(QSequentialAnimationGroup* self, QAbstractAnimation* current) {
    self->currentAnimationChanged(current);
}

void QSequentialAnimationGroup_Connect_CurrentAnimationChanged(QSequentialAnimationGroup* self, intptr_t slot) {
    void (*slotFunc)(QSequentialAnimationGroup*, QAbstractAnimation*) = reinterpret_cast<void (*)(QSequentialAnimationGroup*, QAbstractAnimation*)>(slot);
    QSequentialAnimationGroup::connect(self, &QSequentialAnimationGroup::currentAnimationChanged, [self, slotFunc](QAbstractAnimation* current) {
        QAbstractAnimation* sigval1 = current;
        slotFunc(self, sigval1);
    });
}

libqt_string QSequentialAnimationGroup_Tr2(const char* s, const char* c) {
    QString _ret = QSequentialAnimationGroup::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSequentialAnimationGroup_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSequentialAnimationGroup::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QSequentialAnimationGroup_Duration(const QSequentialAnimationGroup* self) {
    auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self));
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        return vqsequentialanimationgroup->duration();
    } else {
        return self->QSequentialAnimationGroup::duration();
    }
}

// Base class handler implementation
int QSequentialAnimationGroup_QBaseDuration(const QSequentialAnimationGroup* self) {
    auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self));
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_Duration_IsBase(true);
        return vqsequentialanimationgroup->duration();
    } else {
        return self->QSequentialAnimationGroup::duration();
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnDuration(const QSequentialAnimationGroup* self, intptr_t slot) {
    auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self));
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_Duration_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_Duration_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSequentialAnimationGroup_Event(QSequentialAnimationGroup* self, QEvent* event) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        return vqsequentialanimationgroup->event(event);
    } else {
        return ((VirtualQSequentialAnimationGroup*)self)->event(event);
    }
}

// Base class handler implementation
bool QSequentialAnimationGroup_QBaseEvent(QSequentialAnimationGroup* self, QEvent* event) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_Event_IsBase(true);
        return vqsequentialanimationgroup->event(event);
    } else {
        return ((VirtualQSequentialAnimationGroup*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnEvent(QSequentialAnimationGroup* self, intptr_t slot) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_Event_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QSequentialAnimationGroup_UpdateCurrentTime(QSequentialAnimationGroup* self, int param1) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->updateCurrentTime(static_cast<int>(param1));
    } else {
        ((VirtualQSequentialAnimationGroup*)self)->updateCurrentTime(static_cast<int>(param1));
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_QBaseUpdateCurrentTime(QSequentialAnimationGroup* self, int param1) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_UpdateCurrentTime_IsBase(true);
        vqsequentialanimationgroup->updateCurrentTime(static_cast<int>(param1));
    } else {
        ((VirtualQSequentialAnimationGroup*)self)->updateCurrentTime(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnUpdateCurrentTime(QSequentialAnimationGroup* self, intptr_t slot) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_UpdateCurrentTime_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_UpdateCurrentTime_Callback>(slot));
    }
}

// Derived class handler implementation
void QSequentialAnimationGroup_UpdateState(QSequentialAnimationGroup* self, int newState, int oldState) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        ((VirtualQSequentialAnimationGroup*)self)->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_QBaseUpdateState(QSequentialAnimationGroup* self, int newState, int oldState) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_UpdateState_IsBase(true);
        vqsequentialanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        ((VirtualQSequentialAnimationGroup*)self)->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnUpdateState(QSequentialAnimationGroup* self, intptr_t slot) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_UpdateState_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_UpdateState_Callback>(slot));
    }
}

// Derived class handler implementation
void QSequentialAnimationGroup_UpdateDirection(QSequentialAnimationGroup* self, int direction) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        ((VirtualQSequentialAnimationGroup*)self)->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_QBaseUpdateDirection(QSequentialAnimationGroup* self, int direction) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_UpdateDirection_IsBase(true);
        vqsequentialanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        ((VirtualQSequentialAnimationGroup*)self)->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnUpdateDirection(QSequentialAnimationGroup* self, intptr_t slot) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_UpdateDirection_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_UpdateDirection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSequentialAnimationGroup_EventFilter(QSequentialAnimationGroup* self, QObject* watched, QEvent* event) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        return vqsequentialanimationgroup->eventFilter(watched, event);
    } else {
        return self->QSequentialAnimationGroup::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSequentialAnimationGroup_QBaseEventFilter(QSequentialAnimationGroup* self, QObject* watched, QEvent* event) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_EventFilter_IsBase(true);
        return vqsequentialanimationgroup->eventFilter(watched, event);
    } else {
        return self->QSequentialAnimationGroup::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnEventFilter(QSequentialAnimationGroup* self, intptr_t slot) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_EventFilter_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSequentialAnimationGroup_TimerEvent(QSequentialAnimationGroup* self, QTimerEvent* event) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->timerEvent(event);
    } else {
        ((VirtualQSequentialAnimationGroup*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_QBaseTimerEvent(QSequentialAnimationGroup* self, QTimerEvent* event) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_TimerEvent_IsBase(true);
        vqsequentialanimationgroup->timerEvent(event);
    } else {
        ((VirtualQSequentialAnimationGroup*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnTimerEvent(QSequentialAnimationGroup* self, intptr_t slot) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_TimerEvent_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSequentialAnimationGroup_ChildEvent(QSequentialAnimationGroup* self, QChildEvent* event) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->childEvent(event);
    } else {
        ((VirtualQSequentialAnimationGroup*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_QBaseChildEvent(QSequentialAnimationGroup* self, QChildEvent* event) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_ChildEvent_IsBase(true);
        vqsequentialanimationgroup->childEvent(event);
    } else {
        ((VirtualQSequentialAnimationGroup*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnChildEvent(QSequentialAnimationGroup* self, intptr_t slot) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_ChildEvent_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSequentialAnimationGroup_CustomEvent(QSequentialAnimationGroup* self, QEvent* event) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->customEvent(event);
    } else {
        ((VirtualQSequentialAnimationGroup*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_QBaseCustomEvent(QSequentialAnimationGroup* self, QEvent* event) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_CustomEvent_IsBase(true);
        vqsequentialanimationgroup->customEvent(event);
    } else {
        ((VirtualQSequentialAnimationGroup*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnCustomEvent(QSequentialAnimationGroup* self, intptr_t slot) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_CustomEvent_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSequentialAnimationGroup_ConnectNotify(QSequentialAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->connectNotify(*signal);
    } else {
        ((VirtualQSequentialAnimationGroup*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_QBaseConnectNotify(QSequentialAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_ConnectNotify_IsBase(true);
        vqsequentialanimationgroup->connectNotify(*signal);
    } else {
        ((VirtualQSequentialAnimationGroup*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnConnectNotify(QSequentialAnimationGroup* self, intptr_t slot) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_ConnectNotify_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSequentialAnimationGroup_DisconnectNotify(QSequentialAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->disconnectNotify(*signal);
    } else {
        ((VirtualQSequentialAnimationGroup*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_QBaseDisconnectNotify(QSequentialAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_DisconnectNotify_IsBase(true);
        vqsequentialanimationgroup->disconnectNotify(*signal);
    } else {
        ((VirtualQSequentialAnimationGroup*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnDisconnectNotify(QSequentialAnimationGroup* self, intptr_t slot) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_DisconnectNotify_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSequentialAnimationGroup_Sender(const QSequentialAnimationGroup* self) {
    auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self));
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        return vqsequentialanimationgroup->sender();
    } else {
        return ((VirtualQSequentialAnimationGroup*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSequentialAnimationGroup_QBaseSender(const QSequentialAnimationGroup* self) {
    auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self));
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_Sender_IsBase(true);
        return vqsequentialanimationgroup->sender();
    } else {
        return ((VirtualQSequentialAnimationGroup*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnSender(const QSequentialAnimationGroup* self, intptr_t slot) {
    auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self));
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_Sender_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSequentialAnimationGroup_SenderSignalIndex(const QSequentialAnimationGroup* self) {
    auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self));
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        return vqsequentialanimationgroup->senderSignalIndex();
    } else {
        return ((VirtualQSequentialAnimationGroup*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSequentialAnimationGroup_QBaseSenderSignalIndex(const QSequentialAnimationGroup* self) {
    auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self));
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_SenderSignalIndex_IsBase(true);
        return vqsequentialanimationgroup->senderSignalIndex();
    } else {
        return ((VirtualQSequentialAnimationGroup*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnSenderSignalIndex(const QSequentialAnimationGroup* self, intptr_t slot) {
    auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self));
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSequentialAnimationGroup_Receivers(const QSequentialAnimationGroup* self, const char* signal) {
    auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self));
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        return vqsequentialanimationgroup->receivers(signal);
    } else {
        return ((VirtualQSequentialAnimationGroup*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSequentialAnimationGroup_QBaseReceivers(const QSequentialAnimationGroup* self, const char* signal) {
    auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self));
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_Receivers_IsBase(true);
        return vqsequentialanimationgroup->receivers(signal);
    } else {
        return ((VirtualQSequentialAnimationGroup*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnReceivers(const QSequentialAnimationGroup* self, intptr_t slot) {
    auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self));
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_Receivers_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSequentialAnimationGroup_IsSignalConnected(const QSequentialAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self));
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        return vqsequentialanimationgroup->isSignalConnected(*signal);
    } else {
        return ((VirtualQSequentialAnimationGroup*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSequentialAnimationGroup_QBaseIsSignalConnected(const QSequentialAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self));
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_IsSignalConnected_IsBase(true);
        return vqsequentialanimationgroup->isSignalConnected(*signal);
    } else {
        return ((VirtualQSequentialAnimationGroup*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnIsSignalConnected(const QSequentialAnimationGroup* self, intptr_t slot) {
    auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self));
    if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_IsSignalConnected_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_IsSignalConnected_Callback>(slot));
    }
}

void QSequentialAnimationGroup_Delete(QSequentialAnimationGroup* self) {
    delete self;
}
