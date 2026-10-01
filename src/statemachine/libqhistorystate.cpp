#include <QAbstractState>
#include <QAbstractTransition>
#include <QChildEvent>
#include <QEvent>
#include <QHistoryState>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QString>
#include <QTimerEvent>
#include <qhistorystate.h>
#include "libqhistorystate.h"
#include "libqhistorystate.hxx"

QHistoryState* QHistoryState_new() {
    return new VirtualQHistoryState();
}

QHistoryState* QHistoryState_new2(int typeVal) {
    return new VirtualQHistoryState(static_cast<QHistoryState::HistoryType>(typeVal));
}

QHistoryState* QHistoryState_new3(QState* parent) {
    return new VirtualQHistoryState(parent);
}

QHistoryState* QHistoryState_new4(int typeVal, QState* parent) {
    return new VirtualQHistoryState(static_cast<QHistoryState::HistoryType>(typeVal), parent);
}

QMetaObject* QHistoryState_MetaObject(const QHistoryState* self) {
    return (QMetaObject*)self->metaObject();
}

void* QHistoryState_Metacast(QHistoryState* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QHistoryState_Metacall(QHistoryState* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QHistoryState_Tr(const char* s) {
    auto _ret = QHistoryState::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAbstractTransition* QHistoryState_DefaultTransition(const QHistoryState* self) {
    return self->defaultTransition();
}

void QHistoryState_SetDefaultTransition(QHistoryState* self, QAbstractTransition* transition) {
    self->setDefaultTransition(transition);
}

QAbstractState* QHistoryState_DefaultState(const QHistoryState* self) {
    return self->defaultState();
}

void QHistoryState_SetDefaultState(QHistoryState* self, QAbstractState* state) {
    self->setDefaultState(state);
}

int QHistoryState_HistoryType(const QHistoryState* self) {
    return static_cast<int>(self->historyType());
}

void QHistoryState_SetHistoryType(QHistoryState* self, int typeVal) {
    self->setHistoryType(static_cast<QHistoryState::HistoryType>(typeVal));
}

void QHistoryState_OnEntry(QHistoryState* self, QEvent* event) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate) {
        vqhistorystate->onEntry(event);
    }
}

void QHistoryState_OnExit(QHistoryState* self, QEvent* event) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate) {
        vqhistorystate->onExit(event);
    }
}

bool QHistoryState_Event(QHistoryState* self, QEvent* e) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate) {
        return vqhistorystate->event(e);
    }
    qFatal("Error: Protected method QHistoryState::event called without a directly constructed type");
}

