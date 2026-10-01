#include <QAbstractAnimation>
#include <QAnimationGroup>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAnimationGroup_Tr(const char* s) {
    auto _ret = QAnimationGroup::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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

bool QAnimationGroup_Event(QAnimationGroup* self, QEvent* event) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup) {
        return vqanimationgroup->event(event);
    }
    qFatal("Error: Protected method QAnimationGroup::event called without a directly constructed type");
}

libqt_string QAnimationGroup_Tr2(const char* s, const char* c) {
    auto _ret = QAnimationGroup::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAnimationGroup_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAnimationGroup::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAnimationGroup_SuperMetaObject(const QAnimationGroup* self) {
    return (QMetaObject*)self->QAnimationGroup::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnMetaObject(QAnimationGroup* self, intptr_t slot) {
    if (auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self)))
        vqanimationgroup->qanimationgroup_metaobject_callback = reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAnimationGroup_SuperMetacast(QAnimationGroup* self, const char* param1) {
    return self->QAnimationGroup::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnMetacast(QAnimationGroup* self, intptr_t slot) {
    if (auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self))
        vqanimationgroup->qanimationgroup_metacast_callback = reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAnimationGroup_SuperMetacall(QAnimationGroup* self, int param1, int param2, void** param3) {
    return self->QAnimationGroup::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnMetacall(QAnimationGroup* self, intptr_t slot) {
    if (auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self))
        vqanimationgroup->qanimationgroup_metacall_callback = reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QAnimationGroup_SuperEvent(QAnimationGroup* self, QEvent* event) {
    if (auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self)) {
        return vqanimationgroup->QAnimationGroup::event(event);
    } else
        qFatal("Error: Protected virtual method QAnimationGroup::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnEvent(QAnimationGroup* self, intptr_t slot) {
    if (auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self))
        vqanimationgroup->qanimationgroup_event_callback = reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_Event_Callback>(slot);
}

// Derived class handler implementation
int QAnimationGroup_Duration(const QAnimationGroup* self) {
    return self->duration();
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnDuration(QAnimationGroup* self, intptr_t slot) {
    if (auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self)))
        vqanimationgroup->qanimationgroup_duration_callback = reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_Duration_Callback>(slot);
}

// Derived class handler implementation
void QAnimationGroup_UpdateCurrentTime(QAnimationGroup* self, int currentTime) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup) {
        vqanimationgroup->updateCurrentTime(static_cast<int>(currentTime));
    } else {
        ((self->*&VirtualQAnimationGroup::Base::updateCurrentTime)(static_cast<int>(currentTime)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnUpdateCurrentTime(QAnimationGroup* self, intptr_t slot) {
    if (auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self))
        vqanimationgroup->qanimationgroup_updatecurrenttime_callback = reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_UpdateCurrentTime_Callback>(slot);
}

// Derived class handler implementation
void QAnimationGroup_UpdateState(QAnimationGroup* self, int newState, int oldState) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup) {
        vqanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        qFatal("Error: Protected virtual method QAnimationGroup::updateState called without a directly constructed type");
    }
}

// Base class handler implementation
void QAnimationGroup_SuperUpdateState(QAnimationGroup* self, int newState, int oldState) {
    if (auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self)) {
        vqanimationgroup->QAnimationGroup::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else
        qFatal("Error: Protected virtual method QAnimationGroup::updateState called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnUpdateState(QAnimationGroup* self, intptr_t slot) {
    if (auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self))
        vqanimationgroup->qanimationgroup_updatestate_callback = reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_UpdateState_Callback>(slot);
}

// Derived class handler implementation
void QAnimationGroup_UpdateDirection(QAnimationGroup* self, int direction) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup) {
        vqanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        qFatal("Error: Protected virtual method QAnimationGroup::updateDirection called without a directly constructed type");
    }
}

// Base class handler implementation
void QAnimationGroup_SuperUpdateDirection(QAnimationGroup* self, int direction) {
    if (auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self)) {
        vqanimationgroup->QAnimationGroup::updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else
        qFatal("Error: Protected virtual method QAnimationGroup::updateDirection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnUpdateDirection(QAnimationGroup* self, intptr_t slot) {
    if (auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self))
        vqanimationgroup->qanimationgroup_updatedirection_callback = reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_UpdateDirection_Callback>(slot);
}

