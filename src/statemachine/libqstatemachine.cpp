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
    return (QMetaObject*)self->metaObject();
}

void* QStateMachine_Metacast(QStateMachine* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QStateMachine_Metacall(QStateMachine* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QStateMachine_Tr(const char* s) {
    auto _ret = QStateMachine::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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
    auto _ret = self->errorString();
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
    return self->eventFilter(watched, event);
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
    QStateMachine::connect(self,
                           static_cast<void (QStateMachine::*)(bool)>(&QStateMachine::runningChanged),
                           [self, slotFunc](bool running) {
                               bool sigval1 = running;
                               slotFunc(self, sigval1);
                           });
}

void QStateMachine_OnEntry(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine) {
        vqstatemachine->onEntry(event);
    }
}

void QStateMachine_OnExit(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine) {
        vqstatemachine->onExit(event);
    }
}

void QStateMachine_BeginSelectTransitions(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine) {
        vqstatemachine->beginSelectTransitions(event);
    }
}

void QStateMachine_EndSelectTransitions(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine) {
        vqstatemachine->endSelectTransitions(event);
    }
}

void QStateMachine_BeginMicrostep(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine) {
        vqstatemachine->beginMicrostep(event);
    }
}

void QStateMachine_EndMicrostep(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine) {
        vqstatemachine->endMicrostep(event);
    }
}

bool QStateMachine_Event(QStateMachine* self, QEvent* e) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine) {
        return vqstatemachine->event(e);
    }
    qFatal("Error: Protected method QStateMachine::event called without a directly constructed type");
}

libqt_string QStateMachine_Tr2(const char* s, const char* c) {
    auto _ret = QStateMachine::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStateMachine_Tr3(const char* s, const char* c, int n) {
    auto _ret = QStateMachine::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QStateMachine_PostEvent2(QStateMachine* self, QEvent* event, int priority) {
    self->postEvent(event, static_cast<QStateMachine::EventPriority>(priority));
}

// Base class handler implementation
QMetaObject* QStateMachine_SuperMetaObject(const QStateMachine* self) {
    return (QMetaObject*)self->QStateMachine::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnMetaObject(QStateMachine* self, intptr_t slot) {
    if (auto* vqstatemachine = const_cast<VirtualQStateMachine*>(dynamic_cast<const VirtualQStateMachine*>(self)))
        vqstatemachine->qstatemachine_metaobject_callback = reinterpret_cast<VirtualQStateMachine::QStateMachine_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QStateMachine_SuperMetacast(QStateMachine* self, const char* param1) {
    return self->QStateMachine::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnMetacast(QStateMachine* self, intptr_t slot) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self))
        vqstatemachine->qstatemachine_metacast_callback = reinterpret_cast<VirtualQStateMachine::QStateMachine_Metacast_Callback>(slot);
}

// Base class handler implementation
int QStateMachine_SuperMetacall(QStateMachine* self, int param1, int param2, void** param3) {
    return self->QStateMachine::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnMetacall(QStateMachine* self, intptr_t slot) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self))
        vqstatemachine->qstatemachine_metacall_callback = reinterpret_cast<VirtualQStateMachine::QStateMachine_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QStateMachine_SuperEventFilter(QStateMachine* self, QObject* watched, QEvent* event) {
    return self->QStateMachine::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnEventFilter(QStateMachine* self, intptr_t slot) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self))
        vqstatemachine->qstatemachine_eventfilter_callback = reinterpret_cast<VirtualQStateMachine::QStateMachine_EventFilter_Callback>(slot);
}

// Base class handler implementation
void QStateMachine_SuperOnEntry(QStateMachine* self, QEvent* event) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self)) {
        vqstatemachine->QStateMachine::onEntry(event);
    } else
        qFatal("Error: Protected virtual method QStateMachine::onEntry called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnOnEntry(QStateMachine* self, intptr_t slot) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self))
        vqstatemachine->qstatemachine_onentry_callback = reinterpret_cast<VirtualQStateMachine::QStateMachine_OnEntry_Callback>(slot);
}

