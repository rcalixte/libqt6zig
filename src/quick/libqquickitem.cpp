#include <QChildEvent>
#include <QCursor>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHoverEvent>
#include <QInputMethodEvent>
#include <QJSValue>
#include <QKeyEvent>
#include <QList>
#include <QMatrix4x4>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QObject>
#include <QPointF>
#include <QQmlParserStatus>
#include <QQuickItem>
#define WORKAROUND_INNER_CLASS_DEFINITION_QQuickItem__ItemChangeData
#define WORKAROUND_INNER_CLASS_DEFINITION_QQuickItem__UpdatePaintNodeData
#include <QQuickTransform>
#include <QQuickWindow>
#include <QRectF>
#include <QSGNode>
#include <QSGTextureProvider>
#include <QSGTransformNode>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QTimerEvent>
#include <QTouchEvent>
#include <QTransform>
#include <QVariant>
#include <QWheelEvent>
#include <qquickitem.h>
#include "libqquickitem.h"
#include "libqquickitem.hxx"

QQuickTransform* QQuickTransform_new() {
    return new VirtualQQuickTransform();
}

QQuickTransform* QQuickTransform_new2(QObject* parent) {
    return new VirtualQQuickTransform(parent);
}

QMetaObject* QQuickTransform_MetaObject(const QQuickTransform* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuickTransform_Metacast(QQuickTransform* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuickTransform_Metacall(QQuickTransform* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuickTransform_Tr(const char* s) {
    auto _ret = QQuickTransform::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickTransform_AppendToItem(QQuickTransform* self, QQuickItem* param1) {
    self->appendToItem(param1);
}

void QQuickTransform_PrependToItem(QQuickTransform* self, QQuickItem* param1) {
    self->prependToItem(param1);
}

void QQuickTransform_ApplyTo(const QQuickTransform* self, QMatrix4x4* matrix) {
    self->applyTo(matrix);
}

libqt_string QQuickTransform_Tr2(const char* s, const char* c) {
    auto _ret = QQuickTransform::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuickTransform_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuickTransform::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQuickTransform_SuperMetaObject(const QQuickTransform* self) {
    auto* vqquicktransform = const_cast<VirtualQQuickTransform*>(dynamic_cast<const VirtualQQuickTransform*>(self));
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->setQQuickTransform_MetaObject_IsBase(true);
        return (QMetaObject*)vqquicktransform->metaObject();
    } else {
        return (QMetaObject*)self->QQuickTransform::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTransform_OnMetaObject(const QQuickTransform* self, intptr_t slot) {
    auto* vqquicktransform = const_cast<VirtualQQuickTransform*>(dynamic_cast<const VirtualQQuickTransform*>(self));
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform)
        vqquicktransform->setQQuickTransform_MetaObject_Callback(reinterpret_cast<VirtualQQuickTransform::QQuickTransform_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQuickTransform_SuperMetacast(QQuickTransform* self, const char* param1) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->setQQuickTransform_Metacast_IsBase(true);
        return vqquicktransform->qt_metacast(param1);
    } else {
        return self->QQuickTransform::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTransform_OnMetacast(QQuickTransform* self, intptr_t slot) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform)
        vqquicktransform->setQQuickTransform_Metacast_Callback(reinterpret_cast<VirtualQQuickTransform::QQuickTransform_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQuickTransform_SuperMetacall(QQuickTransform* self, int param1, int param2, void** param3) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->setQQuickTransform_Metacall_IsBase(true);
        return vqquicktransform->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQuickTransform::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTransform_OnMetacall(QQuickTransform* self, intptr_t slot) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform)
        vqquicktransform->setQQuickTransform_Metacall_Callback(reinterpret_cast<VirtualQQuickTransform::QQuickTransform_Metacall_Callback>(slot));
}

// Base class handler implementation
void QQuickTransform_SuperApplyTo(const QQuickTransform* self, QMatrix4x4* matrix) {
    auto* vqquicktransform = const_cast<VirtualQQuickTransform*>(dynamic_cast<const VirtualQQuickTransform*>(self));
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->setQQuickTransform_ApplyTo_IsBase(true);
        vqquicktransform->applyTo(matrix);
    } else {
        ((VirtualQQuickTransform*)self)->applyTo(matrix);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTransform_OnApplyTo(const QQuickTransform* self, intptr_t slot) {
    auto* vqquicktransform = const_cast<VirtualQQuickTransform*>(dynamic_cast<const VirtualQQuickTransform*>(self));
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform)
        vqquicktransform->setQQuickTransform_ApplyTo_Callback(reinterpret_cast<VirtualQQuickTransform::QQuickTransform_ApplyTo_Callback>(slot));
}

// Derived class handler implementation
bool QQuickTransform_Event(QQuickTransform* self, QEvent* event) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        return vqquicktransform->event(event);
    } else {
        return self->QQuickTransform::event(event);
    }
}

// Base class handler implementation
bool QQuickTransform_SuperEvent(QQuickTransform* self, QEvent* event) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->setQQuickTransform_Event_IsBase(true);
        return vqquicktransform->event(event);
    } else {
        return self->QQuickTransform::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTransform_OnEvent(QQuickTransform* self, intptr_t slot) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform)
        vqquicktransform->setQQuickTransform_Event_Callback(reinterpret_cast<VirtualQQuickTransform::QQuickTransform_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQuickTransform_EventFilter(QQuickTransform* self, QObject* watched, QEvent* event) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        return vqquicktransform->eventFilter(watched, event);
    } else {
        return self->QQuickTransform::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQuickTransform_SuperEventFilter(QQuickTransform* self, QObject* watched, QEvent* event) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->setQQuickTransform_EventFilter_IsBase(true);
        return vqquicktransform->eventFilter(watched, event);
    } else {
        return self->QQuickTransform::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTransform_OnEventFilter(QQuickTransform* self, intptr_t slot) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform)
        vqquicktransform->setQQuickTransform_EventFilter_Callback(reinterpret_cast<VirtualQQuickTransform::QQuickTransform_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuickTransform_TimerEvent(QQuickTransform* self, QTimerEvent* event) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->timerEvent(event);
    } else {
        ((VirtualQQuickTransform*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQuickTransform_SuperTimerEvent(QQuickTransform* self, QTimerEvent* event) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->setQQuickTransform_TimerEvent_IsBase(true);
        vqquicktransform->timerEvent(event);
    } else {
        ((VirtualQQuickTransform*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTransform_OnTimerEvent(QQuickTransform* self, intptr_t slot) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform)
        vqquicktransform->setQQuickTransform_TimerEvent_Callback(reinterpret_cast<VirtualQQuickTransform::QQuickTransform_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickTransform_ChildEvent(QQuickTransform* self, QChildEvent* event) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->childEvent(event);
    } else {
        ((VirtualQQuickTransform*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQuickTransform_SuperChildEvent(QQuickTransform* self, QChildEvent* event) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->setQQuickTransform_ChildEvent_IsBase(true);
        vqquicktransform->childEvent(event);
    } else {
        ((VirtualQQuickTransform*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTransform_OnChildEvent(QQuickTransform* self, intptr_t slot) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform)
        vqquicktransform->setQQuickTransform_ChildEvent_Callback(reinterpret_cast<VirtualQQuickTransform::QQuickTransform_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickTransform_CustomEvent(QQuickTransform* self, QEvent* event) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->customEvent(event);
    } else {
        ((VirtualQQuickTransform*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQuickTransform_SuperCustomEvent(QQuickTransform* self, QEvent* event) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->setQQuickTransform_CustomEvent_IsBase(true);
        vqquicktransform->customEvent(event);
    } else {
        ((VirtualQQuickTransform*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTransform_OnCustomEvent(QQuickTransform* self, intptr_t slot) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform)
        vqquicktransform->setQQuickTransform_CustomEvent_Callback(reinterpret_cast<VirtualQQuickTransform::QQuickTransform_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickTransform_ConnectNotify(QQuickTransform* self, const QMetaMethod* signal) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->connectNotify(*signal);
    } else {
        ((VirtualQQuickTransform*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickTransform_SuperConnectNotify(QQuickTransform* self, const QMetaMethod* signal) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->setQQuickTransform_ConnectNotify_IsBase(true);
        vqquicktransform->connectNotify(*signal);
    } else {
        ((VirtualQQuickTransform*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTransform_OnConnectNotify(QQuickTransform* self, intptr_t slot) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform)
        vqquicktransform->setQQuickTransform_ConnectNotify_Callback(reinterpret_cast<VirtualQQuickTransform::QQuickTransform_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuickTransform_DisconnectNotify(QQuickTransform* self, const QMetaMethod* signal) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickTransform*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickTransform_SuperDisconnectNotify(QQuickTransform* self, const QMetaMethod* signal) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->setQQuickTransform_DisconnectNotify_IsBase(true);
        vqquicktransform->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickTransform*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTransform_OnDisconnectNotify(QQuickTransform* self, intptr_t slot) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform)
        vqquicktransform->setQQuickTransform_DisconnectNotify_Callback(reinterpret_cast<VirtualQQuickTransform::QQuickTransform_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuickTransform_Update(QQuickTransform* self) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->update();
    } else {
        ((VirtualQQuickTransform*)self)->update();
    }
}

// Base class handler implementation
void QQuickTransform_SuperUpdate(QQuickTransform* self) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->setQQuickTransform_Update_IsBase(true);
        vqquicktransform->update();
    } else {
        ((VirtualQQuickTransform*)self)->update();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTransform_OnUpdate(QQuickTransform* self, intptr_t slot) {
    auto* vqquicktransform = dynamic_cast<VirtualQQuickTransform*>(self);
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform)
        vqquicktransform->setQQuickTransform_Update_Callback(reinterpret_cast<VirtualQQuickTransform::QQuickTransform_Update_Callback>(slot));
}

// Derived class handler implementation
QObject* QQuickTransform_Sender(const QQuickTransform* self) {
    auto* vqquicktransform = const_cast<VirtualQQuickTransform*>(dynamic_cast<const VirtualQQuickTransform*>(self));
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        return vqquicktransform->sender();
    } else {
        return ((VirtualQQuickTransform*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQuickTransform_SuperSender(const QQuickTransform* self) {
    auto* vqquicktransform = const_cast<VirtualQQuickTransform*>(dynamic_cast<const VirtualQQuickTransform*>(self));
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->setQQuickTransform_Sender_IsBase(true);
        return vqquicktransform->sender();
    } else {
        return ((VirtualQQuickTransform*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTransform_OnSender(const QQuickTransform* self, intptr_t slot) {
    auto* vqquicktransform = const_cast<VirtualQQuickTransform*>(dynamic_cast<const VirtualQQuickTransform*>(self));
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform)
        vqquicktransform->setQQuickTransform_Sender_Callback(reinterpret_cast<VirtualQQuickTransform::QQuickTransform_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQuickTransform_SenderSignalIndex(const QQuickTransform* self) {
    auto* vqquicktransform = const_cast<VirtualQQuickTransform*>(dynamic_cast<const VirtualQQuickTransform*>(self));
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        return vqquicktransform->senderSignalIndex();
    } else {
        return ((VirtualQQuickTransform*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQuickTransform_SuperSenderSignalIndex(const QQuickTransform* self) {
    auto* vqquicktransform = const_cast<VirtualQQuickTransform*>(dynamic_cast<const VirtualQQuickTransform*>(self));
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->setQQuickTransform_SenderSignalIndex_IsBase(true);
        return vqquicktransform->senderSignalIndex();
    } else {
        return ((VirtualQQuickTransform*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTransform_OnSenderSignalIndex(const QQuickTransform* self, intptr_t slot) {
    auto* vqquicktransform = const_cast<VirtualQQuickTransform*>(dynamic_cast<const VirtualQQuickTransform*>(self));
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform)
        vqquicktransform->setQQuickTransform_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQuickTransform::QQuickTransform_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQuickTransform_Receivers(const QQuickTransform* self, const char* signal) {
    auto* vqquicktransform = const_cast<VirtualQQuickTransform*>(dynamic_cast<const VirtualQQuickTransform*>(self));
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        return vqquicktransform->receivers(signal);
    } else {
        return ((VirtualQQuickTransform*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQuickTransform_SuperReceivers(const QQuickTransform* self, const char* signal) {
    auto* vqquicktransform = const_cast<VirtualQQuickTransform*>(dynamic_cast<const VirtualQQuickTransform*>(self));
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->setQQuickTransform_Receivers_IsBase(true);
        return vqquicktransform->receivers(signal);
    } else {
        return ((VirtualQQuickTransform*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTransform_OnReceivers(const QQuickTransform* self, intptr_t slot) {
    auto* vqquicktransform = const_cast<VirtualQQuickTransform*>(dynamic_cast<const VirtualQQuickTransform*>(self));
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform)
        vqquicktransform->setQQuickTransform_Receivers_Callback(reinterpret_cast<VirtualQQuickTransform::QQuickTransform_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQuickTransform_IsSignalConnected(const QQuickTransform* self, const QMetaMethod* signal) {
    auto* vqquicktransform = const_cast<VirtualQQuickTransform*>(dynamic_cast<const VirtualQQuickTransform*>(self));
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        return vqquicktransform->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickTransform*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQuickTransform_SuperIsSignalConnected(const QQuickTransform* self, const QMetaMethod* signal) {
    auto* vqquicktransform = const_cast<VirtualQQuickTransform*>(dynamic_cast<const VirtualQQuickTransform*>(self));
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform) {
        vqquicktransform->setQQuickTransform_IsSignalConnected_IsBase(true);
        return vqquicktransform->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickTransform*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTransform_OnIsSignalConnected(const QQuickTransform* self, intptr_t slot) {
    auto* vqquicktransform = const_cast<VirtualQQuickTransform*>(dynamic_cast<const VirtualQQuickTransform*>(self));
    if (vqquicktransform && vqquicktransform->isVirtualQQuickTransform)
        vqquicktransform->setQQuickTransform_IsSignalConnected_Callback(reinterpret_cast<VirtualQQuickTransform::QQuickTransform_IsSignalConnected_Callback>(slot));
}

void QQuickTransform_Delete(QQuickTransform* self) {
    delete self;
}

QQuickItem* QQuickItem_new() {
    return new VirtualQQuickItem();
}

QQuickItem* QQuickItem_new2(QQuickItem* parent) {
    return new VirtualQQuickItem(parent);
}

QQmlParserStatus* QQuickItem_AsQQmlParserStatus(QQuickItem* self) {
    return static_cast<QQmlParserStatus*>(self);
}

QQuickItem* QQuickItem_FromQQmlParserStatus(QQmlParserStatus* _qqmlparserstatus) {
    return dynamic_cast<QQuickItem*>(static_cast<QQmlParserStatus*>(_qqmlparserstatus));
}

QMetaObject* QQuickItem_MetaObject(const QQuickItem* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuickItem_Metacast(QQuickItem* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuickItem_Metacall(QQuickItem* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuickItem_Tr(const char* s) {
    auto _ret = QQuickItem::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QQuickWindow* QQuickItem_Window(const QQuickItem* self) {
    return self->window();
}

QQuickItem* QQuickItem_ParentItem(const QQuickItem* self) {
    return self->parentItem();
}

void QQuickItem_SetParentItem(QQuickItem* self, QQuickItem* parent) {
    self->setParentItem(parent);
}

void QQuickItem_StackBefore(QQuickItem* self, const QQuickItem* param1) {
    self->stackBefore(param1);
}

void QQuickItem_StackAfter(QQuickItem* self, const QQuickItem* param1) {
    self->stackAfter(param1);
}

QRectF* QQuickItem_ChildrenRect(QQuickItem* self) {
    return new QRectF(self->childrenRect());
}

libqt_list /* of QQuickItem* */ QQuickItem_ChildItems(const QQuickItem* self) {
    QList<QQuickItem*> _ret = self->childItems();
    // Convert QList<> from C++ memory to manually-managed C memory
    QQuickItem** _arr = static_cast<QQuickItem**>(malloc(sizeof(QQuickItem*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QQuickItem_Clip(const QQuickItem* self) {
    return self->clip();
}

void QQuickItem_SetClip(QQuickItem* self, bool clip) {
    self->setClip(clip);
}

libqt_string QQuickItem_State(const QQuickItem* self) {
    auto _ret = self->state();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickItem_SetState(QQuickItem* self, const libqt_string state) {
    QString state_QString = QString::fromUtf8(state.data, state.len);
    self->setState(state_QString);
}

double QQuickItem_BaselineOffset(const QQuickItem* self) {
    return static_cast<double>(self->baselineOffset());
}

void QQuickItem_SetBaselineOffset(QQuickItem* self, double baselineOffset) {
    self->setBaselineOffset(static_cast<qreal>(baselineOffset));
}

double QQuickItem_X(const QQuickItem* self) {
    return static_cast<double>(self->x());
}

double QQuickItem_Y(const QQuickItem* self) {
    return static_cast<double>(self->y());
}

QPointF* QQuickItem_Position(const QQuickItem* self) {
    return new QPointF(self->position());
}

void QQuickItem_SetX(QQuickItem* self, double x) {
    self->setX(static_cast<qreal>(x));
}

void QQuickItem_SetY(QQuickItem* self, double y) {
    self->setY(static_cast<qreal>(y));
}

void QQuickItem_SetPosition(QQuickItem* self, const QPointF* position) {
    self->setPosition(*position);
}

double QQuickItem_Width(const QQuickItem* self) {
    return static_cast<double>(self->width());
}

void QQuickItem_SetWidth(QQuickItem* self, double width) {
    self->setWidth(static_cast<qreal>(width));
}

void QQuickItem_ResetWidth(QQuickItem* self) {
    self->resetWidth();
}

void QQuickItem_SetImplicitWidth(QQuickItem* self, double implicitWidth) {
    self->setImplicitWidth(static_cast<qreal>(implicitWidth));
}

double QQuickItem_ImplicitWidth(const QQuickItem* self) {
    return static_cast<double>(self->implicitWidth());
}

double QQuickItem_Height(const QQuickItem* self) {
    return static_cast<double>(self->height());
}

void QQuickItem_SetHeight(QQuickItem* self, double height) {
    self->setHeight(static_cast<qreal>(height));
}

void QQuickItem_ResetHeight(QQuickItem* self) {
    self->resetHeight();
}

void QQuickItem_SetImplicitHeight(QQuickItem* self, double implicitHeight) {
    self->setImplicitHeight(static_cast<qreal>(implicitHeight));
}

double QQuickItem_ImplicitHeight(const QQuickItem* self) {
    return static_cast<double>(self->implicitHeight());
}

QSizeF* QQuickItem_Size(const QQuickItem* self) {
    return new QSizeF(self->size());
}

void QQuickItem_SetSize(QQuickItem* self, const QSizeF* size) {
    self->setSize(*size);
}

int QQuickItem_TransformOrigin(const QQuickItem* self) {
    return static_cast<int>(self->transformOrigin());
}

void QQuickItem_SetTransformOrigin(QQuickItem* self, int transformOrigin) {
    self->setTransformOrigin(static_cast<QQuickItem::TransformOrigin>(transformOrigin));
}

QPointF* QQuickItem_TransformOriginPoint(const QQuickItem* self) {
    return new QPointF(self->transformOriginPoint());
}

void QQuickItem_SetTransformOriginPoint(QQuickItem* self, const QPointF* transformOriginPoint) {
    self->setTransformOriginPoint(*transformOriginPoint);
}

double QQuickItem_Z(const QQuickItem* self) {
    return static_cast<double>(self->z());
}

void QQuickItem_SetZ(QQuickItem* self, double z) {
    self->setZ(static_cast<qreal>(z));
}

double QQuickItem_Rotation(const QQuickItem* self) {
    return static_cast<double>(self->rotation());
}

void QQuickItem_SetRotation(QQuickItem* self, double rotation) {
    self->setRotation(static_cast<qreal>(rotation));
}

double QQuickItem_Scale(const QQuickItem* self) {
    return static_cast<double>(self->scale());
}

void QQuickItem_SetScale(QQuickItem* self, double scale) {
    self->setScale(static_cast<qreal>(scale));
}

double QQuickItem_Opacity(const QQuickItem* self) {
    return static_cast<double>(self->opacity());
}

void QQuickItem_SetOpacity(QQuickItem* self, double opacity) {
    self->setOpacity(static_cast<qreal>(opacity));
}

bool QQuickItem_IsVisible(const QQuickItem* self) {
    return self->isVisible();
}

void QQuickItem_SetVisible(QQuickItem* self, bool visible) {
    self->setVisible(visible);
}

bool QQuickItem_IsEnabled(const QQuickItem* self) {
    return self->isEnabled();
}

void QQuickItem_SetEnabled(QQuickItem* self, bool enabled) {
    self->setEnabled(enabled);
}

bool QQuickItem_Smooth(const QQuickItem* self) {
    return self->smooth();
}

void QQuickItem_SetSmooth(QQuickItem* self, bool smooth) {
    self->setSmooth(smooth);
}

bool QQuickItem_ActiveFocusOnTab(const QQuickItem* self) {
    return self->activeFocusOnTab();
}

void QQuickItem_SetActiveFocusOnTab(QQuickItem* self, bool activeFocusOnTab) {
    self->setActiveFocusOnTab(activeFocusOnTab);
}

bool QQuickItem_Antialiasing(const QQuickItem* self) {
    return self->antialiasing();
}

void QQuickItem_SetAntialiasing(QQuickItem* self, bool antialiasing) {
    self->setAntialiasing(antialiasing);
}

void QQuickItem_ResetAntialiasing(QQuickItem* self) {
    self->resetAntialiasing();
}

int QQuickItem_Flags(const QQuickItem* self) {
    return static_cast<int>(self->flags());
}

void QQuickItem_SetFlag(QQuickItem* self, int flag) {
    self->setFlag(static_cast<QQuickItem::Flag>(flag));
}

void QQuickItem_SetFlags(QQuickItem* self, int flags) {
    self->setFlags(static_cast<QQuickItem::Flags>(flags));
}

QRectF* QQuickItem_BoundingRect(const QQuickItem* self) {
    return new QRectF(self->boundingRect());
}

QRectF* QQuickItem_ClipRect(const QQuickItem* self) {
    return new QRectF(self->clipRect());
}

QQuickItem* QQuickItem_ViewportItem(const QQuickItem* self) {
    return self->viewportItem();
}

bool QQuickItem_HasActiveFocus(const QQuickItem* self) {
    return self->hasActiveFocus();
}

bool QQuickItem_HasFocus(const QQuickItem* self) {
    return self->hasFocus();
}

void QQuickItem_SetFocus(QQuickItem* self, bool focus) {
    self->setFocus(focus);
}

void QQuickItem_SetFocus2(QQuickItem* self, bool focus, int reason) {
    self->setFocus(focus, static_cast<Qt::FocusReason>(reason));
}

bool QQuickItem_IsFocusScope(const QQuickItem* self) {
    return self->isFocusScope();
}

QQuickItem* QQuickItem_ScopedFocusItem(const QQuickItem* self) {
    return self->scopedFocusItem();
}

int QQuickItem_FocusPolicy(const QQuickItem* self) {
    return static_cast<int>(self->focusPolicy());
}

void QQuickItem_SetFocusPolicy(QQuickItem* self, int policy) {
    self->setFocusPolicy(static_cast<Qt::FocusPolicy>(policy));
}

bool QQuickItem_IsAncestorOf(const QQuickItem* self, const QQuickItem* child) {
    return self->isAncestorOf(child);
}

int QQuickItem_AcceptedMouseButtons(const QQuickItem* self) {
    return static_cast<int>(self->acceptedMouseButtons());
}

void QQuickItem_SetAcceptedMouseButtons(QQuickItem* self, int buttons) {
    self->setAcceptedMouseButtons(static_cast<Qt::MouseButtons>(buttons));
}

bool QQuickItem_AcceptHoverEvents(const QQuickItem* self) {
    return self->acceptHoverEvents();
}

void QQuickItem_SetAcceptHoverEvents(QQuickItem* self, bool enabled) {
    self->setAcceptHoverEvents(enabled);
}

bool QQuickItem_AcceptTouchEvents(const QQuickItem* self) {
    return self->acceptTouchEvents();
}

void QQuickItem_SetAcceptTouchEvents(QQuickItem* self, bool accept) {
    self->setAcceptTouchEvents(accept);
}

QCursor* QQuickItem_Cursor(const QQuickItem* self) {
    return new QCursor(self->cursor());
}

void QQuickItem_SetCursor(QQuickItem* self, const QCursor* cursor) {
    self->setCursor(*cursor);
}

void QQuickItem_UnsetCursor(QQuickItem* self) {
    self->unsetCursor();
}

bool QQuickItem_IsUnderMouse(const QQuickItem* self) {
    return self->isUnderMouse();
}

void QQuickItem_GrabMouse(QQuickItem* self) {
    self->grabMouse();
}

void QQuickItem_UngrabMouse(QQuickItem* self) {
    self->ungrabMouse();
}

bool QQuickItem_KeepMouseGrab(const QQuickItem* self) {
    return self->keepMouseGrab();
}

void QQuickItem_SetKeepMouseGrab(QQuickItem* self, bool keepMouseGrab) {
    self->setKeepMouseGrab(keepMouseGrab);
}

bool QQuickItem_FiltersChildMouseEvents(const QQuickItem* self) {
    return self->filtersChildMouseEvents();
}

void QQuickItem_SetFiltersChildMouseEvents(QQuickItem* self, bool filter) {
    self->setFiltersChildMouseEvents(filter);
}

void QQuickItem_GrabTouchPoints(QQuickItem* self, const libqt_list /* of int */ ids) {
    QList<int> ids_QList;
    ids_QList.reserve(ids.len);
    int* ids_arr = static_cast<int*>(ids.data);
    for (size_t i = 0; i < ids.len; ++i) {
        ids_QList.push_back(static_cast<int>(ids_arr[i]));
    }
    self->grabTouchPoints(ids_QList);
}

void QQuickItem_UngrabTouchPoints(QQuickItem* self) {
    self->ungrabTouchPoints();
}

bool QQuickItem_KeepTouchGrab(const QQuickItem* self) {
    return self->keepTouchGrab();
}

void QQuickItem_SetKeepTouchGrab(QQuickItem* self, bool keepTouchGrab) {
    self->setKeepTouchGrab(keepTouchGrab);
}

bool QQuickItem_GrabToImage(QQuickItem* self, const QJSValue* callback) {
    return self->grabToImage(*callback);
}

bool QQuickItem_Contains(const QQuickItem* self, const QPointF* point) {
    return self->contains(*point);
}

QObject* QQuickItem_ContainmentMask(const QQuickItem* self) {
    return self->containmentMask();
}

void QQuickItem_SetContainmentMask(QQuickItem* self, QObject* mask) {
    self->setContainmentMask(mask);
}

QTransform* QQuickItem_ItemTransform(const QQuickItem* self, QQuickItem* param1, bool* param2) {
    return new QTransform(self->itemTransform(param1, param2));
}

QPointF* QQuickItem_MapToScene(const QQuickItem* self, const QPointF* point) {
    return new QPointF(self->mapToScene(*point));
}

QRectF* QQuickItem_MapRectToItem(const QQuickItem* self, const QQuickItem* item, const QRectF* rect) {
    return new QRectF(self->mapRectToItem(item, *rect));
}

QRectF* QQuickItem_MapRectToScene(const QQuickItem* self, const QRectF* rect) {
    return new QRectF(self->mapRectToScene(*rect));
}

QPointF* QQuickItem_MapFromScene(const QQuickItem* self, const QPointF* point) {
    return new QPointF(self->mapFromScene(*point));
}

QRectF* QQuickItem_MapRectFromItem(const QQuickItem* self, const QQuickItem* item, const QRectF* rect) {
    return new QRectF(self->mapRectFromItem(item, *rect));
}

QRectF* QQuickItem_MapRectFromScene(const QQuickItem* self, const QRectF* rect) {
    return new QRectF(self->mapRectFromScene(*rect));
}

void QQuickItem_Polish(QQuickItem* self) {
    self->polish();
}

QPointF* QQuickItem_MapFromItem2(const QQuickItem* self, const QQuickItem* item, const QPointF* point) {
    return new QPointF(self->mapFromItem(item, *point));
}

QPointF* QQuickItem_MapFromItem3(QQuickItem* self, const QQuickItem* item, double x, double y) {
    return new QPointF(self->mapFromItem(item, static_cast<qreal>(x), static_cast<qreal>(y)));
}

QRectF* QQuickItem_MapFromItem4(const QQuickItem* self, const QQuickItem* item, const QRectF* rect) {
    return new QRectF(self->mapFromItem(item, *rect));
}

QRectF* QQuickItem_MapFromItem5(const QQuickItem* self, const QQuickItem* item, double x, double y, double width, double height) {
    return new QRectF(self->mapFromItem(item, static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(width), static_cast<qreal>(height)));
}

QPointF* QQuickItem_MapToItem2(const QQuickItem* self, const QQuickItem* item, const QPointF* point) {
    return new QPointF(self->mapToItem(item, *point));
}

QPointF* QQuickItem_MapToItem3(QQuickItem* self, const QQuickItem* item, double x, double y) {
    return new QPointF(self->mapToItem(item, static_cast<qreal>(x), static_cast<qreal>(y)));
}

QRectF* QQuickItem_MapToItem4(const QQuickItem* self, const QQuickItem* item, const QRectF* rect) {
    return new QRectF(self->mapToItem(item, *rect));
}

QRectF* QQuickItem_MapToItem5(const QQuickItem* self, const QQuickItem* item, double x, double y, double width, double height) {
    return new QRectF(self->mapToItem(item, static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(width), static_cast<qreal>(height)));
}

QPointF* QQuickItem_MapFromGlobal2(const QQuickItem* self, double x, double y) {
    return new QPointF(self->mapFromGlobal(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QQuickItem_MapFromGlobal3(const QQuickItem* self, const QPointF* point) {
    return new QPointF(self->mapFromGlobal(*point));
}

QPointF* QQuickItem_MapToGlobal2(const QQuickItem* self, double x, double y) {
    return new QPointF(self->mapToGlobal(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QQuickItem_MapToGlobal3(const QQuickItem* self, const QPointF* point) {
    return new QPointF(self->mapToGlobal(*point));
}

void QQuickItem_ForceActiveFocus(QQuickItem* self) {
    self->forceActiveFocus();
}

void QQuickItem_ForceActiveFocus2(QQuickItem* self, int reason) {
    self->forceActiveFocus(static_cast<Qt::FocusReason>(reason));
}

QQuickItem* QQuickItem_NextItemInFocusChain(QQuickItem* self) {
    return self->nextItemInFocusChain();
}

QQuickItem* QQuickItem_ChildAt(const QQuickItem* self, double x, double y) {
    return self->childAt(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QQuickItem_EnsurePolished(QQuickItem* self) {
    self->ensurePolished();
}

void QQuickItem_DumpItemTree(const QQuickItem* self) {
    self->dumpItemTree();
}

QVariant* QQuickItem_InputMethodQuery(const QQuickItem* self, int query) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

bool QQuickItem_IsTextureProvider(const QQuickItem* self) {
    return self->isTextureProvider();
}

QSGTextureProvider* QQuickItem_TextureProvider(const QQuickItem* self) {
    return self->textureProvider();
}

void QQuickItem_Update(QQuickItem* self) {
    self->update();
}

void QQuickItem_ChildrenRectChanged(QQuickItem* self, const QRectF* param1) {
    self->childrenRectChanged(*param1);
}

void QQuickItem_Connect_ChildrenRectChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*, QRectF*) = reinterpret_cast<void (*)(QQuickItem*, QRectF*)>(slot);
    QQuickItem::connect(self, &QQuickItem::childrenRectChanged, [self, slotFunc](const QRectF& param1) {
        const QRectF& param1_ret = param1;
        // Cast returned reference into pointer
        QRectF* sigval1 = const_cast<QRectF*>(&param1_ret);
        slotFunc(self, sigval1);
    });
}

void QQuickItem_BaselineOffsetChanged(QQuickItem* self, double param1) {
    self->baselineOffsetChanged(static_cast<qreal>(param1));
}

void QQuickItem_Connect_BaselineOffsetChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*, double) = reinterpret_cast<void (*)(QQuickItem*, double)>(slot);
    QQuickItem::connect(self, &QQuickItem::baselineOffsetChanged, [self, slotFunc](qreal param1) {
        double sigval1 = static_cast<double>(param1);
        slotFunc(self, sigval1);
    });
}

void QQuickItem_StateChanged(QQuickItem* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->stateChanged(param1_QString);
}

void QQuickItem_Connect_StateChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*, const char*) = reinterpret_cast<void (*)(QQuickItem*, const char*)>(slot);
    QQuickItem::connect(self, &QQuickItem::stateChanged, [self, slotFunc](const QString& param1) {
        const auto param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        auto param1_str_len = param1_b.length();
        const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
        memcpy((void*)param1_str, param1_b.data(), param1_str_len);
        ((char*)param1_str)[param1_str_len] = '\0';
        const char* sigval1 = param1_str;
        slotFunc(self, sigval1);
        libqt_free(param1_str);
    });
}

void QQuickItem_FocusChanged(QQuickItem* self, bool param1) {
    self->focusChanged(param1);
}

void QQuickItem_Connect_FocusChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*, bool) = reinterpret_cast<void (*)(QQuickItem*, bool)>(slot);
    QQuickItem::connect(self, &QQuickItem::focusChanged, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QQuickItem_ActiveFocusChanged(QQuickItem* self, bool param1) {
    self->activeFocusChanged(param1);
}

void QQuickItem_Connect_ActiveFocusChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*, bool) = reinterpret_cast<void (*)(QQuickItem*, bool)>(slot);
    QQuickItem::connect(self, &QQuickItem::activeFocusChanged, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QQuickItem_FocusPolicyChanged(QQuickItem* self, int param1) {
    self->focusPolicyChanged(static_cast<Qt::FocusPolicy>(param1));
}

void QQuickItem_Connect_FocusPolicyChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*, int) = reinterpret_cast<void (*)(QQuickItem*, int)>(slot);
    QQuickItem::connect(self, &QQuickItem::focusPolicyChanged, [self, slotFunc](Qt::FocusPolicy param1) {
        int sigval1 = static_cast<int>(param1);
        slotFunc(self, sigval1);
    });
}

void QQuickItem_ActiveFocusOnTabChanged(QQuickItem* self, bool param1) {
    self->activeFocusOnTabChanged(param1);
}

void QQuickItem_Connect_ActiveFocusOnTabChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*, bool) = reinterpret_cast<void (*)(QQuickItem*, bool)>(slot);
    QQuickItem::connect(self, &QQuickItem::activeFocusOnTabChanged, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QQuickItem_ParentChanged(QQuickItem* self, QQuickItem* param1) {
    self->parentChanged(param1);
}

void QQuickItem_Connect_ParentChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*, QQuickItem*) = reinterpret_cast<void (*)(QQuickItem*, QQuickItem*)>(slot);
    QQuickItem::connect(self, &QQuickItem::parentChanged, [self, slotFunc](QQuickItem* param1) {
        QQuickItem* sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QQuickItem_TransformOriginChanged(QQuickItem* self, int param1) {
    self->transformOriginChanged(static_cast<QQuickItem::TransformOrigin>(param1));
}

void QQuickItem_Connect_TransformOriginChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*, int) = reinterpret_cast<void (*)(QQuickItem*, int)>(slot);
    QQuickItem::connect(self, &QQuickItem::transformOriginChanged, [self, slotFunc](QQuickItem::TransformOrigin param1) {
        int sigval1 = static_cast<int>(param1);
        slotFunc(self, sigval1);
    });
}

void QQuickItem_SmoothChanged(QQuickItem* self, bool param1) {
    self->smoothChanged(param1);
}

void QQuickItem_Connect_SmoothChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*, bool) = reinterpret_cast<void (*)(QQuickItem*, bool)>(slot);
    QQuickItem::connect(self, &QQuickItem::smoothChanged, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QQuickItem_AntialiasingChanged(QQuickItem* self, bool param1) {
    self->antialiasingChanged(param1);
}

void QQuickItem_Connect_AntialiasingChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*, bool) = reinterpret_cast<void (*)(QQuickItem*, bool)>(slot);
    QQuickItem::connect(self, &QQuickItem::antialiasingChanged, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QQuickItem_ClipChanged(QQuickItem* self, bool param1) {
    self->clipChanged(param1);
}

void QQuickItem_Connect_ClipChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*, bool) = reinterpret_cast<void (*)(QQuickItem*, bool)>(slot);
    QQuickItem::connect(self, &QQuickItem::clipChanged, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QQuickItem_WindowChanged(QQuickItem* self, QQuickWindow* window) {
    self->windowChanged(window);
}

void QQuickItem_Connect_WindowChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*, QQuickWindow*) = reinterpret_cast<void (*)(QQuickItem*, QQuickWindow*)>(slot);
    QQuickItem::connect(self, &QQuickItem::windowChanged, [self, slotFunc](QQuickWindow* window) {
        QQuickWindow* sigval1 = window;
        slotFunc(self, sigval1);
    });
}

void QQuickItem_ChildrenChanged(QQuickItem* self) {
    self->childrenChanged();
}

void QQuickItem_Connect_ChildrenChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*) = reinterpret_cast<void (*)(QQuickItem*)>(slot);
    QQuickItem::connect(self, &QQuickItem::childrenChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickItem_OpacityChanged(QQuickItem* self) {
    self->opacityChanged();
}

void QQuickItem_Connect_OpacityChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*) = reinterpret_cast<void (*)(QQuickItem*)>(slot);
    QQuickItem::connect(self, &QQuickItem::opacityChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickItem_EnabledChanged(QQuickItem* self) {
    self->enabledChanged();
}

void QQuickItem_Connect_EnabledChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*) = reinterpret_cast<void (*)(QQuickItem*)>(slot);
    QQuickItem::connect(self, &QQuickItem::enabledChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickItem_VisibleChanged(QQuickItem* self) {
    self->visibleChanged();
}

void QQuickItem_Connect_VisibleChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*) = reinterpret_cast<void (*)(QQuickItem*)>(slot);
    QQuickItem::connect(self, &QQuickItem::visibleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickItem_VisibleChildrenChanged(QQuickItem* self) {
    self->visibleChildrenChanged();
}

void QQuickItem_Connect_VisibleChildrenChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*) = reinterpret_cast<void (*)(QQuickItem*)>(slot);
    QQuickItem::connect(self, &QQuickItem::visibleChildrenChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickItem_RotationChanged(QQuickItem* self) {
    self->rotationChanged();
}

void QQuickItem_Connect_RotationChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*) = reinterpret_cast<void (*)(QQuickItem*)>(slot);
    QQuickItem::connect(self, &QQuickItem::rotationChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickItem_ScaleChanged(QQuickItem* self) {
    self->scaleChanged();
}

void QQuickItem_Connect_ScaleChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*) = reinterpret_cast<void (*)(QQuickItem*)>(slot);
    QQuickItem::connect(self, &QQuickItem::scaleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickItem_XChanged(QQuickItem* self) {
    self->xChanged();
}

void QQuickItem_Connect_XChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*) = reinterpret_cast<void (*)(QQuickItem*)>(slot);
    QQuickItem::connect(self, &QQuickItem::xChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickItem_YChanged(QQuickItem* self) {
    self->yChanged();
}

void QQuickItem_Connect_YChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*) = reinterpret_cast<void (*)(QQuickItem*)>(slot);
    QQuickItem::connect(self, &QQuickItem::yChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickItem_WidthChanged(QQuickItem* self) {
    self->widthChanged();
}

void QQuickItem_Connect_WidthChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*) = reinterpret_cast<void (*)(QQuickItem*)>(slot);
    QQuickItem::connect(self, &QQuickItem::widthChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickItem_HeightChanged(QQuickItem* self) {
    self->heightChanged();
}

void QQuickItem_Connect_HeightChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*) = reinterpret_cast<void (*)(QQuickItem*)>(slot);
    QQuickItem::connect(self, &QQuickItem::heightChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickItem_ZChanged(QQuickItem* self) {
    self->zChanged();
}

void QQuickItem_Connect_ZChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*) = reinterpret_cast<void (*)(QQuickItem*)>(slot);
    QQuickItem::connect(self, &QQuickItem::zChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickItem_ImplicitWidthChanged(QQuickItem* self) {
    self->implicitWidthChanged();
}

void QQuickItem_Connect_ImplicitWidthChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*) = reinterpret_cast<void (*)(QQuickItem*)>(slot);
    QQuickItem::connect(self, &QQuickItem::implicitWidthChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickItem_ImplicitHeightChanged(QQuickItem* self) {
    self->implicitHeightChanged();
}

void QQuickItem_Connect_ImplicitHeightChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*) = reinterpret_cast<void (*)(QQuickItem*)>(slot);
    QQuickItem::connect(self, &QQuickItem::implicitHeightChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickItem_ContainmentMaskChanged(QQuickItem* self) {
    self->containmentMaskChanged();
}

void QQuickItem_Connect_ContainmentMaskChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*) = reinterpret_cast<void (*)(QQuickItem*)>(slot);
    QQuickItem::connect(self, &QQuickItem::containmentMaskChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickItem_PaletteChanged(QQuickItem* self) {
    self->paletteChanged();
}

void QQuickItem_Connect_PaletteChanged(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*) = reinterpret_cast<void (*)(QQuickItem*)>(slot);
    QQuickItem::connect(self, &QQuickItem::paletteChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickItem_PaletteCreated(QQuickItem* self) {
    self->paletteCreated();
}

void QQuickItem_Connect_PaletteCreated(QQuickItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickItem*) = reinterpret_cast<void (*)(QQuickItem*)>(slot);
    QQuickItem::connect(self, &QQuickItem::paletteCreated, [self, slotFunc]() {
        slotFunc(self);
    });
}

bool QQuickItem_Event(QQuickItem* self, QEvent* param1) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        return vqquickitem->event(param1);
    }
    return {};
}

void QQuickItem_ItemChange(QQuickItem* self, int param1, const QQuickItem__ItemChangeData* param2) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->itemChange(static_cast<QQuickItem::ItemChange>(param1), *param2);
    }
}

void QQuickItem_GeometryChange(QQuickItem* self, const QRectF* newGeometry, const QRectF* oldGeometry) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->geometryChange(*newGeometry, *oldGeometry);
    }
}

void QQuickItem_ClassBegin(QQuickItem* self) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->classBegin();
    }
}

void QQuickItem_ComponentComplete(QQuickItem* self) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->componentComplete();
    }
}

void QQuickItem_KeyPressEvent(QQuickItem* self, QKeyEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->keyPressEvent(event);
    }
}

void QQuickItem_KeyReleaseEvent(QQuickItem* self, QKeyEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->keyReleaseEvent(event);
    }
}

void QQuickItem_InputMethodEvent(QQuickItem* self, QInputMethodEvent* param1) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->inputMethodEvent(param1);
    }
}

void QQuickItem_FocusInEvent(QQuickItem* self, QFocusEvent* param1) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->focusInEvent(param1);
    }
}

void QQuickItem_FocusOutEvent(QQuickItem* self, QFocusEvent* param1) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->focusOutEvent(param1);
    }
}

void QQuickItem_MousePressEvent(QQuickItem* self, QMouseEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->mousePressEvent(event);
    }
}

void QQuickItem_MouseMoveEvent(QQuickItem* self, QMouseEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->mouseMoveEvent(event);
    }
}

void QQuickItem_MouseReleaseEvent(QQuickItem* self, QMouseEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->mouseReleaseEvent(event);
    }
}

void QQuickItem_MouseDoubleClickEvent(QQuickItem* self, QMouseEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->mouseDoubleClickEvent(event);
    }
}

void QQuickItem_MouseUngrabEvent(QQuickItem* self) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->mouseUngrabEvent();
    }
}

void QQuickItem_TouchUngrabEvent(QQuickItem* self) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->touchUngrabEvent();
    }
}

void QQuickItem_WheelEvent(QQuickItem* self, QWheelEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->wheelEvent(event);
    }
}

void QQuickItem_TouchEvent(QQuickItem* self, QTouchEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->touchEvent(event);
    }
}

void QQuickItem_HoverEnterEvent(QQuickItem* self, QHoverEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->hoverEnterEvent(event);
    }
}

void QQuickItem_HoverMoveEvent(QQuickItem* self, QHoverEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->hoverMoveEvent(event);
    }
}

void QQuickItem_HoverLeaveEvent(QQuickItem* self, QHoverEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->hoverLeaveEvent(event);
    }
}

void QQuickItem_DragEnterEvent(QQuickItem* self, QDragEnterEvent* param1) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->dragEnterEvent(param1);
    }
}

void QQuickItem_DragMoveEvent(QQuickItem* self, QDragMoveEvent* param1) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->dragMoveEvent(param1);
    }
}

void QQuickItem_DragLeaveEvent(QQuickItem* self, QDragLeaveEvent* param1) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->dragLeaveEvent(param1);
    }
}

void QQuickItem_DropEvent(QQuickItem* self, QDropEvent* param1) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->dropEvent(param1);
    }
}

bool QQuickItem_ChildMouseEventFilter(QQuickItem* self, QQuickItem* param1, QEvent* param2) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        return vqquickitem->childMouseEventFilter(param1, param2);
    }
    return {};
}

QSGNode* QQuickItem_UpdatePaintNode(QQuickItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        return vqquickitem->updatePaintNode(param1, param2);
    }
    return {};
}

void QQuickItem_ReleaseResources(QQuickItem* self) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->releaseResources();
    }
}

