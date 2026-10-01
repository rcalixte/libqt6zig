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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSequentialAnimationGroup_Tr(const char* s) {
    auto _ret = QSequentialAnimationGroup::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

int QSequentialAnimationGroup_Duration(const QSequentialAnimationGroup* self) {
    return self->duration();
}

void QSequentialAnimationGroup_CurrentAnimationChanged(QSequentialAnimationGroup* self, QAbstractAnimation* current) {
    self->currentAnimationChanged(current);
}

void QSequentialAnimationGroup_Connect_CurrentAnimationChanged(QSequentialAnimationGroup* self, intptr_t slot) {
    void (*slotFunc)(QSequentialAnimationGroup*, QAbstractAnimation*) = reinterpret_cast<void (*)(QSequentialAnimationGroup*, QAbstractAnimation*)>(slot);
    QSequentialAnimationGroup::connect(self,
                                       static_cast<void (QSequentialAnimationGroup::*)(QAbstractAnimation*)>(&QSequentialAnimationGroup::currentAnimationChanged),
                                       [self, slotFunc](QAbstractAnimation* current) {
                                           QAbstractAnimation* sigval1 = current;
                                           slotFunc(self, sigval1);
                                       });
}

bool QSequentialAnimationGroup_Event(QSequentialAnimationGroup* self, QEvent* event) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup) {
        return vqsequentialanimationgroup->event(event);
    }
    qFatal("Error: Protected method QSequentialAnimationGroup::event called without a directly constructed type");
}

void QSequentialAnimationGroup_UpdateCurrentTime(QSequentialAnimationGroup* self, int param1) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup) {
        vqsequentialanimationgroup->updateCurrentTime(static_cast<int>(param1));
    }
}

void QSequentialAnimationGroup_UpdateState(QSequentialAnimationGroup* self, int newState, int oldState) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup) {
        vqsequentialanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

void QSequentialAnimationGroup_UpdateDirection(QSequentialAnimationGroup* self, int direction) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup) {
        vqsequentialanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

libqt_string QSequentialAnimationGroup_Tr2(const char* s, const char* c) {
    auto _ret = QSequentialAnimationGroup::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSequentialAnimationGroup_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSequentialAnimationGroup::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSequentialAnimationGroup_SuperMetaObject(const QSequentialAnimationGroup* self) {
    return (QMetaObject*)self->QSequentialAnimationGroup::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnMetaObject(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self)))
        vqsequentialanimationgroup->qsequentialanimationgroup_metaobject_callback = reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSequentialAnimationGroup_SuperMetacast(QSequentialAnimationGroup* self, const char* param1) {
    return self->QSequentialAnimationGroup::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnMetacast(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self))
        vqsequentialanimationgroup->qsequentialanimationgroup_metacast_callback = reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSequentialAnimationGroup_SuperMetacall(QSequentialAnimationGroup* self, int param1, int param2, void** param3) {
    return self->QSequentialAnimationGroup::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnMetacall(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self))
        vqsequentialanimationgroup->qsequentialanimationgroup_metacall_callback = reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_Metacall_Callback>(slot);
}

// Base class handler implementation
int QSequentialAnimationGroup_SuperDuration(const QSequentialAnimationGroup* self) {
    return self->QSequentialAnimationGroup::duration();
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnDuration(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self)))
        vqsequentialanimationgroup->qsequentialanimationgroup_duration_callback = reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_Duration_Callback>(slot);
}

// Base class handler implementation
bool QSequentialAnimationGroup_SuperEvent(QSequentialAnimationGroup* self, QEvent* event) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        return vqsequentialanimationgroup->QSequentialAnimationGroup::event(event);
    } else
        qFatal("Error: Protected virtual method QSequentialAnimationGroup::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnEvent(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self))
        vqsequentialanimationgroup->qsequentialanimationgroup_event_callback = reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_Event_Callback>(slot);
}

// Base class handler implementation
void QSequentialAnimationGroup_SuperUpdateCurrentTime(QSequentialAnimationGroup* self, int param1) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->QSequentialAnimationGroup::updateCurrentTime(static_cast<int>(param1));
    } else
        qFatal("Error: Protected virtual method QSequentialAnimationGroup::updateCurrentTime called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnUpdateCurrentTime(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self))
        vqsequentialanimationgroup->qsequentialanimationgroup_updatecurrenttime_callback = reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_UpdateCurrentTime_Callback>(slot);
}

