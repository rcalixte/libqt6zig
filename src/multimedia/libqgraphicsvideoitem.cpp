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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGraphicsVideoItem_Tr(const char* s) {
    auto _ret = QGraphicsVideoItem::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

QRectF* QGraphicsVideoItem_BoundingRect(const QGraphicsVideoItem* self) {
    return new QRectF(self->boundingRect());
}

void QGraphicsVideoItem_Paint(QGraphicsVideoItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paint(painter, option, widget);
}

int QGraphicsVideoItem_Type(const QGraphicsVideoItem* self) {
    return self->type();
}

void QGraphicsVideoItem_NativeSizeChanged(QGraphicsVideoItem* self, const QSizeF* size) {
    self->nativeSizeChanged(*size);
}

void QGraphicsVideoItem_Connect_NativeSizeChanged(QGraphicsVideoItem* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsVideoItem*, QSizeF*) = reinterpret_cast<void (*)(QGraphicsVideoItem*, QSizeF*)>(slot);
    QGraphicsVideoItem::connect(self,
                                static_cast<void (QGraphicsVideoItem::*)(const QSizeF&)>(&QGraphicsVideoItem::nativeSizeChanged),
                                [self, slotFunc](const QSizeF& size) {
                                    const QSizeF& size_ret = size;
                                    // Cast returned reference into pointer
                                    QSizeF* sigval1 = const_cast<QSizeF*>(&size_ret);
                                    slotFunc(self, sigval1);
                                });
}

void QGraphicsVideoItem_TimerEvent(QGraphicsVideoItem* self, QTimerEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->timerEvent(event);
    }
}

QVariant* QGraphicsVideoItem_ItemChange(QGraphicsVideoItem* self, int change, const QVariant* value) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        return new QVariant(vqgraphicsvideoitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    qFatal("Error: Protected method QGraphicsVideoItem::itemChange called without a directly constructed type");
}

