#include <QAbstractTransition>
#include <QChildEvent>
#include <QEvent>
#include <QEventTransition>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QString>
#include <QTimerEvent>
#include <qeventtransition.h>
#include "libqeventtransition.h"
#include "libqeventtransition.hxx"

QEventTransition* QEventTransition_new() {
    return new VirtualQEventTransition();
}

QEventTransition* QEventTransition_new2(QObject* object, int typeVal) {
    return new VirtualQEventTransition(object, static_cast<QEvent::Type>(typeVal));
}

QEventTransition* QEventTransition_new3(QState* sourceState) {
    return new VirtualQEventTransition(sourceState);
}

QEventTransition* QEventTransition_new4(QObject* object, int typeVal, QState* sourceState) {
    return new VirtualQEventTransition(object, static_cast<QEvent::Type>(typeVal), sourceState);
}

QMetaObject* QEventTransition_MetaObject(const QEventTransition* self) {
    return (QMetaObject*)self->metaObject();
}

void* QEventTransition_Metacast(QEventTransition* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QEventTransition_Metacall(QEventTransition* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QEventTransition_Tr(const char* s) {
    auto _ret = QEventTransition::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QObject* QEventTransition_EventSource(const QEventTransition* self) {
    return self->eventSource();
}

void QEventTransition_SetEventSource(QEventTransition* self, QObject* object) {
    self->setEventSource(object);
}

int QEventTransition_EventType(const QEventTransition* self) {
    return static_cast<int>(self->eventType());
}

void QEventTransition_SetEventType(QEventTransition* self, int typeVal) {
    self->setEventType(static_cast<QEvent::Type>(typeVal));
}

bool QEventTransition_EventTest(QEventTransition* self, QEvent* event) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition) {
        return vqeventtransition->eventTest(event);
    }
    qFatal("Error: Protected method QEventTransition::eventTest called without a directly constructed type");
}

void QEventTransition_OnTransition(QEventTransition* self, QEvent* event) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition) {
        vqeventtransition->onTransition(event);
    }
}

bool QEventTransition_Event(QEventTransition* self, QEvent* e) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition) {
        return vqeventtransition->event(e);
    }
    qFatal("Error: Protected method QEventTransition::event called without a directly constructed type");
}

