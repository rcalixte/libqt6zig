#include <QAbstractAnimation>
#include <QAnimationGroup>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QParallelAnimationGroup>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QParallelAnimationGroup_Tr(const char* s) {
    auto _ret = QParallelAnimationGroup::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QParallelAnimationGroup_Duration(const QParallelAnimationGroup* self) {
    return self->duration();
}

bool QParallelAnimationGroup_Event(QParallelAnimationGroup* self, QEvent* event) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup) {
        return vqparallelanimationgroup->event(event);
    }
    qFatal("Error: Protected method QParallelAnimationGroup::event called without a directly constructed type");
}

void QParallelAnimationGroup_UpdateCurrentTime(QParallelAnimationGroup* self, int currentTime) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup) {
        vqparallelanimationgroup->updateCurrentTime(static_cast<int>(currentTime));
    }
}

void QParallelAnimationGroup_UpdateState(QParallelAnimationGroup* self, int newState, int oldState) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup) {
        vqparallelanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

void QParallelAnimationGroup_UpdateDirection(QParallelAnimationGroup* self, int direction) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup) {
        vqparallelanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

libqt_string QParallelAnimationGroup_Tr2(const char* s, const char* c) {
    auto _ret = QParallelAnimationGroup::tr(s, c);
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
    auto _ret = QParallelAnimationGroup::tr(s, c, static_cast<int>(n));
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
QMetaObject* QParallelAnimationGroup_SuperMetaObject(const QParallelAnimationGroup* self) {
    return (QMetaObject*)self->QParallelAnimationGroup::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnMetaObject(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self)))
        vqparallelanimationgroup->qparallelanimationgroup_metaobject_callback = reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QParallelAnimationGroup_SuperMetacast(QParallelAnimationGroup* self, const char* param1) {
    return self->QParallelAnimationGroup::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnMetacast(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self))
        vqparallelanimationgroup->qparallelanimationgroup_metacast_callback = reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_Metacast_Callback>(slot);
}

// Base class handler implementation
int QParallelAnimationGroup_SuperMetacall(QParallelAnimationGroup* self, int param1, int param2, void** param3) {
    return self->QParallelAnimationGroup::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnMetacall(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self))
        vqparallelanimationgroup->qparallelanimationgroup_metacall_callback = reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_Metacall_Callback>(slot);
}

// Base class handler implementation
int QParallelAnimationGroup_SuperDuration(const QParallelAnimationGroup* self) {
    return self->QParallelAnimationGroup::duration();
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnDuration(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self)))
        vqparallelanimationgroup->qparallelanimationgroup_duration_callback = reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_Duration_Callback>(slot);
}

// Base class handler implementation
bool QParallelAnimationGroup_SuperEvent(QParallelAnimationGroup* self, QEvent* event) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        return vqparallelanimationgroup->QParallelAnimationGroup::event(event);
    } else
        qFatal("Error: Protected virtual method QParallelAnimationGroup::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnEvent(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self))
        vqparallelanimationgroup->qparallelanimationgroup_event_callback = reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_Event_Callback>(slot);
}

// Base class handler implementation
void QParallelAnimationGroup_SuperUpdateCurrentTime(QParallelAnimationGroup* self, int currentTime) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->QParallelAnimationGroup::updateCurrentTime(static_cast<int>(currentTime));
    } else
        qFatal("Error: Protected virtual method QParallelAnimationGroup::updateCurrentTime called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnUpdateCurrentTime(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self))
        vqparallelanimationgroup->qparallelanimationgroup_updatecurrenttime_callback = reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_UpdateCurrentTime_Callback>(slot);
}

// Base class handler implementation
void QParallelAnimationGroup_SuperUpdateState(QParallelAnimationGroup* self, int newState, int oldState) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->QParallelAnimationGroup::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else
        qFatal("Error: Protected virtual method QParallelAnimationGroup::updateState called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnUpdateState(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self))
        vqparallelanimationgroup->qparallelanimationgroup_updatestate_callback = reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_UpdateState_Callback>(slot);
}

// Base class handler implementation
void QParallelAnimationGroup_SuperUpdateDirection(QParallelAnimationGroup* self, int direction) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->QParallelAnimationGroup::updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else
        qFatal("Error: Protected virtual method QParallelAnimationGroup::updateDirection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnUpdateDirection(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self))
        vqparallelanimationgroup->qparallelanimationgroup_updatedirection_callback = reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_UpdateDirection_Callback>(slot);
}