// Base class handler implementation
void QStateMachine_SuperOnExit(QStateMachine* self, QEvent* event) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self)) {
        vqstatemachine->QStateMachine::onExit(event);
    } else
        qFatal("Error: Protected virtual method QStateMachine::onExit called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnOnExit(QStateMachine* self, intptr_t slot) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self))
        vqstatemachine->qstatemachine_onexit_callback = reinterpret_cast<VirtualQStateMachine::QStateMachine_OnExit_Callback>(slot);
}

// Base class handler implementation
void QStateMachine_SuperBeginSelectTransitions(QStateMachine* self, QEvent* event) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self)) {
        vqstatemachine->QStateMachine::beginSelectTransitions(event);
    } else
        qFatal("Error: Protected virtual method QStateMachine::beginSelectTransitions called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnBeginSelectTransitions(QStateMachine* self, intptr_t slot) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self))
        vqstatemachine->qstatemachine_beginselecttransitions_callback = reinterpret_cast<VirtualQStateMachine::QStateMachine_BeginSelectTransitions_Callback>(slot);
}

// Base class handler implementation
void QStateMachine_SuperEndSelectTransitions(QStateMachine* self, QEvent* event) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self)) {
        vqstatemachine->QStateMachine::endSelectTransitions(event);
    } else
        qFatal("Error: Protected virtual method QStateMachine::endSelectTransitions called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnEndSelectTransitions(QStateMachine* self, intptr_t slot) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self))
        vqstatemachine->qstatemachine_endselecttransitions_callback = reinterpret_cast<VirtualQStateMachine::QStateMachine_EndSelectTransitions_Callback>(slot);
}

// Base class handler implementation
void QStateMachine_SuperBeginMicrostep(QStateMachine* self, QEvent* event) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self)) {
        vqstatemachine->QStateMachine::beginMicrostep(event);
    } else
        qFatal("Error: Protected virtual method QStateMachine::beginMicrostep called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnBeginMicrostep(QStateMachine* self, intptr_t slot) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self))
        vqstatemachine->qstatemachine_beginmicrostep_callback = reinterpret_cast<VirtualQStateMachine::QStateMachine_BeginMicrostep_Callback>(slot);
}

// Base class handler implementation
void QStateMachine_SuperEndMicrostep(QStateMachine* self, QEvent* event) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self)) {
        vqstatemachine->QStateMachine::endMicrostep(event);
    } else
        qFatal("Error: Protected virtual method QStateMachine::endMicrostep called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnEndMicrostep(QStateMachine* self, intptr_t slot) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self))
        vqstatemachine->qstatemachine_endmicrostep_callback = reinterpret_cast<VirtualQStateMachine::QStateMachine_EndMicrostep_Callback>(slot);
}

// Base class handler implementation
bool QStateMachine_SuperEvent(QStateMachine* self, QEvent* e) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self)) {
        return vqstatemachine->QStateMachine::event(e);
    } else
        qFatal("Error: Protected virtual method QStateMachine::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnEvent(QStateMachine* self, intptr_t slot) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self))
        vqstatemachine->qstatemachine_event_callback = reinterpret_cast<VirtualQStateMachine::QStateMachine_Event_Callback>(slot);
}

