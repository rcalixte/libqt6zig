#include <QAbstractAnimation>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPropertyAnimation>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <QVariantAnimation>
#include <qpropertyanimation.h>
#include "libqpropertyanimation.h"
#include "libqpropertyanimation.hxx"

QPropertyAnimation* QPropertyAnimation_new() {
    return new VirtualQPropertyAnimation();
}

QPropertyAnimation* QPropertyAnimation_new2(QObject* target, const libqt_string propertyName) {
    QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
    return new VirtualQPropertyAnimation(target, propertyName_QByteArray);
}

QPropertyAnimation* QPropertyAnimation_new3(QObject* parent) {
    return new VirtualQPropertyAnimation(parent);
}

QPropertyAnimation* QPropertyAnimation_new4(QObject* target, const libqt_string propertyName, QObject* parent) {
    QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
    return new VirtualQPropertyAnimation(target, propertyName_QByteArray, parent);
}

QMetaObject* QPropertyAnimation_MetaObject(const QPropertyAnimation* self) {
    auto* vqpropertyanimation = dynamic_cast<const VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQPropertyAnimation*)self)->metaObject();
    }
}

void* QPropertyAnimation_Metacast(QPropertyAnimation* self, const char* param1) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQPropertyAnimation*)self)->qt_metacast(param1);
    }
}

int QPropertyAnimation_Metacall(QPropertyAnimation* self, int param1, int param2, void** param3) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPropertyAnimation*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

QObject* QPropertyAnimation_TargetObject(const QPropertyAnimation* self) {
    return self->targetObject();
}

void QPropertyAnimation_SetTargetObject(QPropertyAnimation* self, QObject* target) {
    self->setTargetObject(target);
}

libqt_string QPropertyAnimation_PropertyName(const QPropertyAnimation* self) {
    QByteArray _qb = self->propertyName();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QPropertyAnimation_SetPropertyName(QPropertyAnimation* self, const libqt_string propertyName) {
    QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
    self->setPropertyName(propertyName_QByteArray);
}

bool QPropertyAnimation_Event(QPropertyAnimation* self, QEvent* event) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        return vqpropertyanimation->event(event);
    }
    return {};
}

void QPropertyAnimation_UpdateCurrentValue(QPropertyAnimation* self, const QVariant* value) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->updateCurrentValue(*value);
    }
}

void QPropertyAnimation_UpdateState(QPropertyAnimation* self, int newState, int oldState) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Base class handler implementation
QMetaObject* QPropertyAnimation_SuperMetaObject(const QPropertyAnimation* self) {
    auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self));
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_MetaObject_IsBase(true);
        return (QMetaObject*)vqpropertyanimation->metaObject();
    } else {
        return (QMetaObject*)self->QPropertyAnimation::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnMetaObject(const QPropertyAnimation* self, intptr_t slot) {
    auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self));
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_MetaObject_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QPropertyAnimation_SuperMetacast(QPropertyAnimation* self, const char* param1) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_Metacast_IsBase(true);
        return vqpropertyanimation->qt_metacast(param1);
    } else {
        return self->QPropertyAnimation::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnMetacast(QPropertyAnimation* self, intptr_t slot) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_Metacast_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QPropertyAnimation_SuperMetacall(QPropertyAnimation* self, int param1, int param2, void** param3) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_Metacall_IsBase(true);
        return vqpropertyanimation->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QPropertyAnimation::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnMetacall(QPropertyAnimation* self, intptr_t slot) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_Metacall_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool QPropertyAnimation_SuperEvent(QPropertyAnimation* self, QEvent* event) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_Event_IsBase(true);
        return vqpropertyanimation->event(event);
    } else {
        return ((VirtualQPropertyAnimation*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnEvent(QPropertyAnimation* self, intptr_t slot) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_Event_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_Event_Callback>(slot));
    }
}

// Base class handler implementation
void QPropertyAnimation_SuperUpdateCurrentValue(QPropertyAnimation* self, const QVariant* value) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_UpdateCurrentValue_IsBase(true);
        vqpropertyanimation->updateCurrentValue(*value);
    } else {
        ((VirtualQPropertyAnimation*)self)->updateCurrentValue(*value);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnUpdateCurrentValue(QPropertyAnimation* self, intptr_t slot) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_UpdateCurrentValue_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_UpdateCurrentValue_Callback>(slot));
    }
}

