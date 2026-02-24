#include <QAbstractAnimation>
#include <QAbstractState>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSet>
#include <QState>
#include <QStateMachine>
#define WORKAROUND_INNER_CLASS_DEFINITION_QStateMachine__SignalEvent
#define WORKAROUND_INNER_CLASS_DEFINITION_QStateMachine__WrappedEvent
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qstatemachine.h>
#include "libqstatemachine.h"
#include "libqstatemachine.hxx"

QStateMachine* QStateMachine_new() {
    return new VirtualQStateMachine();
}

QStateMachine* QStateMachine_new2(int childMode) {
    return new VirtualQStateMachine(static_cast<QState::ChildMode>(childMode));
}

QStateMachine* QStateMachine_new3(QObject* parent) {
    return new VirtualQStateMachine(parent);
}

QStateMachine* QStateMachine_new4(int childMode, QObject* parent) {
    return new VirtualQStateMachine(static_cast<QState::ChildMode>(childMode), parent);
}

QMetaObject* QStateMachine_MetaObject(const QStateMachine* self) {
    auto* vqstatemachine = dynamic_cast<const VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQStateMachine*)self)->metaObject();
    }
}

void* QStateMachine_Metacast(QStateMachine* self, const char* param1) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQStateMachine*)self)->qt_metacast(param1);
    }
}

int QStateMachine_Metacall(QStateMachine* self, int param1, int param2, void** param3) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQStateMachine*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void QStateMachine_AddState(QStateMachine* self, QAbstractState* state) {
    self->addState(state);
}

void QStateMachine_RemoveState(QStateMachine* self, QAbstractState* state) {
    self->removeState(state);
}

int QStateMachine_Error(const QStateMachine* self) {
    return static_cast<int>(self->error());
}

libqt_string QStateMachine_ErrorString(const QStateMachine* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QStateMachine_ClearError(QStateMachine* self) {
    self->clearError();
}

bool QStateMachine_IsRunning(const QStateMachine* self) {
    return self->isRunning();
}

bool QStateMachine_IsAnimated(const QStateMachine* self) {
    return self->isAnimated();
}

void QStateMachine_SetAnimated(QStateMachine* self, bool enabled) {
    self->setAnimated(enabled);
}

void QStateMachine_AddDefaultAnimation(QStateMachine* self, QAbstractAnimation* animation) {
    self->addDefaultAnimation(animation);
}

libqt_list /* of QAbstractAnimation* */ QStateMachine_DefaultAnimations(const QStateMachine* self) {
    QList<QAbstractAnimation*> _ret = self->defaultAnimations();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractAnimation** _arr = static_cast<QAbstractAnimation**>(malloc(sizeof(QAbstractAnimation*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QStateMachine_RemoveDefaultAnimation(QStateMachine* self, QAbstractAnimation* animation) {
    self->removeDefaultAnimation(animation);
}

int QStateMachine_GlobalRestorePolicy(const QStateMachine* self) {
    return static_cast<int>(self->globalRestorePolicy());
}

void QStateMachine_SetGlobalRestorePolicy(QStateMachine* self, int restorePolicy) {
    self->setGlobalRestorePolicy(static_cast<QState::RestorePolicy>(restorePolicy));
}

void QStateMachine_PostEvent(QStateMachine* self, QEvent* event) {
    self->postEvent(event);
}

int QStateMachine_PostDelayedEvent(QStateMachine* self, QEvent* event, int delay) {
    return self->postDelayedEvent(event, static_cast<int>(delay));
}

bool QStateMachine_CancelDelayedEvent(QStateMachine* self, int id) {
    return self->cancelDelayedEvent(static_cast<int>(id));
}

libqt_list /* set of QAbstractState* */ QStateMachine_Configuration(const QStateMachine* self) {
    QSet<QAbstractState*> _ret = self->configuration();
    // Convert QSet<> from C++ memory to manually-managed C memory
    QAbstractState** _arr = static_cast<QAbstractState**>(malloc(sizeof(QAbstractState*) * _ret.size()));
    int _ctr = 0;
    QSetIterator<QAbstractState*> _itr(_ret);
    while (_itr.hasNext()) {
        _arr[_ctr++] = _itr.next();
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QStateMachine_EventFilter(QStateMachine* self, QObject* watched, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        return self->eventFilter(watched, event);
    } else {
        return ((VirtualQStateMachine*)self)->eventFilter(watched, event);
    }
}

int QStateMachine_PostDelayedEvent2(QStateMachine* self, QEvent* event, int64_t delay) {
    return self->postDelayedEvent(event, static_cast<std::chrono::milliseconds>(delay));
}

void QStateMachine_Start(QStateMachine* self) {
    self->start();
}

void QStateMachine_Stop(QStateMachine* self) {
    self->stop();
}

void QStateMachine_SetRunning(QStateMachine* self, bool running) {
    self->setRunning(running);
}

void QStateMachine_RunningChanged(QStateMachine* self, bool running) {
    self->runningChanged(running);
}

void QStateMachine_Connect_RunningChanged(QStateMachine* self, intptr_t slot) {
    void (*slotFunc)(QStateMachine*, bool) = reinterpret_cast<void (*)(QStateMachine*, bool)>(slot);
    QStateMachine::connect(self, &QStateMachine::runningChanged, [self, slotFunc](bool running) {
        bool sigval1 = running;
        slotFunc(self, sigval1);
    });
}

void QStateMachine_OnEntry(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->onEntry(event);
    }
}

void QStateMachine_OnExit(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->onExit(event);
    }
}

void QStateMachine_BeginSelectTransitions(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->beginSelectTransitions(event);
    }
}

void QStateMachine_EndSelectTransitions(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->endSelectTransitions(event);
    }
}

void QStateMachine_BeginMicrostep(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->beginMicrostep(event);
    }
}

void QStateMachine_EndMicrostep(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->endMicrostep(event);
    }
}

