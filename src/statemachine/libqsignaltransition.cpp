#include <QAbstractTransition>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSignalTransition>
#include <QState>
#include <QString>
#include <QTimerEvent>
#include <qsignaltransition.h>
#include "libqsignaltransition.h"
#include "libqsignaltransition.hxx"

QSignalTransition* QSignalTransition_new() {
    return new VirtualQSignalTransition();
}

QSignalTransition* QSignalTransition_new2(const QObject* sender, const char* signal) {
    return new VirtualQSignalTransition(sender, signal);
}

QSignalTransition* QSignalTransition_new3(QState* sourceState) {
    return new VirtualQSignalTransition(sourceState);
}

QSignalTransition* QSignalTransition_new4(const QObject* sender, const char* signal, QState* sourceState) {
    return new VirtualQSignalTransition(sender, signal, sourceState);
}

QMetaObject* QSignalTransition_MetaObject(const QSignalTransition* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSignalTransition_Metacast(QSignalTransition* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSignalTransition_Metacall(QSignalTransition* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSignalTransition_Tr(const char* s) {
    auto _ret = QSignalTransition::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QObject* QSignalTransition_SenderObject(const QSignalTransition* self) {
    return (QObject*)self->senderObject();
}

void QSignalTransition_SetSenderObject(QSignalTransition* self, const QObject* sender) {
    self->setSenderObject(sender);
}

libqt_string QSignalTransition_Signal(const QSignalTransition* self) {
    QByteArray _qb = self->signal();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QSignalTransition_SetSignal(QSignalTransition* self, const libqt_string signal) {
    QByteArray signal_QByteArray(signal.data, signal.len);
    self->setSignal(signal_QByteArray);
}

bool QSignalTransition_EventTest(QSignalTransition* self, QEvent* event) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition) {
        return vqsignaltransition->eventTest(event);
    }
    qFatal("Error: Protected method QSignalTransition::eventTest called without a directly constructed type");
}

void QSignalTransition_OnTransition(QSignalTransition* self, QEvent* event) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition) {
        vqsignaltransition->onTransition(event);
    }
}

bool QSignalTransition_Event(QSignalTransition* self, QEvent* e) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition) {
        return vqsignaltransition->event(e);
    }
    qFatal("Error: Protected method QSignalTransition::event called without a directly constructed type");
}