// Derived class handler implementation
bool QParallelAnimationGroup_EventFilter(QParallelAnimationGroup* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QParallelAnimationGroup_SuperEventFilter(QParallelAnimationGroup* self, QObject* watched, QEvent* event) {
    return self->QParallelAnimationGroup::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnEventFilter(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self))
        vqparallelanimationgroup->qparallelanimationgroup_eventfilter_callback = reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QParallelAnimationGroup_TimerEvent(QParallelAnimationGroup* self, QTimerEvent* event) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup) {
        vqparallelanimationgroup->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QParallelAnimationGroup::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QParallelAnimationGroup_SuperTimerEvent(QParallelAnimationGroup* self, QTimerEvent* event) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->QParallelAnimationGroup::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QParallelAnimationGroup::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnTimerEvent(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self))
        vqparallelanimationgroup->qparallelanimationgroup_timerevent_callback = reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QParallelAnimationGroup_ChildEvent(QParallelAnimationGroup* self, QChildEvent* event) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup) {
        vqparallelanimationgroup->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QParallelAnimationGroup::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QParallelAnimationGroup_SuperChildEvent(QParallelAnimationGroup* self, QChildEvent* event) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->QParallelAnimationGroup::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QParallelAnimationGroup::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnChildEvent(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self))
        vqparallelanimationgroup->qparallelanimationgroup_childevent_callback = reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QParallelAnimationGroup_CustomEvent(QParallelAnimationGroup* self, QEvent* event) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup) {
        vqparallelanimationgroup->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QParallelAnimationGroup::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QParallelAnimationGroup_SuperCustomEvent(QParallelAnimationGroup* self, QEvent* event) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->QParallelAnimationGroup::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QParallelAnimationGroup::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnCustomEvent(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self))
        vqparallelanimationgroup->qparallelanimationgroup_customevent_callback = reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QParallelAnimationGroup_ConnectNotify(QParallelAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup) {
        vqparallelanimationgroup->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QParallelAnimationGroup::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QParallelAnimationGroup_SuperConnectNotify(QParallelAnimationGroup* self, const QMetaMethod* signal) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->QParallelAnimationGroup::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QParallelAnimationGroup::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnConnectNotify(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self))
        vqparallelanimationgroup->qparallelanimationgroup_connectnotify_callback = reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QParallelAnimationGroup_DisconnectNotify(QParallelAnimationGroup* self, const QMetaMethod* signal) {
    auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
    if (vqparallelanimationgroup) {
        vqparallelanimationgroup->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QParallelAnimationGroup::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QParallelAnimationGroup_SuperDisconnectNotify(QParallelAnimationGroup* self, const QMetaMethod* signal) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->QParallelAnimationGroup::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QParallelAnimationGroup::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnDisconnectNotify(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self))
        vqparallelanimationgroup->qparallelanimationgroup_disconnectnotify_callback = reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QParallelAnimationGroup_Sender(const QParallelAnimationGroup* self) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self))) {
        return vqparallelanimationgroup->VirtualQParallelAnimationGroup::sender();
    } else
        qFatal("Error: Protected method QParallelAnimationGroup::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QParallelAnimationGroup_SenderSignalIndex(const QParallelAnimationGroup* self) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self))) {
        return vqparallelanimationgroup->VirtualQParallelAnimationGroup::senderSignalIndex();
    } else
        qFatal("Error: Protected method QParallelAnimationGroup::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QParallelAnimationGroup_Receivers(const QParallelAnimationGroup* self, const char* signal) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self))) {
        return vqparallelanimationgroup->VirtualQParallelAnimationGroup::receivers(signal);
    } else
        qFatal("Error: Protected method QParallelAnimationGroup::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QParallelAnimationGroup_IsSignalConnected(const QParallelAnimationGroup* self, const QMetaMethod* signal) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self))) {
        return vqparallelanimationgroup->VirtualQParallelAnimationGroup::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QParallelAnimationGroup::isSignalConnected called without a directly constructed type");
}

void QParallelAnimationGroup_Delete(QParallelAnimationGroup* self) {
    delete self;
}