bool QStateMachine_Event(QStateMachine* self, QEvent* e) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        return vqstatemachine->event(e);
    }
    return {};
}

void QStateMachine_PostEvent2(QStateMachine* self, QEvent* event, int priority) {
    self->postEvent(event, static_cast<QStateMachine::EventPriority>(priority));
}

// Base class handler implementation
QMetaObject* QStateMachine_SuperMetaObject(const QStateMachine* self) {
    auto* vqstatemachine = const_cast<VirtualQStateMachine*>(dynamic_cast<const VirtualQStateMachine*>(self));
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_MetaObject_IsBase(true);
        return (QMetaObject*)vqstatemachine->metaObject();
    } else {
        return (QMetaObject*)self->QStateMachine::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnMetaObject(const QStateMachine* self, intptr_t slot) {
    auto* vqstatemachine = const_cast<VirtualQStateMachine*>(dynamic_cast<const VirtualQStateMachine*>(self));
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_MetaObject_Callback(reinterpret_cast<VirtualQStateMachine::QStateMachine_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QStateMachine_SuperMetacast(QStateMachine* self, const char* param1) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_Metacast_IsBase(true);
        return vqstatemachine->qt_metacast(param1);
    } else {
        return self->QStateMachine::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnMetacast(QStateMachine* self, intptr_t slot) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_Metacast_Callback(reinterpret_cast<VirtualQStateMachine::QStateMachine_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QStateMachine_SuperMetacall(QStateMachine* self, int param1, int param2, void** param3) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_Metacall_IsBase(true);
        return vqstatemachine->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QStateMachine::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnMetacall(QStateMachine* self, intptr_t slot) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_Metacall_Callback(reinterpret_cast<VirtualQStateMachine::QStateMachine_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool QStateMachine_SuperEventFilter(QStateMachine* self, QObject* watched, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_EventFilter_IsBase(true);
        return vqstatemachine->eventFilter(watched, event);
    } else {
        return self->QStateMachine::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnEventFilter(QStateMachine* self, intptr_t slot) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_EventFilter_Callback(reinterpret_cast<VirtualQStateMachine::QStateMachine_EventFilter_Callback>(slot));
    }
}

// Base class handler implementation
void QStateMachine_SuperOnEntry(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_OnEntry_IsBase(true);
        vqstatemachine->onEntry(event);
    } else {
        ((VirtualQStateMachine*)self)->onEntry(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnOnEntry(QStateMachine* self, intptr_t slot) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_OnEntry_Callback(reinterpret_cast<VirtualQStateMachine::QStateMachine_OnEntry_Callback>(slot));
    }
}

// Base class handler implementation
void QStateMachine_SuperOnExit(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_OnExit_IsBase(true);
        vqstatemachine->onExit(event);
    } else {
        ((VirtualQStateMachine*)self)->onExit(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnOnExit(QStateMachine* self, intptr_t slot) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_OnExit_Callback(reinterpret_cast<VirtualQStateMachine::QStateMachine_OnExit_Callback>(slot));
    }
}

// Base class handler implementation
void QStateMachine_SuperBeginSelectTransitions(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_BeginSelectTransitions_IsBase(true);
        vqstatemachine->beginSelectTransitions(event);
    } else {
        ((VirtualQStateMachine*)self)->beginSelectTransitions(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnBeginSelectTransitions(QStateMachine* self, intptr_t slot) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_BeginSelectTransitions_Callback(reinterpret_cast<VirtualQStateMachine::QStateMachine_BeginSelectTransitions_Callback>(slot));
    }
}

// Base class handler implementation
void QStateMachine_SuperEndSelectTransitions(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_EndSelectTransitions_IsBase(true);
        vqstatemachine->endSelectTransitions(event);
    } else {
        ((VirtualQStateMachine*)self)->endSelectTransitions(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnEndSelectTransitions(QStateMachine* self, intptr_t slot) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_EndSelectTransitions_Callback(reinterpret_cast<VirtualQStateMachine::QStateMachine_EndSelectTransitions_Callback>(slot));
    }
}

// Base class handler implementation
void QStateMachine_SuperBeginMicrostep(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_BeginMicrostep_IsBase(true);
        vqstatemachine->beginMicrostep(event);
    } else {
        ((VirtualQStateMachine*)self)->beginMicrostep(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnBeginMicrostep(QStateMachine* self, intptr_t slot) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_BeginMicrostep_Callback(reinterpret_cast<VirtualQStateMachine::QStateMachine_BeginMicrostep_Callback>(slot));
    }
}

// Base class handler implementation
void QStateMachine_SuperEndMicrostep(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_EndMicrostep_IsBase(true);
        vqstatemachine->endMicrostep(event);
    } else {
        ((VirtualQStateMachine*)self)->endMicrostep(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnEndMicrostep(QStateMachine* self, intptr_t slot) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_EndMicrostep_Callback(reinterpret_cast<VirtualQStateMachine::QStateMachine_EndMicrostep_Callback>(slot));
    }
}

// Base class handler implementation
bool QStateMachine_SuperEvent(QStateMachine* self, QEvent* e) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_Event_IsBase(true);
        return vqstatemachine->event(e);
    } else {
        return ((VirtualQStateMachine*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnEvent(QStateMachine* self, intptr_t slot) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_Event_Callback(reinterpret_cast<VirtualQStateMachine::QStateMachine_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QStateMachine_TimerEvent(QStateMachine* self, QTimerEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->timerEvent(event);
    } else {
        ((VirtualQStateMachine*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QStateMachine_SuperTimerEvent(QStateMachine* self, QTimerEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_TimerEvent_IsBase(true);
        vqstatemachine->timerEvent(event);
    } else {
        ((VirtualQStateMachine*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnTimerEvent(QStateMachine* self, intptr_t slot) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_TimerEvent_Callback(reinterpret_cast<VirtualQStateMachine::QStateMachine_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStateMachine_ChildEvent(QStateMachine* self, QChildEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->childEvent(event);
    } else {
        ((VirtualQStateMachine*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QStateMachine_SuperChildEvent(QStateMachine* self, QChildEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_ChildEvent_IsBase(true);
        vqstatemachine->childEvent(event);
    } else {
        ((VirtualQStateMachine*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnChildEvent(QStateMachine* self, intptr_t slot) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_ChildEvent_Callback(reinterpret_cast<VirtualQStateMachine::QStateMachine_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStateMachine_CustomEvent(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->customEvent(event);
    } else {
        ((VirtualQStateMachine*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QStateMachine_SuperCustomEvent(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_CustomEvent_IsBase(true);
        vqstatemachine->customEvent(event);
    } else {
        ((VirtualQStateMachine*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnCustomEvent(QStateMachine* self, intptr_t slot) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_CustomEvent_Callback(reinterpret_cast<VirtualQStateMachine::QStateMachine_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStateMachine_ConnectNotify(QStateMachine* self, const QMetaMethod* signal) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->connectNotify(*signal);
    } else {
        ((VirtualQStateMachine*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QStateMachine_SuperConnectNotify(QStateMachine* self, const QMetaMethod* signal) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_ConnectNotify_IsBase(true);
        vqstatemachine->connectNotify(*signal);
    } else {
        ((VirtualQStateMachine*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnConnectNotify(QStateMachine* self, intptr_t slot) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_ConnectNotify_Callback(reinterpret_cast<VirtualQStateMachine::QStateMachine_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QStateMachine_DisconnectNotify(QStateMachine* self, const QMetaMethod* signal) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->disconnectNotify(*signal);
    } else {
        ((VirtualQStateMachine*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QStateMachine_SuperDisconnectNotify(QStateMachine* self, const QMetaMethod* signal) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_DisconnectNotify_IsBase(true);
        vqstatemachine->disconnectNotify(*signal);
    } else {
        ((VirtualQStateMachine*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnDisconnectNotify(QStateMachine* self, intptr_t slot) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_DisconnectNotify_Callback(reinterpret_cast<VirtualQStateMachine::QStateMachine_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QStateMachine_Sender(const QStateMachine* self) {
    auto* vqstatemachine = const_cast<VirtualQStateMachine*>(dynamic_cast<const VirtualQStateMachine*>(self));
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        return vqstatemachine->sender();
    } else {
        return ((VirtualQStateMachine*)self)->sender();
    }
}

// Base class handler implementation
QObject* QStateMachine_SuperSender(const QStateMachine* self) {
    auto* vqstatemachine = const_cast<VirtualQStateMachine*>(dynamic_cast<const VirtualQStateMachine*>(self));
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_Sender_IsBase(true);
        return vqstatemachine->sender();
    } else {
        return ((VirtualQStateMachine*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnSender(const QStateMachine* self, intptr_t slot) {
    auto* vqstatemachine = const_cast<VirtualQStateMachine*>(dynamic_cast<const VirtualQStateMachine*>(self));
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_Sender_Callback(reinterpret_cast<VirtualQStateMachine::QStateMachine_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QStateMachine_SenderSignalIndex(const QStateMachine* self) {
    auto* vqstatemachine = const_cast<VirtualQStateMachine*>(dynamic_cast<const VirtualQStateMachine*>(self));
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        return vqstatemachine->senderSignalIndex();
    } else {
        return ((VirtualQStateMachine*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QStateMachine_SuperSenderSignalIndex(const QStateMachine* self) {
    auto* vqstatemachine = const_cast<VirtualQStateMachine*>(dynamic_cast<const VirtualQStateMachine*>(self));
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_SenderSignalIndex_IsBase(true);
        return vqstatemachine->senderSignalIndex();
    } else {
        return ((VirtualQStateMachine*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnSenderSignalIndex(const QStateMachine* self, intptr_t slot) {
    auto* vqstatemachine = const_cast<VirtualQStateMachine*>(dynamic_cast<const VirtualQStateMachine*>(self));
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_SenderSignalIndex_Callback(reinterpret_cast<VirtualQStateMachine::QStateMachine_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QStateMachine_Receivers(const QStateMachine* self, const char* signal) {
    auto* vqstatemachine = const_cast<VirtualQStateMachine*>(dynamic_cast<const VirtualQStateMachine*>(self));
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        return vqstatemachine->receivers(signal);
    } else {
        return ((VirtualQStateMachine*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QStateMachine_SuperReceivers(const QStateMachine* self, const char* signal) {
    auto* vqstatemachine = const_cast<VirtualQStateMachine*>(dynamic_cast<const VirtualQStateMachine*>(self));
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_Receivers_IsBase(true);
        return vqstatemachine->receivers(signal);
    } else {
        return ((VirtualQStateMachine*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnReceivers(const QStateMachine* self, intptr_t slot) {
    auto* vqstatemachine = const_cast<VirtualQStateMachine*>(dynamic_cast<const VirtualQStateMachine*>(self));
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_Receivers_Callback(reinterpret_cast<VirtualQStateMachine::QStateMachine_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStateMachine_IsSignalConnected(const QStateMachine* self, const QMetaMethod* signal) {
    auto* vqstatemachine = const_cast<VirtualQStateMachine*>(dynamic_cast<const VirtualQStateMachine*>(self));
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        return vqstatemachine->isSignalConnected(*signal);
    } else {
        return ((VirtualQStateMachine*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QStateMachine_SuperIsSignalConnected(const QStateMachine* self, const QMetaMethod* signal) {
    auto* vqstatemachine = const_cast<VirtualQStateMachine*>(dynamic_cast<const VirtualQStateMachine*>(self));
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_IsSignalConnected_IsBase(true);
        return vqstatemachine->isSignalConnected(*signal);
    } else {
        return ((VirtualQStateMachine*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnIsSignalConnected(const QStateMachine* self, intptr_t slot) {
    auto* vqstatemachine = const_cast<VirtualQStateMachine*>(dynamic_cast<const VirtualQStateMachine*>(self));
    if (vqstatemachine && vqstatemachine->isVirtualQStateMachine) {
        vqstatemachine->setQStateMachine_IsSignalConnected_Callback(reinterpret_cast<VirtualQStateMachine::QStateMachine_IsSignalConnected_Callback>(slot));
    }
}

void QStateMachine_Connect_Started(QStateMachine* self, intptr_t slot) {
    void (*slotFunc)(QStateMachine*) = reinterpret_cast<void (*)(QStateMachine*)>(slot);
    QStateMachine::connect(self, &QStateMachine::started, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QStateMachine_Connect_Stopped(QStateMachine* self, intptr_t slot) {
    void (*slotFunc)(QStateMachine*) = reinterpret_cast<void (*)(QStateMachine*)>(slot);
    QStateMachine::connect(self, &QStateMachine::stopped, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QStateMachine_Delete(QStateMachine* self) {
    delete self;
}

QStateMachine__SignalEvent* QStateMachine__SignalEvent_new(QObject* sender, int signalIndex, const libqt_list /* of QVariant* */ arguments) {
    QList<QVariant> arguments_QList;
    arguments_QList.reserve(arguments.len);
    QVariant** arguments_arr = static_cast<QVariant**>(arguments.data);
    for (size_t i = 0; i < arguments.len; ++i) {
        arguments_QList.push_back(*(arguments_arr[i]));
    }
    return new VirtualQStateMachineSignalEvent(sender, static_cast<int>(signalIndex), arguments_QList);
}

QStateMachine__SignalEvent* QStateMachine__SignalEvent_new2(const QStateMachine__SignalEvent* param1) {
    return new VirtualQStateMachineSignalEvent(*param1);
}

QObject* QStateMachine__SignalEvent_Sender(const QStateMachine__SignalEvent* self) {
    return self->sender();
}

int QStateMachine__SignalEvent_SignalIndex(const QStateMachine__SignalEvent* self) {
    return self->signalIndex();
}

libqt_list /* of QVariant* */ QStateMachine__SignalEvent_Arguments(const QStateMachine__SignalEvent* self) {
    QList<QVariant> _ret = self->arguments();
    // Convert QList<> from C++ memory to manually-managed C memory
    QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QVariant(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Derived class handler implementation
void QStateMachine__SignalEvent_SetAccepted(QStateMachine__SignalEvent* self, bool accepted) {
    auto* vqstatemachinesignalevent = dynamic_cast<VirtualQStateMachineSignalEvent*>(self);
    if (vqstatemachinesignalevent && vqstatemachinesignalevent->isVirtualQStateMachineSignalEvent) {
        vqstatemachinesignalevent->setAccepted(accepted);
    } else {
        self->QStateMachine::SignalEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QStateMachine__SignalEvent_SuperSetAccepted(QStateMachine__SignalEvent* self, bool accepted) {
    auto* vqstatemachinesignalevent = dynamic_cast<VirtualQStateMachineSignalEvent*>(self);
    if (vqstatemachinesignalevent && vqstatemachinesignalevent->isVirtualQStateMachineSignalEvent) {
        vqstatemachinesignalevent->setQStateMachine__SignalEvent_SetAccepted_IsBase(true);
        vqstatemachinesignalevent->setAccepted(accepted);
    } else {
        self->QStateMachine::SignalEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine__SignalEvent_OnSetAccepted(QStateMachine__SignalEvent* self, intptr_t slot) {
    auto* vqstatemachinesignalevent = dynamic_cast<VirtualQStateMachineSignalEvent*>(self);
    if (vqstatemachinesignalevent && vqstatemachinesignalevent->isVirtualQStateMachineSignalEvent) {
        vqstatemachinesignalevent->setQStateMachine__SignalEvent_SetAccepted_Callback(reinterpret_cast<VirtualQStateMachineSignalEvent::QStateMachine__SignalEvent_SetAccepted_Callback>(slot));
    }
}

// Derived class handler implementation
QEvent* QStateMachine__SignalEvent_Clone(const QStateMachine__SignalEvent* self) {
    auto* vqstatemachinesignalevent = const_cast<VirtualQStateMachineSignalEvent*>(dynamic_cast<const VirtualQStateMachineSignalEvent*>(self));
    if (vqstatemachinesignalevent && vqstatemachinesignalevent->isVirtualQStateMachineSignalEvent) {
        return vqstatemachinesignalevent->clone();
    } else {
        return self->QStateMachine::SignalEvent::clone();
    }
}

// Base class handler implementation
QEvent* QStateMachine__SignalEvent_SuperClone(const QStateMachine__SignalEvent* self) {
    auto* vqstatemachinesignalevent = const_cast<VirtualQStateMachineSignalEvent*>(dynamic_cast<const VirtualQStateMachineSignalEvent*>(self));
    if (vqstatemachinesignalevent && vqstatemachinesignalevent->isVirtualQStateMachineSignalEvent) {
        vqstatemachinesignalevent->setQStateMachine__SignalEvent_Clone_IsBase(true);
        return vqstatemachinesignalevent->clone();
    } else {
        return self->QStateMachine::SignalEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine__SignalEvent_OnClone(const QStateMachine__SignalEvent* self, intptr_t slot) {
    auto* vqstatemachinesignalevent = const_cast<VirtualQStateMachineSignalEvent*>(dynamic_cast<const VirtualQStateMachineSignalEvent*>(self));
    if (vqstatemachinesignalevent && vqstatemachinesignalevent->isVirtualQStateMachineSignalEvent) {
        vqstatemachinesignalevent->setQStateMachine__SignalEvent_Clone_Callback(reinterpret_cast<VirtualQStateMachineSignalEvent::QStateMachine__SignalEvent_Clone_Callback>(slot));
    }
}

void QStateMachine__SignalEvent_Delete(QStateMachine__SignalEvent* self) {
    delete self;
}

QStateMachine__WrappedEvent* QStateMachine__WrappedEvent_new(QObject* object, QEvent* event) {
    return new VirtualQStateMachineWrappedEvent(object, event);
}

QStateMachine__WrappedEvent* QStateMachine__WrappedEvent_new2(const QStateMachine__WrappedEvent* param1) {
    return new VirtualQStateMachineWrappedEvent(*param1);
}

QObject* QStateMachine__WrappedEvent_Object(const QStateMachine__WrappedEvent* self) {
    return self->object();
}

QEvent* QStateMachine__WrappedEvent_Event(const QStateMachine__WrappedEvent* self) {
    return self->event();
}

// Derived class handler implementation
void QStateMachine__WrappedEvent_SetAccepted(QStateMachine__WrappedEvent* self, bool accepted) {
    auto* vqstatemachinewrappedevent = dynamic_cast<VirtualQStateMachineWrappedEvent*>(self);
    if (vqstatemachinewrappedevent && vqstatemachinewrappedevent->isVirtualQStateMachineWrappedEvent) {
        vqstatemachinewrappedevent->setAccepted(accepted);
    } else {
        self->QStateMachine::WrappedEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void QStateMachine__WrappedEvent_SuperSetAccepted(QStateMachine__WrappedEvent* self, bool accepted) {
    auto* vqstatemachinewrappedevent = dynamic_cast<VirtualQStateMachineWrappedEvent*>(self);
    if (vqstatemachinewrappedevent && vqstatemachinewrappedevent->isVirtualQStateMachineWrappedEvent) {
        vqstatemachinewrappedevent->setQStateMachine__WrappedEvent_SetAccepted_IsBase(true);
        vqstatemachinewrappedevent->setAccepted(accepted);
    } else {
        self->QStateMachine::WrappedEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine__WrappedEvent_OnSetAccepted(QStateMachine__WrappedEvent* self, intptr_t slot) {
    auto* vqstatemachinewrappedevent = dynamic_cast<VirtualQStateMachineWrappedEvent*>(self);
    if (vqstatemachinewrappedevent && vqstatemachinewrappedevent->isVirtualQStateMachineWrappedEvent) {
        vqstatemachinewrappedevent->setQStateMachine__WrappedEvent_SetAccepted_Callback(reinterpret_cast<VirtualQStateMachineWrappedEvent::QStateMachine__WrappedEvent_SetAccepted_Callback>(slot));
    }
}

// Derived class handler implementation
QEvent* QStateMachine__WrappedEvent_Clone(const QStateMachine__WrappedEvent* self) {
    auto* vqstatemachinewrappedevent = const_cast<VirtualQStateMachineWrappedEvent*>(dynamic_cast<const VirtualQStateMachineWrappedEvent*>(self));
    if (vqstatemachinewrappedevent && vqstatemachinewrappedevent->isVirtualQStateMachineWrappedEvent) {
        return vqstatemachinewrappedevent->clone();
    } else {
        return self->QStateMachine::WrappedEvent::clone();
    }
}

// Base class handler implementation
QEvent* QStateMachine__WrappedEvent_SuperClone(const QStateMachine__WrappedEvent* self) {
    auto* vqstatemachinewrappedevent = const_cast<VirtualQStateMachineWrappedEvent*>(dynamic_cast<const VirtualQStateMachineWrappedEvent*>(self));
    if (vqstatemachinewrappedevent && vqstatemachinewrappedevent->isVirtualQStateMachineWrappedEvent) {
        vqstatemachinewrappedevent->setQStateMachine__WrappedEvent_Clone_IsBase(true);
        return vqstatemachinewrappedevent->clone();
    } else {
        return self->QStateMachine::WrappedEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QStateMachine__WrappedEvent_OnClone(const QStateMachine__WrappedEvent* self, intptr_t slot) {
    auto* vqstatemachinewrappedevent = const_cast<VirtualQStateMachineWrappedEvent*>(dynamic_cast<const VirtualQStateMachineWrappedEvent*>(self));
    if (vqstatemachinewrappedevent && vqstatemachinewrappedevent->isVirtualQStateMachineWrappedEvent) {
        vqstatemachinewrappedevent->setQStateMachine__WrappedEvent_Clone_Callback(reinterpret_cast<VirtualQStateMachineWrappedEvent::QStateMachine__WrappedEvent_Clone_Callback>(slot));
    }
}

void QStateMachine__WrappedEvent_Delete(QStateMachine__WrappedEvent* self) {
    delete self;
}
