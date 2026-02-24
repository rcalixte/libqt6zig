#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QOpenGLVertexArrayObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLVertexArrayObject__Binder
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qopenglvertexarrayobject.h>
#include "libqopenglvertexarrayobject.h"
#include "libqopenglvertexarrayobject.hxx"

QOpenGLVertexArrayObject* QOpenGLVertexArrayObject_new() {
    return new VirtualQOpenGLVertexArrayObject();
}

QOpenGLVertexArrayObject* QOpenGLVertexArrayObject_new2(QObject* parent) {
    return new VirtualQOpenGLVertexArrayObject(parent);
}

QMetaObject* QOpenGLVertexArrayObject_MetaObject(const QOpenGLVertexArrayObject* self) {
    auto* vqopenglvertexarrayobject = dynamic_cast<const VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQOpenGLVertexArrayObject*)self)->metaObject();
    }
}

void* QOpenGLVertexArrayObject_Metacast(QOpenGLVertexArrayObject* self, const char* param1) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQOpenGLVertexArrayObject*)self)->qt_metacast(param1);
    }
}

int QOpenGLVertexArrayObject_Metacall(QOpenGLVertexArrayObject* self, int param1, int param2, void** param3) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQOpenGLVertexArrayObject*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

bool QOpenGLVertexArrayObject_Create(QOpenGLVertexArrayObject* self) {
    return self->create();
}

void QOpenGLVertexArrayObject_Destroy(QOpenGLVertexArrayObject* self) {
    self->destroy();
}

bool QOpenGLVertexArrayObject_IsCreated(const QOpenGLVertexArrayObject* self) {
    return self->isCreated();
}

uint32_t QOpenGLVertexArrayObject_ObjectId(const QOpenGLVertexArrayObject* self) {
    return self->objectId();
}

void QOpenGLVertexArrayObject_Bind(QOpenGLVertexArrayObject* self) {
    self->bind();
}

void QOpenGLVertexArrayObject_Release(QOpenGLVertexArrayObject* self) {
    self->release();
}

