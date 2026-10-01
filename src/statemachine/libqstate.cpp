#include <QAbstractState>
#include <QAbstractTransition>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSignalTransition>
#include <QState>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qstate.h>
#include "libqstate.h"
#include "libqstate.hxx"

QState* QState_new() {
    return new VirtualQState();
}

QState* QState_new2(int childMode) {
    return new VirtualQState(static_cast<QState::ChildMode>(childMode));
}

QState* QState_new3(QState* parent) {
    return new VirtualQState(parent);
}

QState* QState_new4(int childMode, QState* parent) {
    return new VirtualQState(static_cast<QState::ChildMode>(childMode), parent);
}

QMetaObject* QState_MetaObject(const QState* self) {
    return (QMetaObject*)self->metaObject();
}

void* QState_Metacast(QState* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QState_Metacall(QState* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QState_Tr(const char* s) {
    auto _ret = QState::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAbstractState* QState_ErrorState(const QState* self) {
    return self->errorState();
}

void QState_SetErrorState(QState* self, QAbstractState* state) {
    self->setErrorState(state);
}

void QState_AddTransition(QState* self, QAbstractTransition* transition) {
    self->addTransition(transition);
}

QSignalTransition* QState_AddTransition2(QState* self, const QObject* sender, const char* signal, QAbstractState* target) {
    return self->addTransition(sender, signal, target);
}

QAbstractTransition* QState_AddTransition3(QState* self, QAbstractState* target) {
    return self->addTransition(target);
}

void QState_RemoveTransition(QState* self, QAbstractTransition* transition) {
    self->removeTransition(transition);
}

libqt_list /* of QAbstractTransition* */ QState_Transitions(const QState* self) {
    QList<QAbstractTransition*> _ret = self->transitions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractTransition** _arr = static_cast<QAbstractTransition**>(malloc(sizeof(QAbstractTransition*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QAbstractState* QState_InitialState(const QState* self) {
    return self->initialState();
}

void QState_SetInitialState(QState* self, QAbstractState* state) {
    self->setInitialState(state);
}

int QState_ChildMode(const QState* self) {
    return static_cast<int>(self->childMode());
}

void QState_SetChildMode(QState* self, int mode) {
    self->setChildMode(static_cast<QState::ChildMode>(mode));
}

void QState_AssignProperty(QState* self, QObject* object, const char* name, const QVariant* value) {
    self->assignProperty(object, name, *value);
}

void QState_OnEntry(QState* self, QEvent* event) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate) {
        vqstate->onEntry(event);
    }
}

void QState_OnExit(QState* self, QEvent* event) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate) {
        vqstate->onExit(event);
    }
}

bool QState_Event(QState* self, QEvent* e) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate) {
        return vqstate->event(e);
    }
    qFatal("Error: Protected method QState::event called without a directly constructed type");
}

libqt_string QState_Tr2(const char* s, const char* c) {
    auto _ret = QState::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QState_Tr3(const char* s, const char* c, int n) {
    auto _ret = QState::tr(s, c, static_cast<int>(n));
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
QMetaObject* QState_SuperMetaObject(const QState* self) {
    return (QMetaObject*)self->QState::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QState_OnMetaObject(QState* self, intptr_t slot) {
    if (auto* vqstate = const_cast<VirtualQState*>(dynamic_cast<const VirtualQState*>(self)))
        vqstate->qstate_metaobject_callback = reinterpret_cast<VirtualQState::QState_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QState_SuperMetacast(QState* self, const char* param1) {
    return self->QState::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QState_OnMetacast(QState* self, intptr_t slot) {
    if (auto* vqstate = dynamic_cast<VirtualQState*>(self))
        vqstate->qstate_metacast_callback = reinterpret_cast<VirtualQState::QState_Metacast_Callback>(slot);
}

// Base class handler implementation
int QState_SuperMetacall(QState* self, int param1, int param2, void** param3) {
    return self->QState::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QState_OnMetacall(QState* self, intptr_t slot) {
    if (auto* vqstate = dynamic_cast<VirtualQState*>(self))
        vqstate->qstate_metacall_callback = reinterpret_cast<VirtualQState::QState_Metacall_Callback>(slot);
}

// Base class handler implementation
void QState_SuperOnEntry(QState* self, QEvent* event) {
    if (auto* vqstate = dynamic_cast<VirtualQState*>(self)) {
        vqstate->QState::onEntry(event);
    } else
        qFatal("Error: Protected virtual method QState::onEntry called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QState_OnOnEntry(QState* self, intptr_t slot) {
    if (auto* vqstate = dynamic_cast<VirtualQState*>(self))
        vqstate->qstate_onentry_callback = reinterpret_cast<VirtualQState::QState_OnEntry_Callback>(slot);
}

// Base class handler implementation
void QState_SuperOnExit(QState* self, QEvent* event) {
    if (auto* vqstate = dynamic_cast<VirtualQState*>(self)) {
        vqstate->QState::onExit(event);
    } else
        qFatal("Error: Protected virtual method QState::onExit called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QState_OnOnExit(QState* self, intptr_t slot) {
    if (auto* vqstate = dynamic_cast<VirtualQState*>(self))
        vqstate->qstate_onexit_callback = reinterpret_cast<VirtualQState::QState_OnExit_Callback>(slot);
}

// Base class handler implementation
bool QState_SuperEvent(QState* self, QEvent* e) {
    if (auto* vqstate = dynamic_cast<VirtualQState*>(self)) {
        return vqstate->QState::event(e);
    } else
        qFatal("Error: Protected virtual method QState::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QState_OnEvent(QState* self, intptr_t slot) {
    if (auto* vqstate = dynamic_cast<VirtualQState*>(self))
        vqstate->qstate_event_callback = reinterpret_cast<VirtualQState::QState_Event_Callback>(slot);
}

// Derived class handler implementation
bool QState_EventFilter(QState* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QState_SuperEventFilter(QState* self, QObject* watched, QEvent* event) {
    return self->QState::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QState_OnEventFilter(QState* self, intptr_t slot) {
    if (auto* vqstate = dynamic_cast<VirtualQState*>(self))
        vqstate->qstate_eventfilter_callback = reinterpret_cast<VirtualQState::QState_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QState_TimerEvent(QState* self, QTimerEvent* event) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate) {
        vqstate->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QState::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QState_SuperTimerEvent(QState* self, QTimerEvent* event) {
    if (auto* vqstate = dynamic_cast<VirtualQState*>(self)) {
        vqstate->QState::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QState::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QState_OnTimerEvent(QState* self, intptr_t slot) {
    if (auto* vqstate = dynamic_cast<VirtualQState*>(self))
        vqstate->qstate_timerevent_callback = reinterpret_cast<VirtualQState::QState_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QState_ChildEvent(QState* self, QChildEvent* event) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate) {
        vqstate->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QState::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QState_SuperChildEvent(QState* self, QChildEvent* event) {
    if (auto* vqstate = dynamic_cast<VirtualQState*>(self)) {
        vqstate->QState::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QState::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QState_OnChildEvent(QState* self, intptr_t slot) {
    if (auto* vqstate = dynamic_cast<VirtualQState*>(self))
        vqstate->qstate_childevent_callback = reinterpret_cast<VirtualQState::QState_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QState_CustomEvent(QState* self, QEvent* event) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate) {
        vqstate->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QState::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QState_SuperCustomEvent(QState* self, QEvent* event) {
    if (auto* vqstate = dynamic_cast<VirtualQState*>(self)) {
        vqstate->QState::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QState::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QState_OnCustomEvent(QState* self, intptr_t slot) {
    if (auto* vqstate = dynamic_cast<VirtualQState*>(self))
        vqstate->qstate_customevent_callback = reinterpret_cast<VirtualQState::QState_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QState_ConnectNotify(QState* self, const QMetaMethod* signal) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate) {
        vqstate->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QState::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QState_SuperConnectNotify(QState* self, const QMetaMethod* signal) {
    if (auto* vqstate = dynamic_cast<VirtualQState*>(self)) {
        vqstate->QState::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QState::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QState_OnConnectNotify(QState* self, intptr_t slot) {
    if (auto* vqstate = dynamic_cast<VirtualQState*>(self))
        vqstate->qstate_connectnotify_callback = reinterpret_cast<VirtualQState::QState_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QState_DisconnectNotify(QState* self, const QMetaMethod* signal) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate) {
        vqstate->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QState::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QState_SuperDisconnectNotify(QState* self, const QMetaMethod* signal) {
    if (auto* vqstate = dynamic_cast<VirtualQState*>(self)) {
        vqstate->QState::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QState::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QState_OnDisconnectNotify(QState* self, intptr_t slot) {
    if (auto* vqstate = dynamic_cast<VirtualQState*>(self))
        vqstate->qstate_disconnectnotify_callback = reinterpret_cast<VirtualQState::QState_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QState_Sender(const QState* self) {
    if (auto* vqstate = const_cast<VirtualQState*>(dynamic_cast<const VirtualQState*>(self))) {
        return vqstate->VirtualQState::sender();
    } else
        qFatal("Error: Protected method QState::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QState_SenderSignalIndex(const QState* self) {
    if (auto* vqstate = const_cast<VirtualQState*>(dynamic_cast<const VirtualQState*>(self))) {
        return vqstate->VirtualQState::senderSignalIndex();
    } else
        qFatal("Error: Protected method QState::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QState_Receivers(const QState* self, const char* signal) {
    if (auto* vqstate = const_cast<VirtualQState*>(dynamic_cast<const VirtualQState*>(self))) {
        return vqstate->VirtualQState::receivers(signal);
    } else
        qFatal("Error: Protected method QState::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QState_IsSignalConnected(const QState* self, const QMetaMethod* signal) {
    if (auto* vqstate = const_cast<VirtualQState*>(dynamic_cast<const VirtualQState*>(self))) {
        return vqstate->VirtualQState::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QState::isSignalConnected called without a directly constructed type");
}

void QState_Connect_Finished(QState* self, intptr_t slot) {
    void (*slotFunc)(QState*) = reinterpret_cast<void (*)(QState*)>(slot);
    QState::connect(self, &QState::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QState_Connect_PropertiesAssigned(QState* self, intptr_t slot) {
    void (*slotFunc)(QState*) = reinterpret_cast<void (*)(QState*)>(slot);
    QState::connect(self, &QState::propertiesAssigned, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QState_Connect_ChildModeChanged(QState* self, intptr_t slot) {
    void (*slotFunc)(QState*) = reinterpret_cast<void (*)(QState*)>(slot);
    QState::connect(self, &QState::childModeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QState_Connect_InitialStateChanged(QState* self, intptr_t slot) {
    void (*slotFunc)(QState*) = reinterpret_cast<void (*)(QState*)>(slot);
    QState::connect(self, &QState::initialStateChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QState_Connect_ErrorStateChanged(QState* self, intptr_t slot) {
    void (*slotFunc)(QState*) = reinterpret_cast<void (*)(QState*)>(slot);
    QState::connect(self, &QState::errorStateChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QState_Delete(QState* self) {
    delete self;
}