// Base class handler implementation
void QPropertyAnimation_SuperUpdateState(QPropertyAnimation* self, int newState, int oldState) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_UpdateState_IsBase(true);
        vqpropertyanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        ((VirtualQPropertyAnimation*)self)->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnUpdateState(QPropertyAnimation* self, intptr_t slot) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_UpdateState_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_UpdateState_Callback>(slot));
    }
}

// Derived class handler implementation
int QPropertyAnimation_Duration(const QPropertyAnimation* self) {
    auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self));
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        return vqpropertyanimation->duration();
    } else {
        return self->QPropertyAnimation::duration();
    }
}

// Base class handler implementation
int QPropertyAnimation_SuperDuration(const QPropertyAnimation* self) {
    auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self));
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_Duration_IsBase(true);
        return vqpropertyanimation->duration();
    } else {
        return self->QPropertyAnimation::duration();
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnDuration(const QPropertyAnimation* self, intptr_t slot) {
    auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self));
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_Duration_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_Duration_Callback>(slot));
    }
}

// Derived class handler implementation
void QPropertyAnimation_UpdateCurrentTime(QPropertyAnimation* self, int param1) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->updateCurrentTime(static_cast<int>(param1));
    } else {
        ((VirtualQPropertyAnimation*)self)->updateCurrentTime(static_cast<int>(param1));
    }
}

// Base class handler implementation
void QPropertyAnimation_SuperUpdateCurrentTime(QPropertyAnimation* self, int param1) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_UpdateCurrentTime_IsBase(true);
        vqpropertyanimation->updateCurrentTime(static_cast<int>(param1));
    } else {
        ((VirtualQPropertyAnimation*)self)->updateCurrentTime(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnUpdateCurrentTime(QPropertyAnimation* self, intptr_t slot) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_UpdateCurrentTime_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_UpdateCurrentTime_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPropertyAnimation_Interpolated(const QPropertyAnimation* self, const QVariant* from, const QVariant* to, double progress) {
    auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self));
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        return new QVariant(vqpropertyanimation->interpolated(*from, *to, static_cast<qreal>(progress)));
    }
    return {};
}

// Base class handler implementation
QVariant* QPropertyAnimation_SuperInterpolated(const QPropertyAnimation* self, const QVariant* from, const QVariant* to, double progress) {
    auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self));
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_Interpolated_IsBase(true);
        return new QVariant(vqpropertyanimation->interpolated(*from, *to, static_cast<qreal>(progress)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnInterpolated(const QPropertyAnimation* self, intptr_t slot) {
    auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self));
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_Interpolated_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_Interpolated_Callback>(slot));
    }
}