// Base class handler implementation
QMetaObject* QOpenGLVertexArrayObject_SuperMetaObject(const QOpenGLVertexArrayObject* self) {
    auto* vqopenglvertexarrayobject = const_cast<VirtualQOpenGLVertexArrayObject*>(dynamic_cast<const VirtualQOpenGLVertexArrayObject*>(self));
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_MetaObject_IsBase(true);
        return (QMetaObject*)vqopenglvertexarrayobject->metaObject();
    } else {
        return (QMetaObject*)self->QOpenGLVertexArrayObject::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnMetaObject(const QOpenGLVertexArrayObject* self, intptr_t slot) {
    auto* vqopenglvertexarrayobject = const_cast<VirtualQOpenGLVertexArrayObject*>(dynamic_cast<const VirtualQOpenGLVertexArrayObject*>(self));
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_MetaObject_Callback(reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QOpenGLVertexArrayObject_SuperMetacast(QOpenGLVertexArrayObject* self, const char* param1) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_Metacast_IsBase(true);
        return vqopenglvertexarrayobject->qt_metacast(param1);
    } else {
        return self->QOpenGLVertexArrayObject::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnMetacast(QOpenGLVertexArrayObject* self, intptr_t slot) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_Metacast_Callback(reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QOpenGLVertexArrayObject_SuperMetacall(QOpenGLVertexArrayObject* self, int param1, int param2, void** param3) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_Metacall_IsBase(true);
        return vqopenglvertexarrayobject->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QOpenGLVertexArrayObject::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnMetacall(QOpenGLVertexArrayObject* self, intptr_t slot) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_Metacall_Callback(reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLVertexArrayObject_Event(QOpenGLVertexArrayObject* self, QEvent* event) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        return vqopenglvertexarrayobject->event(event);
    } else {
        return self->QOpenGLVertexArrayObject::event(event);
    }
}

// Base class handler implementation
bool QOpenGLVertexArrayObject_SuperEvent(QOpenGLVertexArrayObject* self, QEvent* event) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_Event_IsBase(true);
        return vqopenglvertexarrayobject->event(event);
    } else {
        return self->QOpenGLVertexArrayObject::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnEvent(QOpenGLVertexArrayObject* self, intptr_t slot) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_Event_Callback(reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLVertexArrayObject_EventFilter(QOpenGLVertexArrayObject* self, QObject* watched, QEvent* event) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        return vqopenglvertexarrayobject->eventFilter(watched, event);
    } else {
        return self->QOpenGLVertexArrayObject::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QOpenGLVertexArrayObject_SuperEventFilter(QOpenGLVertexArrayObject* self, QObject* watched, QEvent* event) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_EventFilter_IsBase(true);
        return vqopenglvertexarrayobject->eventFilter(watched, event);
    } else {
        return self->QOpenGLVertexArrayObject::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnEventFilter(QOpenGLVertexArrayObject* self, intptr_t slot) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_EventFilter_Callback(reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLVertexArrayObject_TimerEvent(QOpenGLVertexArrayObject* self, QTimerEvent* event) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->timerEvent(event);
    } else {
        ((VirtualQOpenGLVertexArrayObject*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QOpenGLVertexArrayObject_SuperTimerEvent(QOpenGLVertexArrayObject* self, QTimerEvent* event) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_TimerEvent_IsBase(true);
        vqopenglvertexarrayobject->timerEvent(event);
    } else {
        ((VirtualQOpenGLVertexArrayObject*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnTimerEvent(QOpenGLVertexArrayObject* self, intptr_t slot) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_TimerEvent_Callback(reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLVertexArrayObject_ChildEvent(QOpenGLVertexArrayObject* self, QChildEvent* event) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->childEvent(event);
    } else {
        ((VirtualQOpenGLVertexArrayObject*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QOpenGLVertexArrayObject_SuperChildEvent(QOpenGLVertexArrayObject* self, QChildEvent* event) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_ChildEvent_IsBase(true);
        vqopenglvertexarrayobject->childEvent(event);
    } else {
        ((VirtualQOpenGLVertexArrayObject*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnChildEvent(QOpenGLVertexArrayObject* self, intptr_t slot) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_ChildEvent_Callback(reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLVertexArrayObject_CustomEvent(QOpenGLVertexArrayObject* self, QEvent* event) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->customEvent(event);
    } else {
        ((VirtualQOpenGLVertexArrayObject*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QOpenGLVertexArrayObject_SuperCustomEvent(QOpenGLVertexArrayObject* self, QEvent* event) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_CustomEvent_IsBase(true);
        vqopenglvertexarrayobject->customEvent(event);
    } else {
        ((VirtualQOpenGLVertexArrayObject*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnCustomEvent(QOpenGLVertexArrayObject* self, intptr_t slot) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_CustomEvent_Callback(reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLVertexArrayObject_ConnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->connectNotify(*signal);
    } else {
        ((VirtualQOpenGLVertexArrayObject*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QOpenGLVertexArrayObject_SuperConnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_ConnectNotify_IsBase(true);
        vqopenglvertexarrayobject->connectNotify(*signal);
    } else {
        ((VirtualQOpenGLVertexArrayObject*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnConnectNotify(QOpenGLVertexArrayObject* self, intptr_t slot) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_ConnectNotify_Callback(reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLVertexArrayObject_DisconnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->disconnectNotify(*signal);
    } else {
        ((VirtualQOpenGLVertexArrayObject*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QOpenGLVertexArrayObject_SuperDisconnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_DisconnectNotify_IsBase(true);
        vqopenglvertexarrayobject->disconnectNotify(*signal);
    } else {
        ((VirtualQOpenGLVertexArrayObject*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnDisconnectNotify(QOpenGLVertexArrayObject* self, intptr_t slot) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_DisconnectNotify_Callback(reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QOpenGLVertexArrayObject_Sender(const QOpenGLVertexArrayObject* self) {
    auto* vqopenglvertexarrayobject = const_cast<VirtualQOpenGLVertexArrayObject*>(dynamic_cast<const VirtualQOpenGLVertexArrayObject*>(self));
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        return vqopenglvertexarrayobject->sender();
    } else {
        return ((VirtualQOpenGLVertexArrayObject*)self)->sender();
    }
}

// Base class handler implementation
QObject* QOpenGLVertexArrayObject_SuperSender(const QOpenGLVertexArrayObject* self) {
    auto* vqopenglvertexarrayobject = const_cast<VirtualQOpenGLVertexArrayObject*>(dynamic_cast<const VirtualQOpenGLVertexArrayObject*>(self));
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_Sender_IsBase(true);
        return vqopenglvertexarrayobject->sender();
    } else {
        return ((VirtualQOpenGLVertexArrayObject*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnSender(const QOpenGLVertexArrayObject* self, intptr_t slot) {
    auto* vqopenglvertexarrayobject = const_cast<VirtualQOpenGLVertexArrayObject*>(dynamic_cast<const VirtualQOpenGLVertexArrayObject*>(self));
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_Sender_Callback(reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QOpenGLVertexArrayObject_SenderSignalIndex(const QOpenGLVertexArrayObject* self) {
    auto* vqopenglvertexarrayobject = const_cast<VirtualQOpenGLVertexArrayObject*>(dynamic_cast<const VirtualQOpenGLVertexArrayObject*>(self));
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        return vqopenglvertexarrayobject->senderSignalIndex();
    } else {
        return ((VirtualQOpenGLVertexArrayObject*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QOpenGLVertexArrayObject_SuperSenderSignalIndex(const QOpenGLVertexArrayObject* self) {
    auto* vqopenglvertexarrayobject = const_cast<VirtualQOpenGLVertexArrayObject*>(dynamic_cast<const VirtualQOpenGLVertexArrayObject*>(self));
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_SenderSignalIndex_IsBase(true);
        return vqopenglvertexarrayobject->senderSignalIndex();
    } else {
        return ((VirtualQOpenGLVertexArrayObject*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnSenderSignalIndex(const QOpenGLVertexArrayObject* self, intptr_t slot) {
    auto* vqopenglvertexarrayobject = const_cast<VirtualQOpenGLVertexArrayObject*>(dynamic_cast<const VirtualQOpenGLVertexArrayObject*>(self));
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_SenderSignalIndex_Callback(reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QOpenGLVertexArrayObject_Receivers(const QOpenGLVertexArrayObject* self, const char* signal) {
    auto* vqopenglvertexarrayobject = const_cast<VirtualQOpenGLVertexArrayObject*>(dynamic_cast<const VirtualQOpenGLVertexArrayObject*>(self));
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        return vqopenglvertexarrayobject->receivers(signal);
    } else {
        return ((VirtualQOpenGLVertexArrayObject*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QOpenGLVertexArrayObject_SuperReceivers(const QOpenGLVertexArrayObject* self, const char* signal) {
    auto* vqopenglvertexarrayobject = const_cast<VirtualQOpenGLVertexArrayObject*>(dynamic_cast<const VirtualQOpenGLVertexArrayObject*>(self));
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_Receivers_IsBase(true);
        return vqopenglvertexarrayobject->receivers(signal);
    } else {
        return ((VirtualQOpenGLVertexArrayObject*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnReceivers(const QOpenGLVertexArrayObject* self, intptr_t slot) {
    auto* vqopenglvertexarrayobject = const_cast<VirtualQOpenGLVertexArrayObject*>(dynamic_cast<const VirtualQOpenGLVertexArrayObject*>(self));
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_Receivers_Callback(reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLVertexArrayObject_IsSignalConnected(const QOpenGLVertexArrayObject* self, const QMetaMethod* signal) {
    auto* vqopenglvertexarrayobject = const_cast<VirtualQOpenGLVertexArrayObject*>(dynamic_cast<const VirtualQOpenGLVertexArrayObject*>(self));
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        return vqopenglvertexarrayobject->isSignalConnected(*signal);
    } else {
        return ((VirtualQOpenGLVertexArrayObject*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QOpenGLVertexArrayObject_SuperIsSignalConnected(const QOpenGLVertexArrayObject* self, const QMetaMethod* signal) {
    auto* vqopenglvertexarrayobject = const_cast<VirtualQOpenGLVertexArrayObject*>(dynamic_cast<const VirtualQOpenGLVertexArrayObject*>(self));
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_IsSignalConnected_IsBase(true);
        return vqopenglvertexarrayobject->isSignalConnected(*signal);
    } else {
        return ((VirtualQOpenGLVertexArrayObject*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnIsSignalConnected(const QOpenGLVertexArrayObject* self, intptr_t slot) {
    auto* vqopenglvertexarrayobject = const_cast<VirtualQOpenGLVertexArrayObject*>(dynamic_cast<const VirtualQOpenGLVertexArrayObject*>(self));
    if (vqopenglvertexarrayobject && vqopenglvertexarrayobject->isVirtualQOpenGLVertexArrayObject) {
        vqopenglvertexarrayobject->setQOpenGLVertexArrayObject_IsSignalConnected_Callback(reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_IsSignalConnected_Callback>(slot));
    }
}

void QOpenGLVertexArrayObject_Delete(QOpenGLVertexArrayObject* self) {
    delete self;
}

QOpenGLVertexArrayObject__Binder* QOpenGLVertexArrayObject__Binder_new(QOpenGLVertexArrayObject* v) {
    return new QOpenGLVertexArrayObject::Binder(v);
}

void QOpenGLVertexArrayObject__Binder_Release(QOpenGLVertexArrayObject__Binder* self) {
    self->release();
}

void QOpenGLVertexArrayObject__Binder_Rebind(QOpenGLVertexArrayObject__Binder* self) {
    self->rebind();
}

void QOpenGLVertexArrayObject__Binder_Delete(QOpenGLVertexArrayObject__Binder* self) {
    delete self;
}