libqt_string QSignalTransition_Tr2(const char* s, const char* c) {
    auto _ret = QSignalTransition::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSignalTransition_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSignalTransition::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSignalTransition_SuperMetaObject(const QSignalTransition* self) {
    return (QMetaObject*)self->QSignalTransition::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnMetaObject(QSignalTransition* self, intptr_t slot) {
    if (auto* vqsignaltransition = const_cast<VirtualQSignalTransition*>(dynamic_cast<const VirtualQSignalTransition*>(self)))
        vqsignaltransition->qsignaltransition_metaobject_callback = reinterpret_cast<VirtualQSignalTransition::QSignalTransition_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSignalTransition_SuperMetacast(QSignalTransition* self, const char* param1) {
    return self->QSignalTransition::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnMetacast(QSignalTransition* self, intptr_t slot) {
    if (auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self))
        vqsignaltransition->qsignaltransition_metacast_callback = reinterpret_cast<VirtualQSignalTransition::QSignalTransition_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSignalTransition_SuperMetacall(QSignalTransition* self, int param1, int param2, void** param3) {
    return self->QSignalTransition::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnMetacall(QSignalTransition* self, intptr_t slot) {
    if (auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self))
        vqsignaltransition->qsignaltransition_metacall_callback = reinterpret_cast<VirtualQSignalTransition::QSignalTransition_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QSignalTransition_SuperEventTest(QSignalTransition* self, QEvent* event) {
    if (auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self)) {
        return vqsignaltransition->QSignalTransition::eventTest(event);
    } else
        qFatal("Error: Protected virtual method QSignalTransition::eventTest called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnEventTest(QSignalTransition* self, intptr_t slot) {
    if (auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self))
        vqsignaltransition->qsignaltransition_eventtest_callback = reinterpret_cast<VirtualQSignalTransition::QSignalTransition_EventTest_Callback>(slot);
}

// Base class handler implementation
void QSignalTransition_SuperOnTransition(QSignalTransition* self, QEvent* event) {
    if (auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self)) {
        vqsignaltransition->QSignalTransition::onTransition(event);
    } else
        qFatal("Error: Protected virtual method QSignalTransition::onTransition called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnOnTransition(QSignalTransition* self, intptr_t slot) {
    if (auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self))
        vqsignaltransition->qsignaltransition_ontransition_callback = reinterpret_cast<VirtualQSignalTransition::QSignalTransition_OnTransition_Callback>(slot);
}

// Base class handler implementation
bool QSignalTransition_SuperEvent(QSignalTransition* self, QEvent* e) {
    if (auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self)) {
        return vqsignaltransition->QSignalTransition::event(e);
    } else
        qFatal("Error: Protected virtual method QSignalTransition::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnEvent(QSignalTransition* self, intptr_t slot) {
    if (auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self))
        vqsignaltransition->qsignaltransition_event_callback = reinterpret_cast<VirtualQSignalTransition::QSignalTransition_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSignalTransition_EventFilter(QSignalTransition* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSignalTransition_SuperEventFilter(QSignalTransition* self, QObject* watched, QEvent* event) {
    return self->QSignalTransition::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnEventFilter(QSignalTransition* self, intptr_t slot) {
    if (auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self))
        vqsignaltransition->qsignaltransition_eventfilter_callback = reinterpret_cast<VirtualQSignalTransition::QSignalTransition_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSignalTransition_TimerEvent(QSignalTransition* self, QTimerEvent* event) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition) {
        vqsignaltransition->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSignalTransition::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSignalTransition_SuperTimerEvent(QSignalTransition* self, QTimerEvent* event) {
    if (auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self)) {
        vqsignaltransition->QSignalTransition::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSignalTransition::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnTimerEvent(QSignalTransition* self, intptr_t slot) {
    if (auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self))
        vqsignaltransition->qsignaltransition_timerevent_callback = reinterpret_cast<VirtualQSignalTransition::QSignalTransition_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSignalTransition_ChildEvent(QSignalTransition* self, QChildEvent* event) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition) {
        vqsignaltransition->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSignalTransition::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSignalTransition_SuperChildEvent(QSignalTransition* self, QChildEvent* event) {
    if (auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self)) {
        vqsignaltransition->QSignalTransition::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSignalTransition::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnChildEvent(QSignalTransition* self, intptr_t slot) {
    if (auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self))
        vqsignaltransition->qsignaltransition_childevent_callback = reinterpret_cast<VirtualQSignalTransition::QSignalTransition_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSignalTransition_CustomEvent(QSignalTransition* self, QEvent* event) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition) {
        vqsignaltransition->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSignalTransition::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSignalTransition_SuperCustomEvent(QSignalTransition* self, QEvent* event) {
    if (auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self)) {
        vqsignaltransition->QSignalTransition::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSignalTransition::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnCustomEvent(QSignalTransition* self, intptr_t slot) {
    if (auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self))
        vqsignaltransition->qsignaltransition_customevent_callback = reinterpret_cast<VirtualQSignalTransition::QSignalTransition_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSignalTransition_ConnectNotify(QSignalTransition* self, const QMetaMethod* signal) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition) {
        vqsignaltransition->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSignalTransition::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSignalTransition_SuperConnectNotify(QSignalTransition* self, const QMetaMethod* signal) {
    if (auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self)) {
        vqsignaltransition->QSignalTransition::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSignalTransition::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnConnectNotify(QSignalTransition* self, intptr_t slot) {
    if (auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self))
        vqsignaltransition->qsignaltransition_connectnotify_callback = reinterpret_cast<VirtualQSignalTransition::QSignalTransition_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSignalTransition_DisconnectNotify(QSignalTransition* self, const QMetaMethod* signal) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition) {
        vqsignaltransition->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSignalTransition::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSignalTransition_SuperDisconnectNotify(QSignalTransition* self, const QMetaMethod* signal) {
    if (auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self)) {
        vqsignaltransition->QSignalTransition::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSignalTransition::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnDisconnectNotify(QSignalTransition* self, intptr_t slot) {
    if (auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self))
        vqsignaltransition->qsignaltransition_disconnectnotify_callback = reinterpret_cast<VirtualQSignalTransition::QSignalTransition_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QSignalTransition_Sender(const QSignalTransition* self) {
    if (auto* vqsignaltransition = const_cast<VirtualQSignalTransition*>(dynamic_cast<const VirtualQSignalTransition*>(self))) {
        return vqsignaltransition->VirtualQSignalTransition::sender();
    } else
        qFatal("Error: Protected method QSignalTransition::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSignalTransition_SenderSignalIndex(const QSignalTransition* self) {
    if (auto* vqsignaltransition = const_cast<VirtualQSignalTransition*>(dynamic_cast<const VirtualQSignalTransition*>(self))) {
        return vqsignaltransition->VirtualQSignalTransition::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSignalTransition::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSignalTransition_Receivers(const QSignalTransition* self, const char* signal) {
    if (auto* vqsignaltransition = const_cast<VirtualQSignalTransition*>(dynamic_cast<const VirtualQSignalTransition*>(self))) {
        return vqsignaltransition->VirtualQSignalTransition::receivers(signal);
    } else
        qFatal("Error: Protected method QSignalTransition::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSignalTransition_IsSignalConnected(const QSignalTransition* self, const QMetaMethod* signal) {
    if (auto* vqsignaltransition = const_cast<VirtualQSignalTransition*>(dynamic_cast<const VirtualQSignalTransition*>(self))) {
        return vqsignaltransition->VirtualQSignalTransition::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSignalTransition::isSignalConnected called without a directly constructed type");
}

void QSignalTransition_Connect_SenderObjectChanged(QSignalTransition* self, intptr_t slot) {
    void (*slotFunc)(QSignalTransition*) = reinterpret_cast<void (*)(QSignalTransition*)>(slot);
    QSignalTransition::connect(self, &QSignalTransition::senderObjectChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSignalTransition_Connect_SignalChanged(QSignalTransition* self, intptr_t slot) {
    void (*slotFunc)(QSignalTransition*) = reinterpret_cast<void (*)(QSignalTransition*)>(slot);
    QSignalTransition::connect(self, &QSignalTransition::signalChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSignalTransition_Delete(QSignalTransition* self) {
    delete self;
}
