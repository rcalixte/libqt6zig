#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQuickAttachedPropertyPropagator>
#include <QString>
#include <QTimerEvent>
#include <qquickattachedpropertypropagator.h>
#include "libqquickattachedpropertypropagator.h"
#include "libqquickattachedpropertypropagator.hxx"

QQuickAttachedPropertyPropagator* QQuickAttachedPropertyPropagator_new() {
    return new VirtualQQuickAttachedPropertyPropagator();
}

QQuickAttachedPropertyPropagator* QQuickAttachedPropertyPropagator_new2(QObject* parent) {
    return new VirtualQQuickAttachedPropertyPropagator(parent);
}

QMetaObject* QQuickAttachedPropertyPropagator_MetaObject(const QQuickAttachedPropertyPropagator* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuickAttachedPropertyPropagator_Metacast(QQuickAttachedPropertyPropagator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuickAttachedPropertyPropagator_Metacall(QQuickAttachedPropertyPropagator* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuickAttachedPropertyPropagator_Tr(const char* s) {
    auto _ret = QQuickAttachedPropertyPropagator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QQuickAttachedPropertyPropagator* */ QQuickAttachedPropertyPropagator_AttachedChildren(const QQuickAttachedPropertyPropagator* self) {
    QList<QQuickAttachedPropertyPropagator*> _ret = self->attachedChildren();
    // Convert QList<> from C++ memory to manually-managed C memory
    QQuickAttachedPropertyPropagator** _arr = static_cast<QQuickAttachedPropertyPropagator**>(malloc(sizeof(QQuickAttachedPropertyPropagator*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QQuickAttachedPropertyPropagator* QQuickAttachedPropertyPropagator_AttachedParent(const QQuickAttachedPropertyPropagator* self) {
    return self->attachedParent();
}

void QQuickAttachedPropertyPropagator_AttachedParentChange(QQuickAttachedPropertyPropagator* self, QQuickAttachedPropertyPropagator* newParent, QQuickAttachedPropertyPropagator* oldParent) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->attachedParentChange(newParent, oldParent);
    }
}

libqt_string QQuickAttachedPropertyPropagator_Tr2(const char* s, const char* c) {
    auto _ret = QQuickAttachedPropertyPropagator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuickAttachedPropertyPropagator_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuickAttachedPropertyPropagator::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQuickAttachedPropertyPropagator_SuperMetaObject(const QQuickAttachedPropertyPropagator* self) {
    auto* vqquickattachedpropertypropagator = const_cast<VirtualQQuickAttachedPropertyPropagator*>(dynamic_cast<const VirtualQQuickAttachedPropertyPropagator*>(self));
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_MetaObject_IsBase(true);
        return (QMetaObject*)vqquickattachedpropertypropagator->metaObject();
    } else {
        return (QMetaObject*)self->QQuickAttachedPropertyPropagator::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnMetaObject(const QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    auto* vqquickattachedpropertypropagator = const_cast<VirtualQQuickAttachedPropertyPropagator*>(dynamic_cast<const VirtualQQuickAttachedPropertyPropagator*>(self));
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator)
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_MetaObject_Callback(reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQuickAttachedPropertyPropagator_SuperMetacast(QQuickAttachedPropertyPropagator* self, const char* param1) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_Metacast_IsBase(true);
        return vqquickattachedpropertypropagator->qt_metacast(param1);
    } else {
        return self->QQuickAttachedPropertyPropagator::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnMetacast(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator)
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_Metacast_Callback(reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQuickAttachedPropertyPropagator_SuperMetacall(QQuickAttachedPropertyPropagator* self, int param1, int param2, void** param3) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_Metacall_IsBase(true);
        return vqquickattachedpropertypropagator->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQuickAttachedPropertyPropagator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnMetacall(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator)
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_Metacall_Callback(reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_Metacall_Callback>(slot));
}

// Base class handler implementation
void QQuickAttachedPropertyPropagator_SuperAttachedParentChange(QQuickAttachedPropertyPropagator* self, QQuickAttachedPropertyPropagator* newParent, QQuickAttachedPropertyPropagator* oldParent) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_AttachedParentChange_IsBase(true);
        vqquickattachedpropertypropagator->attachedParentChange(newParent, oldParent);
    } else {
        ((VirtualQQuickAttachedPropertyPropagator*)self)->attachedParentChange(newParent, oldParent);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnAttachedParentChange(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator)
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_AttachedParentChange_Callback(reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_AttachedParentChange_Callback>(slot));
}

// Derived class handler implementation
bool QQuickAttachedPropertyPropagator_Event(QQuickAttachedPropertyPropagator* self, QEvent* event) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        return vqquickattachedpropertypropagator->event(event);
    } else {
        return self->QQuickAttachedPropertyPropagator::event(event);
    }
}

// Base class handler implementation
bool QQuickAttachedPropertyPropagator_SuperEvent(QQuickAttachedPropertyPropagator* self, QEvent* event) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_Event_IsBase(true);
        return vqquickattachedpropertypropagator->event(event);
    } else {
        return self->QQuickAttachedPropertyPropagator::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnEvent(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator)
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_Event_Callback(reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQuickAttachedPropertyPropagator_EventFilter(QQuickAttachedPropertyPropagator* self, QObject* watched, QEvent* event) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        return vqquickattachedpropertypropagator->eventFilter(watched, event);
    } else {
        return self->QQuickAttachedPropertyPropagator::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQuickAttachedPropertyPropagator_SuperEventFilter(QQuickAttachedPropertyPropagator* self, QObject* watched, QEvent* event) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_EventFilter_IsBase(true);
        return vqquickattachedpropertypropagator->eventFilter(watched, event);
    } else {
        return self->QQuickAttachedPropertyPropagator::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnEventFilter(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator)
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_EventFilter_Callback(reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuickAttachedPropertyPropagator_TimerEvent(QQuickAttachedPropertyPropagator* self, QTimerEvent* event) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->timerEvent(event);
    } else {
        ((VirtualQQuickAttachedPropertyPropagator*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQuickAttachedPropertyPropagator_SuperTimerEvent(QQuickAttachedPropertyPropagator* self, QTimerEvent* event) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_TimerEvent_IsBase(true);
        vqquickattachedpropertypropagator->timerEvent(event);
    } else {
        ((VirtualQQuickAttachedPropertyPropagator*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnTimerEvent(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator)
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_TimerEvent_Callback(reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickAttachedPropertyPropagator_ChildEvent(QQuickAttachedPropertyPropagator* self, QChildEvent* event) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->childEvent(event);
    } else {
        ((VirtualQQuickAttachedPropertyPropagator*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQuickAttachedPropertyPropagator_SuperChildEvent(QQuickAttachedPropertyPropagator* self, QChildEvent* event) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_ChildEvent_IsBase(true);
        vqquickattachedpropertypropagator->childEvent(event);
    } else {
        ((VirtualQQuickAttachedPropertyPropagator*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnChildEvent(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator)
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_ChildEvent_Callback(reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickAttachedPropertyPropagator_CustomEvent(QQuickAttachedPropertyPropagator* self, QEvent* event) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->customEvent(event);
    } else {
        ((VirtualQQuickAttachedPropertyPropagator*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQuickAttachedPropertyPropagator_SuperCustomEvent(QQuickAttachedPropertyPropagator* self, QEvent* event) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_CustomEvent_IsBase(true);
        vqquickattachedpropertypropagator->customEvent(event);
    } else {
        ((VirtualQQuickAttachedPropertyPropagator*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnCustomEvent(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator)
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_CustomEvent_Callback(reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickAttachedPropertyPropagator_ConnectNotify(QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->connectNotify(*signal);
    } else {
        ((VirtualQQuickAttachedPropertyPropagator*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickAttachedPropertyPropagator_SuperConnectNotify(QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_ConnectNotify_IsBase(true);
        vqquickattachedpropertypropagator->connectNotify(*signal);
    } else {
        ((VirtualQQuickAttachedPropertyPropagator*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnConnectNotify(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator)
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_ConnectNotify_Callback(reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuickAttachedPropertyPropagator_DisconnectNotify(QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickAttachedPropertyPropagator*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickAttachedPropertyPropagator_SuperDisconnectNotify(QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_DisconnectNotify_IsBase(true);
        vqquickattachedpropertypropagator->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickAttachedPropertyPropagator*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnDisconnectNotify(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator)
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_DisconnectNotify_Callback(reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuickAttachedPropertyPropagator_Initialize(QQuickAttachedPropertyPropagator* self) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->initialize();
    } else {
        ((VirtualQQuickAttachedPropertyPropagator*)self)->initialize();
    }
}

// Base class handler implementation
void QQuickAttachedPropertyPropagator_SuperInitialize(QQuickAttachedPropertyPropagator* self) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_Initialize_IsBase(true);
        vqquickattachedpropertypropagator->initialize();
    } else {
        ((VirtualQQuickAttachedPropertyPropagator*)self)->initialize();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnInitialize(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator)
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_Initialize_Callback(reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_Initialize_Callback>(slot));
}

// Derived class handler implementation
QObject* QQuickAttachedPropertyPropagator_Sender(const QQuickAttachedPropertyPropagator* self) {
    auto* vqquickattachedpropertypropagator = const_cast<VirtualQQuickAttachedPropertyPropagator*>(dynamic_cast<const VirtualQQuickAttachedPropertyPropagator*>(self));
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        return vqquickattachedpropertypropagator->sender();
    } else {
        return ((VirtualQQuickAttachedPropertyPropagator*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQuickAttachedPropertyPropagator_SuperSender(const QQuickAttachedPropertyPropagator* self) {
    auto* vqquickattachedpropertypropagator = const_cast<VirtualQQuickAttachedPropertyPropagator*>(dynamic_cast<const VirtualQQuickAttachedPropertyPropagator*>(self));
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_Sender_IsBase(true);
        return vqquickattachedpropertypropagator->sender();
    } else {
        return ((VirtualQQuickAttachedPropertyPropagator*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnSender(const QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    auto* vqquickattachedpropertypropagator = const_cast<VirtualQQuickAttachedPropertyPropagator*>(dynamic_cast<const VirtualQQuickAttachedPropertyPropagator*>(self));
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator)
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_Sender_Callback(reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQuickAttachedPropertyPropagator_SenderSignalIndex(const QQuickAttachedPropertyPropagator* self) {
    auto* vqquickattachedpropertypropagator = const_cast<VirtualQQuickAttachedPropertyPropagator*>(dynamic_cast<const VirtualQQuickAttachedPropertyPropagator*>(self));
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        return vqquickattachedpropertypropagator->senderSignalIndex();
    } else {
        return ((VirtualQQuickAttachedPropertyPropagator*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQuickAttachedPropertyPropagator_SuperSenderSignalIndex(const QQuickAttachedPropertyPropagator* self) {
    auto* vqquickattachedpropertypropagator = const_cast<VirtualQQuickAttachedPropertyPropagator*>(dynamic_cast<const VirtualQQuickAttachedPropertyPropagator*>(self));
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_SenderSignalIndex_IsBase(true);
        return vqquickattachedpropertypropagator->senderSignalIndex();
    } else {
        return ((VirtualQQuickAttachedPropertyPropagator*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnSenderSignalIndex(const QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    auto* vqquickattachedpropertypropagator = const_cast<VirtualQQuickAttachedPropertyPropagator*>(dynamic_cast<const VirtualQQuickAttachedPropertyPropagator*>(self));
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator)
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQuickAttachedPropertyPropagator_Receivers(const QQuickAttachedPropertyPropagator* self, const char* signal) {
    auto* vqquickattachedpropertypropagator = const_cast<VirtualQQuickAttachedPropertyPropagator*>(dynamic_cast<const VirtualQQuickAttachedPropertyPropagator*>(self));
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        return vqquickattachedpropertypropagator->receivers(signal);
    } else {
        return ((VirtualQQuickAttachedPropertyPropagator*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQuickAttachedPropertyPropagator_SuperReceivers(const QQuickAttachedPropertyPropagator* self, const char* signal) {
    auto* vqquickattachedpropertypropagator = const_cast<VirtualQQuickAttachedPropertyPropagator*>(dynamic_cast<const VirtualQQuickAttachedPropertyPropagator*>(self));
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_Receivers_IsBase(true);
        return vqquickattachedpropertypropagator->receivers(signal);
    } else {
        return ((VirtualQQuickAttachedPropertyPropagator*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnReceivers(const QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    auto* vqquickattachedpropertypropagator = const_cast<VirtualQQuickAttachedPropertyPropagator*>(dynamic_cast<const VirtualQQuickAttachedPropertyPropagator*>(self));
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator)
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_Receivers_Callback(reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQuickAttachedPropertyPropagator_IsSignalConnected(const QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal) {
    auto* vqquickattachedpropertypropagator = const_cast<VirtualQQuickAttachedPropertyPropagator*>(dynamic_cast<const VirtualQQuickAttachedPropertyPropagator*>(self));
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        return vqquickattachedpropertypropagator->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickAttachedPropertyPropagator*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQuickAttachedPropertyPropagator_SuperIsSignalConnected(const QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal) {
    auto* vqquickattachedpropertypropagator = const_cast<VirtualQQuickAttachedPropertyPropagator*>(dynamic_cast<const VirtualQQuickAttachedPropertyPropagator*>(self));
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator) {
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_IsSignalConnected_IsBase(true);
        return vqquickattachedpropertypropagator->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickAttachedPropertyPropagator*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnIsSignalConnected(const QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    auto* vqquickattachedpropertypropagator = const_cast<VirtualQQuickAttachedPropertyPropagator*>(dynamic_cast<const VirtualQQuickAttachedPropertyPropagator*>(self));
    if (vqquickattachedpropertypropagator && vqquickattachedpropertypropagator->isVirtualQQuickAttachedPropertyPropagator)
        vqquickattachedpropertypropagator->setQQuickAttachedPropertyPropagator_IsSignalConnected_Callback(reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_IsSignalConnected_Callback>(slot));
}

void QQuickAttachedPropertyPropagator_Delete(QQuickAttachedPropertyPropagator* self) {
    delete self;
}