// Derived class handler implementation
void QPropertyAnimation_UpdateDirection(QPropertyAnimation* self, int direction) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        ((VirtualQPropertyAnimation*)self)->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Base class handler implementation
void QPropertyAnimation_SuperUpdateDirection(QPropertyAnimation* self, int direction) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_UpdateDirection_IsBase(true);
        vqpropertyanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        ((VirtualQPropertyAnimation*)self)->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnUpdateDirection(QPropertyAnimation* self, intptr_t slot) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_UpdateDirection_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_UpdateDirection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPropertyAnimation_EventFilter(QPropertyAnimation* self, QObject* watched, QEvent* event) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        return vqpropertyanimation->eventFilter(watched, event);
    } else {
        return self->QPropertyAnimation::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPropertyAnimation_SuperEventFilter(QPropertyAnimation* self, QObject* watched, QEvent* event) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_EventFilter_IsBase(true);
        return vqpropertyanimation->eventFilter(watched, event);
    } else {
        return self->QPropertyAnimation::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnEventFilter(QPropertyAnimation* self, intptr_t slot) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_EventFilter_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPropertyAnimation_TimerEvent(QPropertyAnimation* self, QTimerEvent* event) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->timerEvent(event);
    } else {
        ((VirtualQPropertyAnimation*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPropertyAnimation_SuperTimerEvent(QPropertyAnimation* self, QTimerEvent* event) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_TimerEvent_IsBase(true);
        vqpropertyanimation->timerEvent(event);
    } else {
        ((VirtualQPropertyAnimation*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnTimerEvent(QPropertyAnimation* self, intptr_t slot) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_TimerEvent_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPropertyAnimation_ChildEvent(QPropertyAnimation* self, QChildEvent* event) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->childEvent(event);
    } else {
        ((VirtualQPropertyAnimation*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPropertyAnimation_SuperChildEvent(QPropertyAnimation* self, QChildEvent* event) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_ChildEvent_IsBase(true);
        vqpropertyanimation->childEvent(event);
    } else {
        ((VirtualQPropertyAnimation*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnChildEvent(QPropertyAnimation* self, intptr_t slot) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_ChildEvent_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPropertyAnimation_CustomEvent(QPropertyAnimation* self, QEvent* event) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->customEvent(event);
    } else {
        ((VirtualQPropertyAnimation*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPropertyAnimation_SuperCustomEvent(QPropertyAnimation* self, QEvent* event) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_CustomEvent_IsBase(true);
        vqpropertyanimation->customEvent(event);
    } else {
        ((VirtualQPropertyAnimation*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnCustomEvent(QPropertyAnimation* self, intptr_t slot) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_CustomEvent_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPropertyAnimation_ConnectNotify(QPropertyAnimation* self, const QMetaMethod* signal) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->connectNotify(*signal);
    } else {
        ((VirtualQPropertyAnimation*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPropertyAnimation_SuperConnectNotify(QPropertyAnimation* self, const QMetaMethod* signal) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_ConnectNotify_IsBase(true);
        vqpropertyanimation->connectNotify(*signal);
    } else {
        ((VirtualQPropertyAnimation*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnConnectNotify(QPropertyAnimation* self, intptr_t slot) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_ConnectNotify_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPropertyAnimation_DisconnectNotify(QPropertyAnimation* self, const QMetaMethod* signal) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->disconnectNotify(*signal);
    } else {
        ((VirtualQPropertyAnimation*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPropertyAnimation_SuperDisconnectNotify(QPropertyAnimation* self, const QMetaMethod* signal) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_DisconnectNotify_IsBase(true);
        vqpropertyanimation->disconnectNotify(*signal);
    } else {
        ((VirtualQPropertyAnimation*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnDisconnectNotify(QPropertyAnimation* self, intptr_t slot) {
    auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_DisconnectNotify_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPropertyAnimation_Sender(const QPropertyAnimation* self) {
    auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self));
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        return vqpropertyanimation->sender();
    } else {
        return ((VirtualQPropertyAnimation*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPropertyAnimation_SuperSender(const QPropertyAnimation* self) {
    auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self));
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_Sender_IsBase(true);
        return vqpropertyanimation->sender();
    } else {
        return ((VirtualQPropertyAnimation*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnSender(const QPropertyAnimation* self, intptr_t slot) {
    auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self));
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_Sender_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPropertyAnimation_SenderSignalIndex(const QPropertyAnimation* self) {
    auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self));
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        return vqpropertyanimation->senderSignalIndex();
    } else {
        return ((VirtualQPropertyAnimation*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPropertyAnimation_SuperSenderSignalIndex(const QPropertyAnimation* self) {
    auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self));
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_SenderSignalIndex_IsBase(true);
        return vqpropertyanimation->senderSignalIndex();
    } else {
        return ((VirtualQPropertyAnimation*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnSenderSignalIndex(const QPropertyAnimation* self, intptr_t slot) {
    auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self));
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPropertyAnimation_Receivers(const QPropertyAnimation* self, const char* signal) {
    auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self));
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        return vqpropertyanimation->receivers(signal);
    } else {
        return ((VirtualQPropertyAnimation*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPropertyAnimation_SuperReceivers(const QPropertyAnimation* self, const char* signal) {
    auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self));
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_Receivers_IsBase(true);
        return vqpropertyanimation->receivers(signal);
    } else {
        return ((VirtualQPropertyAnimation*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnReceivers(const QPropertyAnimation* self, intptr_t slot) {
    auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self));
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_Receivers_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPropertyAnimation_IsSignalConnected(const QPropertyAnimation* self, const QMetaMethod* signal) {
    auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self));
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        return vqpropertyanimation->isSignalConnected(*signal);
    } else {
        return ((VirtualQPropertyAnimation*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPropertyAnimation_SuperIsSignalConnected(const QPropertyAnimation* self, const QMetaMethod* signal) {
    auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self));
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_IsSignalConnected_IsBase(true);
        return vqpropertyanimation->isSignalConnected(*signal);
    } else {
        return ((VirtualQPropertyAnimation*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnIsSignalConnected(const QPropertyAnimation* self, intptr_t slot) {
    auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self));
    if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
        vqpropertyanimation->setQPropertyAnimation_IsSignalConnected_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_IsSignalConnected_Callback>(slot));
    }
}

void QPropertyAnimation_Delete(QPropertyAnimation* self) {
    delete self;
}
