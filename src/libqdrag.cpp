#include <QChildEvent>
#include <QDrag>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QObject>
#include <QPixmap>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qdrag.h>
#include "libqdrag.h"
#include "libqdrag.hxx"

QDrag* QDrag_new(QObject* dragSource) {
    return new VirtualQDrag(dragSource);
}

QMetaObject* QDrag_MetaObject(const QDrag* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDrag_Metacast(QDrag* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDrag_Metacall(QDrag* self, int param1, int param2, void** param3) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDrag*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDrag_OnMetacall(QDrag* self, intptr_t slot) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_Metacall_Callback(reinterpret_cast<VirtualQDrag::QDrag_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDrag_QBaseMetacall(QDrag* self, int param1, int param2, void** param3) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_Metacall_IsBase(true);
        return vqdrag->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDrag*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDrag_Tr(const char* s) {
    QString _ret = QDrag::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDrag_SetMimeData(QDrag* self, QMimeData* data) {
    self->setMimeData(data);
}

QMimeData* QDrag_MimeData(const QDrag* self) {
    return self->mimeData();
}

void QDrag_SetPixmap(QDrag* self, const QPixmap* pixmap) {
    self->setPixmap(*pixmap);
}

QPixmap* QDrag_Pixmap(const QDrag* self) {
    return new QPixmap(self->pixmap());
}

void QDrag_SetHotSpot(QDrag* self, const QPoint* hotspot) {
    self->setHotSpot(*hotspot);
}

QPoint* QDrag_HotSpot(const QDrag* self) {
    return new QPoint(self->hotSpot());
}

QObject* QDrag_Source(const QDrag* self) {
    return self->source();
}

QObject* QDrag_Target(const QDrag* self) {
    return self->target();
}

int QDrag_Exec(QDrag* self) {
    return static_cast<int>(self->exec());
}

int QDrag_Exec2(QDrag* self, int supportedActions, int defaultAction) {
    return static_cast<int>(self->exec(static_cast<Qt::DropActions>(supportedActions), static_cast<Qt::DropAction>(defaultAction)));
}

void QDrag_SetDragCursor(QDrag* self, const QPixmap* cursor, int action) {
    self->setDragCursor(*cursor, static_cast<Qt::DropAction>(action));
}

QPixmap* QDrag_DragCursor(const QDrag* self, int action) {
    return new QPixmap(self->dragCursor(static_cast<Qt::DropAction>(action)));
}

int QDrag_SupportedActions(const QDrag* self) {
    return static_cast<int>(self->supportedActions());
}

int QDrag_DefaultAction(const QDrag* self) {
    return static_cast<int>(self->defaultAction());
}

void QDrag_Cancel() {
    QDrag::cancel();
}

void QDrag_ActionChanged(QDrag* self, int action) {
    self->actionChanged(static_cast<Qt::DropAction>(action));
}

void QDrag_Connect_ActionChanged(QDrag* self, intptr_t slot) {
    void (*slotFunc)(QDrag*, int) = reinterpret_cast<void (*)(QDrag*, int)>(slot);
    QDrag::connect(self, &QDrag::actionChanged, [self, slotFunc](Qt::DropAction action) {
        int sigval1 = static_cast<int>(action);
        slotFunc(self, sigval1);
    });
}

void QDrag_TargetChanged(QDrag* self, QObject* newTarget) {
    self->targetChanged(newTarget);
}

void QDrag_Connect_TargetChanged(QDrag* self, intptr_t slot) {
    void (*slotFunc)(QDrag*, QObject*) = reinterpret_cast<void (*)(QDrag*, QObject*)>(slot);
    QDrag::connect(self, &QDrag::targetChanged, [self, slotFunc](QObject* newTarget) {
        QObject* sigval1 = newTarget;
        slotFunc(self, sigval1);
    });
}

libqt_string QDrag_Tr2(const char* s, const char* c) {
    QString _ret = QDrag::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDrag_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDrag::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QDrag_Exec1(QDrag* self, int supportedActions) {
    return static_cast<int>(self->exec(static_cast<Qt::DropActions>(supportedActions)));
}

// Derived class handler implementation
bool QDrag_Event(QDrag* self, QEvent* event) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        return vqdrag->event(event);
    } else {
        return self->QDrag::event(event);
    }
}

// Base class handler implementation
bool QDrag_QBaseEvent(QDrag* self, QEvent* event) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_Event_IsBase(true);
        return vqdrag->event(event);
    } else {
        return self->QDrag::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnEvent(QDrag* self, intptr_t slot) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_Event_Callback(reinterpret_cast<VirtualQDrag::QDrag_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDrag_EventFilter(QDrag* self, QObject* watched, QEvent* event) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        return vqdrag->eventFilter(watched, event);
    } else {
        return self->QDrag::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDrag_QBaseEventFilter(QDrag* self, QObject* watched, QEvent* event) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_EventFilter_IsBase(true);
        return vqdrag->eventFilter(watched, event);
    } else {
        return self->QDrag::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnEventFilter(QDrag* self, intptr_t slot) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_EventFilter_Callback(reinterpret_cast<VirtualQDrag::QDrag_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDrag_TimerEvent(QDrag* self, QTimerEvent* event) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->timerEvent(event);
    } else {
        ((VirtualQDrag*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDrag_QBaseTimerEvent(QDrag* self, QTimerEvent* event) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_TimerEvent_IsBase(true);
        vqdrag->timerEvent(event);
    } else {
        ((VirtualQDrag*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnTimerEvent(QDrag* self, intptr_t slot) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_TimerEvent_Callback(reinterpret_cast<VirtualQDrag::QDrag_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDrag_ChildEvent(QDrag* self, QChildEvent* event) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->childEvent(event);
    } else {
        ((VirtualQDrag*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDrag_QBaseChildEvent(QDrag* self, QChildEvent* event) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_ChildEvent_IsBase(true);
        vqdrag->childEvent(event);
    } else {
        ((VirtualQDrag*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnChildEvent(QDrag* self, intptr_t slot) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_ChildEvent_Callback(reinterpret_cast<VirtualQDrag::QDrag_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDrag_CustomEvent(QDrag* self, QEvent* event) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->customEvent(event);
    } else {
        ((VirtualQDrag*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDrag_QBaseCustomEvent(QDrag* self, QEvent* event) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_CustomEvent_IsBase(true);
        vqdrag->customEvent(event);
    } else {
        ((VirtualQDrag*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnCustomEvent(QDrag* self, intptr_t slot) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_CustomEvent_Callback(reinterpret_cast<VirtualQDrag::QDrag_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDrag_ConnectNotify(QDrag* self, const QMetaMethod* signal) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->connectNotify(*signal);
    } else {
        ((VirtualQDrag*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDrag_QBaseConnectNotify(QDrag* self, const QMetaMethod* signal) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_ConnectNotify_IsBase(true);
        vqdrag->connectNotify(*signal);
    } else {
        ((VirtualQDrag*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnConnectNotify(QDrag* self, intptr_t slot) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_ConnectNotify_Callback(reinterpret_cast<VirtualQDrag::QDrag_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDrag_DisconnectNotify(QDrag* self, const QMetaMethod* signal) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->disconnectNotify(*signal);
    } else {
        ((VirtualQDrag*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDrag_QBaseDisconnectNotify(QDrag* self, const QMetaMethod* signal) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_DisconnectNotify_IsBase(true);
        vqdrag->disconnectNotify(*signal);
    } else {
        ((VirtualQDrag*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnDisconnectNotify(QDrag* self, intptr_t slot) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_DisconnectNotify_Callback(reinterpret_cast<VirtualQDrag::QDrag_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDrag_Sender(const QDrag* self) {
    auto* vqdrag = const_cast<VirtualQDrag*>(dynamic_cast<const VirtualQDrag*>(self));
    if (vqdrag && vqdrag->isVirtualQDrag) {
        return vqdrag->sender();
    } else {
        return ((VirtualQDrag*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDrag_QBaseSender(const QDrag* self) {
    auto* vqdrag = const_cast<VirtualQDrag*>(dynamic_cast<const VirtualQDrag*>(self));
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_Sender_IsBase(true);
        return vqdrag->sender();
    } else {
        return ((VirtualQDrag*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnSender(const QDrag* self, intptr_t slot) {
    auto* vqdrag = const_cast<VirtualQDrag*>(dynamic_cast<const VirtualQDrag*>(self));
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_Sender_Callback(reinterpret_cast<VirtualQDrag::QDrag_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDrag_SenderSignalIndex(const QDrag* self) {
    auto* vqdrag = const_cast<VirtualQDrag*>(dynamic_cast<const VirtualQDrag*>(self));
    if (vqdrag && vqdrag->isVirtualQDrag) {
        return vqdrag->senderSignalIndex();
    } else {
        return ((VirtualQDrag*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDrag_QBaseSenderSignalIndex(const QDrag* self) {
    auto* vqdrag = const_cast<VirtualQDrag*>(dynamic_cast<const VirtualQDrag*>(self));
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_SenderSignalIndex_IsBase(true);
        return vqdrag->senderSignalIndex();
    } else {
        return ((VirtualQDrag*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnSenderSignalIndex(const QDrag* self, intptr_t slot) {
    auto* vqdrag = const_cast<VirtualQDrag*>(dynamic_cast<const VirtualQDrag*>(self));
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDrag::QDrag_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDrag_Receivers(const QDrag* self, const char* signal) {
    auto* vqdrag = const_cast<VirtualQDrag*>(dynamic_cast<const VirtualQDrag*>(self));
    if (vqdrag && vqdrag->isVirtualQDrag) {
        return vqdrag->receivers(signal);
    } else {
        return ((VirtualQDrag*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDrag_QBaseReceivers(const QDrag* self, const char* signal) {
    auto* vqdrag = const_cast<VirtualQDrag*>(dynamic_cast<const VirtualQDrag*>(self));
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_Receivers_IsBase(true);
        return vqdrag->receivers(signal);
    } else {
        return ((VirtualQDrag*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnReceivers(const QDrag* self, intptr_t slot) {
    auto* vqdrag = const_cast<VirtualQDrag*>(dynamic_cast<const VirtualQDrag*>(self));
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_Receivers_Callback(reinterpret_cast<VirtualQDrag::QDrag_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDrag_IsSignalConnected(const QDrag* self, const QMetaMethod* signal) {
    auto* vqdrag = const_cast<VirtualQDrag*>(dynamic_cast<const VirtualQDrag*>(self));
    if (vqdrag && vqdrag->isVirtualQDrag) {
        return vqdrag->isSignalConnected(*signal);
    } else {
        return ((VirtualQDrag*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDrag_QBaseIsSignalConnected(const QDrag* self, const QMetaMethod* signal) {
    auto* vqdrag = const_cast<VirtualQDrag*>(dynamic_cast<const VirtualQDrag*>(self));
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_IsSignalConnected_IsBase(true);
        return vqdrag->isSignalConnected(*signal);
    } else {
        return ((VirtualQDrag*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnIsSignalConnected(const QDrag* self, intptr_t slot) {
    auto* vqdrag = const_cast<VirtualQDrag*>(dynamic_cast<const VirtualQDrag*>(self));
    if (vqdrag && vqdrag->isVirtualQDrag) {
        vqdrag->setQDrag_IsSignalConnected_Callback(reinterpret_cast<VirtualQDrag::QDrag_IsSignalConnected_Callback>(slot));
    }
}

void QDrag_Delete(QDrag* self) {
    delete self;
}
