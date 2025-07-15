#include <QChildEvent>
#include <QEvent>
#include <QGraphicsRotation>
#include <QGraphicsScale>
#include <QGraphicsTransform>
#include <QMatrix4x4>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVector3D>
#include <qgraphicstransform.h>
#include "libqgraphicstransform.h"
#include "libqgraphicstransform.hxx"

QGraphicsTransform* QGraphicsTransform_new() {
    return new VirtualQGraphicsTransform();
}

QGraphicsTransform* QGraphicsTransform_new2(QObject* parent) {
    return new VirtualQGraphicsTransform(parent);
}

QMetaObject* QGraphicsTransform_MetaObject(const QGraphicsTransform* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsTransform_Metacast(QGraphicsTransform* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsTransform_Metacall(QGraphicsTransform* self, int param1, int param2, void** param3) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGraphicsTransform*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsTransform_OnMetacall(QGraphicsTransform* self, intptr_t slot) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_Metacall_Callback(reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsTransform_QBaseMetacall(QGraphicsTransform* self, int param1, int param2, void** param3) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_Metacall_IsBase(true);
        return vqgraphicstransform->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGraphicsTransform*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGraphicsTransform_Tr(const char* s) {
    QString _ret = QGraphicsTransform::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsTransform_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsTransform::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsTransform_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsTransform::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QGraphicsTransform_ApplyTo(const QGraphicsTransform* self, QMatrix4x4* matrix) {
    auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self));
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->applyTo(matrix);
    } else {
        ((VirtualQGraphicsTransform*)self)->applyTo(matrix);
    }
}

// Base class handler implementation
void QGraphicsTransform_QBaseApplyTo(const QGraphicsTransform* self, QMatrix4x4* matrix) {
    auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self));
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_ApplyTo_IsBase(true);
        vqgraphicstransform->applyTo(matrix);
    } else {
        ((VirtualQGraphicsTransform*)self)->applyTo(matrix);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnApplyTo(const QGraphicsTransform* self, intptr_t slot) {
    auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self));
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_ApplyTo_Callback(reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_ApplyTo_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsTransform_Event(QGraphicsTransform* self, QEvent* event) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        return vqgraphicstransform->event(event);
    } else {
        return self->QGraphicsTransform::event(event);
    }
}

