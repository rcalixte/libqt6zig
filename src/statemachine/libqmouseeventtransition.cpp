#include <QAbstractTransition>
#include <QChildEvent>
#include <QEvent>
#include <QEventTransition>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEventTransition>
#include <QObject>
#include <QPainterPath>
#include <QState>
#include <QString>
#include <QTimerEvent>
#include <qmouseeventtransition.h>
#include "libqmouseeventtransition.h"
#include "libqmouseeventtransition.hxx"

QMouseEventTransition* QMouseEventTransition_new() {
    return new VirtualQMouseEventTransition();
}

QMouseEventTransition* QMouseEventTransition_new2(QObject* object, int typeVal, int button) {
    return new VirtualQMouseEventTransition(object, static_cast<QEvent::Type>(typeVal), static_cast<Qt::MouseButton>(button));
}

QMouseEventTransition* QMouseEventTransition_new3(QState* sourceState) {
    return new VirtualQMouseEventTransition(sourceState);
}

QMouseEventTransition* QMouseEventTransition_new4(QObject* object, int typeVal, int button, QState* sourceState) {
    return new VirtualQMouseEventTransition(object, static_cast<QEvent::Type>(typeVal), static_cast<Qt::MouseButton>(button), sourceState);
}

QMetaObject* QMouseEventTransition_MetaObject(const QMouseEventTransition* self) {
    return (QMetaObject*)self->metaObject();
}

void* QMouseEventTransition_Metacast(QMouseEventTransition* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QMouseEventTransition_Metacall(QMouseEventTransition* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QMouseEventTransition_Tr(const char* s) {
    auto _ret = QMouseEventTransition::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QMouseEventTransition_Button(const QMouseEventTransition* self) {
    return static_cast<int>(self->button());
}

void QMouseEventTransition_SetButton(QMouseEventTransition* self, int button) {
    self->setButton(static_cast<Qt::MouseButton>(button));
}

int QMouseEventTransition_ModifierMask(const QMouseEventTransition* self) {
    return static_cast<int>(self->modifierMask());
}

void QMouseEventTransition_SetModifierMask(QMouseEventTransition* self, int modifiers) {
    self->setModifierMask(static_cast<Qt::KeyboardModifiers>(modifiers));
}

QPainterPath* QMouseEventTransition_HitTestPath(const QMouseEventTransition* self) {
    return new QPainterPath(self->hitTestPath());
}

void QMouseEventTransition_SetHitTestPath(QMouseEventTransition* self, const QPainterPath* path) {
    self->setHitTestPath(*path);
}

void QMouseEventTransition_OnTransition(QMouseEventTransition* self, QEvent* event) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition) {
        vqmouseeventtransition->onTransition(event);
    }
}

bool QMouseEventTransition_EventTest(QMouseEventTransition* self, QEvent* event) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition) {
        return vqmouseeventtransition->eventTest(event);
    }
    qFatal("Error: Protected method QMouseEventTransition::eventTest called without a directly constructed type");
}