void QQuickItem_UpdatePolish(QQuickItem* self) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->updatePolish();
    }
}

libqt_string QQuickItem_Tr2(const char* s, const char* c) {
    auto _ret = QQuickItem::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuickItem_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuickItem::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickItem_SetFlag2(QQuickItem* self, int flag, bool enabled) {
    self->setFlag(static_cast<QQuickItem::Flag>(flag), enabled);
}

bool QQuickItem_GrabToImage22(QQuickItem* self, const QJSValue* callback, const QSize* targetSize) {
    return self->grabToImage(*callback, *targetSize);
}

QQuickItem* QQuickItem_NextItemInFocusChain1(QQuickItem* self, bool forward) {
    return self->nextItemInFocusChain(forward);
}

// Base class handler implementation
QMetaObject* QQuickItem_SuperMetaObject(const QQuickItem* self) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_MetaObject_IsBase(true);
        return (QMetaObject*)vqquickitem->metaObject();
    } else {
        return (QMetaObject*)self->QQuickItem::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnMetaObject(const QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_MetaObject_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQuickItem_SuperMetacast(QQuickItem* self, const char* param1) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_Metacast_IsBase(true);
        return vqquickitem->qt_metacast(param1);
    } else {
        return self->QQuickItem::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnMetacast(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_Metacast_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQuickItem_SuperMetacall(QQuickItem* self, int param1, int param2, void** param3) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_Metacall_IsBase(true);
        return vqquickitem->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQuickItem::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnMetacall(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_Metacall_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_Metacall_Callback>(slot));
}

// Base class handler implementation
QRectF* QQuickItem_SuperBoundingRect(const QQuickItem* self) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_BoundingRect_IsBase(true);
        return new QRectF(vqquickitem->boundingRect());
    } else {
        return new QRectF(((VirtualQQuickItem*)self)->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnBoundingRect(const QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_BoundingRect_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_BoundingRect_Callback>(slot));
}

// Base class handler implementation
QRectF* QQuickItem_SuperClipRect(const QQuickItem* self) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_ClipRect_IsBase(true);
        return new QRectF(vqquickitem->clipRect());
    } else {
        return new QRectF(((VirtualQQuickItem*)self)->clipRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnClipRect(const QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_ClipRect_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_ClipRect_Callback>(slot));
}

// Base class handler implementation
bool QQuickItem_SuperContains(const QQuickItem* self, const QPointF* point) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_Contains_IsBase(true);
        return vqquickitem->contains(*point);
    } else {
        return self->QQuickItem::contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnContains(const QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_Contains_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_Contains_Callback>(slot));
}

// Base class handler implementation
QVariant* QQuickItem_SuperInputMethodQuery(const QQuickItem* self, int query) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_InputMethodQuery_IsBase(true);
        return new QVariant(vqquickitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQQuickItem*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnInputMethodQuery(const QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_InputMethodQuery_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_InputMethodQuery_Callback>(slot));
}

// Base class handler implementation
bool QQuickItem_SuperIsTextureProvider(const QQuickItem* self) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_IsTextureProvider_IsBase(true);
        return vqquickitem->isTextureProvider();
    } else {
        return self->QQuickItem::isTextureProvider();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnIsTextureProvider(const QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_IsTextureProvider_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_IsTextureProvider_Callback>(slot));
}

