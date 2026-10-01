#include <QAbstractTransition>
#include <QChildEvent>
#include <QEvent>
#include <QEventTransition>
#include <QKeyEventTransition>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QString>
#include <QTimerEvent>
#include <qkeyeventtransition.h>
#include "libqkeyeventtransition.h"
#include "libqkeyeventtransition.hxx"

QKeyEventTransition* QKeyEventTransition_new() {
    return new VirtualQKeyEventTransition();
}

QKeyEventTransition* QKeyEventTransition_new2(QObject* object, int typeVal, int key) {
    return new VirtualQKeyEventTransition(object, static_cast<QEvent::Type>(typeVal), static_cast<int>(key));
}

QKeyEventTransition* QKeyEventTransition_new3(QState* sourceState) {
    return new VirtualQKeyEventTransition(sourceState);
}

QKeyEventTransition* QKeyEventTransition_new4(QObject* object, int typeVal, int key, QState* sourceState) {
    return new VirtualQKeyEventTransition(object, static_cast<QEvent::Type>(typeVal), static_cast<int>(key), sourceState);
}

QMetaObject* QKeyEventTransition_MetaObject(const QKeyEventTransition* self) {
    return (QMetaObject*)self->metaObject();
}

void* QKeyEventTransition_Metacast(QKeyEventTransition* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QKeyEventTransition_Metacall(QKeyEventTransition* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QKeyEventTransition_Tr(const char* s) {
    auto _ret = QKeyEventTransition::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QKeyEventTransition_Key(const QKeyEventTransition* self) {
    return self->key();
}

void QKeyEventTransition_SetKey(QKeyEventTransition* self, int key) {
    self->setKey(static_cast<int>(key));
}

int QKeyEventTransition_ModifierMask(const QKeyEventTransition* self) {
    return static_cast<int>(self->modifierMask());
}

void QKeyEventTransition_SetModifierMask(QKeyEventTransition* self, int modifiers) {
    self->setModifierMask(static_cast<Qt::KeyboardModifiers>(modifiers));
}

void QKeyEventTransition_OnTransition(QKeyEventTransition* self, QEvent* event) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition) {
        vqkeyeventtransition->onTransition(event);
    }
}

bool QKeyEventTransition_EventTest(QKeyEventTransition* self, QEvent* event) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition) {
        return vqkeyeventtransition->eventTest(event);
    }
    qFatal("Error: Protected method QKeyEventTransition::eventTest called without a directly constructed type");
}

