#include <QAudioEngine>
#include <QAudioListener>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQuaternion>
#include <QTimerEvent>
#include <QVector3D>
#include <qaudiolistener.h>
#include "libqaudiolistener.h"
#include "libqaudiolistener.hxx"

QAudioListener* QAudioListener_new(QAudioEngine* engine) {
    return new VirtualQAudioListener(engine);
}

void QAudioListener_SetPosition(QAudioListener* self, QVector3D* pos) {
    self->setPosition(*pos);
}

QVector3D* QAudioListener_Position(const QAudioListener* self) {
    return new QVector3D(self->position());
}

void QAudioListener_SetRotation(QAudioListener* self, const QQuaternion* q) {
    self->setRotation(*q);
}

QQuaternion* QAudioListener_Rotation(const QAudioListener* self) {
    return new QQuaternion(self->rotation());
}

QAudioEngine* QAudioListener_Engine(const QAudioListener* self) {
    return self->engine();
}

// Derived class handler implementation
QMetaObject* QAudioListener_MetaObject(const QAudioListener* self) {
    return (QMetaObject*)self->metaObject();
}

// Base class handler implementation
QMetaObject* QAudioListener_SuperMetaObject(const QAudioListener* self) {
    return (QMetaObject*)self->QAudioListener::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnMetaObject(QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self)))
        vqaudiolistener->qaudiolistener_metaobject_callback = reinterpret_cast<VirtualQAudioListener::QAudioListener_MetaObject_Callback>(slot);
}

// Derived class handler implementation
void* QAudioListener_Metacast(QAudioListener* self, const char* param1) {
    return self->qt_metacast(param1);
}

// Base class handler implementation
void* QAudioListener_SuperMetacast(QAudioListener* self, const char* param1) {
    return self->QAudioListener::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnMetacast(QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self))
        vqaudiolistener->qaudiolistener_metacast_callback = reinterpret_cast<VirtualQAudioListener::QAudioListener_Metacast_Callback>(slot);
}

// Derived class handler implementation
int QAudioListener_Metacall(QAudioListener* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Base class handler implementation
int QAudioListener_SuperMetacall(QAudioListener* self, int param1, int param2, void** param3) {
    return self->QAudioListener::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnMetacall(QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self))
        vqaudiolistener->qaudiolistener_metacall_callback = reinterpret_cast<VirtualQAudioListener::QAudioListener_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QAudioListener_Event(QAudioListener* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAudioListener_SuperEvent(QAudioListener* self, QEvent* event) {
    return self->QAudioListener::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnEvent(QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self))
        vqaudiolistener->qaudiolistener_event_callback = reinterpret_cast<VirtualQAudioListener::QAudioListener_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAudioListener_EventFilter(QAudioListener* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAudioListener_SuperEventFilter(QAudioListener* self, QObject* watched, QEvent* event) {
    return self->QAudioListener::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnEventFilter(QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self))
        vqaudiolistener->qaudiolistener_eventfilter_callback = reinterpret_cast<VirtualQAudioListener::QAudioListener_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAudioListener_TimerEvent(QAudioListener* self, QTimerEvent* event) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener) {
        vqaudiolistener->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioListener::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioListener_SuperTimerEvent(QAudioListener* self, QTimerEvent* event) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->QAudioListener::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioListener::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnTimerEvent(QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self))
        vqaudiolistener->qaudiolistener_timerevent_callback = reinterpret_cast<VirtualQAudioListener::QAudioListener_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioListener_ChildEvent(QAudioListener* self, QChildEvent* event) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener) {
        vqaudiolistener->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioListener::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioListener_SuperChildEvent(QAudioListener* self, QChildEvent* event) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->QAudioListener::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioListener::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnChildEvent(QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self))
        vqaudiolistener->qaudiolistener_childevent_callback = reinterpret_cast<VirtualQAudioListener::QAudioListener_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioListener_CustomEvent(QAudioListener* self, QEvent* event) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener) {
        vqaudiolistener->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioListener::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioListener_SuperCustomEvent(QAudioListener* self, QEvent* event) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->QAudioListener::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioListener::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnCustomEvent(QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self))
        vqaudiolistener->qaudiolistener_customevent_callback = reinterpret_cast<VirtualQAudioListener::QAudioListener_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioListener_ConnectNotify(QAudioListener* self, const QMetaMethod* signal) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener) {
        vqaudiolistener->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAudioListener::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioListener_SuperConnectNotify(QAudioListener* self, const QMetaMethod* signal) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->QAudioListener::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAudioListener::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnConnectNotify(QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self))
        vqaudiolistener->qaudiolistener_connectnotify_callback = reinterpret_cast<VirtualQAudioListener::QAudioListener_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAudioListener_DisconnectNotify(QAudioListener* self, const QMetaMethod* signal) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener) {
        vqaudiolistener->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAudioListener::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioListener_SuperDisconnectNotify(QAudioListener* self, const QMetaMethod* signal) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->QAudioListener::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAudioListener::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnDisconnectNotify(QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self))
        vqaudiolistener->qaudiolistener_disconnectnotify_callback = reinterpret_cast<VirtualQAudioListener::QAudioListener_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QAudioListener_Sender(const QAudioListener* self) {
    if (auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self))) {
        return vqaudiolistener->VirtualQAudioListener::sender();
    } else
        qFatal("Error: Protected method QAudioListener::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAudioListener_SenderSignalIndex(const QAudioListener* self) {
    if (auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self))) {
        return vqaudiolistener->VirtualQAudioListener::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAudioListener::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAudioListener_Receivers(const QAudioListener* self, const char* signal) {
    if (auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self))) {
        return vqaudiolistener->VirtualQAudioListener::receivers(signal);
    } else
        qFatal("Error: Protected method QAudioListener::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAudioListener_IsSignalConnected(const QAudioListener* self, const QMetaMethod* signal) {
    if (auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self))) {
        return vqaudiolistener->VirtualQAudioListener::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAudioListener::isSignalConnected called without a directly constructed type");
}

void QAudioListener_Delete(QAudioListener* self) {
    delete self;
}
