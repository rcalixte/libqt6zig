#include <QChildEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QGraphicsItem>
#include <QGraphicsObject>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsVideoItem>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPointF>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionGraphicsItem>
#include <QTimerEvent>
#include <QVariant>
#include <QVideoSink>
#include <QWidget>
#include <qgraphicsvideoitem.h>
#include "libqgraphicsvideoitem.h"
#include "libqgraphicsvideoitem.hxx"

QGraphicsVideoItem* QGraphicsVideoItem_new() {
    return new VirtualQGraphicsVideoItem();
}

QGraphicsVideoItem* QGraphicsVideoItem_new2(QGraphicsItem* parent) {
    return new VirtualQGraphicsVideoItem(parent);
}

QMetaObject* QGraphicsVideoItem_MetaObject(const QGraphicsVideoItem* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsVideoItem_Metacast(QGraphicsVideoItem* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsVideoItem_Metacall(QGraphicsVideoItem* self, int param1, int param2, void** param3) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGraphicsVideoItem*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsVideoItem_OnMetacall(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Metacall_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsVideoItem_QBaseMetacall(QGraphicsVideoItem* self, int param1, int param2, void** param3) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Metacall_IsBase(true);
        return vqgraphicsvideoitem->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGraphicsVideoItem*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGraphicsVideoItem_Tr(const char* s) {
    QString _ret = QGraphicsVideoItem::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVideoSink* QGraphicsVideoItem_VideoSink(const QGraphicsVideoItem* self) {
    return self->videoSink();
}

int QGraphicsVideoItem_AspectRatioMode(const QGraphicsVideoItem* self) {
    return static_cast<int>(self->aspectRatioMode());
}

void QGraphicsVideoItem_SetAspectRatioMode(QGraphicsVideoItem* self, int mode) {
    self->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

QPointF* QGraphicsVideoItem_Offset(const QGraphicsVideoItem* self) {
    return new QPointF(self->offset());
}

void QGraphicsVideoItem_SetOffset(QGraphicsVideoItem* self, const QPointF* offset) {
    self->setOffset(*offset);
}

QSizeF* QGraphicsVideoItem_Size(const QGraphicsVideoItem* self) {
    return new QSizeF(self->size());
}

void QGraphicsVideoItem_SetSize(QGraphicsVideoItem* self, const QSizeF* size) {
    self->setSize(*size);
}

QSizeF* QGraphicsVideoItem_NativeSize(const QGraphicsVideoItem* self) {
    return new QSizeF(self->nativeSize());
}

void QGraphicsVideoItem_NativeSizeChanged(QGraphicsVideoItem* self, const QSizeF* size) {
    self->nativeSizeChanged(*size);
}

void QGraphicsVideoItem_Connect_NativeSizeChanged(QGraphicsVideoItem* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsVideoItem*, QSizeF*) = reinterpret_cast<void (*)(QGraphicsVideoItem*, QSizeF*)>(slot);
    QGraphicsVideoItem::connect(self, &QGraphicsVideoItem::nativeSizeChanged, [self, slotFunc](const QSizeF& size) {
        const QSizeF& size_ret = size;
        // Cast returned reference into pointer
        QSizeF* sigval1 = const_cast<QSizeF*>(&size_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QGraphicsVideoItem_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsVideoItem::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsVideoItem_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsVideoItem::tr(s, c, static_cast<int>(n));
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
QRectF* QGraphicsVideoItem_BoundingRect(const QGraphicsVideoItem* self) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return new QRectF(vqgraphicsvideoitem->boundingRect());
    } else {
        return new QRectF(((VirtualQGraphicsVideoItem*)self)->boundingRect());
    }
}

// Base class handler implementation
QRectF* QGraphicsVideoItem_QBaseBoundingRect(const QGraphicsVideoItem* self) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_BoundingRect_IsBase(true);
        return new QRectF(vqgraphicsvideoitem->boundingRect());
    } else {
        return new QRectF(((VirtualQGraphicsVideoItem*)self)->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnBoundingRect(const QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_BoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_Paint(QGraphicsVideoItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->paint(painter, option, widget);
    } else {
        self->QGraphicsVideoItem::paint(painter, option, widget);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBasePaint(QGraphicsVideoItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Paint_IsBase(true);
        vqgraphicsvideoitem->paint(painter, option, widget);
    } else {
        self->QGraphicsVideoItem::paint(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnPaint(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsVideoItem_Type(const QGraphicsVideoItem* self) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return vqgraphicsvideoitem->type();
    } else {
        return self->QGraphicsVideoItem::type();
    }
}

// Base class handler implementation
int QGraphicsVideoItem_QBaseType(const QGraphicsVideoItem* self) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Type_IsBase(true);
        return vqgraphicsvideoitem->type();
    } else {
        return self->QGraphicsVideoItem::type();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnType(const QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Type_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Type_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_TimerEvent(QGraphicsVideoItem* self, QTimerEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->timerEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseTimerEvent(QGraphicsVideoItem* self, QTimerEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_TimerEvent_IsBase(true);
        vqgraphicsvideoitem->timerEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnTimerEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_TimerEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsVideoItem_ItemChange(QGraphicsVideoItem* self, int change, const QVariant* value) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return new QVariant(vqgraphicsvideoitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsVideoItem_QBaseItemChange(QGraphicsVideoItem* self, int change, const QVariant* value) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_ItemChange_IsBase(true);
        return new QVariant(vqgraphicsvideoitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnItemChange(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_ItemChange_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_ItemChange_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsVideoItem_Event(QGraphicsVideoItem* self, QEvent* ev) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return vqgraphicsvideoitem->event(ev);
    } else {
        return ((VirtualQGraphicsVideoItem*)self)->event(ev);
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_QBaseEvent(QGraphicsVideoItem* self, QEvent* ev) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Event_IsBase(true);
        return vqgraphicsvideoitem->event(ev);
    } else {
        return ((VirtualQGraphicsVideoItem*)self)->event(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Event_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsVideoItem_EventFilter(QGraphicsVideoItem* self, QObject* watched, QEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return vqgraphicsvideoitem->eventFilter(watched, event);
    } else {
        return self->QGraphicsVideoItem::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_QBaseEventFilter(QGraphicsVideoItem* self, QObject* watched, QEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_EventFilter_IsBase(true);
        return vqgraphicsvideoitem->eventFilter(watched, event);
    } else {
        return self->QGraphicsVideoItem::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnEventFilter(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_ChildEvent(QGraphicsVideoItem* self, QChildEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->childEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseChildEvent(QGraphicsVideoItem* self, QChildEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_ChildEvent_IsBase(true);
        vqgraphicsvideoitem->childEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnChildEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_ChildEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_CustomEvent(QGraphicsVideoItem* self, QEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->customEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseCustomEvent(QGraphicsVideoItem* self, QEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_CustomEvent_IsBase(true);
        vqgraphicsvideoitem->customEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnCustomEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_CustomEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_ConnectNotify(QGraphicsVideoItem* self, const QMetaMethod* signal) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->connectNotify(*signal);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseConnectNotify(QGraphicsVideoItem* self, const QMetaMethod* signal) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_ConnectNotify_IsBase(true);
        vqgraphicsvideoitem->connectNotify(*signal);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnConnectNotify(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_ConnectNotify_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_DisconnectNotify(QGraphicsVideoItem* self, const QMetaMethod* signal) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->disconnectNotify(*signal);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseDisconnectNotify(QGraphicsVideoItem* self, const QMetaMethod* signal) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_DisconnectNotify_IsBase(true);
        vqgraphicsvideoitem->disconnectNotify(*signal);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnDisconnectNotify(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_DisconnectNotify_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_Advance(QGraphicsVideoItem* self, int phase) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->advance(static_cast<int>(phase));
    } else {
        self->QGraphicsVideoItem::advance(static_cast<int>(phase));
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseAdvance(QGraphicsVideoItem* self, int phase) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Advance_IsBase(true);
        vqgraphicsvideoitem->advance(static_cast<int>(phase));
    } else {
        self->QGraphicsVideoItem::advance(static_cast<int>(phase));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnAdvance(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Advance_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsVideoItem_Shape(const QGraphicsVideoItem* self) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return new QPainterPath(vqgraphicsvideoitem->shape());
    } else {
        return new QPainterPath(((VirtualQGraphicsVideoItem*)self)->shape());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsVideoItem_QBaseShape(const QGraphicsVideoItem* self) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Shape_IsBase(true);
        return new QPainterPath(vqgraphicsvideoitem->shape());
    } else {
        return new QPainterPath(((VirtualQGraphicsVideoItem*)self)->shape());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnShape(const QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Shape_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsVideoItem_Contains(const QGraphicsVideoItem* self, const QPointF* point) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return vqgraphicsvideoitem->contains(*point);
    } else {
        return self->QGraphicsVideoItem::contains(*point);
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_QBaseContains(const QGraphicsVideoItem* self, const QPointF* point) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Contains_IsBase(true);
        return vqgraphicsvideoitem->contains(*point);
    } else {
        return self->QGraphicsVideoItem::contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnContains(const QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Contains_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsVideoItem_CollidesWithItem(const QGraphicsVideoItem* self, const QGraphicsItem* other, int mode) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return vqgraphicsvideoitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return self->QGraphicsVideoItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_QBaseCollidesWithItem(const QGraphicsVideoItem* self, const QGraphicsItem* other, int mode) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_CollidesWithItem_IsBase(true);
        return vqgraphicsvideoitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return self->QGraphicsVideoItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnCollidesWithItem(const QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_CollidesWithItem_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_CollidesWithItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsVideoItem_CollidesWithPath(const QGraphicsVideoItem* self, const QPainterPath* path, int mode) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return vqgraphicsvideoitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return self->QGraphicsVideoItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_QBaseCollidesWithPath(const QGraphicsVideoItem* self, const QPainterPath* path, int mode) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_CollidesWithPath_IsBase(true);
        return vqgraphicsvideoitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return self->QGraphicsVideoItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnCollidesWithPath(const QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_CollidesWithPath_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_CollidesWithPath_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsVideoItem_IsObscuredBy(const QGraphicsVideoItem* self, const QGraphicsItem* item) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return vqgraphicsvideoitem->isObscuredBy(item);
    } else {
        return self->QGraphicsVideoItem::isObscuredBy(item);
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_QBaseIsObscuredBy(const QGraphicsVideoItem* self, const QGraphicsItem* item) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_IsObscuredBy_IsBase(true);
        return vqgraphicsvideoitem->isObscuredBy(item);
    } else {
        return self->QGraphicsVideoItem::isObscuredBy(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnIsObscuredBy(const QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_IsObscuredBy_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsVideoItem_OpaqueArea(const QGraphicsVideoItem* self) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return new QPainterPath(vqgraphicsvideoitem->opaqueArea());
    } else {
        return new QPainterPath(((VirtualQGraphicsVideoItem*)self)->opaqueArea());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsVideoItem_QBaseOpaqueArea(const QGraphicsVideoItem* self) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_OpaqueArea_IsBase(true);
        return new QPainterPath(vqgraphicsvideoitem->opaqueArea());
    } else {
        return new QPainterPath(((VirtualQGraphicsVideoItem*)self)->opaqueArea());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnOpaqueArea(const QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_OpaqueArea_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsVideoItem_SceneEventFilter(QGraphicsVideoItem* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return vqgraphicsvideoitem->sceneEventFilter(watched, event);
    } else {
        return ((VirtualQGraphicsVideoItem*)self)->sceneEventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_QBaseSceneEventFilter(QGraphicsVideoItem* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_SceneEventFilter_IsBase(true);
        return vqgraphicsvideoitem->sceneEventFilter(watched, event);
    } else {
        return ((VirtualQGraphicsVideoItem*)self)->sceneEventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnSceneEventFilter(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_SceneEventFilter_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_SceneEventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsVideoItem_SceneEvent(QGraphicsVideoItem* self, QEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return vqgraphicsvideoitem->sceneEvent(event);
    } else {
        return ((VirtualQGraphicsVideoItem*)self)->sceneEvent(event);
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_QBaseSceneEvent(QGraphicsVideoItem* self, QEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_SceneEvent_IsBase(true);
        return vqgraphicsvideoitem->sceneEvent(event);
    } else {
        return ((VirtualQGraphicsVideoItem*)self)->sceneEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnSceneEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_SceneEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_SceneEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_ContextMenuEvent(QGraphicsVideoItem* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->contextMenuEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseContextMenuEvent(QGraphicsVideoItem* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_ContextMenuEvent_IsBase(true);
        vqgraphicsvideoitem->contextMenuEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnContextMenuEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_DragEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->dragEnterEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseDragEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_DragEnterEvent_IsBase(true);
        vqgraphicsvideoitem->dragEnterEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnDragEnterEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_DragLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->dragLeaveEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseDragLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_DragLeaveEvent_IsBase(true);
        vqgraphicsvideoitem->dragLeaveEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnDragLeaveEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_DragMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->dragMoveEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseDragMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_DragMoveEvent_IsBase(true);
        vqgraphicsvideoitem->dragMoveEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnDragMoveEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_DropEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->dropEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseDropEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_DropEvent_IsBase(true);
        vqgraphicsvideoitem->dropEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnDropEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_FocusInEvent(QGraphicsVideoItem* self, QFocusEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->focusInEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseFocusInEvent(QGraphicsVideoItem* self, QFocusEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_FocusInEvent_IsBase(true);
        vqgraphicsvideoitem->focusInEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnFocusInEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_FocusOutEvent(QGraphicsVideoItem* self, QFocusEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->focusOutEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseFocusOutEvent(QGraphicsVideoItem* self, QFocusEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_FocusOutEvent_IsBase(true);
        vqgraphicsvideoitem->focusOutEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnFocusOutEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_HoverEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->hoverEnterEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseHoverEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_HoverEnterEvent_IsBase(true);
        vqgraphicsvideoitem->hoverEnterEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnHoverEnterEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_HoverEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_HoverEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_HoverMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->hoverMoveEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseHoverMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_HoverMoveEvent_IsBase(true);
        vqgraphicsvideoitem->hoverMoveEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnHoverMoveEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_HoverMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_HoverMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_HoverLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->hoverLeaveEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseHoverLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_HoverLeaveEvent_IsBase(true);
        vqgraphicsvideoitem->hoverLeaveEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnHoverLeaveEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_HoverLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_KeyPressEvent(QGraphicsVideoItem* self, QKeyEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->keyPressEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseKeyPressEvent(QGraphicsVideoItem* self, QKeyEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_KeyPressEvent_IsBase(true);
        vqgraphicsvideoitem->keyPressEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnKeyPressEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_KeyReleaseEvent(QGraphicsVideoItem* self, QKeyEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->keyReleaseEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseKeyReleaseEvent(QGraphicsVideoItem* self, QKeyEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_KeyReleaseEvent_IsBase(true);
        vqgraphicsvideoitem->keyReleaseEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnKeyReleaseEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_MousePressEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->mousePressEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseMousePressEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_MousePressEvent_IsBase(true);
        vqgraphicsvideoitem->mousePressEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnMousePressEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_MouseMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->mouseMoveEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseMouseMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_MouseMoveEvent_IsBase(true);
        vqgraphicsvideoitem->mouseMoveEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnMouseMoveEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_MouseReleaseEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->mouseReleaseEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseMouseReleaseEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_MouseReleaseEvent_IsBase(true);
        vqgraphicsvideoitem->mouseReleaseEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnMouseReleaseEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_MouseDoubleClickEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseMouseDoubleClickEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_MouseDoubleClickEvent_IsBase(true);
        vqgraphicsvideoitem->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnMouseDoubleClickEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_WheelEvent(QGraphicsVideoItem* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->wheelEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseWheelEvent(QGraphicsVideoItem* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_WheelEvent_IsBase(true);
        vqgraphicsvideoitem->wheelEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnWheelEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_InputMethodEvent(QGraphicsVideoItem* self, QInputMethodEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->inputMethodEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseInputMethodEvent(QGraphicsVideoItem* self, QInputMethodEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_InputMethodEvent_IsBase(true);
        vqgraphicsvideoitem->inputMethodEvent(event);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnInputMethodEvent(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsVideoItem_InputMethodQuery(const QGraphicsVideoItem* self, int query) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return new QVariant(vqgraphicsvideoitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsVideoItem_QBaseInputMethodQuery(const QGraphicsVideoItem* self, int query) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_InputMethodQuery_IsBase(true);
        return new QVariant(vqgraphicsvideoitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnInputMethodQuery(const QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsVideoItem_SupportsExtension(const QGraphicsVideoItem* self, int extension) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return vqgraphicsvideoitem->supportsExtension(static_cast<VirtualQGraphicsVideoItem::Extension>(extension));
    } else {
        return ((VirtualQGraphicsVideoItem*)self)->supportsExtension(static_cast<VirtualQGraphicsVideoItem::Extension>(extension));
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_QBaseSupportsExtension(const QGraphicsVideoItem* self, int extension) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_SupportsExtension_IsBase(true);
        return vqgraphicsvideoitem->supportsExtension(static_cast<VirtualQGraphicsVideoItem::Extension>(extension));
    } else {
        return ((VirtualQGraphicsVideoItem*)self)->supportsExtension(static_cast<VirtualQGraphicsVideoItem::Extension>(extension));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnSupportsExtension(const QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_SupportsExtension_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_SupportsExtension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_SetExtension(QGraphicsVideoItem* self, int extension, const QVariant* variant) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setExtension(static_cast<VirtualQGraphicsVideoItem::Extension>(extension), *variant);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->setExtension(static_cast<VirtualQGraphicsVideoItem::Extension>(extension), *variant);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseSetExtension(QGraphicsVideoItem* self, int extension, const QVariant* variant) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_SetExtension_IsBase(true);
        vqgraphicsvideoitem->setExtension(static_cast<VirtualQGraphicsVideoItem::Extension>(extension), *variant);
    } else {
        ((VirtualQGraphicsVideoItem*)self)->setExtension(static_cast<VirtualQGraphicsVideoItem::Extension>(extension), *variant);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnSetExtension(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_SetExtension_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_SetExtension_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsVideoItem_Extension(const QGraphicsVideoItem* self, const QVariant* variant) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return new QVariant(vqgraphicsvideoitem->extension(*variant));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsVideoItem_QBaseExtension(const QGraphicsVideoItem* self, const QVariant* variant) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Extension_IsBase(true);
        return new QVariant(vqgraphicsvideoitem->extension(*variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnExtension(const QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Extension_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_UpdateMicroFocus(QGraphicsVideoItem* self) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->updateMicroFocus();
    } else {
        ((VirtualQGraphicsVideoItem*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseUpdateMicroFocus(QGraphicsVideoItem* self) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_UpdateMicroFocus_IsBase(true);
        vqgraphicsvideoitem->updateMicroFocus();
    } else {
        ((VirtualQGraphicsVideoItem*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnUpdateMicroFocus(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGraphicsVideoItem_Sender(const QGraphicsVideoItem* self) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return vqgraphicsvideoitem->sender();
    } else {
        return ((VirtualQGraphicsVideoItem*)self)->sender();
    }
}

// Base class handler implementation
QObject* QGraphicsVideoItem_QBaseSender(const QGraphicsVideoItem* self) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Sender_IsBase(true);
        return vqgraphicsvideoitem->sender();
    } else {
        return ((VirtualQGraphicsVideoItem*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnSender(const QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Sender_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsVideoItem_SenderSignalIndex(const QGraphicsVideoItem* self) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return vqgraphicsvideoitem->senderSignalIndex();
    } else {
        return ((VirtualQGraphicsVideoItem*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QGraphicsVideoItem_QBaseSenderSignalIndex(const QGraphicsVideoItem* self) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_SenderSignalIndex_IsBase(true);
        return vqgraphicsvideoitem->senderSignalIndex();
    } else {
        return ((VirtualQGraphicsVideoItem*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnSenderSignalIndex(const QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsVideoItem_Receivers(const QGraphicsVideoItem* self, const char* signal) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return vqgraphicsvideoitem->receivers(signal);
    } else {
        return ((VirtualQGraphicsVideoItem*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QGraphicsVideoItem_QBaseReceivers(const QGraphicsVideoItem* self, const char* signal) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Receivers_IsBase(true);
        return vqgraphicsvideoitem->receivers(signal);
    } else {
        return ((VirtualQGraphicsVideoItem*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnReceivers(const QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Receivers_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsVideoItem_IsSignalConnected(const QGraphicsVideoItem* self, const QMetaMethod* signal) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        return vqgraphicsvideoitem->isSignalConnected(*signal);
    } else {
        return ((VirtualQGraphicsVideoItem*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_QBaseIsSignalConnected(const QGraphicsVideoItem* self, const QMetaMethod* signal) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_IsSignalConnected_IsBase(true);
        return vqgraphicsvideoitem->isSignalConnected(*signal);
    } else {
        return ((VirtualQGraphicsVideoItem*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnIsSignalConnected(const QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_IsSignalConnected_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_AddToIndex(QGraphicsVideoItem* self) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->addToIndex();
    } else {
        ((VirtualQGraphicsVideoItem*)self)->addToIndex();
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseAddToIndex(QGraphicsVideoItem* self) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_AddToIndex_IsBase(true);
        vqgraphicsvideoitem->addToIndex();
    } else {
        ((VirtualQGraphicsVideoItem*)self)->addToIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnAddToIndex(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_AddToIndex_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_AddToIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_RemoveFromIndex(QGraphicsVideoItem* self) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->removeFromIndex();
    } else {
        ((VirtualQGraphicsVideoItem*)self)->removeFromIndex();
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseRemoveFromIndex(QGraphicsVideoItem* self) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_RemoveFromIndex_IsBase(true);
        vqgraphicsvideoitem->removeFromIndex();
    } else {
        ((VirtualQGraphicsVideoItem*)self)->removeFromIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnRemoveFromIndex(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_RemoveFromIndex_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_RemoveFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_PrepareGeometryChange(QGraphicsVideoItem* self) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->prepareGeometryChange();
    } else {
        ((VirtualQGraphicsVideoItem*)self)->prepareGeometryChange();
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBasePrepareGeometryChange(QGraphicsVideoItem* self) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_PrepareGeometryChange_IsBase(true);
        vqgraphicsvideoitem->prepareGeometryChange();
    } else {
        ((VirtualQGraphicsVideoItem*)self)->prepareGeometryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnPrepareGeometryChange(QGraphicsVideoItem* self, intptr_t slot) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem && vqgraphicsvideoitem->isVirtualQGraphicsVideoItem) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_PrepareGeometryChange_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_PrepareGeometryChange_Callback>(slot));
    }
}

void QGraphicsVideoItem_Delete(QGraphicsVideoItem* self) {
    delete self;
}