libqt_string QMouseEventTransition_Tr2(const char* s, const char* c) {
    auto _ret = QMouseEventTransition::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMouseEventTransition_Tr3(const char* s, const char* c, int n) {
    auto _ret = QMouseEventTransition::tr(s, c, static_cast<int>(n));
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
QMetaObject* QMouseEventTransition_SuperMetaObject(const QMouseEventTransition* self) {
    return (QMetaObject*)self->QMouseEventTransition::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnMetaObject(QMouseEventTransition* self, intptr_t slot) {
    if (auto* vqmouseeventtransition = const_cast<VirtualQMouseEventTransition*>(dynamic_cast<const VirtualQMouseEventTransition*>(self)))
        vqmouseeventtransition->qmouseeventtransition_metaobject_callback = reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QMouseEventTransition_SuperMetacast(QMouseEventTransition* self, const char* param1) {
    return self->QMouseEventTransition::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnMetacast(QMouseEventTransition* self, intptr_t slot) {
    if (auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self))
        vqmouseeventtransition->qmouseeventtransition_metacast_callback = reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_Metacast_Callback>(slot);
}

// Base class handler implementation
int QMouseEventTransition_SuperMetacall(QMouseEventTransition* self, int param1, int param2, void** param3) {
    return self->QMouseEventTransition::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnMetacall(QMouseEventTransition* self, intptr_t slot) {
    if (auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self))
        vqmouseeventtransition->qmouseeventtransition_metacall_callback = reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_Metacall_Callback>(slot);
}

// Base class handler implementation
void QMouseEventTransition_SuperOnTransition(QMouseEventTransition* self, QEvent* event) {
    if (auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self)) {
        vqmouseeventtransition->QMouseEventTransition::onTransition(event);
    } else
        qFatal("Error: Protected virtual method QMouseEventTransition::onTransition called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnOnTransition(QMouseEventTransition* self, intptr_t slot) {
    if (auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self))
        vqmouseeventtransition->qmouseeventtransition_ontransition_callback = reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_OnTransition_Callback>(slot);
}

// Base class handler implementation
bool QMouseEventTransition_SuperEventTest(QMouseEventTransition* self, QEvent* event) {
    if (auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self)) {
        return vqmouseeventtransition->QMouseEventTransition::eventTest(event);
    } else
        qFatal("Error: Protected virtual method QMouseEventTransition::eventTest called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnEventTest(QMouseEventTransition* self, intptr_t slot) {
    if (auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self))
        vqmouseeventtransition->qmouseeventtransition_eventtest_callback = reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_EventTest_Callback>(slot);
}

// Derived class handler implementation
bool QMouseEventTransition_Event(QMouseEventTransition* self, QEvent* e) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition) {
        return vqmouseeventtransition->event(e);
    } else {
        qFatal("Error: Protected virtual method QMouseEventTransition::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QMouseEventTransition_SuperEvent(QMouseEventTransition* self, QEvent* e) {
    if (auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self)) {
        return vqmouseeventtransition->QMouseEventTransition::event(e);
    } else
        qFatal("Error: Protected virtual method QMouseEventTransition::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnEvent(QMouseEventTransition* self, intptr_t slot) {
    if (auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self))
        vqmouseeventtransition->qmouseeventtransition_event_callback = reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_Event_Callback>(slot);
}

// Derived class handler implementation
bool QMouseEventTransition_EventFilter(QMouseEventTransition* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QMouseEventTransition_SuperEventFilter(QMouseEventTransition* self, QObject* watched, QEvent* event) {
    return self->QMouseEventTransition::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnEventFilter(QMouseEventTransition* self, intptr_t slot) {
    if (auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self))
        vqmouseeventtransition->qmouseeventtransition_eventfilter_callback = reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QMouseEventTransition_TimerEvent(QMouseEventTransition* self, QTimerEvent* event) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition) {
        vqmouseeventtransition->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMouseEventTransition::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMouseEventTransition_SuperTimerEvent(QMouseEventTransition* self, QTimerEvent* event) {
    if (auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self)) {
        vqmouseeventtransition->QMouseEventTransition::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QMouseEventTransition::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnTimerEvent(QMouseEventTransition* self, intptr_t slot) {
    if (auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self))
        vqmouseeventtransition->qmouseeventtransition_timerevent_callback = reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QMouseEventTransition_ChildEvent(QMouseEventTransition* self, QChildEvent* event) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition) {
        vqmouseeventtransition->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMouseEventTransition::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMouseEventTransition_SuperChildEvent(QMouseEventTransition* self, QChildEvent* event) {
    if (auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self)) {
        vqmouseeventtransition->QMouseEventTransition::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QMouseEventTransition::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnChildEvent(QMouseEventTransition* self, intptr_t slot) {
    if (auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self))
        vqmouseeventtransition->qmouseeventtransition_childevent_callback = reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QMouseEventTransition_CustomEvent(QMouseEventTransition* self, QEvent* event) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition) {
        vqmouseeventtransition->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMouseEventTransition::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMouseEventTransition_SuperCustomEvent(QMouseEventTransition* self, QEvent* event) {
    if (auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self)) {
        vqmouseeventtransition->QMouseEventTransition::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QMouseEventTransition::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnCustomEvent(QMouseEventTransition* self, intptr_t slot) {
    if (auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self))
        vqmouseeventtransition->qmouseeventtransition_customevent_callback = reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QMouseEventTransition_ConnectNotify(QMouseEventTransition* self, const QMetaMethod* signal) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition) {
        vqmouseeventtransition->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMouseEventTransition::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMouseEventTransition_SuperConnectNotify(QMouseEventTransition* self, const QMetaMethod* signal) {
    if (auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self)) {
        vqmouseeventtransition->QMouseEventTransition::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMouseEventTransition::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnConnectNotify(QMouseEventTransition* self, intptr_t slot) {
    if (auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self))
        vqmouseeventtransition->qmouseeventtransition_connectnotify_callback = reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QMouseEventTransition_DisconnectNotify(QMouseEventTransition* self, const QMetaMethod* signal) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition) {
        vqmouseeventtransition->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMouseEventTransition::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMouseEventTransition_SuperDisconnectNotify(QMouseEventTransition* self, const QMetaMethod* signal) {
    if (auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self)) {
        vqmouseeventtransition->QMouseEventTransition::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMouseEventTransition::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnDisconnectNotify(QMouseEventTransition* self, intptr_t slot) {
    if (auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self))
        vqmouseeventtransition->qmouseeventtransition_disconnectnotify_callback = reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QMouseEventTransition_Sender(const QMouseEventTransition* self) {
    if (auto* vqmouseeventtransition = const_cast<VirtualQMouseEventTransition*>(dynamic_cast<const VirtualQMouseEventTransition*>(self))) {
        return vqmouseeventtransition->VirtualQMouseEventTransition::sender();
    } else
        qFatal("Error: Protected method QMouseEventTransition::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QMouseEventTransition_SenderSignalIndex(const QMouseEventTransition* self) {
    if (auto* vqmouseeventtransition = const_cast<VirtualQMouseEventTransition*>(dynamic_cast<const VirtualQMouseEventTransition*>(self))) {
        return vqmouseeventtransition->VirtualQMouseEventTransition::senderSignalIndex();
    } else
        qFatal("Error: Protected method QMouseEventTransition::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QMouseEventTransition_Receivers(const QMouseEventTransition* self, const char* signal) {
    if (auto* vqmouseeventtransition = const_cast<VirtualQMouseEventTransition*>(dynamic_cast<const VirtualQMouseEventTransition*>(self))) {
        return vqmouseeventtransition->VirtualQMouseEventTransition::receivers(signal);
    } else
        qFatal("Error: Protected method QMouseEventTransition::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMouseEventTransition_IsSignalConnected(const QMouseEventTransition* self, const QMetaMethod* signal) {
    if (auto* vqmouseeventtransition = const_cast<VirtualQMouseEventTransition*>(dynamic_cast<const VirtualQMouseEventTransition*>(self))) {
        return vqmouseeventtransition->VirtualQMouseEventTransition::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QMouseEventTransition::isSignalConnected called without a directly constructed type");
}

void QMouseEventTransition_Delete(QMouseEventTransition* self) {
    delete self;
}
