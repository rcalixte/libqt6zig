#include <QAbstractAnimation>
#include <QAnimationGroup>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QParallelAnimationGroup>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qparallelanimationgroup.h>
#include "libqparallelanimationgroup.h"
#include "libqparallelanimationgroup.hxx"

QParallelAnimationGroup* QParallelAnimationGroup_new() {
    return new VirtualQParallelAnimationGroup();
}

QParallelAnimationGroup* QParallelAnimationGroup_new2(QObject* parent) {
    return new VirtualQParallelAnimationGroup(parent);
}

QMetaObject* QParallelAnimationGroup_MetaObject(const QParallelAnimationGroup* self) {
    return (QMetaObject*)self->metaObject();
}

void* QParallelAnimationGroup_Metacast(QParallelAnimationGroup* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QParallelAnimationGroup_Metacall(QParallelAnimationGroup* self, int param1, int param2, void** param3) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQParallelAnimationGroup*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QParallelAnimationGroup_OnMetacall(QParallelAnimationGroup* self, intptr_t slot) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_Metacall_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QParallelAnimationGroup_QBaseMetacall(QParallelAnimationGroup* self, int param1, int param2, void** param3) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_Metacall_IsBase(true);
        return vqparallelanimationgroup->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQParallelAnimationGroup*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QParallelAnimationGroup_Tr(const char* s) {
    QString _ret = QParallelAnimationGroup::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QParallelAnimationGroup_Tr2(const char* s, const char* c) {
    QString _ret = QParallelAnimationGroup::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QParallelAnimationGroup_Tr3(const char* s, const char* c, int n) {
    QString _ret = QParallelAnimationGroup::tr(s, c, static_cast<int>(n));
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
int QParallelAnimationGroup_Duration(const QParallelAnimationGroup* self) {
    auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self));
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        return vqparallelanimationgroup->duration();
    } else {
        return self->QParallelAnimationGroup::duration();
    }
}

// Base class handler implementation
int QParallelAnimationGroup_QBaseDuration(const QParallelAnimationGroup* self) {
    auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self));
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_Duration_IsBase(true);
        return vqparallelanimationgroup->duration();
    } else {
        return self->QParallelAnimationGroup::duration();
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnDuration(const QParallelAnimationGroup* self, intptr_t slot) {
    auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self));
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_Duration_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_Duration_Callback>(slot));
    }
}

// Derived class handler implementation
bool QParallelAnimationGroup_Event(QParallelAnimationGroup* self, QEvent* event) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        return vqparallelanimationgroup->event(event);
    } else {
        return ((VirtualQParallelAnimationGroup*)self)->event(event);
    }
}

// Base class handler implementation
bool QParallelAnimationGroup_QBaseEvent(QParallelAnimationGroup* self, QEvent* event) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_Event_IsBase(true);
        return vqparallelanimationgroup->event(event);
    } else {
        return ((VirtualQParallelAnimationGroup*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnEvent(QParallelAnimationGroup* self, intptr_t slot) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_Event_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QParallelAnimationGroup_UpdateCurrentTime(QParallelAnimationGroup* self, int currentTime) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->updateCurrentTime(static_cast<int>(currentTime));
    } else {
        ((VirtualQParallelAnimationGroup*)self)->updateCurrentTime(static_cast<int>(currentTime));
    }
}

// Base class handler implementation
void QParallelAnimationGroup_QBaseUpdateCurrentTime(QParallelAnimationGroup* self, int currentTime) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_UpdateCurrentTime_IsBase(true);
        vqparallelanimationgroup->updateCurrentTime(static_cast<int>(currentTime));
    } else {
        ((VirtualQParallelAnimationGroup*)self)->updateCurrentTime(static_cast<int>(currentTime));
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnUpdateCurrentTime(QParallelAnimationGroup* self, intptr_t slot) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_UpdateCurrentTime_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_UpdateCurrentTime_Callback>(slot));
    }
}

// Derived class handler implementation
void QParallelAnimationGroup_UpdateState(QParallelAnimationGroup* self, int newState, int oldState) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        ((VirtualQParallelAnimationGroup*)self)->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Base class handler implementation
void QParallelAnimationGroup_QBaseUpdateState(QParallelAnimationGroup* self, int newState, int oldState) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_UpdateState_IsBase(true);
        vqparallelanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        ((VirtualQParallelAnimationGroup*)self)->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnUpdateState(QParallelAnimationGroup* self, intptr_t slot) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_UpdateState_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_UpdateState_Callback>(slot));
    }
}