libqt_string QGraphicsVideoItem_Tr2(const char* s, const char* c) {
    auto _ret = QGraphicsVideoItem::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsVideoItem_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGraphicsVideoItem::tr(s, c, static_cast<int>(n));
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
QMetaObject* QGraphicsVideoItem_SuperMetaObject(const QGraphicsVideoItem* self) {
    return (QMetaObject*)self->QGraphicsVideoItem::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnMetaObject(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self)))
        vqgraphicsvideoitem->qgraphicsvideoitem_metaobject_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGraphicsVideoItem_SuperMetacast(QGraphicsVideoItem* self, const char* param1) {
    return self->QGraphicsVideoItem::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnMetacast(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_metacast_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGraphicsVideoItem_SuperMetacall(QGraphicsVideoItem* self, int param1, int param2, void** param3) {
    return self->QGraphicsVideoItem::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnMetacall(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_metacall_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Metacall_Callback>(slot);
}

// Base class handler implementation
QRectF* QGraphicsVideoItem_SuperBoundingRect(const QGraphicsVideoItem* self) {
    return new QRectF(self->QGraphicsVideoItem::boundingRect());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnBoundingRect(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self)))
        vqgraphicsvideoitem->qgraphicsvideoitem_boundingrect_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_BoundingRect_Callback>(slot);
}

// Base class handler implementation
void QGraphicsVideoItem_SuperPaint(QGraphicsVideoItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->QGraphicsVideoItem::paint(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnPaint(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_paint_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Paint_Callback>(slot);
}

// Base class handler implementation
int QGraphicsVideoItem_SuperType(const QGraphicsVideoItem* self) {
    return self->QGraphicsVideoItem::type();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnType(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self)))
        vqgraphicsvideoitem->qgraphicsvideoitem_type_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Type_Callback>(slot);
}

// Base class handler implementation
void QGraphicsVideoItem_SuperTimerEvent(QGraphicsVideoItem* self, QTimerEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnTimerEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_timerevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_TimerEvent_Callback>(slot);
}

// Base class handler implementation
QVariant* QGraphicsVideoItem_SuperItemChange(QGraphicsVideoItem* self, int change, const QVariant* value) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        return new QVariant(vqgraphicsvideoitem->QGraphicsVideoItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    qFatal("Error: Protected virtual method QGraphicsVideoItem::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnItemChange(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_itemchange_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_ItemChange_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsVideoItem_Event(QGraphicsVideoItem* self, QEvent* ev) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        return vqgraphicsvideoitem->event(ev);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_SuperEvent(QGraphicsVideoItem* self, QEvent* ev) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        return vqgraphicsvideoitem->QGraphicsVideoItem::event(ev);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_event_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsVideoItem_EventFilter(QGraphicsVideoItem* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGraphicsVideoItem_SuperEventFilter(QGraphicsVideoItem* self, QObject* watched, QEvent* event) {
    return self->QGraphicsVideoItem::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnEventFilter(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_eventfilter_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_ChildEvent(QGraphicsVideoItem* self, QChildEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperChildEvent(QGraphicsVideoItem* self, QChildEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnChildEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_childevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_CustomEvent(QGraphicsVideoItem* self, QEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperCustomEvent(QGraphicsVideoItem* self, QEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnCustomEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_customevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_ConnectNotify(QGraphicsVideoItem* self, const QMetaMethod* signal) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperConnectNotify(QGraphicsVideoItem* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnConnectNotify(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_connectnotify_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_DisconnectNotify(QGraphicsVideoItem* self, const QMetaMethod* signal) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperDisconnectNotify(QGraphicsVideoItem* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnDisconnectNotify(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_disconnectnotify_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_Advance(QGraphicsVideoItem* self, int phase) {
    self->advance(static_cast<int>(phase));
}

// Base class handler implementation
void QGraphicsVideoItem_SuperAdvance(QGraphicsVideoItem* self, int phase) {
    self->QGraphicsVideoItem::advance(static_cast<int>(phase));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnAdvance(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_advance_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Advance_Callback>(slot);
}

// Derived class handler implementation
QPainterPath* QGraphicsVideoItem_Shape(const QGraphicsVideoItem* self) {
    return new QPainterPath(self->shape());
}

// Base class handler implementation
QPainterPath* QGraphicsVideoItem_SuperShape(const QGraphicsVideoItem* self) {
    return new QPainterPath(self->QGraphicsVideoItem::shape());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnShape(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self)))
        vqgraphicsvideoitem->qgraphicsvideoitem_shape_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Shape_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsVideoItem_Contains(const QGraphicsVideoItem* self, const QPointF* point) {
    return self->contains(*point);
}

// Base class handler implementation
bool QGraphicsVideoItem_SuperContains(const QGraphicsVideoItem* self, const QPointF* point) {
    return self->QGraphicsVideoItem::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnContains(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self)))
        vqgraphicsvideoitem->qgraphicsvideoitem_contains_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Contains_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsVideoItem_CollidesWithItem(const QGraphicsVideoItem* self, const QGraphicsItem* other, int mode) {
    return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsVideoItem_SuperCollidesWithItem(const QGraphicsVideoItem* self, const QGraphicsItem* other, int mode) {
    return self->QGraphicsVideoItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnCollidesWithItem(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self)))
        vqgraphicsvideoitem->qgraphicsvideoitem_collideswithitem_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_CollidesWithItem_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsVideoItem_CollidesWithPath(const QGraphicsVideoItem* self, const QPainterPath* path, int mode) {
    return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsVideoItem_SuperCollidesWithPath(const QGraphicsVideoItem* self, const QPainterPath* path, int mode) {
    return self->QGraphicsVideoItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnCollidesWithPath(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self)))
        vqgraphicsvideoitem->qgraphicsvideoitem_collideswithpath_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_CollidesWithPath_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsVideoItem_IsObscuredBy(const QGraphicsVideoItem* self, const QGraphicsItem* item) {
    return self->isObscuredBy(item);
}

// Base class handler implementation
bool QGraphicsVideoItem_SuperIsObscuredBy(const QGraphicsVideoItem* self, const QGraphicsItem* item) {
    return self->QGraphicsVideoItem::isObscuredBy(item);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnIsObscuredBy(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self)))
        vqgraphicsvideoitem->qgraphicsvideoitem_isobscuredby_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_IsObscuredBy_Callback>(slot);
}

// Derived class handler implementation
QPainterPath* QGraphicsVideoItem_OpaqueArea(const QGraphicsVideoItem* self) {
    return new QPainterPath(self->opaqueArea());
}

// Base class handler implementation
QPainterPath* QGraphicsVideoItem_SuperOpaqueArea(const QGraphicsVideoItem* self) {
    return new QPainterPath(self->QGraphicsVideoItem::opaqueArea());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnOpaqueArea(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self)))
        vqgraphicsvideoitem->qgraphicsvideoitem_opaquearea_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_OpaqueArea_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsVideoItem_SceneEventFilter(QGraphicsVideoItem* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        return vqgraphicsvideoitem->sceneEventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::sceneEventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_SuperSceneEventFilter(QGraphicsVideoItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        return vqgraphicsvideoitem->QGraphicsVideoItem::sceneEventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::sceneEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnSceneEventFilter(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_sceneeventfilter_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_SceneEventFilter_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsVideoItem_SceneEvent(QGraphicsVideoItem* self, QEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        return vqgraphicsvideoitem->sceneEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::sceneEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_SuperSceneEvent(QGraphicsVideoItem* self, QEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        return vqgraphicsvideoitem->QGraphicsVideoItem::sceneEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::sceneEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnSceneEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_sceneevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_SceneEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_ContextMenuEvent(QGraphicsVideoItem* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperContextMenuEvent(QGraphicsVideoItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnContextMenuEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_contextmenuevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_DragEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperDragEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnDragEnterEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_dragenterevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_DragLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperDragLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnDragLeaveEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_dragleaveevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_DragMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperDragMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnDragMoveEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_dragmoveevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_DropEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperDropEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnDropEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_dropevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_FocusInEvent(QGraphicsVideoItem* self, QFocusEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperFocusInEvent(QGraphicsVideoItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnFocusInEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_focusinevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_FocusOutEvent(QGraphicsVideoItem* self, QFocusEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperFocusOutEvent(QGraphicsVideoItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnFocusOutEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_focusoutevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_HoverEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->hoverEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::hoverEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperHoverEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnHoverEnterEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_hoverenterevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_HoverEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_HoverMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->hoverMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::hoverMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperHoverMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnHoverMoveEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_hovermoveevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_HoverMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_HoverLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->hoverLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::hoverLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperHoverLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnHoverLeaveEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_hoverleaveevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_HoverLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_KeyPressEvent(QGraphicsVideoItem* self, QKeyEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperKeyPressEvent(QGraphicsVideoItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnKeyPressEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_keypressevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_KeyReleaseEvent(QGraphicsVideoItem* self, QKeyEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperKeyReleaseEvent(QGraphicsVideoItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnKeyReleaseEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_keyreleaseevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_MousePressEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperMousePressEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnMousePressEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_mousepressevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_MouseMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperMouseMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnMouseMoveEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_mousemoveevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_MouseReleaseEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperMouseReleaseEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnMouseReleaseEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_mousereleaseevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_MouseDoubleClickEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperMouseDoubleClickEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnMouseDoubleClickEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_mousedoubleclickevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_WheelEvent(QGraphicsVideoItem* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperWheelEvent(QGraphicsVideoItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnWheelEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_wheelevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_InputMethodEvent(QGraphicsVideoItem* self, QInputMethodEvent* event) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperInputMethodEvent(QGraphicsVideoItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnInputMethodEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_inputmethodevent_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsVideoItem_InputMethodQuery(const QGraphicsVideoItem* self, int query) {
    return new QVariant((self->*&VirtualQGraphicsVideoItem::Base::inputMethodQuery)(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QGraphicsVideoItem_SuperInputMethodQuery(const QGraphicsVideoItem* self, int query) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self)))
        return new QVariant(vqgraphicsvideoitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    qFatal("Error: Protected virtual method QGraphicsVideoItem::inputMethodQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnInputMethodQuery(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self)))
        vqgraphicsvideoitem->qgraphicsvideoitem_inputmethodquery_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsVideoItem_SupportsExtension(const QGraphicsVideoItem* self, int extension) {
    auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self));
    if (vqgraphicsvideoitem) {
        return vqgraphicsvideoitem->supportsExtension(static_cast<VirtualQGraphicsVideoItem::Extension>(extension));
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::supportsExtension called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_SuperSupportsExtension(const QGraphicsVideoItem* self, int extension) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        return vqgraphicsvideoitem->QGraphicsVideoItem::supportsExtension(static_cast<VirtualQGraphicsVideoItem::Extension>(extension));
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::supportsExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnSupportsExtension(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self)))
        vqgraphicsvideoitem->qgraphicsvideoitem_supportsextension_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_SupportsExtension_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsVideoItem_SetExtension(QGraphicsVideoItem* self, int extension, const QVariant* variant) {
    auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self);
    if (vqgraphicsvideoitem) {
        vqgraphicsvideoitem->setExtension(static_cast<VirtualQGraphicsVideoItem::Extension>(extension), *variant);
    } else {
        qFatal("Error: Protected virtual method QGraphicsVideoItem::setExtension called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsVideoItem_SuperSetExtension(QGraphicsVideoItem* self, int extension, const QVariant* variant) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->QGraphicsVideoItem::setExtension(static_cast<VirtualQGraphicsVideoItem::Extension>(extension), *variant);
    } else
        qFatal("Error: Protected virtual method QGraphicsVideoItem::setExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnSetExtension(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self))
        vqgraphicsvideoitem->qgraphicsvideoitem_setextension_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_SetExtension_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsVideoItem_Extension(const QGraphicsVideoItem* self, const QVariant* variant) {
    return new QVariant((self->*&VirtualQGraphicsVideoItem::Base::extension)(*variant));
}

// Base class handler implementation
QVariant* QGraphicsVideoItem_SuperExtension(const QGraphicsVideoItem* self, const QVariant* variant) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self)))
        return new QVariant(vqgraphicsvideoitem->extension(*variant));
    qFatal("Error: Protected virtual method QGraphicsVideoItem::extension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnExtension(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self)))
        vqgraphicsvideoitem->qgraphicsvideoitem_extension_callback = reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Extension_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsVideoItem_UpdateMicroFocus(QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->VirtualQGraphicsVideoItem::updateMicroFocus();
    } else
        qFatal("Error: Protected method QGraphicsVideoItem::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGraphicsVideoItem_Sender(const QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        return vqgraphicsvideoitem->VirtualQGraphicsVideoItem::sender();
    } else
        qFatal("Error: Protected method QGraphicsVideoItem::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsVideoItem_SenderSignalIndex(const QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        return vqgraphicsvideoitem->VirtualQGraphicsVideoItem::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGraphicsVideoItem::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsVideoItem_Receivers(const QGraphicsVideoItem* self, const char* signal) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        return vqgraphicsvideoitem->VirtualQGraphicsVideoItem::receivers(signal);
    } else
        qFatal("Error: Protected method QGraphicsVideoItem::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsVideoItem_IsSignalConnected(const QGraphicsVideoItem* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        return vqgraphicsvideoitem->VirtualQGraphicsVideoItem::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGraphicsVideoItem::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsVideoItem_AddToIndex(QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->VirtualQGraphicsVideoItem::addToIndex();
    } else
        qFatal("Error: Protected method QGraphicsVideoItem::addToIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsVideoItem_RemoveFromIndex(QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->VirtualQGraphicsVideoItem::removeFromIndex();
    } else
        qFatal("Error: Protected method QGraphicsVideoItem::removeFromIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsVideoItem_PrepareGeometryChange(QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->VirtualQGraphicsVideoItem::prepareGeometryChange();
    } else
        qFatal("Error: Protected method QGraphicsVideoItem::prepareGeometryChange called without a directly constructed type");
}

void QGraphicsVideoItem_Delete(QGraphicsVideoItem* self) {
    delete self;
}