libqt_string QEventTransition_Tr2(const char* s, const char* c) {
    auto _ret = QEventTransition::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QEventTransition_Tr3(const char* s, const char* c, int n) {
    auto _ret = QEventTransition::tr(s, c, static_cast<int>(n));
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
QMetaObject* QEventTransition_SuperMetaObject(const QEventTransition* self) {
    return (QMetaObject*)self->QEventTransition::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnMetaObject(QEventTransition* self, intptr_t slot) {
    if (auto* vqeventtransition = const_cast<VirtualQEventTransition*>(dynamic_cast<const VirtualQEventTransition*>(self)))
        vqeventtransition->qeventtransition_metaobject_callback = reinterpret_cast<VirtualQEventTransition::QEventTransition_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QEventTransition_SuperMetacast(QEventTransition* self, const char* param1) {
    return self->QEventTransition::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnMetacast(QEventTransition* self, intptr_t slot) {
    if (auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self))
        vqeventtransition->qeventtransition_metacast_callback = reinterpret_cast<VirtualQEventTransition::QEventTransition_Metacast_Callback>(slot);
}

// Base class handler implementation
int QEventTransition_SuperMetacall(QEventTransition* self, int param1, int param2, void** param3) {
    return self->QEventTransition::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnMetacall(QEventTransition* self, intptr_t slot) {
    if (auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self))
        vqeventtransition->qeventtransition_metacall_callback = reinterpret_cast<VirtualQEventTransition::QEventTransition_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QEventTransition_SuperEventTest(QEventTransition* self, QEvent* event) {
    if (auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self)) {
        return vqeventtransition->QEventTransition::eventTest(event);
    } else
        qFatal("Error: Protected virtual method QEventTransition::eventTest called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnEventTest(QEventTransition* self, intptr_t slot) {
    if (auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self))
        vqeventtransition->qeventtransition_eventtest_callback = reinterpret_cast<VirtualQEventTransition::QEventTransition_EventTest_Callback>(slot);
}

// Base class handler implementation
void QEventTransition_SuperOnTransition(QEventTransition* self, QEvent* event) {
    if (auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self)) {
        vqeventtransition->QEventTransition::onTransition(event);
    } else
        qFatal("Error: Protected virtual method QEventTransition::onTransition called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnOnTransition(QEventTransition* self, intptr_t slot) {
    if (auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self))
        vqeventtransition->qeventtransition_ontransition_callback = reinterpret_cast<VirtualQEventTransition::QEventTransition_OnTransition_Callback>(slot);
}

// Base class handler implementation
bool QEventTransition_SuperEvent(QEventTransition* self, QEvent* e) {
    if (auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self)) {
        return vqeventtransition->QEventTransition::event(e);
    } else
        qFatal("Error: Protected virtual method QEventTransition::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnEvent(QEventTransition* self, intptr_t slot) {
    if (auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self))
        vqeventtransition->qeventtransition_event_callback = reinterpret_cast<VirtualQEventTransition::QEventTransition_Event_Callback>(slot);
}

// Derived class handler implementation
bool QEventTransition_EventFilter(QEventTransition* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QEventTransition_SuperEventFilter(QEventTransition* self, QObject* watched, QEvent* event) {
    return self->QEventTransition::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnEventFilter(QEventTransition* self, intptr_t slot) {
    if (auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self))
        vqeventtransition->qeventtransition_eventfilter_callback = reinterpret_cast<VirtualQEventTransition::QEventTransition_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QEventTransition_TimerEvent(QEventTransition* self, QTimerEvent* event) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition) {
        vqeventtransition->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QEventTransition::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QEventTransition_SuperTimerEvent(QEventTransition* self, QTimerEvent* event) {
    if (auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self)) {
        vqeventtransition->QEventTransition::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QEventTransition::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnTimerEvent(QEventTransition* self, intptr_t slot) {
    if (auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self))
        vqeventtransition->qeventtransition_timerevent_callback = reinterpret_cast<VirtualQEventTransition::QEventTransition_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QEventTransition_ChildEvent(QEventTransition* self, QChildEvent* event) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition) {
        vqeventtransition->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QEventTransition::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QEventTransition_SuperChildEvent(QEventTransition* self, QChildEvent* event) {
    if (auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self)) {
        vqeventtransition->QEventTransition::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QEventTransition::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnChildEvent(QEventTransition* self, intptr_t slot) {
    if (auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self))
        vqeventtransition->qeventtransition_childevent_callback = reinterpret_cast<VirtualQEventTransition::QEventTransition_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QEventTransition_CustomEvent(QEventTransition* self, QEvent* event) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition) {
        vqeventtransition->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QEventTransition::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QEventTransition_SuperCustomEvent(QEventTransition* self, QEvent* event) {
    if (auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self)) {
        vqeventtransition->QEventTransition::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QEventTransition::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnCustomEvent(QEventTransition* self, intptr_t slot) {
    if (auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self))
        vqeventtransition->qeventtransition_customevent_callback = reinterpret_cast<VirtualQEventTransition::QEventTransition_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QEventTransition_ConnectNotify(QEventTransition* self, const QMetaMethod* signal) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition) {
        vqeventtransition->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QEventTransition::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QEventTransition_SuperConnectNotify(QEventTransition* self, const QMetaMethod* signal) {
    if (auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self)) {
        vqeventtransition->QEventTransition::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QEventTransition::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnConnectNotify(QEventTransition* self, intptr_t slot) {
    if (auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self))
        vqeventtransition->qeventtransition_connectnotify_callback = reinterpret_cast<VirtualQEventTransition::QEventTransition_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QEventTransition_DisconnectNotify(QEventTransition* self, const QMetaMethod* signal) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition) {
        vqeventtransition->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QEventTransition::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QEventTransition_SuperDisconnectNotify(QEventTransition* self, const QMetaMethod* signal) {
    if (auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self)) {
        vqeventtransition->QEventTransition::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QEventTransition::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnDisconnectNotify(QEventTransition* self, intptr_t slot) {
    if (auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self))
        vqeventtransition->qeventtransition_disconnectnotify_callback = reinterpret_cast<VirtualQEventTransition::QEventTransition_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QEventTransition_Sender(const QEventTransition* self) {
    if (auto* vqeventtransition = const_cast<VirtualQEventTransition*>(dynamic_cast<const VirtualQEventTransition*>(self))) {
        return vqeventtransition->VirtualQEventTransition::sender();
    } else
        qFatal("Error: Protected method QEventTransition::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QEventTransition_SenderSignalIndex(const QEventTransition* self) {
    if (auto* vqeventtransition = const_cast<VirtualQEventTransition*>(dynamic_cast<const VirtualQEventTransition*>(self))) {
        return vqeventtransition->VirtualQEventTransition::senderSignalIndex();
    } else
        qFatal("Error: Protected method QEventTransition::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QEventTransition_Receivers(const QEventTransition* self, const char* signal) {
    if (auto* vqeventtransition = const_cast<VirtualQEventTransition*>(dynamic_cast<const VirtualQEventTransition*>(self))) {
        return vqeventtransition->VirtualQEventTransition::receivers(signal);
    } else
        qFatal("Error: Protected method QEventTransition::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QEventTransition_IsSignalConnected(const QEventTransition* self, const QMetaMethod* signal) {
    if (auto* vqeventtransition = const_cast<VirtualQEventTransition*>(dynamic_cast<const VirtualQEventTransition*>(self))) {
        return vqeventtransition->VirtualQEventTransition::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QEventTransition::isSignalConnected called without a directly constructed type");
}

void QEventTransition_Delete(QEventTransition* self) {
    delete self;
}