// Derived class handler implementation
void QParallelAnimationGroup_UpdateDirection(QParallelAnimationGroup* self, int direction) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        ((VirtualQParallelAnimationGroup*)self)->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Base class handler implementation
void QParallelAnimationGroup_QBaseUpdateDirection(QParallelAnimationGroup* self, int direction) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_UpdateDirection_IsBase(true);
        vqparallelanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        ((VirtualQParallelAnimationGroup*)self)->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnUpdateDirection(QParallelAnimationGroup* self, intptr_t slot) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_UpdateDirection_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_UpdateDirection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QParallelAnimationGroup_EventFilter(QParallelAnimationGroup* self, QObject* watched, QEvent* event) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        return vqparallelanimationgroup->eventFilter(watched, event);
    } else {
        return self->QParallelAnimationGroup::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QParallelAnimationGroup_QBaseEventFilter(QParallelAnimationGroup* self, QObject* watched, QEvent* event) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_EventFilter_IsBase(true);
        return vqparallelanimationgroup->eventFilter(watched, event);
    } else {
        return self->QParallelAnimationGroup::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnEventFilter(QParallelAnimationGroup* self, intptr_t slot) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_EventFilter_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QParallelAnimationGroup_TimerEvent(QParallelAnimationGroup* self, QTimerEvent* event) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->timerEvent(event);
    } else {
        ((VirtualQParallelAnimationGroup*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QParallelAnimationGroup_QBaseTimerEvent(QParallelAnimationGroup* self, QTimerEvent* event) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_TimerEvent_IsBase(true);
        vqparallelanimationgroup->timerEvent(event);
    } else {
        ((VirtualQParallelAnimationGroup*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnTimerEvent(QParallelAnimationGroup* self, intptr_t slot) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_TimerEvent_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QParallelAnimationGroup_ChildEvent(QParallelAnimationGroup* self, QChildEvent* event) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->childEvent(event);
    } else {
        ((VirtualQParallelAnimationGroup*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QParallelAnimationGroup_QBaseChildEvent(QParallelAnimationGroup* self, QChildEvent* event) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_ChildEvent_IsBase(true);
        vqparallelanimationgroup->childEvent(event);
    } else {
        ((VirtualQParallelAnimationGroup*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnChildEvent(QParallelAnimationGroup* self, intptr_t slot) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_ChildEvent_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QParallelAnimationGroup_CustomEvent(QParallelAnimationGroup* self, QEvent* event) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->customEvent(event);
    } else {
        ((VirtualQParallelAnimationGroup*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QParallelAnimationGroup_QBaseCustomEvent(QParallelAnimationGroup* self, QEvent* event) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_CustomEvent_IsBase(true);
        vqparallelanimationgroup->customEvent(event);
    } else {
        ((VirtualQParallelAnimationGroup*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnCustomEvent(QParallelAnimationGroup* self, intptr_t slot) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_CustomEvent_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QParallelAnimationGroup_ConnectNotify(QParallelAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->connectNotify(*signal);
    } else {
        ((VirtualQParallelAnimationGroup*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QParallelAnimationGroup_QBaseConnectNotify(QParallelAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_ConnectNotify_IsBase(true);
        vqparallelanimationgroup->connectNotify(*signal);
    } else {
        ((VirtualQParallelAnimationGroup*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnConnectNotify(QParallelAnimationGroup* self, intptr_t slot) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_ConnectNotify_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QParallelAnimationGroup_DisconnectNotify(QParallelAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->disconnectNotify(*signal);
    } else {
        ((VirtualQParallelAnimationGroup*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QParallelAnimationGroup_QBaseDisconnectNotify(QParallelAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_DisconnectNotify_IsBase(true);
        vqparallelanimationgroup->disconnectNotify(*signal);
    } else {
        ((VirtualQParallelAnimationGroup*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnDisconnectNotify(QParallelAnimationGroup* self, intptr_t slot) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_DisconnectNotify_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QParallelAnimationGroup_Sender(const QParallelAnimationGroup* self) {
    auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self));
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        return vqparallelanimationgroup->sender();
    } else {
        return ((VirtualQParallelAnimationGroup*)self)->sender();
    }
}

// Base class handler implementation
QObject* QParallelAnimationGroup_QBaseSender(const QParallelAnimationGroup* self) {
    auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self));
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_Sender_IsBase(true);
        return vqparallelanimationgroup->sender();
    } else {
        return ((VirtualQParallelAnimationGroup*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnSender(const QParallelAnimationGroup* self, intptr_t slot) {
    auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self));
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_Sender_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QParallelAnimationGroup_SenderSignalIndex(const QParallelAnimationGroup* self) {
    auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self));
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        return vqparallelanimationgroup->senderSignalIndex();
    } else {
        return ((VirtualQParallelAnimationGroup*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QParallelAnimationGroup_QBaseSenderSignalIndex(const QParallelAnimationGroup* self) {
    auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self));
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_SenderSignalIndex_IsBase(true);
        return vqparallelanimationgroup->senderSignalIndex();
    } else {
        return ((VirtualQParallelAnimationGroup*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnSenderSignalIndex(const QParallelAnimationGroup* self, intptr_t slot) {
    auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self));
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_SenderSignalIndex_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QParallelAnimationGroup_Receivers(const QParallelAnimationGroup* self, const char* signal) {
    auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self));
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        return vqparallelanimationgroup->receivers(signal);
    } else {
        return ((VirtualQParallelAnimationGroup*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QParallelAnimationGroup_QBaseReceivers(const QParallelAnimationGroup* self, const char* signal) {
    auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self));
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_Receivers_IsBase(true);
        return vqparallelanimationgroup->receivers(signal);
    } else {
        return ((VirtualQParallelAnimationGroup*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnReceivers(const QParallelAnimationGroup* self, intptr_t slot) {
    auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self));
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_Receivers_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QParallelAnimationGroup_IsSignalConnected(const QParallelAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self));
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        return vqparallelanimationgroup->isSignalConnected(*signal);
    } else {
        return ((VirtualQParallelAnimationGroup*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QParallelAnimationGroup_QBaseIsSignalConnected(const QParallelAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self));
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_IsSignalConnected_IsBase(true);
        return vqparallelanimationgroup->isSignalConnected(*signal);
    } else {
        return ((VirtualQParallelAnimationGroup*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnIsSignalConnected(const QParallelAnimationGroup* self, intptr_t slot) {
    auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self));
    if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
        vqparallelanimationgroup->setQParallelAnimationGroup_IsSignalConnected_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_IsSignalConnected_Callback>(slot));
    }
}

void QParallelAnimationGroup_Delete(QParallelAnimationGroup* self) {
    delete self;
}