// Derived class handler implementation
void QStateMachine_TimerEvent(QStateMachine* self, QTimerEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine) {
        vqstatemachine->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStateMachine::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStateMachine_SuperTimerEvent(QStateMachine* self, QTimerEvent* event) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self)) {
        vqstatemachine->QStateMachine::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QStateMachine::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnTimerEvent(QStateMachine* self, intptr_t slot) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self))
        vqstatemachine->qstatemachine_timerevent_callback = reinterpret_cast<VirtualQStateMachine::QStateMachine_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QStateMachine_ChildEvent(QStateMachine* self, QChildEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine) {
        vqstatemachine->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStateMachine::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStateMachine_SuperChildEvent(QStateMachine* self, QChildEvent* event) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self)) {
        vqstatemachine->QStateMachine::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QStateMachine::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnChildEvent(QStateMachine* self, intptr_t slot) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self))
        vqstatemachine->qstatemachine_childevent_callback = reinterpret_cast<VirtualQStateMachine::QStateMachine_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QStateMachine_CustomEvent(QStateMachine* self, QEvent* event) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine) {
        vqstatemachine->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStateMachine::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStateMachine_SuperCustomEvent(QStateMachine* self, QEvent* event) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self)) {
        vqstatemachine->QStateMachine::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QStateMachine::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnCustomEvent(QStateMachine* self, intptr_t slot) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self))
        vqstatemachine->qstatemachine_customevent_callback = reinterpret_cast<VirtualQStateMachine::QStateMachine_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QStateMachine_ConnectNotify(QStateMachine* self, const QMetaMethod* signal) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine) {
        vqstatemachine->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QStateMachine::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QStateMachine_SuperConnectNotify(QStateMachine* self, const QMetaMethod* signal) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self)) {
        vqstatemachine->QStateMachine::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QStateMachine::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnConnectNotify(QStateMachine* self, intptr_t slot) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self))
        vqstatemachine->qstatemachine_connectnotify_callback = reinterpret_cast<VirtualQStateMachine::QStateMachine_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QStateMachine_DisconnectNotify(QStateMachine* self, const QMetaMethod* signal) {
    auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self);
    if (vqstatemachine) {
        vqstatemachine->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QStateMachine::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QStateMachine_SuperDisconnectNotify(QStateMachine* self, const QMetaMethod* signal) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self)) {
        vqstatemachine->QStateMachine::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QStateMachine::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStateMachine_OnDisconnectNotify(QStateMachine* self, intptr_t slot) {
    if (auto* vqstatemachine = dynamic_cast<VirtualQStateMachine*>(self))
        vqstatemachine->qstatemachine_disconnectnotify_callback = reinterpret_cast<VirtualQStateMachine::QStateMachine_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QStateMachine_Sender(const QStateMachine* self) {
    if (auto* vqstatemachine = const_cast<VirtualQStateMachine*>(dynamic_cast<const VirtualQStateMachine*>(self))) {
        return vqstatemachine->VirtualQStateMachine::sender();
    } else
        qFatal("Error: Protected method QStateMachine::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QStateMachine_SenderSignalIndex(const QStateMachine* self) {
    if (auto* vqstatemachine = const_cast<VirtualQStateMachine*>(dynamic_cast<const VirtualQStateMachine*>(self))) {
        return vqstatemachine->VirtualQStateMachine::senderSignalIndex();
    } else
        qFatal("Error: Protected method QStateMachine::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QStateMachine_Receivers(const QStateMachine* self, const char* signal) {
    if (auto* vqstatemachine = const_cast<VirtualQStateMachine*>(dynamic_cast<const VirtualQStateMachine*>(self))) {
        return vqstatemachine->VirtualQStateMachine::receivers(signal);
    } else
        qFatal("Error: Protected method QStateMachine::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStateMachine_IsSignalConnected(const QStateMachine* self, const QMetaMethod* signal) {
    if (auto* vqstatemachine = const_cast<VirtualQStateMachine*>(dynamic_cast<const VirtualQStateMachine*>(self))) {
        return vqstatemachine->VirtualQStateMachine::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QStateMachine::isSignalConnected called without a directly constructed type");
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

void QStateMachine__SignalEvent_OperatorAssign(QStateMachine__SignalEvent* self, const QStateMachine__SignalEvent* param1) {
    self->operator=(*param1);
}

// Derived class handler implementation
void QStateMachine__SignalEvent_SetAccepted(QStateMachine__SignalEvent* self, bool accepted) {
    self->setAccepted(accepted);
}

// Base class handler implementation
void QStateMachine__SignalEvent_SuperSetAccepted(QStateMachine__SignalEvent* self, bool accepted) {
    self->QStateMachine::SignalEvent::setAccepted(accepted);
}

// Auxiliary method to allow providing re-implementation
void QStateMachine__SignalEvent_OnSetAccepted(QStateMachine__SignalEvent* self, intptr_t slot) {
    if (auto* vqstatemachinesignalevent = dynamic_cast<VirtualQStateMachineSignalEvent*>(self))
        vqstatemachinesignalevent->qstatemachine__signalevent_setaccepted_callback = reinterpret_cast<VirtualQStateMachineSignalEvent::QStateMachine__SignalEvent_SetAccepted_Callback>(slot);
}

// Derived class handler implementation
QEvent* QStateMachine__SignalEvent_Clone(const QStateMachine__SignalEvent* self) {
    return self->clone();
}

// Base class handler implementation
QEvent* QStateMachine__SignalEvent_SuperClone(const QStateMachine__SignalEvent* self) {
    return self->QStateMachine::SignalEvent::clone();
}

// Auxiliary method to allow providing re-implementation
void QStateMachine__SignalEvent_OnClone(QStateMachine__SignalEvent* self, intptr_t slot) {
    if (auto* vqstatemachinesignalevent = const_cast<VirtualQStateMachineSignalEvent*>(dynamic_cast<const VirtualQStateMachineSignalEvent*>(self)))
        vqstatemachinesignalevent->qstatemachine__signalevent_clone_callback = reinterpret_cast<VirtualQStateMachineSignalEvent::QStateMachine__SignalEvent_Clone_Callback>(slot);
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

void QStateMachine__WrappedEvent_OperatorAssign(QStateMachine__WrappedEvent* self, const QStateMachine__WrappedEvent* param1) {
    self->operator=(*param1);
}

// Derived class handler implementation
void QStateMachine__WrappedEvent_SetAccepted(QStateMachine__WrappedEvent* self, bool accepted) {
    self->setAccepted(accepted);
}

// Base class handler implementation
void QStateMachine__WrappedEvent_SuperSetAccepted(QStateMachine__WrappedEvent* self, bool accepted) {
    self->QStateMachine::WrappedEvent::setAccepted(accepted);
}

// Auxiliary method to allow providing re-implementation
void QStateMachine__WrappedEvent_OnSetAccepted(QStateMachine__WrappedEvent* self, intptr_t slot) {
    if (auto* vqstatemachinewrappedevent = dynamic_cast<VirtualQStateMachineWrappedEvent*>(self))
        vqstatemachinewrappedevent->qstatemachine__wrappedevent_setaccepted_callback = reinterpret_cast<VirtualQStateMachineWrappedEvent::QStateMachine__WrappedEvent_SetAccepted_Callback>(slot);
}

// Derived class handler implementation
QEvent* QStateMachine__WrappedEvent_Clone(const QStateMachine__WrappedEvent* self) {
    return self->clone();
}

// Base class handler implementation
QEvent* QStateMachine__WrappedEvent_SuperClone(const QStateMachine__WrappedEvent* self) {
    return self->QStateMachine::WrappedEvent::clone();
}

// Auxiliary method to allow providing re-implementation
void QStateMachine__WrappedEvent_OnClone(QStateMachine__WrappedEvent* self, intptr_t slot) {
    if (auto* vqstatemachinewrappedevent = const_cast<VirtualQStateMachineWrappedEvent*>(dynamic_cast<const VirtualQStateMachineWrappedEvent*>(self)))
        vqstatemachinewrappedevent->qstatemachine__wrappedevent_clone_callback = reinterpret_cast<VirtualQStateMachineWrappedEvent::QStateMachine__WrappedEvent_Clone_Callback>(slot);
}

void QStateMachine__WrappedEvent_Delete(QStateMachine__WrappedEvent* self) {
    delete self;
}
