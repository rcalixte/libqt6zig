#include <QAbstractAnimation>
#include <QAbstractState>
#include <QAbstractTransition>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QStateMachine>
#include <QString>
#include <QTimerEvent>
#include <qabstracttransition.h>
#include "libqabstracttransition.h"
#include "libqabstracttransition.hxx"

QAbstractTransition* QAbstractTransition_new() {
    return new VirtualQAbstractTransition();
}

QAbstractTransition* QAbstractTransition_new2(QState* sourceState) {
    return new VirtualQAbstractTransition(sourceState);
}

QMetaObject* QAbstractTransition_MetaObject(const QAbstractTransition* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractTransition_Metacast(QAbstractTransition* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractTransition_Metacall(QAbstractTransition* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractTransition_Tr(const char* s) {
    auto _ret = QAbstractTransition::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QState* QAbstractTransition_SourceState(const QAbstractTransition* self) {
    return self->sourceState();
}

QAbstractState* QAbstractTransition_TargetState(const QAbstractTransition* self) {
    return self->targetState();
}

void QAbstractTransition_SetTargetState(QAbstractTransition* self, QAbstractState* target) {
    self->setTargetState(target);
}

libqt_list /* of QAbstractState* */ QAbstractTransition_TargetStates(const QAbstractTransition* self) {
    QList<QAbstractState*> _ret = self->targetStates();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractState** _arr = static_cast<QAbstractState**>(malloc(sizeof(QAbstractState*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QAbstractTransition_SetTargetStates(QAbstractTransition* self, const libqt_list /* of QAbstractState* */ targets) {
    QList<QAbstractState*> targets_QList;
    targets_QList.reserve(targets.len);
    QAbstractState** targets_arr = static_cast<QAbstractState**>(targets.data);
    for (size_t i = 0; i < targets.len; ++i) {
        targets_QList.push_back(targets_arr[i]);
    }
    self->setTargetStates(targets_QList);
}

int QAbstractTransition_TransitionType(const QAbstractTransition* self) {
    return static_cast<int>(self->transitionType());
}

void QAbstractTransition_SetTransitionType(QAbstractTransition* self, int typeVal) {
    self->setTransitionType(static_cast<QAbstractTransition::TransitionType>(typeVal));
}

QStateMachine* QAbstractTransition_Machine(const QAbstractTransition* self) {
    return self->machine();
}

void QAbstractTransition_AddAnimation(QAbstractTransition* self, QAbstractAnimation* animation) {
    self->addAnimation(animation);
}

void QAbstractTransition_RemoveAnimation(QAbstractTransition* self, QAbstractAnimation* animation) {
    self->removeAnimation(animation);
}

libqt_list /* of QAbstractAnimation* */ QAbstractTransition_Animations(const QAbstractTransition* self) {
    QList<QAbstractAnimation*> _ret = self->animations();
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

bool QAbstractTransition_EventTest(QAbstractTransition* self, QEvent* event) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition) {
        return vqabstracttransition->eventTest(event);
    }
    qFatal("Error: Protected method QAbstractTransition::eventTest called without a directly constructed type");
}

void QAbstractTransition_OnTransition(QAbstractTransition* self, QEvent* event) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition) {
        vqabstracttransition->onTransition(event);
    }
}

bool QAbstractTransition_Event(QAbstractTransition* self, QEvent* e) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition) {
        return vqabstracttransition->event(e);
    }
    qFatal("Error: Protected method QAbstractTransition::event called without a directly constructed type");
}

libqt_string QAbstractTransition_Tr2(const char* s, const char* c) {
    auto _ret = QAbstractTransition::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractTransition_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAbstractTransition::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAbstractTransition_SuperMetaObject(const QAbstractTransition* self) {
    return (QMetaObject*)self->QAbstractTransition::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnMetaObject(QAbstractTransition* self, intptr_t slot) {
    if (auto* vqabstracttransition = const_cast<VirtualQAbstractTransition*>(dynamic_cast<const VirtualQAbstractTransition*>(self)))
        vqabstracttransition->qabstracttransition_metaobject_callback = reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAbstractTransition_SuperMetacast(QAbstractTransition* self, const char* param1) {
    return self->QAbstractTransition::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnMetacast(QAbstractTransition* self, intptr_t slot) {
    if (auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self))
        vqabstracttransition->qabstracttransition_metacast_callback = reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAbstractTransition_SuperMetacall(QAbstractTransition* self, int param1, int param2, void** param3) {
    return self->QAbstractTransition::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnMetacall(QAbstractTransition* self, intptr_t slot) {
    if (auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self))
        vqabstracttransition->qabstracttransition_metacall_callback = reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnEventTest(QAbstractTransition* self, intptr_t slot) {
    if (auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self))
        vqabstracttransition->qabstracttransition_eventtest_callback = reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_EventTest_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnOnTransition(QAbstractTransition* self, intptr_t slot) {
    if (auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self))
        vqabstracttransition->qabstracttransition_ontransition_callback = reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_OnTransition_Callback>(slot);
}

// Base class handler implementation
bool QAbstractTransition_SuperEvent(QAbstractTransition* self, QEvent* e) {
    if (auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self)) {
        return vqabstracttransition->QAbstractTransition::event(e);
    } else
        qFatal("Error: Protected virtual method QAbstractTransition::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnEvent(QAbstractTransition* self, intptr_t slot) {
    if (auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self))
        vqabstracttransition->qabstracttransition_event_callback = reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractTransition_EventFilter(QAbstractTransition* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAbstractTransition_SuperEventFilter(QAbstractTransition* self, QObject* watched, QEvent* event) {
    return self->QAbstractTransition::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnEventFilter(QAbstractTransition* self, intptr_t slot) {
    if (auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self))
        vqabstracttransition->qabstracttransition_eventfilter_callback = reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAbstractTransition_TimerEvent(QAbstractTransition* self, QTimerEvent* event) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition) {
        vqabstracttransition->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractTransition::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractTransition_SuperTimerEvent(QAbstractTransition* self, QTimerEvent* event) {
    if (auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self)) {
        vqabstracttransition->QAbstractTransition::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractTransition::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnTimerEvent(QAbstractTransition* self, intptr_t slot) {
    if (auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self))
        vqabstracttransition->qabstracttransition_timerevent_callback = reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractTransition_ChildEvent(QAbstractTransition* self, QChildEvent* event) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition) {
        vqabstracttransition->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractTransition::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractTransition_SuperChildEvent(QAbstractTransition* self, QChildEvent* event) {
    if (auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self)) {
        vqabstracttransition->QAbstractTransition::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractTransition::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnChildEvent(QAbstractTransition* self, intptr_t slot) {
    if (auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self))
        vqabstracttransition->qabstracttransition_childevent_callback = reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractTransition_CustomEvent(QAbstractTransition* self, QEvent* event) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition) {
        vqabstracttransition->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractTransition::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractTransition_SuperCustomEvent(QAbstractTransition* self, QEvent* event) {
    if (auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self)) {
        vqabstracttransition->QAbstractTransition::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractTransition::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnCustomEvent(QAbstractTransition* self, intptr_t slot) {
    if (auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self))
        vqabstracttransition->qabstracttransition_customevent_callback = reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractTransition_ConnectNotify(QAbstractTransition* self, const QMetaMethod* signal) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition) {
        vqabstracttransition->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractTransition::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractTransition_SuperConnectNotify(QAbstractTransition* self, const QMetaMethod* signal) {
    if (auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self)) {
        vqabstracttransition->QAbstractTransition::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractTransition::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnConnectNotify(QAbstractTransition* self, intptr_t slot) {
    if (auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self))
        vqabstracttransition->qabstracttransition_connectnotify_callback = reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAbstractTransition_DisconnectNotify(QAbstractTransition* self, const QMetaMethod* signal) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition) {
        vqabstracttransition->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractTransition::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractTransition_SuperDisconnectNotify(QAbstractTransition* self, const QMetaMethod* signal) {
    if (auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self)) {
        vqabstracttransition->QAbstractTransition::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractTransition::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnDisconnectNotify(QAbstractTransition* self, intptr_t slot) {
    if (auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self))
        vqabstracttransition->qabstracttransition_disconnectnotify_callback = reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QAbstractTransition_Sender(const QAbstractTransition* self) {
    if (auto* vqabstracttransition = const_cast<VirtualQAbstractTransition*>(dynamic_cast<const VirtualQAbstractTransition*>(self))) {
        return vqabstracttransition->VirtualQAbstractTransition::sender();
    } else
        qFatal("Error: Protected method QAbstractTransition::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractTransition_SenderSignalIndex(const QAbstractTransition* self) {
    if (auto* vqabstracttransition = const_cast<VirtualQAbstractTransition*>(dynamic_cast<const VirtualQAbstractTransition*>(self))) {
        return vqabstracttransition->VirtualQAbstractTransition::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAbstractTransition::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractTransition_Receivers(const QAbstractTransition* self, const char* signal) {
    if (auto* vqabstracttransition = const_cast<VirtualQAbstractTransition*>(dynamic_cast<const VirtualQAbstractTransition*>(self))) {
        return vqabstracttransition->VirtualQAbstractTransition::receivers(signal);
    } else
        qFatal("Error: Protected method QAbstractTransition::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractTransition_IsSignalConnected(const QAbstractTransition* self, const QMetaMethod* signal) {
    if (auto* vqabstracttransition = const_cast<VirtualQAbstractTransition*>(dynamic_cast<const VirtualQAbstractTransition*>(self))) {
        return vqabstracttransition->VirtualQAbstractTransition::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAbstractTransition::isSignalConnected called without a directly constructed type");
}

void QAbstractTransition_Connect_Triggered(QAbstractTransition* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTransition*) = reinterpret_cast<void (*)(QAbstractTransition*)>(slot);
    QAbstractTransition::connect(self, &QAbstractTransition::triggered, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractTransition_Connect_TargetStateChanged(QAbstractTransition* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTransition*) = reinterpret_cast<void (*)(QAbstractTransition*)>(slot);
    QAbstractTransition::connect(self, &QAbstractTransition::targetStateChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractTransition_Connect_TargetStatesChanged(QAbstractTransition* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTransition*) = reinterpret_cast<void (*)(QAbstractTransition*)>(slot);
    QAbstractTransition::connect(self, &QAbstractTransition::targetStatesChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractTransition_Delete(QAbstractTransition* self) {
    delete self;
}