// Base class handler implementation
QSGTextureProvider* QQuickItem_SuperTextureProvider(const QQuickItem* self) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_TextureProvider_IsBase(true);
        return vqquickitem->textureProvider();
    } else {
        return self->QQuickItem::textureProvider();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnTextureProvider(const QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_TextureProvider_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_TextureProvider_Callback>(slot));
}

// Base class handler implementation
bool QQuickItem_SuperEvent(QQuickItem* self, QEvent* param1) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_Event_IsBase(true);
        return vqquickitem->event(param1);
    } else {
        return ((VirtualQQuickItem*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_Event_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_Event_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperItemChange(QQuickItem* self, int param1, const QQuickItem__ItemChangeData* param2) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_ItemChange_IsBase(true);
        vqquickitem->itemChange(static_cast<QQuickItem::ItemChange>(param1), *param2);
    } else {
        ((VirtualQQuickItem*)self)->itemChange(static_cast<QQuickItem::ItemChange>(param1), *param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnItemChange(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_ItemChange_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_ItemChange_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperGeometryChange(QQuickItem* self, const QRectF* newGeometry, const QRectF* oldGeometry) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_GeometryChange_IsBase(true);
        vqquickitem->geometryChange(*newGeometry, *oldGeometry);
    } else {
        ((VirtualQQuickItem*)self)->geometryChange(*newGeometry, *oldGeometry);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnGeometryChange(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_GeometryChange_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_GeometryChange_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperClassBegin(QQuickItem* self) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_ClassBegin_IsBase(true);
        vqquickitem->classBegin();
    } else {
        ((VirtualQQuickItem*)self)->classBegin();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnClassBegin(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_ClassBegin_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_ClassBegin_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperComponentComplete(QQuickItem* self) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_ComponentComplete_IsBase(true);
        vqquickitem->componentComplete();
    } else {
        ((VirtualQQuickItem*)self)->componentComplete();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnComponentComplete(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_ComponentComplete_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_ComponentComplete_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperKeyPressEvent(QQuickItem* self, QKeyEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_KeyPressEvent_IsBase(true);
        vqquickitem->keyPressEvent(event);
    } else {
        ((VirtualQQuickItem*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnKeyPressEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_KeyPressEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_KeyPressEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperKeyReleaseEvent(QQuickItem* self, QKeyEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_KeyReleaseEvent_IsBase(true);
        vqquickitem->keyReleaseEvent(event);
    } else {
        ((VirtualQQuickItem*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnKeyReleaseEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_KeyReleaseEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperInputMethodEvent(QQuickItem* self, QInputMethodEvent* param1) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_InputMethodEvent_IsBase(true);
        vqquickitem->inputMethodEvent(param1);
    } else {
        ((VirtualQQuickItem*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnInputMethodEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_InputMethodEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_InputMethodEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperFocusInEvent(QQuickItem* self, QFocusEvent* param1) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_FocusInEvent_IsBase(true);
        vqquickitem->focusInEvent(param1);
    } else {
        ((VirtualQQuickItem*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnFocusInEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_FocusInEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_FocusInEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperFocusOutEvent(QQuickItem* self, QFocusEvent* param1) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_FocusOutEvent_IsBase(true);
        vqquickitem->focusOutEvent(param1);
    } else {
        ((VirtualQQuickItem*)self)->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnFocusOutEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_FocusOutEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_FocusOutEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperMousePressEvent(QQuickItem* self, QMouseEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_MousePressEvent_IsBase(true);
        vqquickitem->mousePressEvent(event);
    } else {
        ((VirtualQQuickItem*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnMousePressEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_MousePressEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_MousePressEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperMouseMoveEvent(QQuickItem* self, QMouseEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_MouseMoveEvent_IsBase(true);
        vqquickitem->mouseMoveEvent(event);
    } else {
        ((VirtualQQuickItem*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnMouseMoveEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_MouseMoveEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_MouseMoveEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperMouseReleaseEvent(QQuickItem* self, QMouseEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_MouseReleaseEvent_IsBase(true);
        vqquickitem->mouseReleaseEvent(event);
    } else {
        ((VirtualQQuickItem*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnMouseReleaseEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_MouseReleaseEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperMouseDoubleClickEvent(QQuickItem* self, QMouseEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_MouseDoubleClickEvent_IsBase(true);
        vqquickitem->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQQuickItem*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnMouseDoubleClickEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_MouseDoubleClickEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperMouseUngrabEvent(QQuickItem* self) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_MouseUngrabEvent_IsBase(true);
        vqquickitem->mouseUngrabEvent();
    } else {
        ((VirtualQQuickItem*)self)->mouseUngrabEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnMouseUngrabEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_MouseUngrabEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_MouseUngrabEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperTouchUngrabEvent(QQuickItem* self) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_TouchUngrabEvent_IsBase(true);
        vqquickitem->touchUngrabEvent();
    } else {
        ((VirtualQQuickItem*)self)->touchUngrabEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnTouchUngrabEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_TouchUngrabEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_TouchUngrabEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperWheelEvent(QQuickItem* self, QWheelEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_WheelEvent_IsBase(true);
        vqquickitem->wheelEvent(event);
    } else {
        ((VirtualQQuickItem*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnWheelEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_WheelEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_WheelEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperTouchEvent(QQuickItem* self, QTouchEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_TouchEvent_IsBase(true);
        vqquickitem->touchEvent(event);
    } else {
        ((VirtualQQuickItem*)self)->touchEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnTouchEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_TouchEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_TouchEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperHoverEnterEvent(QQuickItem* self, QHoverEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_HoverEnterEvent_IsBase(true);
        vqquickitem->hoverEnterEvent(event);
    } else {
        ((VirtualQQuickItem*)self)->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnHoverEnterEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_HoverEnterEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_HoverEnterEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperHoverMoveEvent(QQuickItem* self, QHoverEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_HoverMoveEvent_IsBase(true);
        vqquickitem->hoverMoveEvent(event);
    } else {
        ((VirtualQQuickItem*)self)->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnHoverMoveEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_HoverMoveEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_HoverMoveEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperHoverLeaveEvent(QQuickItem* self, QHoverEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_HoverLeaveEvent_IsBase(true);
        vqquickitem->hoverLeaveEvent(event);
    } else {
        ((VirtualQQuickItem*)self)->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnHoverLeaveEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_HoverLeaveEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperDragEnterEvent(QQuickItem* self, QDragEnterEvent* param1) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_DragEnterEvent_IsBase(true);
        vqquickitem->dragEnterEvent(param1);
    } else {
        ((VirtualQQuickItem*)self)->dragEnterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnDragEnterEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_DragEnterEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_DragEnterEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperDragMoveEvent(QQuickItem* self, QDragMoveEvent* param1) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_DragMoveEvent_IsBase(true);
        vqquickitem->dragMoveEvent(param1);
    } else {
        ((VirtualQQuickItem*)self)->dragMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnDragMoveEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_DragMoveEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_DragMoveEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperDragLeaveEvent(QQuickItem* self, QDragLeaveEvent* param1) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_DragLeaveEvent_IsBase(true);
        vqquickitem->dragLeaveEvent(param1);
    } else {
        ((VirtualQQuickItem*)self)->dragLeaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnDragLeaveEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_DragLeaveEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_DragLeaveEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperDropEvent(QQuickItem* self, QDropEvent* param1) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_DropEvent_IsBase(true);
        vqquickitem->dropEvent(param1);
    } else {
        ((VirtualQQuickItem*)self)->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnDropEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_DropEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_DropEvent_Callback>(slot));
}

// Base class handler implementation
bool QQuickItem_SuperChildMouseEventFilter(QQuickItem* self, QQuickItem* param1, QEvent* param2) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_ChildMouseEventFilter_IsBase(true);
        return vqquickitem->childMouseEventFilter(param1, param2);
    } else {
        return ((VirtualQQuickItem*)self)->childMouseEventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnChildMouseEventFilter(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_ChildMouseEventFilter_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_ChildMouseEventFilter_Callback>(slot));
}

// Base class handler implementation
QSGNode* QQuickItem_SuperUpdatePaintNode(QQuickItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_UpdatePaintNode_IsBase(true);
        return vqquickitem->updatePaintNode(param1, param2);
    } else {
        return ((VirtualQQuickItem*)self)->updatePaintNode(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnUpdatePaintNode(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_UpdatePaintNode_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_UpdatePaintNode_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperReleaseResources(QQuickItem* self) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_ReleaseResources_IsBase(true);
        vqquickitem->releaseResources();
    } else {
        ((VirtualQQuickItem*)self)->releaseResources();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnReleaseResources(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_ReleaseResources_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_ReleaseResources_Callback>(slot));
}

// Base class handler implementation
void QQuickItem_SuperUpdatePolish(QQuickItem* self) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_UpdatePolish_IsBase(true);
        vqquickitem->updatePolish();
    } else {
        ((VirtualQQuickItem*)self)->updatePolish();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnUpdatePolish(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_UpdatePolish_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_UpdatePolish_Callback>(slot));
}

// Derived class handler implementation
bool QQuickItem_EventFilter(QQuickItem* self, QObject* watched, QEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        return vqquickitem->eventFilter(watched, event);
    } else {
        return self->QQuickItem::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQuickItem_SuperEventFilter(QQuickItem* self, QObject* watched, QEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_EventFilter_IsBase(true);
        return vqquickitem->eventFilter(watched, event);
    } else {
        return self->QQuickItem::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnEventFilter(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_EventFilter_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuickItem_TimerEvent(QQuickItem* self, QTimerEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->timerEvent(event);
    } else {
        ((VirtualQQuickItem*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQuickItem_SuperTimerEvent(QQuickItem* self, QTimerEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_TimerEvent_IsBase(true);
        vqquickitem->timerEvent(event);
    } else {
        ((VirtualQQuickItem*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnTimerEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_TimerEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickItem_ChildEvent(QQuickItem* self, QChildEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->childEvent(event);
    } else {
        ((VirtualQQuickItem*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQuickItem_SuperChildEvent(QQuickItem* self, QChildEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_ChildEvent_IsBase(true);
        vqquickitem->childEvent(event);
    } else {
        ((VirtualQQuickItem*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnChildEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_ChildEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickItem_CustomEvent(QQuickItem* self, QEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->customEvent(event);
    } else {
        ((VirtualQQuickItem*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQuickItem_SuperCustomEvent(QQuickItem* self, QEvent* event) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_CustomEvent_IsBase(true);
        vqquickitem->customEvent(event);
    } else {
        ((VirtualQQuickItem*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnCustomEvent(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_CustomEvent_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickItem_ConnectNotify(QQuickItem* self, const QMetaMethod* signal) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->connectNotify(*signal);
    } else {
        ((VirtualQQuickItem*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickItem_SuperConnectNotify(QQuickItem* self, const QMetaMethod* signal) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_ConnectNotify_IsBase(true);
        vqquickitem->connectNotify(*signal);
    } else {
        ((VirtualQQuickItem*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnConnectNotify(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_ConnectNotify_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuickItem_DisconnectNotify(QQuickItem* self, const QMetaMethod* signal) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickItem*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickItem_SuperDisconnectNotify(QQuickItem* self, const QMetaMethod* signal) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_DisconnectNotify_IsBase(true);
        vqquickitem->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickItem*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnDisconnectNotify(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_DisconnectNotify_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
bool QQuickItem_IsComponentComplete(const QQuickItem* self) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        return vqquickitem->isComponentComplete();
    } else {
        return ((VirtualQQuickItem*)self)->isComponentComplete();
    }
}

// Base class handler implementation
bool QQuickItem_SuperIsComponentComplete(const QQuickItem* self) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_IsComponentComplete_IsBase(true);
        return vqquickitem->isComponentComplete();
    } else {
        return ((VirtualQQuickItem*)self)->isComponentComplete();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnIsComponentComplete(const QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_IsComponentComplete_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_IsComponentComplete_Callback>(slot));
}

// Derived class handler implementation
void QQuickItem_UpdateInputMethod(QQuickItem* self) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->updateInputMethod();
    } else {
        ((VirtualQQuickItem*)self)->updateInputMethod();
    }
}

// Base class handler implementation
void QQuickItem_SuperUpdateInputMethod(QQuickItem* self) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_UpdateInputMethod_IsBase(true);
        vqquickitem->updateInputMethod();
    } else {
        ((VirtualQQuickItem*)self)->updateInputMethod();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnUpdateInputMethod(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_UpdateInputMethod_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_UpdateInputMethod_Callback>(slot));
}

// Derived class handler implementation
bool QQuickItem_WidthValid(const QQuickItem* self) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        return vqquickitem->widthValid();
    } else {
        return ((VirtualQQuickItem*)self)->widthValid();
    }
}

// Base class handler implementation
bool QQuickItem_SuperWidthValid(const QQuickItem* self) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_WidthValid_IsBase(true);
        return vqquickitem->widthValid();
    } else {
        return ((VirtualQQuickItem*)self)->widthValid();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnWidthValid(const QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_WidthValid_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_WidthValid_Callback>(slot));
}

// Derived class handler implementation
bool QQuickItem_HeightValid(const QQuickItem* self) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        return vqquickitem->heightValid();
    } else {
        return ((VirtualQQuickItem*)self)->heightValid();
    }
}

// Base class handler implementation
bool QQuickItem_SuperHeightValid(const QQuickItem* self) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_HeightValid_IsBase(true);
        return vqquickitem->heightValid();
    } else {
        return ((VirtualQQuickItem*)self)->heightValid();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnHeightValid(const QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_HeightValid_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_HeightValid_Callback>(slot));
}

// Derived class handler implementation
void QQuickItem_SetImplicitSize(QQuickItem* self, double param1, double param2) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setImplicitSize(static_cast<qreal>(param1), static_cast<qreal>(param2));
    } else {
        ((VirtualQQuickItem*)self)->setImplicitSize(static_cast<qreal>(param1), static_cast<qreal>(param2));
    }
}

// Base class handler implementation
void QQuickItem_SuperSetImplicitSize(QQuickItem* self, double param1, double param2) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_SetImplicitSize_IsBase(true);
        vqquickitem->setImplicitSize(static_cast<qreal>(param1), static_cast<qreal>(param2));
    } else {
        ((VirtualQQuickItem*)self)->setImplicitSize(static_cast<qreal>(param1), static_cast<qreal>(param2));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnSetImplicitSize(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_SetImplicitSize_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_SetImplicitSize_Callback>(slot));
}

// Derived class handler implementation
void QQuickItem_UpdateInputMethod1(QQuickItem* self, int queries) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->updateInputMethod(static_cast<Qt::InputMethodQueries>(queries));
    } else {
        ((VirtualQQuickItem*)self)->updateInputMethod(static_cast<Qt::InputMethodQueries>(queries));
    }
}

// Base class handler implementation
void QQuickItem_SuperUpdateInputMethod1(QQuickItem* self, int queries) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_UpdateInputMethod1_IsBase(true);
        vqquickitem->updateInputMethod(static_cast<Qt::InputMethodQueries>(queries));
    } else {
        ((VirtualQQuickItem*)self)->updateInputMethod(static_cast<Qt::InputMethodQueries>(queries));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnUpdateInputMethod1(QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = dynamic_cast<VirtualQQuickItem*>(self);
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_UpdateInputMethod1_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_UpdateInputMethod1_Callback>(slot));
}

// Derived class handler implementation
QObject* QQuickItem_Sender(const QQuickItem* self) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        return vqquickitem->sender();
    } else {
        return ((VirtualQQuickItem*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQuickItem_SuperSender(const QQuickItem* self) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_Sender_IsBase(true);
        return vqquickitem->sender();
    } else {
        return ((VirtualQQuickItem*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnSender(const QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_Sender_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQuickItem_SenderSignalIndex(const QQuickItem* self) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        return vqquickitem->senderSignalIndex();
    } else {
        return ((VirtualQQuickItem*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQuickItem_SuperSenderSignalIndex(const QQuickItem* self) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_SenderSignalIndex_IsBase(true);
        return vqquickitem->senderSignalIndex();
    } else {
        return ((VirtualQQuickItem*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnSenderSignalIndex(const QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQuickItem_Receivers(const QQuickItem* self, const char* signal) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        return vqquickitem->receivers(signal);
    } else {
        return ((VirtualQQuickItem*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQuickItem_SuperReceivers(const QQuickItem* self, const char* signal) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_Receivers_IsBase(true);
        return vqquickitem->receivers(signal);
    } else {
        return ((VirtualQQuickItem*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnReceivers(const QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_Receivers_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQuickItem_IsSignalConnected(const QQuickItem* self, const QMetaMethod* signal) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        return vqquickitem->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickItem*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQuickItem_SuperIsSignalConnected(const QQuickItem* self, const QMetaMethod* signal) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem) {
        vqquickitem->setQQuickItem_IsSignalConnected_IsBase(true);
        return vqquickitem->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickItem*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickItem_OnIsSignalConnected(const QQuickItem* self, intptr_t slot) {
    auto* vqquickitem = const_cast<VirtualQQuickItem*>(dynamic_cast<const VirtualQQuickItem*>(self));
    if (vqquickitem && vqquickitem->isVirtualQQuickItem)
        vqquickitem->setQQuickItem_IsSignalConnected_Callback(reinterpret_cast<VirtualQQuickItem::QQuickItem_IsSignalConnected_Callback>(slot));
}

void QQuickItem_Delete(QQuickItem* self) {
    delete self;
}

QQuickItem__ItemChangeData* QQuickItem__ItemChangeData_new(const QQuickItem__ItemChangeData* other) {
    return new QQuickItem::ItemChangeData(*other);
}

QQuickItem__ItemChangeData* QQuickItem__ItemChangeData_new2(QQuickItem__ItemChangeData* other) {
    return new QQuickItem::ItemChangeData(std::move(*other));
}

QQuickItem__ItemChangeData* QQuickItem__ItemChangeData_new3(QQuickItem* v) {
    return new QQuickItem::ItemChangeData(v);
}

QQuickItem__ItemChangeData* QQuickItem__ItemChangeData_new4(QQuickWindow* v) {
    return new QQuickItem::ItemChangeData(v);
}

QQuickItem__ItemChangeData* QQuickItem__ItemChangeData_new5(double v) {
    return new QQuickItem::ItemChangeData(static_cast<qreal>(v));
}

QQuickItem__ItemChangeData* QQuickItem__ItemChangeData_new6(bool v) {
    return new QQuickItem::ItemChangeData(v);
}

void QQuickItem__ItemChangeData_CopyAssign(QQuickItem__ItemChangeData* self, QQuickItem__ItemChangeData* other) {
    *self = *other;
}

void QQuickItem__ItemChangeData_MoveAssign(QQuickItem__ItemChangeData* self, QQuickItem__ItemChangeData* other) {
    *self = std::move(*other);
}

QQuickItem* QQuickItem__ItemChangeData_Item(const QQuickItem__ItemChangeData* self) {
    return self->item;
}

void QQuickItem__ItemChangeData_SetItem(QQuickItem__ItemChangeData* self, QQuickItem* item) {
    self->item = item;
}

QQuickWindow* QQuickItem__ItemChangeData_Window(const QQuickItem__ItemChangeData* self) {
    return self->window;
}

void QQuickItem__ItemChangeData_SetWindow(QQuickItem__ItemChangeData* self, QQuickWindow* window) {
    self->window = window;
}

double QQuickItem__ItemChangeData_RealValue(const QQuickItem__ItemChangeData* self) {
    return self->realValue;
}

void QQuickItem__ItemChangeData_SetRealValue(QQuickItem__ItemChangeData* self, double realValue) {
    self->realValue = static_cast<double>(realValue);
}

bool QQuickItem__ItemChangeData_BoolValue(const QQuickItem__ItemChangeData* self) {
    return self->boolValue;
}

void QQuickItem__ItemChangeData_SetBoolValue(QQuickItem__ItemChangeData* self, bool boolValue) {
    self->boolValue = boolValue;
}

void QQuickItem__ItemChangeData_Delete(QQuickItem__ItemChangeData* self) {
    delete self;
}

QQuickItem__UpdatePaintNodeData* QQuickItem__UpdatePaintNodeData_new(const QQuickItem__UpdatePaintNodeData* other) {
    return new QQuickItem::UpdatePaintNodeData(*other);
}

QQuickItem__UpdatePaintNodeData* QQuickItem__UpdatePaintNodeData_new2(QQuickItem__UpdatePaintNodeData* other) {
    return new QQuickItem::UpdatePaintNodeData(std::move(*other));
}

void QQuickItem__UpdatePaintNodeData_CopyAssign(QQuickItem__UpdatePaintNodeData* self, QQuickItem__UpdatePaintNodeData* other) {
    *self = *other;
}

void QQuickItem__UpdatePaintNodeData_MoveAssign(QQuickItem__UpdatePaintNodeData* self, QQuickItem__UpdatePaintNodeData* other) {
    *self = std::move(*other);
}

QSGTransformNode* QQuickItem__UpdatePaintNodeData_TransformNode(const QQuickItem__UpdatePaintNodeData* self) {
    return self->transformNode;
}

void QQuickItem__UpdatePaintNodeData_SetTransformNode(QQuickItem__UpdatePaintNodeData* self, QSGTransformNode* transformNode) {
    self->transformNode = transformNode;
}

void QQuickItem__UpdatePaintNodeData_Delete(QQuickItem__UpdatePaintNodeData* self) {
    delete self;
}