// Derived class handler implementation
bool QAnimationGroup_EventFilter(QAnimationGroup* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAnimationGroup_SuperEventFilter(QAnimationGroup* self, QObject* watched, QEvent* event) {
    return self->QAnimationGroup::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnEventFilter(QAnimationGroup* self, intptr_t slot) {
    if (auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self))
        vqanimationgroup->qanimationgroup_eventfilter_callback = reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAnimationGroup_TimerEvent(QAnimationGroup* self, QTimerEvent* event) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup) {
        vqanimationgroup->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAnimationGroup::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAnimationGroup_SuperTimerEvent(QAnimationGroup* self, QTimerEvent* event) {
    if (auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self)) {
        vqanimationgroup->QAnimationGroup::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAnimationGroup::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnTimerEvent(QAnimationGroup* self, intptr_t slot) {
    if (auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self))
        vqanimationgroup->qanimationgroup_timerevent_callback = reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAnimationGroup_ChildEvent(QAnimationGroup* self, QChildEvent* event) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup) {
        vqanimationgroup->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAnimationGroup::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAnimationGroup_SuperChildEvent(QAnimationGroup* self, QChildEvent* event) {
    if (auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self)) {
        vqanimationgroup->QAnimationGroup::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAnimationGroup::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnChildEvent(QAnimationGroup* self, intptr_t slot) {
    if (auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self))
        vqanimationgroup->qanimationgroup_childevent_callback = reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAnimationGroup_CustomEvent(QAnimationGroup* self, QEvent* event) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup) {
        vqanimationgroup->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAnimationGroup::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAnimationGroup_SuperCustomEvent(QAnimationGroup* self, QEvent* event) {
    if (auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self)) {
        vqanimationgroup->QAnimationGroup::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAnimationGroup::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnCustomEvent(QAnimationGroup* self, intptr_t slot) {
    if (auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self))
        vqanimationgroup->qanimationgroup_customevent_callback = reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAnimationGroup_ConnectNotify(QAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup) {
        vqanimationgroup->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAnimationGroup::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAnimationGroup_SuperConnectNotify(QAnimationGroup* self, const QMetaMethod* signal) {
    if (auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self)) {
        vqanimationgroup->QAnimationGroup::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAnimationGroup::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnConnectNotify(QAnimationGroup* self, intptr_t slot) {
    if (auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self))
        vqanimationgroup->qanimationgroup_connectnotify_callback = reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAnimationGroup_DisconnectNotify(QAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self);
    if (vqanimationgroup) {
        vqanimationgroup->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAnimationGroup::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAnimationGroup_SuperDisconnectNotify(QAnimationGroup* self, const QMetaMethod* signal) {
    if (auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self)) {
        vqanimationgroup->QAnimationGroup::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAnimationGroup::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAnimationGroup_OnDisconnectNotify(QAnimationGroup* self, intptr_t slot) {
    if (auto* vqanimationgroup = dynamic_cast<VirtualQAnimationGroup*>(self))
        vqanimationgroup->qanimationgroup_disconnectnotify_callback = reinterpret_cast<VirtualQAnimationGroup::QAnimationGroup_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QAnimationGroup_Sender(const QAnimationGroup* self) {
    if (auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self))) {
        return vqanimationgroup->VirtualQAnimationGroup::sender();
    } else
        qFatal("Error: Protected method QAnimationGroup::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAnimationGroup_SenderSignalIndex(const QAnimationGroup* self) {
    if (auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self))) {
        return vqanimationgroup->VirtualQAnimationGroup::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAnimationGroup::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAnimationGroup_Receivers(const QAnimationGroup* self, const char* signal) {
    if (auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self))) {
        return vqanimationgroup->VirtualQAnimationGroup::receivers(signal);
    } else
        qFatal("Error: Protected method QAnimationGroup::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAnimationGroup_IsSignalConnected(const QAnimationGroup* self, const QMetaMethod* signal) {
    if (auto* vqanimationgroup = const_cast<VirtualQAnimationGroup*>(dynamic_cast<const VirtualQAnimationGroup*>(self))) {
        return vqanimationgroup->VirtualQAnimationGroup::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAnimationGroup::isSignalConnected called without a directly constructed type");
}

void QAnimationGroup_Delete(QAnimationGroup* self) {
    delete self;
}
