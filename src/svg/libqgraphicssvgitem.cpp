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
#include <QGraphicsSvgItem>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPointF>
#include <QRectF>
#include <QSize>
#include <QString>
#include <QStyleOptionGraphicsItem>
#include <QSvgRenderer>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qgraphicssvgitem.h>
#include "libqgraphicssvgitem.h"
#include "libqgraphicssvgitem.hxx"

QGraphicsSvgItem* QGraphicsSvgItem_new() {
    return new VirtualQGraphicsSvgItem();
}

QGraphicsSvgItem* QGraphicsSvgItem_new2(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQGraphicsSvgItem(fileName_QString);
}

QGraphicsSvgItem* QGraphicsSvgItem_new3(QGraphicsItem* parentItem) {
    return new VirtualQGraphicsSvgItem(parentItem);
}

QGraphicsSvgItem* QGraphicsSvgItem_new4(const libqt_string fileName, QGraphicsItem* parentItem) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQGraphicsSvgItem(fileName_QString, parentItem);
}

QMetaObject* QGraphicsSvgItem_MetaObject(const QGraphicsSvgItem* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsSvgItem_Metacast(QGraphicsSvgItem* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsSvgItem_Metacall(QGraphicsSvgItem* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGraphicsSvgItem_Tr(const char* s) {
    auto _ret = QGraphicsSvgItem::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGraphicsSvgItem_SetSharedRenderer(QGraphicsSvgItem* self, QSvgRenderer* renderer) {
    self->setSharedRenderer(renderer);
}

QSvgRenderer* QGraphicsSvgItem_Renderer(const QGraphicsSvgItem* self) {
    return self->renderer();
}

void QGraphicsSvgItem_SetElementId(QGraphicsSvgItem* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setElementId(id_QString);
}

libqt_string QGraphicsSvgItem_ElementId(const QGraphicsSvgItem* self) {
    auto _ret = self->elementId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGraphicsSvgItem_SetCachingEnabled(QGraphicsSvgItem* self, bool cachingEnabled) {
    self->setCachingEnabled(cachingEnabled);
}

bool QGraphicsSvgItem_IsCachingEnabled(const QGraphicsSvgItem* self) {
    return self->isCachingEnabled();
}

void QGraphicsSvgItem_SetMaximumCacheSize(QGraphicsSvgItem* self, const QSize* size) {
    self->setMaximumCacheSize(*size);
}

QSize* QGraphicsSvgItem_MaximumCacheSize(const QGraphicsSvgItem* self) {
    return new QSize(self->maximumCacheSize());
}

QRectF* QGraphicsSvgItem_BoundingRect(const QGraphicsSvgItem* self) {
    return new QRectF(self->boundingRect());
}

void QGraphicsSvgItem_Paint(QGraphicsSvgItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paint(painter, option, widget);
}

int QGraphicsSvgItem_Type(const QGraphicsSvgItem* self) {
    return self->type();
}

libqt_string QGraphicsSvgItem_Tr2(const char* s, const char* c) {
    auto _ret = QGraphicsSvgItem::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsSvgItem_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGraphicsSvgItem::tr(s, c, static_cast<int>(n));
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
QMetaObject* QGraphicsSvgItem_SuperMetaObject(const QGraphicsSvgItem* self) {
    return (QMetaObject*)self->QGraphicsSvgItem::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnMetaObject(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self)))
        vqgraphicssvgitem->qgraphicssvgitem_metaobject_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGraphicsSvgItem_SuperMetacast(QGraphicsSvgItem* self, const char* param1) {
    return self->QGraphicsSvgItem::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnMetacast(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_metacast_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGraphicsSvgItem_SuperMetacall(QGraphicsSvgItem* self, int param1, int param2, void** param3) {
    return self->QGraphicsSvgItem::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnMetacall(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_metacall_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Metacall_Callback>(slot);
}

// Base class handler implementation
QRectF* QGraphicsSvgItem_SuperBoundingRect(const QGraphicsSvgItem* self) {
    return new QRectF(self->QGraphicsSvgItem::boundingRect());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnBoundingRect(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self)))
        vqgraphicssvgitem->qgraphicssvgitem_boundingrect_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_BoundingRect_Callback>(slot);
}

// Base class handler implementation
void QGraphicsSvgItem_SuperPaint(QGraphicsSvgItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->QGraphicsSvgItem::paint(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnPaint(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_paint_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Paint_Callback>(slot);
}

// Base class handler implementation
int QGraphicsSvgItem_SuperType(const QGraphicsSvgItem* self) {
    return self->QGraphicsSvgItem::type();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnType(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self)))
        vqgraphicssvgitem->qgraphicssvgitem_type_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Type_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsSvgItem_Event(QGraphicsSvgItem* self, QEvent* ev) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        return vqgraphicssvgitem->event(ev);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_SuperEvent(QGraphicsSvgItem* self, QEvent* ev) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        return vqgraphicssvgitem->QGraphicsSvgItem::event(ev);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_event_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsSvgItem_EventFilter(QGraphicsSvgItem* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGraphicsSvgItem_SuperEventFilter(QGraphicsSvgItem* self, QObject* watched, QEvent* event) {
    return self->QGraphicsSvgItem::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnEventFilter(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_eventfilter_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_TimerEvent(QGraphicsSvgItem* self, QTimerEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperTimerEvent(QGraphicsSvgItem* self, QTimerEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnTimerEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_timerevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_ChildEvent(QGraphicsSvgItem* self, QChildEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperChildEvent(QGraphicsSvgItem* self, QChildEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnChildEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_childevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_CustomEvent(QGraphicsSvgItem* self, QEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperCustomEvent(QGraphicsSvgItem* self, QEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnCustomEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_customevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_ConnectNotify(QGraphicsSvgItem* self, const QMetaMethod* signal) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperConnectNotify(QGraphicsSvgItem* self, const QMetaMethod* signal) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnConnectNotify(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_connectnotify_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_DisconnectNotify(QGraphicsSvgItem* self, const QMetaMethod* signal) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperDisconnectNotify(QGraphicsSvgItem* self, const QMetaMethod* signal) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnDisconnectNotify(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_disconnectnotify_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_Advance(QGraphicsSvgItem* self, int phase) {
    self->advance(static_cast<int>(phase));
}

// Base class handler implementation
void QGraphicsSvgItem_SuperAdvance(QGraphicsSvgItem* self, int phase) {
    self->QGraphicsSvgItem::advance(static_cast<int>(phase));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnAdvance(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_advance_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Advance_Callback>(slot);
}

// Derived class handler implementation
QPainterPath* QGraphicsSvgItem_Shape(const QGraphicsSvgItem* self) {
    return new QPainterPath(self->shape());
}

// Base class handler implementation
QPainterPath* QGraphicsSvgItem_SuperShape(const QGraphicsSvgItem* self) {
    return new QPainterPath(self->QGraphicsSvgItem::shape());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnShape(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self)))
        vqgraphicssvgitem->qgraphicssvgitem_shape_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Shape_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsSvgItem_Contains(const QGraphicsSvgItem* self, const QPointF* point) {
    return self->contains(*point);
}

// Base class handler implementation
bool QGraphicsSvgItem_SuperContains(const QGraphicsSvgItem* self, const QPointF* point) {
    return self->QGraphicsSvgItem::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnContains(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self)))
        vqgraphicssvgitem->qgraphicssvgitem_contains_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Contains_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsSvgItem_CollidesWithItem(const QGraphicsSvgItem* self, const QGraphicsItem* other, int mode) {
    return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsSvgItem_SuperCollidesWithItem(const QGraphicsSvgItem* self, const QGraphicsItem* other, int mode) {
    return self->QGraphicsSvgItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnCollidesWithItem(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self)))
        vqgraphicssvgitem->qgraphicssvgitem_collideswithitem_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_CollidesWithItem_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsSvgItem_CollidesWithPath(const QGraphicsSvgItem* self, const QPainterPath* path, int mode) {
    return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsSvgItem_SuperCollidesWithPath(const QGraphicsSvgItem* self, const QPainterPath* path, int mode) {
    return self->QGraphicsSvgItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnCollidesWithPath(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self)))
        vqgraphicssvgitem->qgraphicssvgitem_collideswithpath_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_CollidesWithPath_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsSvgItem_IsObscuredBy(const QGraphicsSvgItem* self, const QGraphicsItem* item) {
    return self->isObscuredBy(item);
}

// Base class handler implementation
bool QGraphicsSvgItem_SuperIsObscuredBy(const QGraphicsSvgItem* self, const QGraphicsItem* item) {
    return self->QGraphicsSvgItem::isObscuredBy(item);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnIsObscuredBy(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self)))
        vqgraphicssvgitem->qgraphicssvgitem_isobscuredby_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_IsObscuredBy_Callback>(slot);
}

// Derived class handler implementation
QPainterPath* QGraphicsSvgItem_OpaqueArea(const QGraphicsSvgItem* self) {
    return new QPainterPath(self->opaqueArea());
}

// Base class handler implementation
QPainterPath* QGraphicsSvgItem_SuperOpaqueArea(const QGraphicsSvgItem* self) {
    return new QPainterPath(self->QGraphicsSvgItem::opaqueArea());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnOpaqueArea(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self)))
        vqgraphicssvgitem->qgraphicssvgitem_opaquearea_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_OpaqueArea_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsSvgItem_SceneEventFilter(QGraphicsSvgItem* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        return vqgraphicssvgitem->sceneEventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::sceneEventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_SuperSceneEventFilter(QGraphicsSvgItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        return vqgraphicssvgitem->QGraphicsSvgItem::sceneEventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::sceneEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnSceneEventFilter(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_sceneeventfilter_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_SceneEventFilter_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsSvgItem_SceneEvent(QGraphicsSvgItem* self, QEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        return vqgraphicssvgitem->sceneEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::sceneEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_SuperSceneEvent(QGraphicsSvgItem* self, QEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        return vqgraphicssvgitem->QGraphicsSvgItem::sceneEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::sceneEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnSceneEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_sceneevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_SceneEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_ContextMenuEvent(QGraphicsSvgItem* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperContextMenuEvent(QGraphicsSvgItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnContextMenuEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_contextmenuevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_DragEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperDragEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnDragEnterEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_dragenterevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_DragLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperDragLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnDragLeaveEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_dragleaveevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_DragMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperDragMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnDragMoveEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_dragmoveevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_DropEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperDropEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnDropEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_dropevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_FocusInEvent(QGraphicsSvgItem* self, QFocusEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperFocusInEvent(QGraphicsSvgItem* self, QFocusEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnFocusInEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_focusinevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_FocusOutEvent(QGraphicsSvgItem* self, QFocusEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperFocusOutEvent(QGraphicsSvgItem* self, QFocusEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnFocusOutEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_focusoutevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_HoverEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->hoverEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::hoverEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperHoverEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnHoverEnterEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_hoverenterevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_HoverEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_HoverMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->hoverMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::hoverMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperHoverMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnHoverMoveEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_hovermoveevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_HoverMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_HoverLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->hoverLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::hoverLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperHoverLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnHoverLeaveEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_hoverleaveevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_HoverLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_KeyPressEvent(QGraphicsSvgItem* self, QKeyEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperKeyPressEvent(QGraphicsSvgItem* self, QKeyEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnKeyPressEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_keypressevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_KeyReleaseEvent(QGraphicsSvgItem* self, QKeyEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperKeyReleaseEvent(QGraphicsSvgItem* self, QKeyEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnKeyReleaseEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_keyreleaseevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_MousePressEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperMousePressEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnMousePressEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_mousepressevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_MouseMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperMouseMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnMouseMoveEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_mousemoveevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_MouseReleaseEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperMouseReleaseEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnMouseReleaseEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_mousereleaseevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_MouseDoubleClickEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperMouseDoubleClickEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnMouseDoubleClickEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_mousedoubleclickevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_WheelEvent(QGraphicsSvgItem* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperWheelEvent(QGraphicsSvgItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnWheelEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_wheelevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_InputMethodEvent(QGraphicsSvgItem* self, QInputMethodEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperInputMethodEvent(QGraphicsSvgItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnInputMethodEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_inputmethodevent_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsSvgItem_InputMethodQuery(const QGraphicsSvgItem* self, int query) {
    return new QVariant((self->*&VirtualQGraphicsSvgItem::Base::inputMethodQuery)(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QGraphicsSvgItem_SuperInputMethodQuery(const QGraphicsSvgItem* self, int query) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self)))
        return new QVariant(vqgraphicssvgitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    qFatal("Error: Protected virtual method QGraphicsSvgItem::inputMethodQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnInputMethodQuery(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self)))
        vqgraphicssvgitem->qgraphicssvgitem_inputmethodquery_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsSvgItem_ItemChange(QGraphicsSvgItem* self, int change, const QVariant* value) {
    return new QVariant((self->*&VirtualQGraphicsSvgItem::Base::itemChange)(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}

// Base class handler implementation
QVariant* QGraphicsSvgItem_SuperItemChange(QGraphicsSvgItem* self, int change, const QVariant* value) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        return new QVariant(vqgraphicssvgitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    qFatal("Error: Protected virtual method QGraphicsSvgItem::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnItemChange(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_itemchange_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_ItemChange_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsSvgItem_SupportsExtension(const QGraphicsSvgItem* self, int extension) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem) {
        return vqgraphicssvgitem->supportsExtension(static_cast<VirtualQGraphicsSvgItem::Extension>(extension));
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::supportsExtension called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_SuperSupportsExtension(const QGraphicsSvgItem* self, int extension) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        return vqgraphicssvgitem->QGraphicsSvgItem::supportsExtension(static_cast<VirtualQGraphicsSvgItem::Extension>(extension));
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::supportsExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnSupportsExtension(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self)))
        vqgraphicssvgitem->qgraphicssvgitem_supportsextension_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_SupportsExtension_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSvgItem_SetExtension(QGraphicsSvgItem* self, int extension, const QVariant* variant) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem) {
        vqgraphicssvgitem->setExtension(static_cast<VirtualQGraphicsSvgItem::Extension>(extension), *variant);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSvgItem::setExtension called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSvgItem_SuperSetExtension(QGraphicsSvgItem* self, int extension, const QVariant* variant) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->QGraphicsSvgItem::setExtension(static_cast<VirtualQGraphicsSvgItem::Extension>(extension), *variant);
    } else
        qFatal("Error: Protected virtual method QGraphicsSvgItem::setExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnSetExtension(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self))
        vqgraphicssvgitem->qgraphicssvgitem_setextension_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_SetExtension_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsSvgItem_Extension(const QGraphicsSvgItem* self, const QVariant* variant) {
    return new QVariant((self->*&VirtualQGraphicsSvgItem::Base::extension)(*variant));
}

// Base class handler implementation
QVariant* QGraphicsSvgItem_SuperExtension(const QGraphicsSvgItem* self, const QVariant* variant) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self)))
        return new QVariant(vqgraphicssvgitem->extension(*variant));
    qFatal("Error: Protected virtual method QGraphicsSvgItem::extension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnExtension(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self)))
        vqgraphicssvgitem->qgraphicssvgitem_extension_callback = reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Extension_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsSvgItem_UpdateMicroFocus(QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->VirtualQGraphicsSvgItem::updateMicroFocus();
    } else
        qFatal("Error: Protected method QGraphicsSvgItem::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGraphicsSvgItem_Sender(const QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        return vqgraphicssvgitem->VirtualQGraphicsSvgItem::sender();
    } else
        qFatal("Error: Protected method QGraphicsSvgItem::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsSvgItem_SenderSignalIndex(const QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        return vqgraphicssvgitem->VirtualQGraphicsSvgItem::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGraphicsSvgItem::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsSvgItem_Receivers(const QGraphicsSvgItem* self, const char* signal) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        return vqgraphicssvgitem->VirtualQGraphicsSvgItem::receivers(signal);
    } else
        qFatal("Error: Protected method QGraphicsSvgItem::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsSvgItem_IsSignalConnected(const QGraphicsSvgItem* self, const QMetaMethod* signal) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        return vqgraphicssvgitem->VirtualQGraphicsSvgItem::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGraphicsSvgItem::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsSvgItem_AddToIndex(QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->VirtualQGraphicsSvgItem::addToIndex();
    } else
        qFatal("Error: Protected method QGraphicsSvgItem::addToIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsSvgItem_RemoveFromIndex(QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->VirtualQGraphicsSvgItem::removeFromIndex();
    } else
        qFatal("Error: Protected method QGraphicsSvgItem::removeFromIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsSvgItem_PrepareGeometryChange(QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->VirtualQGraphicsSvgItem::prepareGeometryChange();
    } else
        qFatal("Error: Protected method QGraphicsSvgItem::prepareGeometryChange called without a directly constructed type");
}

void QGraphicsSvgItem_Delete(QGraphicsSvgItem* self) {
    delete self;
}
