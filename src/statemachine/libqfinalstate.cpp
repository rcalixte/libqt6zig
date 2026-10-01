#include <QAbstractState>
#include <QChildEvent>
#include <QEvent>
#include <QFinalState>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QString>
#include <QTimerEvent>
#include <qfinalstate.h>
#include "libqfinalstate.h"
#include "libqfinalstate.hxx"

QFinalState* QFinalState_new() {
    return new VirtualQFinalState();
}

QFinalState* QFinalState_new2(QState* parent) {
    return new VirtualQFinalState(parent);
}

QMetaObject* QFinalState_MetaObject(const QFinalState* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFinalState_Metacast(QFinalState* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFinalState_Metacall(QFinalState* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QFinalState_Tr(const char* s) {
    auto _ret = QFinalState::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFinalState_OnEntry(QFinalState* self, QEvent* event) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate) {
        vqfinalstate->onEntry(event);
    }
}

void QFinalState_OnExit(QFinalState* self, QEvent* event) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate) {
        vqfinalstate->onExit(event);
    }
}

bool QFinalState_Event(QFinalState* self, QEvent* e) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate) {
        return vqfinalstate->event(e);
    }
    qFatal("Error: Protected method QFinalState::event called without a directly constructed type");
}

libqt_string QFinalState_Tr2(const char* s, const char* c) {
    auto _ret = QFinalState::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFinalState_Tr3(const char* s, const char* c, int n) {
    auto _ret = QFinalState::tr(s, c, static_cast<int>(n));
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
QMetaObject* QFinalState_SuperMetaObject(const QFinalState* self) {
    return (QMetaObject*)self->QFinalState::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnMetaObject(QFinalState* self, intptr_t slot) {
    if (auto* vqfinalstate = const_cast<VirtualQFinalState*>(dynamic_cast<const VirtualQFinalState*>(self)))
        vqfinalstate->qfinalstate_metaobject_callback = reinterpret_cast<VirtualQFinalState::QFinalState_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QFinalState_SuperMetacast(QFinalState* self, const char* param1) {
    return self->QFinalState::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnMetacast(QFinalState* self, intptr_t slot) {
    if (auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self))
        vqfinalstate->qfinalstate_metacast_callback = reinterpret_cast<VirtualQFinalState::QFinalState_Metacast_Callback>(slot);
}

// Base class handler implementation
int QFinalState_SuperMetacall(QFinalState* self, int param1, int param2, void** param3) {
    return self->QFinalState::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnMetacall(QFinalState* self, intptr_t slot) {
    if (auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self))
        vqfinalstate->qfinalstate_metacall_callback = reinterpret_cast<VirtualQFinalState::QFinalState_Metacall_Callback>(slot);
}

// Base class handler implementation
void QFinalState_SuperOnEntry(QFinalState* self, QEvent* event) {
    if (auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self)) {
        vqfinalstate->QFinalState::onEntry(event);
    } else
        qFatal("Error: Protected virtual method QFinalState::onEntry called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnOnEntry(QFinalState* self, intptr_t slot) {
    if (auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self))
        vqfinalstate->qfinalstate_onentry_callback = reinterpret_cast<VirtualQFinalState::QFinalState_OnEntry_Callback>(slot);
}

// Base class handler implementation
void QFinalState_SuperOnExit(QFinalState* self, QEvent* event) {
    if (auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self)) {
        vqfinalstate->QFinalState::onExit(event);
    } else
        qFatal("Error: Protected virtual method QFinalState::onExit called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnOnExit(QFinalState* self, intptr_t slot) {
    if (auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self))
        vqfinalstate->qfinalstate_onexit_callback = reinterpret_cast<VirtualQFinalState::QFinalState_OnExit_Callback>(slot);
}

// Base class handler implementation
bool QFinalState_SuperEvent(QFinalState* self, QEvent* e) {
    if (auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self)) {
        return vqfinalstate->QFinalState::event(e);
    } else
        qFatal("Error: Protected virtual method QFinalState::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnEvent(QFinalState* self, intptr_t slot) {
    if (auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self))
        vqfinalstate->qfinalstate_event_callback = reinterpret_cast<VirtualQFinalState::QFinalState_Event_Callback>(slot);
}

// Derived class handler implementation
bool QFinalState_EventFilter(QFinalState* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QFinalState_SuperEventFilter(QFinalState* self, QObject* watched, QEvent* event) {
    return self->QFinalState::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnEventFilter(QFinalState* self, intptr_t slot) {
    if (auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self))
        vqfinalstate->qfinalstate_eventfilter_callback = reinterpret_cast<VirtualQFinalState::QFinalState_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QFinalState_TimerEvent(QFinalState* self, QTimerEvent* event) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate) {
        vqfinalstate->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFinalState::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFinalState_SuperTimerEvent(QFinalState* self, QTimerEvent* event) {
    if (auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self)) {
        vqfinalstate->QFinalState::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QFinalState::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnTimerEvent(QFinalState* self, intptr_t slot) {
    if (auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self))
        vqfinalstate->qfinalstate_timerevent_callback = reinterpret_cast<VirtualQFinalState::QFinalState_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QFinalState_ChildEvent(QFinalState* self, QChildEvent* event) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate) {
        vqfinalstate->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFinalState::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFinalState_SuperChildEvent(QFinalState* self, QChildEvent* event) {
    if (auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self)) {
        vqfinalstate->QFinalState::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QFinalState::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnChildEvent(QFinalState* self, intptr_t slot) {
    if (auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self))
        vqfinalstate->qfinalstate_childevent_callback = reinterpret_cast<VirtualQFinalState::QFinalState_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QFinalState_CustomEvent(QFinalState* self, QEvent* event) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate) {
        vqfinalstate->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFinalState::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFinalState_SuperCustomEvent(QFinalState* self, QEvent* event) {
    if (auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self)) {
        vqfinalstate->QFinalState::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QFinalState::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnCustomEvent(QFinalState* self, intptr_t slot) {
    if (auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self))
        vqfinalstate->qfinalstate_customevent_callback = reinterpret_cast<VirtualQFinalState::QFinalState_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QFinalState_ConnectNotify(QFinalState* self, const QMetaMethod* signal) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate) {
        vqfinalstate->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFinalState::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFinalState_SuperConnectNotify(QFinalState* self, const QMetaMethod* signal) {
    if (auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self)) {
        vqfinalstate->QFinalState::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFinalState::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnConnectNotify(QFinalState* self, intptr_t slot) {
    if (auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self))
        vqfinalstate->qfinalstate_connectnotify_callback = reinterpret_cast<VirtualQFinalState::QFinalState_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QFinalState_DisconnectNotify(QFinalState* self, const QMetaMethod* signal) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate) {
        vqfinalstate->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFinalState::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFinalState_SuperDisconnectNotify(QFinalState* self, const QMetaMethod* signal) {
    if (auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self)) {
        vqfinalstate->QFinalState::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFinalState::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnDisconnectNotify(QFinalState* self, intptr_t slot) {
    if (auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self))
        vqfinalstate->qfinalstate_disconnectnotify_callback = reinterpret_cast<VirtualQFinalState::QFinalState_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QFinalState_Sender(const QFinalState* self) {
    if (auto* vqfinalstate = const_cast<VirtualQFinalState*>(dynamic_cast<const VirtualQFinalState*>(self))) {
        return vqfinalstate->VirtualQFinalState::sender();
    } else
        qFatal("Error: Protected method QFinalState::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QFinalState_SenderSignalIndex(const QFinalState* self) {
    if (auto* vqfinalstate = const_cast<VirtualQFinalState*>(dynamic_cast<const VirtualQFinalState*>(self))) {
        return vqfinalstate->VirtualQFinalState::senderSignalIndex();
    } else
        qFatal("Error: Protected method QFinalState::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QFinalState_Receivers(const QFinalState* self, const char* signal) {
    if (auto* vqfinalstate = const_cast<VirtualQFinalState*>(dynamic_cast<const VirtualQFinalState*>(self))) {
        return vqfinalstate->VirtualQFinalState::receivers(signal);
    } else
        qFatal("Error: Protected method QFinalState::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFinalState_IsSignalConnected(const QFinalState* self, const QMetaMethod* signal) {
    if (auto* vqfinalstate = const_cast<VirtualQFinalState*>(dynamic_cast<const VirtualQFinalState*>(self))) {
        return vqfinalstate->VirtualQFinalState::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QFinalState::isSignalConnected called without a directly constructed type");
}

void QFinalState_Delete(QFinalState* self) {
    delete self;
}
