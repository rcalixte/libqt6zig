#include <QAudioEngine>
#include <QAudioListener>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
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
int QAudioListener_Metacall(QAudioListener* self, int param1, int param2, void** param3) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        return vqaudiolistener->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QAudioListener::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Base class handler implementation
int QAudioListener_QBaseMetacall(QAudioListener* self, int param1, int param2, void** param3) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_Metacall_IsBase(true);
        return vqaudiolistener->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QAudioListener::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnMetacall(QAudioListener* self, intptr_t slot) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_Metacall_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioListener_Event(QAudioListener* self, QEvent* event) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        return vqaudiolistener->event(event);
    } else {
        return self->QAudioListener::event(event);
    }
}

// Base class handler implementation
bool QAudioListener_QBaseEvent(QAudioListener* self, QEvent* event) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_Event_IsBase(true);
        return vqaudiolistener->event(event);
    } else {
        return self->QAudioListener::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnEvent(QAudioListener* self, intptr_t slot) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_Event_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioListener_EventFilter(QAudioListener* self, QObject* watched, QEvent* event) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        return vqaudiolistener->eventFilter(watched, event);
    } else {
        return self->QAudioListener::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAudioListener_QBaseEventFilter(QAudioListener* self, QObject* watched, QEvent* event) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_EventFilter_IsBase(true);
        return vqaudiolistener->eventFilter(watched, event);
    } else {
        return self->QAudioListener::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnEventFilter(QAudioListener* self, intptr_t slot) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_EventFilter_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioListener_TimerEvent(QAudioListener* self, QTimerEvent* event) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->timerEvent(event);
    } else {
        ((VirtualQAudioListener*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAudioListener_QBaseTimerEvent(QAudioListener* self, QTimerEvent* event) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_TimerEvent_IsBase(true);
        vqaudiolistener->timerEvent(event);
    } else {
        ((VirtualQAudioListener*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnTimerEvent(QAudioListener* self, intptr_t slot) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_TimerEvent_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioListener_ChildEvent(QAudioListener* self, QChildEvent* event) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->childEvent(event);
    } else {
        ((VirtualQAudioListener*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAudioListener_QBaseChildEvent(QAudioListener* self, QChildEvent* event) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_ChildEvent_IsBase(true);
        vqaudiolistener->childEvent(event);
    } else {
        ((VirtualQAudioListener*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnChildEvent(QAudioListener* self, intptr_t slot) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_ChildEvent_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioListener_CustomEvent(QAudioListener* self, QEvent* event) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->customEvent(event);
    } else {
        ((VirtualQAudioListener*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAudioListener_QBaseCustomEvent(QAudioListener* self, QEvent* event) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_CustomEvent_IsBase(true);
        vqaudiolistener->customEvent(event);
    } else {
        ((VirtualQAudioListener*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnCustomEvent(QAudioListener* self, intptr_t slot) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_CustomEvent_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioListener_ConnectNotify(QAudioListener* self, const QMetaMethod* signal) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->connectNotify(*signal);
    } else {
        ((VirtualQAudioListener*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAudioListener_QBaseConnectNotify(QAudioListener* self, const QMetaMethod* signal) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_ConnectNotify_IsBase(true);
        vqaudiolistener->connectNotify(*signal);
    } else {
        ((VirtualQAudioListener*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnConnectNotify(QAudioListener* self, intptr_t slot) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_ConnectNotify_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioListener_DisconnectNotify(QAudioListener* self, const QMetaMethod* signal) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->disconnectNotify(*signal);
    } else {
        ((VirtualQAudioListener*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAudioListener_QBaseDisconnectNotify(QAudioListener* self, const QMetaMethod* signal) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_DisconnectNotify_IsBase(true);
        vqaudiolistener->disconnectNotify(*signal);
    } else {
        ((VirtualQAudioListener*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnDisconnectNotify(QAudioListener* self, intptr_t slot) {
    auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self);
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_DisconnectNotify_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAudioListener_Sender(const QAudioListener* self) {
    auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self));
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        return vqaudiolistener->sender();
    } else {
        return ((VirtualQAudioListener*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAudioListener_QBaseSender(const QAudioListener* self) {
    auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self));
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_Sender_IsBase(true);
        return vqaudiolistener->sender();
    } else {
        return ((VirtualQAudioListener*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnSender(const QAudioListener* self, intptr_t slot) {
    auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self));
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_Sender_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAudioListener_SenderSignalIndex(const QAudioListener* self) {
    auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self));
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        return vqaudiolistener->senderSignalIndex();
    } else {
        return ((VirtualQAudioListener*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAudioListener_QBaseSenderSignalIndex(const QAudioListener* self) {
    auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self));
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_SenderSignalIndex_IsBase(true);
        return vqaudiolistener->senderSignalIndex();
    } else {
        return ((VirtualQAudioListener*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnSenderSignalIndex(const QAudioListener* self, intptr_t slot) {
    auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self));
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAudioListener_Receivers(const QAudioListener* self, const char* signal) {
    auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self));
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        return vqaudiolistener->receivers(signal);
    } else {
        return ((VirtualQAudioListener*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAudioListener_QBaseReceivers(const QAudioListener* self, const char* signal) {
    auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self));
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_Receivers_IsBase(true);
        return vqaudiolistener->receivers(signal);
    } else {
        return ((VirtualQAudioListener*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnReceivers(const QAudioListener* self, intptr_t slot) {
    auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self));
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_Receivers_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioListener_IsSignalConnected(const QAudioListener* self, const QMetaMethod* signal) {
    auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self));
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        return vqaudiolistener->isSignalConnected(*signal);
    } else {
        return ((VirtualQAudioListener*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAudioListener_QBaseIsSignalConnected(const QAudioListener* self, const QMetaMethod* signal) {
    auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self));
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_IsSignalConnected_IsBase(true);
        return vqaudiolistener->isSignalConnected(*signal);
    } else {
        return ((VirtualQAudioListener*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnIsSignalConnected(const QAudioListener* self, intptr_t slot) {
    auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self));
    if (vqaudiolistener && vqaudiolistener->isVirtualQAudioListener) {
        vqaudiolistener->setQAudioListener_IsSignalConnected_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_IsSignalConnected_Callback>(slot));
    }
}

void QAudioListener_Delete(QAudioListener* self) {
    delete self;
}