libqt_string QKeyEventTransition_Tr2(const char* s, const char* c) {
    auto _ret = QKeyEventTransition::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QKeyEventTransition_Tr3(const char* s, const char* c, int n) {
    auto _ret = QKeyEventTransition::tr(s, c, static_cast<int>(n));
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
QMetaObject* QKeyEventTransition_SuperMetaObject(const QKeyEventTransition* self) {
    return (QMetaObject*)self->QKeyEventTransition::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnMetaObject(QKeyEventTransition* self, intptr_t slot) {
    if (auto* vqkeyeventtransition = const_cast<VirtualQKeyEventTransition*>(dynamic_cast<const VirtualQKeyEventTransition*>(self)))
        vqkeyeventtransition->qkeyeventtransition_metaobject_callback = reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QKeyEventTransition_SuperMetacast(QKeyEventTransition* self, const char* param1) {
    return self->QKeyEventTransition::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnMetacast(QKeyEventTransition* self, intptr_t slot) {
    if (auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self))
        vqkeyeventtransition->qkeyeventtransition_metacast_callback = reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_Metacast_Callback>(slot);
}

// Base class handler implementation
int QKeyEventTransition_SuperMetacall(QKeyEventTransition* self, int param1, int param2, void** param3) {
    return self->QKeyEventTransition::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnMetacall(QKeyEventTransition* self, intptr_t slot) {
    if (auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self))
        vqkeyeventtransition->qkeyeventtransition_metacall_callback = reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_Metacall_Callback>(slot);
}

// Base class handler implementation
void QKeyEventTransition_SuperOnTransition(QKeyEventTransition* self, QEvent* event) {
    if (auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self)) {
        vqkeyeventtransition->QKeyEventTransition::onTransition(event);
    } else
        qFatal("Error: Protected virtual method QKeyEventTransition::onTransition called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnOnTransition(QKeyEventTransition* self, intptr_t slot) {
    if (auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self))
        vqkeyeventtransition->qkeyeventtransition_ontransition_callback = reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_OnTransition_Callback>(slot);
}

// Base class handler implementation
bool QKeyEventTransition_SuperEventTest(QKeyEventTransition* self, QEvent* event) {
    if (auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self)) {
        return vqkeyeventtransition->QKeyEventTransition::eventTest(event);
    } else
        qFatal("Error: Protected virtual method QKeyEventTransition::eventTest called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnEventTest(QKeyEventTransition* self, intptr_t slot) {
    if (auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self))
        vqkeyeventtransition->qkeyeventtransition_eventtest_callback = reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_EventTest_Callback>(slot);
}

// Derived class handler implementation
bool QKeyEventTransition_Event(QKeyEventTransition* self, QEvent* e) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition) {
        return vqkeyeventtransition->event(e);
    } else {
        qFatal("Error: Protected virtual method QKeyEventTransition::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QKeyEventTransition_SuperEvent(QKeyEventTransition* self, QEvent* e) {
    if (auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self)) {
        return vqkeyeventtransition->QKeyEventTransition::event(e);
    } else
        qFatal("Error: Protected virtual method QKeyEventTransition::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnEvent(QKeyEventTransition* self, intptr_t slot) {
    if (auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self))
        vqkeyeventtransition->qkeyeventtransition_event_callback = reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_Event_Callback>(slot);
}

// Derived class handler implementation
bool QKeyEventTransition_EventFilter(QKeyEventTransition* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QKeyEventTransition_SuperEventFilter(QKeyEventTransition* self, QObject* watched, QEvent* event) {
    return self->QKeyEventTransition::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnEventFilter(QKeyEventTransition* self, intptr_t slot) {
    if (auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self))
        vqkeyeventtransition->qkeyeventtransition_eventfilter_callback = reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QKeyEventTransition_TimerEvent(QKeyEventTransition* self, QTimerEvent* event) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition) {
        vqkeyeventtransition->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeyEventTransition::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeyEventTransition_SuperTimerEvent(QKeyEventTransition* self, QTimerEvent* event) {
    if (auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self)) {
        vqkeyeventtransition->QKeyEventTransition::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeyEventTransition::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnTimerEvent(QKeyEventTransition* self, intptr_t slot) {
    if (auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self))
        vqkeyeventtransition->qkeyeventtransition_timerevent_callback = reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeyEventTransition_ChildEvent(QKeyEventTransition* self, QChildEvent* event) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition) {
        vqkeyeventtransition->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeyEventTransition::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeyEventTransition_SuperChildEvent(QKeyEventTransition* self, QChildEvent* event) {
    if (auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self)) {
        vqkeyeventtransition->QKeyEventTransition::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeyEventTransition::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnChildEvent(QKeyEventTransition* self, intptr_t slot) {
    if (auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self))
        vqkeyeventtransition->qkeyeventtransition_childevent_callback = reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeyEventTransition_CustomEvent(QKeyEventTransition* self, QEvent* event) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition) {
        vqkeyeventtransition->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeyEventTransition::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeyEventTransition_SuperCustomEvent(QKeyEventTransition* self, QEvent* event) {
    if (auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self)) {
        vqkeyeventtransition->QKeyEventTransition::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeyEventTransition::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnCustomEvent(QKeyEventTransition* self, intptr_t slot) {
    if (auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self))
        vqkeyeventtransition->qkeyeventtransition_customevent_callback = reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeyEventTransition_ConnectNotify(QKeyEventTransition* self, const QMetaMethod* signal) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition) {
        vqkeyeventtransition->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QKeyEventTransition::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeyEventTransition_SuperConnectNotify(QKeyEventTransition* self, const QMetaMethod* signal) {
    if (auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self)) {
        vqkeyeventtransition->QKeyEventTransition::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QKeyEventTransition::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnConnectNotify(QKeyEventTransition* self, intptr_t slot) {
    if (auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self))
        vqkeyeventtransition->qkeyeventtransition_connectnotify_callback = reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QKeyEventTransition_DisconnectNotify(QKeyEventTransition* self, const QMetaMethod* signal) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition) {
        vqkeyeventtransition->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QKeyEventTransition::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeyEventTransition_SuperDisconnectNotify(QKeyEventTransition* self, const QMetaMethod* signal) {
    if (auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self)) {
        vqkeyeventtransition->QKeyEventTransition::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QKeyEventTransition::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnDisconnectNotify(QKeyEventTransition* self, intptr_t slot) {
    if (auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self))
        vqkeyeventtransition->qkeyeventtransition_disconnectnotify_callback = reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QKeyEventTransition_Sender(const QKeyEventTransition* self) {
    if (auto* vqkeyeventtransition = const_cast<VirtualQKeyEventTransition*>(dynamic_cast<const VirtualQKeyEventTransition*>(self))) {
        return vqkeyeventtransition->VirtualQKeyEventTransition::sender();
    } else
        qFatal("Error: Protected method QKeyEventTransition::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QKeyEventTransition_SenderSignalIndex(const QKeyEventTransition* self) {
    if (auto* vqkeyeventtransition = const_cast<VirtualQKeyEventTransition*>(dynamic_cast<const VirtualQKeyEventTransition*>(self))) {
        return vqkeyeventtransition->VirtualQKeyEventTransition::senderSignalIndex();
    } else
        qFatal("Error: Protected method QKeyEventTransition::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QKeyEventTransition_Receivers(const QKeyEventTransition* self, const char* signal) {
    if (auto* vqkeyeventtransition = const_cast<VirtualQKeyEventTransition*>(dynamic_cast<const VirtualQKeyEventTransition*>(self))) {
        return vqkeyeventtransition->VirtualQKeyEventTransition::receivers(signal);
    } else
        qFatal("Error: Protected method QKeyEventTransition::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QKeyEventTransition_IsSignalConnected(const QKeyEventTransition* self, const QMetaMethod* signal) {
    if (auto* vqkeyeventtransition = const_cast<VirtualQKeyEventTransition*>(dynamic_cast<const VirtualQKeyEventTransition*>(self))) {
        return vqkeyeventtransition->VirtualQKeyEventTransition::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QKeyEventTransition::isSignalConnected called without a directly constructed type");
}

void QKeyEventTransition_Delete(QKeyEventTransition* self) {
    delete self;
}