libqt_string QHistoryState_Tr2(const char* s, const char* c) {
    auto _ret = QHistoryState::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHistoryState_Tr3(const char* s, const char* c, int n) {
    auto _ret = QHistoryState::tr(s, c, static_cast<int>(n));
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
QMetaObject* QHistoryState_SuperMetaObject(const QHistoryState* self) {
    return (QMetaObject*)self->QHistoryState::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnMetaObject(QHistoryState* self, intptr_t slot) {
    if (auto* vqhistorystate = const_cast<VirtualQHistoryState*>(dynamic_cast<const VirtualQHistoryState*>(self)))
        vqhistorystate->qhistorystate_metaobject_callback = reinterpret_cast<VirtualQHistoryState::QHistoryState_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QHistoryState_SuperMetacast(QHistoryState* self, const char* param1) {
    return self->QHistoryState::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnMetacast(QHistoryState* self, intptr_t slot) {
    if (auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self))
        vqhistorystate->qhistorystate_metacast_callback = reinterpret_cast<VirtualQHistoryState::QHistoryState_Metacast_Callback>(slot);
}

// Base class handler implementation
int QHistoryState_SuperMetacall(QHistoryState* self, int param1, int param2, void** param3) {
    return self->QHistoryState::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnMetacall(QHistoryState* self, intptr_t slot) {
    if (auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self))
        vqhistorystate->qhistorystate_metacall_callback = reinterpret_cast<VirtualQHistoryState::QHistoryState_Metacall_Callback>(slot);
}

// Base class handler implementation
void QHistoryState_SuperOnEntry(QHistoryState* self, QEvent* event) {
    if (auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self)) {
        vqhistorystate->QHistoryState::onEntry(event);
    } else
        qFatal("Error: Protected virtual method QHistoryState::onEntry called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnOnEntry(QHistoryState* self, intptr_t slot) {
    if (auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self))
        vqhistorystate->qhistorystate_onentry_callback = reinterpret_cast<VirtualQHistoryState::QHistoryState_OnEntry_Callback>(slot);
}

// Base class handler implementation
void QHistoryState_SuperOnExit(QHistoryState* self, QEvent* event) {
    if (auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self)) {
        vqhistorystate->QHistoryState::onExit(event);
    } else
        qFatal("Error: Protected virtual method QHistoryState::onExit called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnOnExit(QHistoryState* self, intptr_t slot) {
    if (auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self))
        vqhistorystate->qhistorystate_onexit_callback = reinterpret_cast<VirtualQHistoryState::QHistoryState_OnExit_Callback>(slot);
}

// Base class handler implementation
bool QHistoryState_SuperEvent(QHistoryState* self, QEvent* e) {
    if (auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self)) {
        return vqhistorystate->QHistoryState::event(e);
    } else
        qFatal("Error: Protected virtual method QHistoryState::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnEvent(QHistoryState* self, intptr_t slot) {
    if (auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self))
        vqhistorystate->qhistorystate_event_callback = reinterpret_cast<VirtualQHistoryState::QHistoryState_Event_Callback>(slot);
}

// Derived class handler implementation
bool QHistoryState_EventFilter(QHistoryState* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QHistoryState_SuperEventFilter(QHistoryState* self, QObject* watched, QEvent* event) {
    return self->QHistoryState::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnEventFilter(QHistoryState* self, intptr_t slot) {
    if (auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self))
        vqhistorystate->qhistorystate_eventfilter_callback = reinterpret_cast<VirtualQHistoryState::QHistoryState_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QHistoryState_TimerEvent(QHistoryState* self, QTimerEvent* event) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate) {
        vqhistorystate->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHistoryState::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHistoryState_SuperTimerEvent(QHistoryState* self, QTimerEvent* event) {
    if (auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self)) {
        vqhistorystate->QHistoryState::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QHistoryState::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnTimerEvent(QHistoryState* self, intptr_t slot) {
    if (auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self))
        vqhistorystate->qhistorystate_timerevent_callback = reinterpret_cast<VirtualQHistoryState::QHistoryState_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QHistoryState_ChildEvent(QHistoryState* self, QChildEvent* event) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate) {
        vqhistorystate->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHistoryState::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHistoryState_SuperChildEvent(QHistoryState* self, QChildEvent* event) {
    if (auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self)) {
        vqhistorystate->QHistoryState::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QHistoryState::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnChildEvent(QHistoryState* self, intptr_t slot) {
    if (auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self))
        vqhistorystate->qhistorystate_childevent_callback = reinterpret_cast<VirtualQHistoryState::QHistoryState_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QHistoryState_CustomEvent(QHistoryState* self, QEvent* event) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate) {
        vqhistorystate->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHistoryState::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHistoryState_SuperCustomEvent(QHistoryState* self, QEvent* event) {
    if (auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self)) {
        vqhistorystate->QHistoryState::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QHistoryState::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnCustomEvent(QHistoryState* self, intptr_t slot) {
    if (auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self))
        vqhistorystate->qhistorystate_customevent_callback = reinterpret_cast<VirtualQHistoryState::QHistoryState_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QHistoryState_ConnectNotify(QHistoryState* self, const QMetaMethod* signal) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate) {
        vqhistorystate->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHistoryState::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHistoryState_SuperConnectNotify(QHistoryState* self, const QMetaMethod* signal) {
    if (auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self)) {
        vqhistorystate->QHistoryState::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHistoryState::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnConnectNotify(QHistoryState* self, intptr_t slot) {
    if (auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self))
        vqhistorystate->qhistorystate_connectnotify_callback = reinterpret_cast<VirtualQHistoryState::QHistoryState_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QHistoryState_DisconnectNotify(QHistoryState* self, const QMetaMethod* signal) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate) {
        vqhistorystate->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHistoryState::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHistoryState_SuperDisconnectNotify(QHistoryState* self, const QMetaMethod* signal) {
    if (auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self)) {
        vqhistorystate->QHistoryState::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHistoryState::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnDisconnectNotify(QHistoryState* self, intptr_t slot) {
    if (auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self))
        vqhistorystate->qhistorystate_disconnectnotify_callback = reinterpret_cast<VirtualQHistoryState::QHistoryState_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QHistoryState_Sender(const QHistoryState* self) {
    if (auto* vqhistorystate = const_cast<VirtualQHistoryState*>(dynamic_cast<const VirtualQHistoryState*>(self))) {
        return vqhistorystate->VirtualQHistoryState::sender();
    } else
        qFatal("Error: Protected method QHistoryState::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QHistoryState_SenderSignalIndex(const QHistoryState* self) {
    if (auto* vqhistorystate = const_cast<VirtualQHistoryState*>(dynamic_cast<const VirtualQHistoryState*>(self))) {
        return vqhistorystate->VirtualQHistoryState::senderSignalIndex();
    } else
        qFatal("Error: Protected method QHistoryState::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QHistoryState_Receivers(const QHistoryState* self, const char* signal) {
    if (auto* vqhistorystate = const_cast<VirtualQHistoryState*>(dynamic_cast<const VirtualQHistoryState*>(self))) {
        return vqhistorystate->VirtualQHistoryState::receivers(signal);
    } else
        qFatal("Error: Protected method QHistoryState::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QHistoryState_IsSignalConnected(const QHistoryState* self, const QMetaMethod* signal) {
    if (auto* vqhistorystate = const_cast<VirtualQHistoryState*>(dynamic_cast<const VirtualQHistoryState*>(self))) {
        return vqhistorystate->VirtualQHistoryState::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QHistoryState::isSignalConnected called without a directly constructed type");
}

void QHistoryState_Connect_DefaultTransitionChanged(QHistoryState* self, intptr_t slot) {
    void (*slotFunc)(QHistoryState*) = reinterpret_cast<void (*)(QHistoryState*)>(slot);
    QHistoryState::connect(self, &QHistoryState::defaultTransitionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHistoryState_Connect_DefaultStateChanged(QHistoryState* self, intptr_t slot) {
    void (*slotFunc)(QHistoryState*) = reinterpret_cast<void (*)(QHistoryState*)>(slot);
    QHistoryState::connect(self, &QHistoryState::defaultStateChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHistoryState_Connect_HistoryTypeChanged(QHistoryState* self, intptr_t slot) {
    void (*slotFunc)(QHistoryState*) = reinterpret_cast<void (*)(QHistoryState*)>(slot);
    QHistoryState::connect(self, &QHistoryState::historyTypeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHistoryState_Delete(QHistoryState* self) {
    delete self;
}