// Base class handler implementation
void QSequentialAnimationGroup_SuperUpdateState(QSequentialAnimationGroup* self, int newState, int oldState) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->QSequentialAnimationGroup::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else
        qFatal("Error: Protected virtual method QSequentialAnimationGroup::updateState called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnUpdateState(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self))
        vqsequentialanimationgroup->qsequentialanimationgroup_updatestate_callback = reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_UpdateState_Callback>(slot);
}

// Base class handler implementation
void QSequentialAnimationGroup_SuperUpdateDirection(QSequentialAnimationGroup* self, int direction) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->QSequentialAnimationGroup::updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else
        qFatal("Error: Protected virtual method QSequentialAnimationGroup::updateDirection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnUpdateDirection(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self))
        vqsequentialanimationgroup->qsequentialanimationgroup_updatedirection_callback = reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_UpdateDirection_Callback>(slot);
}

// Derived class handler implementation
bool QSequentialAnimationGroup_EventFilter(QSequentialAnimationGroup* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSequentialAnimationGroup_SuperEventFilter(QSequentialAnimationGroup* self, QObject* watched, QEvent* event) {
    return self->QSequentialAnimationGroup::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnEventFilter(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self))
        vqsequentialanimationgroup->qsequentialanimationgroup_eventfilter_callback = reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSequentialAnimationGroup_TimerEvent(QSequentialAnimationGroup* self, QTimerEvent* event) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup) {
        vqsequentialanimationgroup->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSequentialAnimationGroup::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_SuperTimerEvent(QSequentialAnimationGroup* self, QTimerEvent* event) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->QSequentialAnimationGroup::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSequentialAnimationGroup::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnTimerEvent(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self))
        vqsequentialanimationgroup->qsequentialanimationgroup_timerevent_callback = reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSequentialAnimationGroup_ChildEvent(QSequentialAnimationGroup* self, QChildEvent* event) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup) {
        vqsequentialanimationgroup->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSequentialAnimationGroup::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_SuperChildEvent(QSequentialAnimationGroup* self, QChildEvent* event) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->QSequentialAnimationGroup::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSequentialAnimationGroup::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnChildEvent(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self))
        vqsequentialanimationgroup->qsequentialanimationgroup_childevent_callback = reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSequentialAnimationGroup_CustomEvent(QSequentialAnimationGroup* self, QEvent* event) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup) {
        vqsequentialanimationgroup->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSequentialAnimationGroup::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_SuperCustomEvent(QSequentialAnimationGroup* self, QEvent* event) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->QSequentialAnimationGroup::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSequentialAnimationGroup::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnCustomEvent(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self))
        vqsequentialanimationgroup->qsequentialanimationgroup_customevent_callback = reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSequentialAnimationGroup_ConnectNotify(QSequentialAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup) {
        vqsequentialanimationgroup->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSequentialAnimationGroup::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_SuperConnectNotify(QSequentialAnimationGroup* self, const QMetaMethod* signal) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->QSequentialAnimationGroup::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSequentialAnimationGroup::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnConnectNotify(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self))
        vqsequentialanimationgroup->qsequentialanimationgroup_connectnotify_callback = reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSequentialAnimationGroup_DisconnectNotify(QSequentialAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
    if (vqsequentialanimationgroup) {
        vqsequentialanimationgroup->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSequentialAnimationGroup::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_SuperDisconnectNotify(QSequentialAnimationGroup* self, const QMetaMethod* signal) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->QSequentialAnimationGroup::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSequentialAnimationGroup::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnDisconnectNotify(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self))
        vqsequentialanimationgroup->qsequentialanimationgroup_disconnectnotify_callback = reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QSequentialAnimationGroup_Sender(const QSequentialAnimationGroup* self) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self))) {
        return vqsequentialanimationgroup->VirtualQSequentialAnimationGroup::sender();
    } else
        qFatal("Error: Protected method QSequentialAnimationGroup::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSequentialAnimationGroup_SenderSignalIndex(const QSequentialAnimationGroup* self) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self))) {
        return vqsequentialanimationgroup->VirtualQSequentialAnimationGroup::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSequentialAnimationGroup::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSequentialAnimationGroup_Receivers(const QSequentialAnimationGroup* self, const char* signal) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self))) {
        return vqsequentialanimationgroup->VirtualQSequentialAnimationGroup::receivers(signal);
    } else
        qFatal("Error: Protected method QSequentialAnimationGroup::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSequentialAnimationGroup_IsSignalConnected(const QSequentialAnimationGroup* self, const QMetaMethod* signal) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self))) {
        return vqsequentialanimationgroup->VirtualQSequentialAnimationGroup::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSequentialAnimationGroup::isSignalConnected called without a directly constructed type");
}

void QSequentialAnimationGroup_Delete(QSequentialAnimationGroup* self) {
    delete self;
}