// Base class handler implementation
bool QGraphicsTransform_QBaseEvent(QGraphicsTransform* self, QEvent* event) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_Event_IsBase(true);
        return vqgraphicstransform->event(event);
    } else {
        return self->QGraphicsTransform::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnEvent(QGraphicsTransform* self, intptr_t slot) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_Event_Callback(reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsTransform_EventFilter(QGraphicsTransform* self, QObject* watched, QEvent* event) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        return vqgraphicstransform->eventFilter(watched, event);
    } else {
        return self->QGraphicsTransform::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsTransform_QBaseEventFilter(QGraphicsTransform* self, QObject* watched, QEvent* event) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_EventFilter_IsBase(true);
        return vqgraphicstransform->eventFilter(watched, event);
    } else {
        return self->QGraphicsTransform::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnEventFilter(QGraphicsTransform* self, intptr_t slot) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTransform_TimerEvent(QGraphicsTransform* self, QTimerEvent* event) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->timerEvent(event);
    } else {
        ((VirtualQGraphicsTransform*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTransform_QBaseTimerEvent(QGraphicsTransform* self, QTimerEvent* event) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_TimerEvent_IsBase(true);
        vqgraphicstransform->timerEvent(event);
    } else {
        ((VirtualQGraphicsTransform*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnTimerEvent(QGraphicsTransform* self, intptr_t slot) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_TimerEvent_Callback(reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTransform_ChildEvent(QGraphicsTransform* self, QChildEvent* event) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->childEvent(event);
    } else {
        ((VirtualQGraphicsTransform*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTransform_QBaseChildEvent(QGraphicsTransform* self, QChildEvent* event) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_ChildEvent_IsBase(true);
        vqgraphicstransform->childEvent(event);
    } else {
        ((VirtualQGraphicsTransform*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnChildEvent(QGraphicsTransform* self, intptr_t slot) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_ChildEvent_Callback(reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTransform_CustomEvent(QGraphicsTransform* self, QEvent* event) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->customEvent(event);
    } else {
        ((VirtualQGraphicsTransform*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTransform_QBaseCustomEvent(QGraphicsTransform* self, QEvent* event) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_CustomEvent_IsBase(true);
        vqgraphicstransform->customEvent(event);
    } else {
        ((VirtualQGraphicsTransform*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnCustomEvent(QGraphicsTransform* self, intptr_t slot) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_CustomEvent_Callback(reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTransform_ConnectNotify(QGraphicsTransform* self, const QMetaMethod* signal) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->connectNotify(*signal);
    } else {
        ((VirtualQGraphicsTransform*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsTransform_QBaseConnectNotify(QGraphicsTransform* self, const QMetaMethod* signal) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_ConnectNotify_IsBase(true);
        vqgraphicstransform->connectNotify(*signal);
    } else {
        ((VirtualQGraphicsTransform*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnConnectNotify(QGraphicsTransform* self, intptr_t slot) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_ConnectNotify_Callback(reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTransform_DisconnectNotify(QGraphicsTransform* self, const QMetaMethod* signal) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->disconnectNotify(*signal);
    } else {
        ((VirtualQGraphicsTransform*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsTransform_QBaseDisconnectNotify(QGraphicsTransform* self, const QMetaMethod* signal) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_DisconnectNotify_IsBase(true);
        vqgraphicstransform->disconnectNotify(*signal);
    } else {
        ((VirtualQGraphicsTransform*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnDisconnectNotify(QGraphicsTransform* self, intptr_t slot) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_DisconnectNotify_Callback(reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTransform_Update(QGraphicsTransform* self) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->update();
    } else {
        ((VirtualQGraphicsTransform*)self)->update();
    }
}

// Base class handler implementation
void QGraphicsTransform_QBaseUpdate(QGraphicsTransform* self) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_Update_IsBase(true);
        vqgraphicstransform->update();
    } else {
        ((VirtualQGraphicsTransform*)self)->update();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnUpdate(QGraphicsTransform* self, intptr_t slot) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_Update_Callback(reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_Update_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGraphicsTransform_Sender(const QGraphicsTransform* self) {
    auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self));
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        return vqgraphicstransform->sender();
    } else {
        return ((VirtualQGraphicsTransform*)self)->sender();
    }
}

// Base class handler implementation
QObject* QGraphicsTransform_QBaseSender(const QGraphicsTransform* self) {
    auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self));
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_Sender_IsBase(true);
        return vqgraphicstransform->sender();
    } else {
        return ((VirtualQGraphicsTransform*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnSender(const QGraphicsTransform* self, intptr_t slot) {
    auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self));
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_Sender_Callback(reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsTransform_SenderSignalIndex(const QGraphicsTransform* self) {
    auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self));
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        return vqgraphicstransform->senderSignalIndex();
    } else {
        return ((VirtualQGraphicsTransform*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QGraphicsTransform_QBaseSenderSignalIndex(const QGraphicsTransform* self) {
    auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self));
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_SenderSignalIndex_IsBase(true);
        return vqgraphicstransform->senderSignalIndex();
    } else {
        return ((VirtualQGraphicsTransform*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnSenderSignalIndex(const QGraphicsTransform* self, intptr_t slot) {
    auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self));
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsTransform_Receivers(const QGraphicsTransform* self, const char* signal) {
    auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self));
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        return vqgraphicstransform->receivers(signal);
    } else {
        return ((VirtualQGraphicsTransform*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QGraphicsTransform_QBaseReceivers(const QGraphicsTransform* self, const char* signal) {
    auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self));
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_Receivers_IsBase(true);
        return vqgraphicstransform->receivers(signal);
    } else {
        return ((VirtualQGraphicsTransform*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnReceivers(const QGraphicsTransform* self, intptr_t slot) {
    auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self));
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_Receivers_Callback(reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsTransform_IsSignalConnected(const QGraphicsTransform* self, const QMetaMethod* signal) {
    auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self));
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        return vqgraphicstransform->isSignalConnected(*signal);
    } else {
        return ((VirtualQGraphicsTransform*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGraphicsTransform_QBaseIsSignalConnected(const QGraphicsTransform* self, const QMetaMethod* signal) {
    auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self));
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_IsSignalConnected_IsBase(true);
        return vqgraphicstransform->isSignalConnected(*signal);
    } else {
        return ((VirtualQGraphicsTransform*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnIsSignalConnected(const QGraphicsTransform* self, intptr_t slot) {
    auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self));
    if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
        vqgraphicstransform->setQGraphicsTransform_IsSignalConnected_Callback(reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_IsSignalConnected_Callback>(slot));
    }
}

void QGraphicsTransform_Delete(QGraphicsTransform* self) {
    delete self;
}

QGraphicsScale* QGraphicsScale_new() {
    return new VirtualQGraphicsScale();
}

QGraphicsScale* QGraphicsScale_new2(QObject* parent) {
    return new VirtualQGraphicsScale(parent);
}

QMetaObject* QGraphicsScale_MetaObject(const QGraphicsScale* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsScale_Metacast(QGraphicsScale* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsScale_Metacall(QGraphicsScale* self, int param1, int param2, void** param3) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGraphicsScale*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsScale_OnMetacall(QGraphicsScale* self, intptr_t slot) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_Metacall_Callback(reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsScale_QBaseMetacall(QGraphicsScale* self, int param1, int param2, void** param3) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_Metacall_IsBase(true);
        return vqgraphicsscale->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGraphicsScale*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGraphicsScale_Tr(const char* s) {
    QString _ret = QGraphicsScale::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVector3D* QGraphicsScale_Origin(const QGraphicsScale* self) {
    return new QVector3D(self->origin());
}

void QGraphicsScale_SetOrigin(QGraphicsScale* self, const QVector3D* point) {
    self->setOrigin(*point);
}

double QGraphicsScale_XScale(const QGraphicsScale* self) {
    return static_cast<double>(self->xScale());
}

void QGraphicsScale_SetXScale(QGraphicsScale* self, double xScale) {
    self->setXScale(static_cast<double>(xScale));
}

double QGraphicsScale_YScale(const QGraphicsScale* self) {
    return static_cast<double>(self->yScale());
}

void QGraphicsScale_SetYScale(QGraphicsScale* self, double yScale) {
    self->setYScale(static_cast<double>(yScale));
}

double QGraphicsScale_ZScale(const QGraphicsScale* self) {
    return static_cast<double>(self->zScale());
}

void QGraphicsScale_SetZScale(QGraphicsScale* self, double zScale) {
    self->setZScale(static_cast<double>(zScale));
}

void QGraphicsScale_OriginChanged(QGraphicsScale* self) {
    self->originChanged();
}

void QGraphicsScale_Connect_OriginChanged(QGraphicsScale* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScale*) = reinterpret_cast<void (*)(QGraphicsScale*)>(slot);
    QGraphicsScale::connect(self, &QGraphicsScale::originChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGraphicsScale_XScaleChanged(QGraphicsScale* self) {
    self->xScaleChanged();
}

void QGraphicsScale_Connect_XScaleChanged(QGraphicsScale* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScale*) = reinterpret_cast<void (*)(QGraphicsScale*)>(slot);
    QGraphicsScale::connect(self, &QGraphicsScale::xScaleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGraphicsScale_YScaleChanged(QGraphicsScale* self) {
    self->yScaleChanged();
}

void QGraphicsScale_Connect_YScaleChanged(QGraphicsScale* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScale*) = reinterpret_cast<void (*)(QGraphicsScale*)>(slot);
    QGraphicsScale::connect(self, &QGraphicsScale::yScaleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGraphicsScale_ZScaleChanged(QGraphicsScale* self) {
    self->zScaleChanged();
}

void QGraphicsScale_Connect_ZScaleChanged(QGraphicsScale* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScale*) = reinterpret_cast<void (*)(QGraphicsScale*)>(slot);
    QGraphicsScale::connect(self, &QGraphicsScale::zScaleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGraphicsScale_ScaleChanged(QGraphicsScale* self) {
    self->scaleChanged();
}

void QGraphicsScale_Connect_ScaleChanged(QGraphicsScale* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScale*) = reinterpret_cast<void (*)(QGraphicsScale*)>(slot);
    QGraphicsScale::connect(self, &QGraphicsScale::scaleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QGraphicsScale_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsScale::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsScale_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsScale::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QGraphicsScale_ApplyTo(const QGraphicsScale* self, QMatrix4x4* matrix) {
    auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self));
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->applyTo(matrix);
    } else {
        self->QGraphicsScale::applyTo(matrix);
    }
}

// Base class handler implementation
void QGraphicsScale_QBaseApplyTo(const QGraphicsScale* self, QMatrix4x4* matrix) {
    auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self));
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_ApplyTo_IsBase(true);
        vqgraphicsscale->applyTo(matrix);
    } else {
        self->QGraphicsScale::applyTo(matrix);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnApplyTo(const QGraphicsScale* self, intptr_t slot) {
    auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self));
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_ApplyTo_Callback(reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_ApplyTo_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsScale_Event(QGraphicsScale* self, QEvent* event) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        return vqgraphicsscale->event(event);
    } else {
        return self->QGraphicsScale::event(event);
    }
}

// Base class handler implementation
bool QGraphicsScale_QBaseEvent(QGraphicsScale* self, QEvent* event) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_Event_IsBase(true);
        return vqgraphicsscale->event(event);
    } else {
        return self->QGraphicsScale::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnEvent(QGraphicsScale* self, intptr_t slot) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_Event_Callback(reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsScale_EventFilter(QGraphicsScale* self, QObject* watched, QEvent* event) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        return vqgraphicsscale->eventFilter(watched, event);
    } else {
        return self->QGraphicsScale::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsScale_QBaseEventFilter(QGraphicsScale* self, QObject* watched, QEvent* event) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_EventFilter_IsBase(true);
        return vqgraphicsscale->eventFilter(watched, event);
    } else {
        return self->QGraphicsScale::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnEventFilter(QGraphicsScale* self, intptr_t slot) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScale_TimerEvent(QGraphicsScale* self, QTimerEvent* event) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->timerEvent(event);
    } else {
        ((VirtualQGraphicsScale*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScale_QBaseTimerEvent(QGraphicsScale* self, QTimerEvent* event) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_TimerEvent_IsBase(true);
        vqgraphicsscale->timerEvent(event);
    } else {
        ((VirtualQGraphicsScale*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnTimerEvent(QGraphicsScale* self, intptr_t slot) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_TimerEvent_Callback(reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScale_ChildEvent(QGraphicsScale* self, QChildEvent* event) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->childEvent(event);
    } else {
        ((VirtualQGraphicsScale*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScale_QBaseChildEvent(QGraphicsScale* self, QChildEvent* event) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_ChildEvent_IsBase(true);
        vqgraphicsscale->childEvent(event);
    } else {
        ((VirtualQGraphicsScale*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnChildEvent(QGraphicsScale* self, intptr_t slot) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_ChildEvent_Callback(reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScale_CustomEvent(QGraphicsScale* self, QEvent* event) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->customEvent(event);
    } else {
        ((VirtualQGraphicsScale*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScale_QBaseCustomEvent(QGraphicsScale* self, QEvent* event) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_CustomEvent_IsBase(true);
        vqgraphicsscale->customEvent(event);
    } else {
        ((VirtualQGraphicsScale*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnCustomEvent(QGraphicsScale* self, intptr_t slot) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_CustomEvent_Callback(reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScale_ConnectNotify(QGraphicsScale* self, const QMetaMethod* signal) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->connectNotify(*signal);
    } else {
        ((VirtualQGraphicsScale*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsScale_QBaseConnectNotify(QGraphicsScale* self, const QMetaMethod* signal) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_ConnectNotify_IsBase(true);
        vqgraphicsscale->connectNotify(*signal);
    } else {
        ((VirtualQGraphicsScale*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnConnectNotify(QGraphicsScale* self, intptr_t slot) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_ConnectNotify_Callback(reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScale_DisconnectNotify(QGraphicsScale* self, const QMetaMethod* signal) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->disconnectNotify(*signal);
    } else {
        ((VirtualQGraphicsScale*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsScale_QBaseDisconnectNotify(QGraphicsScale* self, const QMetaMethod* signal) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_DisconnectNotify_IsBase(true);
        vqgraphicsscale->disconnectNotify(*signal);
    } else {
        ((VirtualQGraphicsScale*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnDisconnectNotify(QGraphicsScale* self, intptr_t slot) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_DisconnectNotify_Callback(reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScale_Update(QGraphicsScale* self) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->update();
    } else {
        ((VirtualQGraphicsScale*)self)->update();
    }
}

// Base class handler implementation
void QGraphicsScale_QBaseUpdate(QGraphicsScale* self) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_Update_IsBase(true);
        vqgraphicsscale->update();
    } else {
        ((VirtualQGraphicsScale*)self)->update();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnUpdate(QGraphicsScale* self, intptr_t slot) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_Update_Callback(reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_Update_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGraphicsScale_Sender(const QGraphicsScale* self) {
    auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self));
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        return vqgraphicsscale->sender();
    } else {
        return ((VirtualQGraphicsScale*)self)->sender();
    }
}

// Base class handler implementation
QObject* QGraphicsScale_QBaseSender(const QGraphicsScale* self) {
    auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self));
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_Sender_IsBase(true);
        return vqgraphicsscale->sender();
    } else {
        return ((VirtualQGraphicsScale*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnSender(const QGraphicsScale* self, intptr_t slot) {
    auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self));
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_Sender_Callback(reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsScale_SenderSignalIndex(const QGraphicsScale* self) {
    auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self));
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        return vqgraphicsscale->senderSignalIndex();
    } else {
        return ((VirtualQGraphicsScale*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QGraphicsScale_QBaseSenderSignalIndex(const QGraphicsScale* self) {
    auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self));
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_SenderSignalIndex_IsBase(true);
        return vqgraphicsscale->senderSignalIndex();
    } else {
        return ((VirtualQGraphicsScale*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnSenderSignalIndex(const QGraphicsScale* self, intptr_t slot) {
    auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self));
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsScale_Receivers(const QGraphicsScale* self, const char* signal) {
    auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self));
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        return vqgraphicsscale->receivers(signal);
    } else {
        return ((VirtualQGraphicsScale*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QGraphicsScale_QBaseReceivers(const QGraphicsScale* self, const char* signal) {
    auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self));
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_Receivers_IsBase(true);
        return vqgraphicsscale->receivers(signal);
    } else {
        return ((VirtualQGraphicsScale*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnReceivers(const QGraphicsScale* self, intptr_t slot) {
    auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self));
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_Receivers_Callback(reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsScale_IsSignalConnected(const QGraphicsScale* self, const QMetaMethod* signal) {
    auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self));
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        return vqgraphicsscale->isSignalConnected(*signal);
    } else {
        return ((VirtualQGraphicsScale*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGraphicsScale_QBaseIsSignalConnected(const QGraphicsScale* self, const QMetaMethod* signal) {
    auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self));
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_IsSignalConnected_IsBase(true);
        return vqgraphicsscale->isSignalConnected(*signal);
    } else {
        return ((VirtualQGraphicsScale*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnIsSignalConnected(const QGraphicsScale* self, intptr_t slot) {
    auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self));
    if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
        vqgraphicsscale->setQGraphicsScale_IsSignalConnected_Callback(reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_IsSignalConnected_Callback>(slot));
    }
}

void QGraphicsScale_Delete(QGraphicsScale* self) {
    delete self;
}

QGraphicsRotation* QGraphicsRotation_new() {
    return new VirtualQGraphicsRotation();
}

QGraphicsRotation* QGraphicsRotation_new2(QObject* parent) {
    return new VirtualQGraphicsRotation(parent);
}

QMetaObject* QGraphicsRotation_MetaObject(const QGraphicsRotation* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsRotation_Metacast(QGraphicsRotation* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsRotation_Metacall(QGraphicsRotation* self, int param1, int param2, void** param3) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGraphicsRotation*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsRotation_OnMetacall(QGraphicsRotation* self, intptr_t slot) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_Metacall_Callback(reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsRotation_QBaseMetacall(QGraphicsRotation* self, int param1, int param2, void** param3) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_Metacall_IsBase(true);
        return vqgraphicsrotation->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGraphicsRotation*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGraphicsRotation_Tr(const char* s) {
    QString _ret = QGraphicsRotation::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVector3D* QGraphicsRotation_Origin(const QGraphicsRotation* self) {
    return new QVector3D(self->origin());
}

void QGraphicsRotation_SetOrigin(QGraphicsRotation* self, const QVector3D* point) {
    self->setOrigin(*point);
}

double QGraphicsRotation_Angle(const QGraphicsRotation* self) {
    return static_cast<double>(self->angle());
}

void QGraphicsRotation_SetAngle(QGraphicsRotation* self, double angle) {
    self->setAngle(static_cast<double>(angle));
}

QVector3D* QGraphicsRotation_Axis(const QGraphicsRotation* self) {
    return new QVector3D(self->axis());
}

void QGraphicsRotation_SetAxis(QGraphicsRotation* self, const QVector3D* axis) {
    self->setAxis(*axis);
}

void QGraphicsRotation_SetAxis2(QGraphicsRotation* self, int axis) {
    self->setAxis(static_cast<Qt::Axis>(axis));
}

void QGraphicsRotation_OriginChanged(QGraphicsRotation* self) {
    self->originChanged();
}

void QGraphicsRotation_Connect_OriginChanged(QGraphicsRotation* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsRotation*) = reinterpret_cast<void (*)(QGraphicsRotation*)>(slot);
    QGraphicsRotation::connect(self, &QGraphicsRotation::originChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGraphicsRotation_AngleChanged(QGraphicsRotation* self) {
    self->angleChanged();
}

void QGraphicsRotation_Connect_AngleChanged(QGraphicsRotation* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsRotation*) = reinterpret_cast<void (*)(QGraphicsRotation*)>(slot);
    QGraphicsRotation::connect(self, &QGraphicsRotation::angleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGraphicsRotation_AxisChanged(QGraphicsRotation* self) {
    self->axisChanged();
}

void QGraphicsRotation_Connect_AxisChanged(QGraphicsRotation* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsRotation*) = reinterpret_cast<void (*)(QGraphicsRotation*)>(slot);
    QGraphicsRotation::connect(self, &QGraphicsRotation::axisChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QGraphicsRotation_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsRotation::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsRotation_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsRotation::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QGraphicsRotation_ApplyTo(const QGraphicsRotation* self, QMatrix4x4* matrix) {
    auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self));
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->applyTo(matrix);
    } else {
        self->QGraphicsRotation::applyTo(matrix);
    }
}

// Base class handler implementation
void QGraphicsRotation_QBaseApplyTo(const QGraphicsRotation* self, QMatrix4x4* matrix) {
    auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self));
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_ApplyTo_IsBase(true);
        vqgraphicsrotation->applyTo(matrix);
    } else {
        self->QGraphicsRotation::applyTo(matrix);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnApplyTo(const QGraphicsRotation* self, intptr_t slot) {
    auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self));
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_ApplyTo_Callback(reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_ApplyTo_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsRotation_Event(QGraphicsRotation* self, QEvent* event) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        return vqgraphicsrotation->event(event);
    } else {
        return self->QGraphicsRotation::event(event);
    }
}

// Base class handler implementation
bool QGraphicsRotation_QBaseEvent(QGraphicsRotation* self, QEvent* event) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_Event_IsBase(true);
        return vqgraphicsrotation->event(event);
    } else {
        return self->QGraphicsRotation::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnEvent(QGraphicsRotation* self, intptr_t slot) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_Event_Callback(reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsRotation_EventFilter(QGraphicsRotation* self, QObject* watched, QEvent* event) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        return vqgraphicsrotation->eventFilter(watched, event);
    } else {
        return self->QGraphicsRotation::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsRotation_QBaseEventFilter(QGraphicsRotation* self, QObject* watched, QEvent* event) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_EventFilter_IsBase(true);
        return vqgraphicsrotation->eventFilter(watched, event);
    } else {
        return self->QGraphicsRotation::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnEventFilter(QGraphicsRotation* self, intptr_t slot) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRotation_TimerEvent(QGraphicsRotation* self, QTimerEvent* event) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->timerEvent(event);
    } else {
        ((VirtualQGraphicsRotation*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRotation_QBaseTimerEvent(QGraphicsRotation* self, QTimerEvent* event) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_TimerEvent_IsBase(true);
        vqgraphicsrotation->timerEvent(event);
    } else {
        ((VirtualQGraphicsRotation*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnTimerEvent(QGraphicsRotation* self, intptr_t slot) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_TimerEvent_Callback(reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRotation_ChildEvent(QGraphicsRotation* self, QChildEvent* event) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->childEvent(event);
    } else {
        ((VirtualQGraphicsRotation*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRotation_QBaseChildEvent(QGraphicsRotation* self, QChildEvent* event) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_ChildEvent_IsBase(true);
        vqgraphicsrotation->childEvent(event);
    } else {
        ((VirtualQGraphicsRotation*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnChildEvent(QGraphicsRotation* self, intptr_t slot) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_ChildEvent_Callback(reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRotation_CustomEvent(QGraphicsRotation* self, QEvent* event) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->customEvent(event);
    } else {
        ((VirtualQGraphicsRotation*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRotation_QBaseCustomEvent(QGraphicsRotation* self, QEvent* event) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_CustomEvent_IsBase(true);
        vqgraphicsrotation->customEvent(event);
    } else {
        ((VirtualQGraphicsRotation*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnCustomEvent(QGraphicsRotation* self, intptr_t slot) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_CustomEvent_Callback(reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRotation_ConnectNotify(QGraphicsRotation* self, const QMetaMethod* signal) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->connectNotify(*signal);
    } else {
        ((VirtualQGraphicsRotation*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsRotation_QBaseConnectNotify(QGraphicsRotation* self, const QMetaMethod* signal) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_ConnectNotify_IsBase(true);
        vqgraphicsrotation->connectNotify(*signal);
    } else {
        ((VirtualQGraphicsRotation*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnConnectNotify(QGraphicsRotation* self, intptr_t slot) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_ConnectNotify_Callback(reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRotation_DisconnectNotify(QGraphicsRotation* self, const QMetaMethod* signal) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->disconnectNotify(*signal);
    } else {
        ((VirtualQGraphicsRotation*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsRotation_QBaseDisconnectNotify(QGraphicsRotation* self, const QMetaMethod* signal) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_DisconnectNotify_IsBase(true);
        vqgraphicsrotation->disconnectNotify(*signal);
    } else {
        ((VirtualQGraphicsRotation*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnDisconnectNotify(QGraphicsRotation* self, intptr_t slot) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_DisconnectNotify_Callback(reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRotation_Update(QGraphicsRotation* self) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->update();
    } else {
        ((VirtualQGraphicsRotation*)self)->update();
    }
}

// Base class handler implementation
void QGraphicsRotation_QBaseUpdate(QGraphicsRotation* self) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_Update_IsBase(true);
        vqgraphicsrotation->update();
    } else {
        ((VirtualQGraphicsRotation*)self)->update();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnUpdate(QGraphicsRotation* self, intptr_t slot) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_Update_Callback(reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_Update_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGraphicsRotation_Sender(const QGraphicsRotation* self) {
    auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self));
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        return vqgraphicsrotation->sender();
    } else {
        return ((VirtualQGraphicsRotation*)self)->sender();
    }
}

// Base class handler implementation
QObject* QGraphicsRotation_QBaseSender(const QGraphicsRotation* self) {
    auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self));
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_Sender_IsBase(true);
        return vqgraphicsrotation->sender();
    } else {
        return ((VirtualQGraphicsRotation*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnSender(const QGraphicsRotation* self, intptr_t slot) {
    auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self));
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_Sender_Callback(reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsRotation_SenderSignalIndex(const QGraphicsRotation* self) {
    auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self));
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        return vqgraphicsrotation->senderSignalIndex();
    } else {
        return ((VirtualQGraphicsRotation*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QGraphicsRotation_QBaseSenderSignalIndex(const QGraphicsRotation* self) {
    auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self));
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_SenderSignalIndex_IsBase(true);
        return vqgraphicsrotation->senderSignalIndex();
    } else {
        return ((VirtualQGraphicsRotation*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnSenderSignalIndex(const QGraphicsRotation* self, intptr_t slot) {
    auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self));
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsRotation_Receivers(const QGraphicsRotation* self, const char* signal) {
    auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self));
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        return vqgraphicsrotation->receivers(signal);
    } else {
        return ((VirtualQGraphicsRotation*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QGraphicsRotation_QBaseReceivers(const QGraphicsRotation* self, const char* signal) {
    auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self));
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_Receivers_IsBase(true);
        return vqgraphicsrotation->receivers(signal);
    } else {
        return ((VirtualQGraphicsRotation*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnReceivers(const QGraphicsRotation* self, intptr_t slot) {
    auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self));
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_Receivers_Callback(reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsRotation_IsSignalConnected(const QGraphicsRotation* self, const QMetaMethod* signal) {
    auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self));
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        return vqgraphicsrotation->isSignalConnected(*signal);
    } else {
        return ((VirtualQGraphicsRotation*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGraphicsRotation_QBaseIsSignalConnected(const QGraphicsRotation* self, const QMetaMethod* signal) {
    auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self));
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_IsSignalConnected_IsBase(true);
        return vqgraphicsrotation->isSignalConnected(*signal);
    } else {
        return ((VirtualQGraphicsRotation*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnIsSignalConnected(const QGraphicsRotation* self, intptr_t slot) {
    auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self));
    if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
        vqgraphicsrotation->setQGraphicsRotation_IsSignalConnected_Callback(reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_IsSignalConnected_Callback>(slot));
    }
}

void QGraphicsRotation_Delete(QGraphicsRotation* self) {
    delete self;
}
