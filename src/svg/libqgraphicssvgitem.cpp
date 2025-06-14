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
#include <QByteArray>
#include <cstring>
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
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGraphicsSvgItem*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsSvgItem_OnMetacall(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Metacall_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsSvgItem_QBaseMetacall(QGraphicsSvgItem* self, int param1, int param2, void** param3) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Metacall_IsBase(true);
        return vqgraphicssvgitem->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGraphicsSvgItem*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGraphicsSvgItem_Tr(const char* s) {
    QString _ret = QGraphicsSvgItem::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
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
    QString _ret = self->elementId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
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

libqt_string QGraphicsSvgItem_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsSvgItem::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsSvgItem_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsSvgItem::tr(s, c, static_cast<int>(n));
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
QRectF* QGraphicsSvgItem_BoundingRect(const QGraphicsSvgItem* self) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return new QRectF(vqgraphicssvgitem->boundingRect());
    } else {
        return new QRectF(((VirtualQGraphicsSvgItem*)self)->boundingRect());
    }
}

// Base class handler implementation
QRectF* QGraphicsSvgItem_QBaseBoundingRect(const QGraphicsSvgItem* self) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_BoundingRect_IsBase(true);
        return new QRectF(vqgraphicssvgitem->boundingRect());
    } else {
        return new QRectF(((VirtualQGraphicsSvgItem*)self)->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnBoundingRect(const QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_BoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_Paint(QGraphicsSvgItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->paint(painter, option, widget);
    } else {
        self->QGraphicsSvgItem::paint(painter, option, widget);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBasePaint(QGraphicsSvgItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Paint_IsBase(true);
        vqgraphicssvgitem->paint(painter, option, widget);
    } else {
        self->QGraphicsSvgItem::paint(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnPaint(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsSvgItem_Type(const QGraphicsSvgItem* self) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return vqgraphicssvgitem->type();
    } else {
        return self->QGraphicsSvgItem::type();
    }
}

// Base class handler implementation
int QGraphicsSvgItem_QBaseType(const QGraphicsSvgItem* self) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Type_IsBase(true);
        return vqgraphicssvgitem->type();
    } else {
        return self->QGraphicsSvgItem::type();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnType(const QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Type_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSvgItem_Event(QGraphicsSvgItem* self, QEvent* ev) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return vqgraphicssvgitem->event(ev);
    } else {
        return ((VirtualQGraphicsSvgItem*)self)->event(ev);
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_QBaseEvent(QGraphicsSvgItem* self, QEvent* ev) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Event_IsBase(true);
        return vqgraphicssvgitem->event(ev);
    } else {
        return ((VirtualQGraphicsSvgItem*)self)->event(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Event_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSvgItem_EventFilter(QGraphicsSvgItem* self, QObject* watched, QEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return vqgraphicssvgitem->eventFilter(watched, event);
    } else {
        return self->QGraphicsSvgItem::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_QBaseEventFilter(QGraphicsSvgItem* self, QObject* watched, QEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_EventFilter_IsBase(true);
        return vqgraphicssvgitem->eventFilter(watched, event);
    } else {
        return self->QGraphicsSvgItem::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnEventFilter(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_TimerEvent(QGraphicsSvgItem* self, QTimerEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->timerEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseTimerEvent(QGraphicsSvgItem* self, QTimerEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_TimerEvent_IsBase(true);
        vqgraphicssvgitem->timerEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnTimerEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_TimerEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_ChildEvent(QGraphicsSvgItem* self, QChildEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->childEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseChildEvent(QGraphicsSvgItem* self, QChildEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_ChildEvent_IsBase(true);
        vqgraphicssvgitem->childEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnChildEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_ChildEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_CustomEvent(QGraphicsSvgItem* self, QEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->customEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseCustomEvent(QGraphicsSvgItem* self, QEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_CustomEvent_IsBase(true);
        vqgraphicssvgitem->customEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnCustomEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_CustomEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_ConnectNotify(QGraphicsSvgItem* self, const QMetaMethod* signal) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->connectNotify(*signal);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseConnectNotify(QGraphicsSvgItem* self, const QMetaMethod* signal) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_ConnectNotify_IsBase(true);
        vqgraphicssvgitem->connectNotify(*signal);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnConnectNotify(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_ConnectNotify_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_DisconnectNotify(QGraphicsSvgItem* self, const QMetaMethod* signal) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->disconnectNotify(*signal);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseDisconnectNotify(QGraphicsSvgItem* self, const QMetaMethod* signal) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_DisconnectNotify_IsBase(true);
        vqgraphicssvgitem->disconnectNotify(*signal);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnDisconnectNotify(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_DisconnectNotify_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_Advance(QGraphicsSvgItem* self, int phase) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->advance(static_cast<int>(phase));
    } else {
        self->QGraphicsSvgItem::advance(static_cast<int>(phase));
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseAdvance(QGraphicsSvgItem* self, int phase) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Advance_IsBase(true);
        vqgraphicssvgitem->advance(static_cast<int>(phase));
    } else {
        self->QGraphicsSvgItem::advance(static_cast<int>(phase));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnAdvance(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Advance_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsSvgItem_Shape(const QGraphicsSvgItem* self) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return new QPainterPath(vqgraphicssvgitem->shape());
    } else {
        return new QPainterPath(((VirtualQGraphicsSvgItem*)self)->shape());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsSvgItem_QBaseShape(const QGraphicsSvgItem* self) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Shape_IsBase(true);
        return new QPainterPath(vqgraphicssvgitem->shape());
    } else {
        return new QPainterPath(((VirtualQGraphicsSvgItem*)self)->shape());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnShape(const QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Shape_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSvgItem_Contains(const QGraphicsSvgItem* self, const QPointF* point) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return vqgraphicssvgitem->contains(*point);
    } else {
        return self->QGraphicsSvgItem::contains(*point);
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_QBaseContains(const QGraphicsSvgItem* self, const QPointF* point) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Contains_IsBase(true);
        return vqgraphicssvgitem->contains(*point);
    } else {
        return self->QGraphicsSvgItem::contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnContains(const QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Contains_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSvgItem_CollidesWithItem(const QGraphicsSvgItem* self, const QGraphicsItem* other, int mode) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return vqgraphicssvgitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return self->QGraphicsSvgItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_QBaseCollidesWithItem(const QGraphicsSvgItem* self, const QGraphicsItem* other, int mode) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_CollidesWithItem_IsBase(true);
        return vqgraphicssvgitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return self->QGraphicsSvgItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnCollidesWithItem(const QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_CollidesWithItem_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_CollidesWithItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSvgItem_CollidesWithPath(const QGraphicsSvgItem* self, const QPainterPath* path, int mode) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return vqgraphicssvgitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return self->QGraphicsSvgItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_QBaseCollidesWithPath(const QGraphicsSvgItem* self, const QPainterPath* path, int mode) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_CollidesWithPath_IsBase(true);
        return vqgraphicssvgitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return self->QGraphicsSvgItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnCollidesWithPath(const QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_CollidesWithPath_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_CollidesWithPath_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSvgItem_IsObscuredBy(const QGraphicsSvgItem* self, const QGraphicsItem* item) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return vqgraphicssvgitem->isObscuredBy(item);
    } else {
        return self->QGraphicsSvgItem::isObscuredBy(item);
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_QBaseIsObscuredBy(const QGraphicsSvgItem* self, const QGraphicsItem* item) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_IsObscuredBy_IsBase(true);
        return vqgraphicssvgitem->isObscuredBy(item);
    } else {
        return self->QGraphicsSvgItem::isObscuredBy(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnIsObscuredBy(const QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_IsObscuredBy_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsSvgItem_OpaqueArea(const QGraphicsSvgItem* self) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return new QPainterPath(vqgraphicssvgitem->opaqueArea());
    } else {
        return new QPainterPath(((VirtualQGraphicsSvgItem*)self)->opaqueArea());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsSvgItem_QBaseOpaqueArea(const QGraphicsSvgItem* self) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_OpaqueArea_IsBase(true);
        return new QPainterPath(vqgraphicssvgitem->opaqueArea());
    } else {
        return new QPainterPath(((VirtualQGraphicsSvgItem*)self)->opaqueArea());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnOpaqueArea(const QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_OpaqueArea_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSvgItem_SceneEventFilter(QGraphicsSvgItem* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return vqgraphicssvgitem->sceneEventFilter(watched, event);
    } else {
        return ((VirtualQGraphicsSvgItem*)self)->sceneEventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_QBaseSceneEventFilter(QGraphicsSvgItem* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_SceneEventFilter_IsBase(true);
        return vqgraphicssvgitem->sceneEventFilter(watched, event);
    } else {
        return ((VirtualQGraphicsSvgItem*)self)->sceneEventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnSceneEventFilter(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_SceneEventFilter_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_SceneEventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSvgItem_SceneEvent(QGraphicsSvgItem* self, QEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return vqgraphicssvgitem->sceneEvent(event);
    } else {
        return ((VirtualQGraphicsSvgItem*)self)->sceneEvent(event);
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_QBaseSceneEvent(QGraphicsSvgItem* self, QEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_SceneEvent_IsBase(true);
        return vqgraphicssvgitem->sceneEvent(event);
    } else {
        return ((VirtualQGraphicsSvgItem*)self)->sceneEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnSceneEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_SceneEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_SceneEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_ContextMenuEvent(QGraphicsSvgItem* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->contextMenuEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseContextMenuEvent(QGraphicsSvgItem* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_ContextMenuEvent_IsBase(true);
        vqgraphicssvgitem->contextMenuEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnContextMenuEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_DragEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->dragEnterEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseDragEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_DragEnterEvent_IsBase(true);
        vqgraphicssvgitem->dragEnterEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnDragEnterEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_DragLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->dragLeaveEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseDragLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_DragLeaveEvent_IsBase(true);
        vqgraphicssvgitem->dragLeaveEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnDragLeaveEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_DragMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->dragMoveEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseDragMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_DragMoveEvent_IsBase(true);
        vqgraphicssvgitem->dragMoveEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnDragMoveEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_DropEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->dropEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseDropEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_DropEvent_IsBase(true);
        vqgraphicssvgitem->dropEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnDropEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_FocusInEvent(QGraphicsSvgItem* self, QFocusEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->focusInEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseFocusInEvent(QGraphicsSvgItem* self, QFocusEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_FocusInEvent_IsBase(true);
        vqgraphicssvgitem->focusInEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnFocusInEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_FocusOutEvent(QGraphicsSvgItem* self, QFocusEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->focusOutEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseFocusOutEvent(QGraphicsSvgItem* self, QFocusEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_FocusOutEvent_IsBase(true);
        vqgraphicssvgitem->focusOutEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnFocusOutEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_HoverEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->hoverEnterEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseHoverEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_HoverEnterEvent_IsBase(true);
        vqgraphicssvgitem->hoverEnterEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnHoverEnterEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_HoverEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_HoverEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_HoverMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->hoverMoveEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseHoverMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_HoverMoveEvent_IsBase(true);
        vqgraphicssvgitem->hoverMoveEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnHoverMoveEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_HoverMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_HoverMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_HoverLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->hoverLeaveEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseHoverLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_HoverLeaveEvent_IsBase(true);
        vqgraphicssvgitem->hoverLeaveEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnHoverLeaveEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_HoverLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_KeyPressEvent(QGraphicsSvgItem* self, QKeyEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->keyPressEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseKeyPressEvent(QGraphicsSvgItem* self, QKeyEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_KeyPressEvent_IsBase(true);
        vqgraphicssvgitem->keyPressEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnKeyPressEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_KeyReleaseEvent(QGraphicsSvgItem* self, QKeyEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->keyReleaseEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseKeyReleaseEvent(QGraphicsSvgItem* self, QKeyEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_KeyReleaseEvent_IsBase(true);
        vqgraphicssvgitem->keyReleaseEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnKeyReleaseEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_MousePressEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->mousePressEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseMousePressEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_MousePressEvent_IsBase(true);
        vqgraphicssvgitem->mousePressEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnMousePressEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_MouseMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->mouseMoveEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseMouseMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_MouseMoveEvent_IsBase(true);
        vqgraphicssvgitem->mouseMoveEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnMouseMoveEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_MouseReleaseEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->mouseReleaseEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseMouseReleaseEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_MouseReleaseEvent_IsBase(true);
        vqgraphicssvgitem->mouseReleaseEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnMouseReleaseEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_MouseDoubleClickEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseMouseDoubleClickEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_MouseDoubleClickEvent_IsBase(true);
        vqgraphicssvgitem->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnMouseDoubleClickEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_WheelEvent(QGraphicsSvgItem* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->wheelEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseWheelEvent(QGraphicsSvgItem* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_WheelEvent_IsBase(true);
        vqgraphicssvgitem->wheelEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnWheelEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_InputMethodEvent(QGraphicsSvgItem* self, QInputMethodEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->inputMethodEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseInputMethodEvent(QGraphicsSvgItem* self, QInputMethodEvent* event) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_InputMethodEvent_IsBase(true);
        vqgraphicssvgitem->inputMethodEvent(event);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnInputMethodEvent(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsSvgItem_InputMethodQuery(const QGraphicsSvgItem* self, int query) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return new QVariant(vqgraphicssvgitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsSvgItem_QBaseInputMethodQuery(const QGraphicsSvgItem* self, int query) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_InputMethodQuery_IsBase(true);
        return new QVariant(vqgraphicssvgitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnInputMethodQuery(const QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsSvgItem_ItemChange(QGraphicsSvgItem* self, int change, const QVariant* value) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return new QVariant(vqgraphicssvgitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsSvgItem_QBaseItemChange(QGraphicsSvgItem* self, int change, const QVariant* value) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_ItemChange_IsBase(true);
        return new QVariant(vqgraphicssvgitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnItemChange(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_ItemChange_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_ItemChange_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSvgItem_SupportsExtension(const QGraphicsSvgItem* self, int extension) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return vqgraphicssvgitem->supportsExtension(static_cast<VirtualQGraphicsSvgItem::Extension>(extension));
    } else {
        return ((VirtualQGraphicsSvgItem*)self)->supportsExtension(static_cast<VirtualQGraphicsSvgItem::Extension>(extension));
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_QBaseSupportsExtension(const QGraphicsSvgItem* self, int extension) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_SupportsExtension_IsBase(true);
        return vqgraphicssvgitem->supportsExtension(static_cast<VirtualQGraphicsSvgItem::Extension>(extension));
    } else {
        return ((VirtualQGraphicsSvgItem*)self)->supportsExtension(static_cast<VirtualQGraphicsSvgItem::Extension>(extension));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnSupportsExtension(const QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_SupportsExtension_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_SupportsExtension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_SetExtension(QGraphicsSvgItem* self, int extension, const QVariant* variant) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setExtension(static_cast<VirtualQGraphicsSvgItem::Extension>(extension), *variant);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->setExtension(static_cast<VirtualQGraphicsSvgItem::Extension>(extension), *variant);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseSetExtension(QGraphicsSvgItem* self, int extension, const QVariant* variant) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_SetExtension_IsBase(true);
        vqgraphicssvgitem->setExtension(static_cast<VirtualQGraphicsSvgItem::Extension>(extension), *variant);
    } else {
        ((VirtualQGraphicsSvgItem*)self)->setExtension(static_cast<VirtualQGraphicsSvgItem::Extension>(extension), *variant);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnSetExtension(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_SetExtension_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_SetExtension_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsSvgItem_Extension(const QGraphicsSvgItem* self, const QVariant* variant) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return new QVariant(vqgraphicssvgitem->extension(*variant));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsSvgItem_QBaseExtension(const QGraphicsSvgItem* self, const QVariant* variant) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Extension_IsBase(true);
        return new QVariant(vqgraphicssvgitem->extension(*variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnExtension(const QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Extension_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_UpdateMicroFocus(QGraphicsSvgItem* self) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->updateMicroFocus();
    } else {
        ((VirtualQGraphicsSvgItem*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseUpdateMicroFocus(QGraphicsSvgItem* self) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_UpdateMicroFocus_IsBase(true);
        vqgraphicssvgitem->updateMicroFocus();
    } else {
        ((VirtualQGraphicsSvgItem*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnUpdateMicroFocus(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGraphicsSvgItem_Sender(const QGraphicsSvgItem* self) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return vqgraphicssvgitem->sender();
    } else {
        return ((VirtualQGraphicsSvgItem*)self)->sender();
    }
}

// Base class handler implementation
QObject* QGraphicsSvgItem_QBaseSender(const QGraphicsSvgItem* self) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Sender_IsBase(true);
        return vqgraphicssvgitem->sender();
    } else {
        return ((VirtualQGraphicsSvgItem*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnSender(const QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Sender_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsSvgItem_SenderSignalIndex(const QGraphicsSvgItem* self) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return vqgraphicssvgitem->senderSignalIndex();
    } else {
        return ((VirtualQGraphicsSvgItem*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QGraphicsSvgItem_QBaseSenderSignalIndex(const QGraphicsSvgItem* self) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_SenderSignalIndex_IsBase(true);
        return vqgraphicssvgitem->senderSignalIndex();
    } else {
        return ((VirtualQGraphicsSvgItem*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnSenderSignalIndex(const QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsSvgItem_Receivers(const QGraphicsSvgItem* self, const char* signal) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return vqgraphicssvgitem->receivers(signal);
    } else {
        return ((VirtualQGraphicsSvgItem*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QGraphicsSvgItem_QBaseReceivers(const QGraphicsSvgItem* self, const char* signal) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Receivers_IsBase(true);
        return vqgraphicssvgitem->receivers(signal);
    } else {
        return ((VirtualQGraphicsSvgItem*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnReceivers(const QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Receivers_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSvgItem_IsSignalConnected(const QGraphicsSvgItem* self, const QMetaMethod* signal) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        return vqgraphicssvgitem->isSignalConnected(*signal);
    } else {
        return ((VirtualQGraphicsSvgItem*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_QBaseIsSignalConnected(const QGraphicsSvgItem* self, const QMetaMethod* signal) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_IsSignalConnected_IsBase(true);
        return vqgraphicssvgitem->isSignalConnected(*signal);
    } else {
        return ((VirtualQGraphicsSvgItem*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnIsSignalConnected(const QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self));
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_IsSignalConnected_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_AddToIndex(QGraphicsSvgItem* self) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->addToIndex();
    } else {
        ((VirtualQGraphicsSvgItem*)self)->addToIndex();
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseAddToIndex(QGraphicsSvgItem* self) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_AddToIndex_IsBase(true);
        vqgraphicssvgitem->addToIndex();
    } else {
        ((VirtualQGraphicsSvgItem*)self)->addToIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnAddToIndex(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_AddToIndex_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_AddToIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_RemoveFromIndex(QGraphicsSvgItem* self) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->removeFromIndex();
    } else {
        ((VirtualQGraphicsSvgItem*)self)->removeFromIndex();
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseRemoveFromIndex(QGraphicsSvgItem* self) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_RemoveFromIndex_IsBase(true);
        vqgraphicssvgitem->removeFromIndex();
    } else {
        ((VirtualQGraphicsSvgItem*)self)->removeFromIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnRemoveFromIndex(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_RemoveFromIndex_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_RemoveFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_PrepareGeometryChange(QGraphicsSvgItem* self) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->prepareGeometryChange();
    } else {
        ((VirtualQGraphicsSvgItem*)self)->prepareGeometryChange();
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBasePrepareGeometryChange(QGraphicsSvgItem* self) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_PrepareGeometryChange_IsBase(true);
        vqgraphicssvgitem->prepareGeometryChange();
    } else {
        ((VirtualQGraphicsSvgItem*)self)->prepareGeometryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnPrepareGeometryChange(QGraphicsSvgItem* self, intptr_t slot) {
    auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self);
    if (vqgraphicssvgitem && vqgraphicssvgitem->isVirtualQGraphicsSvgItem) {
        vqgraphicssvgitem->setQGraphicsSvgItem_PrepareGeometryChange_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_PrepareGeometryChange_Callback>(slot));
    }
}

void QGraphicsSvgItem_Delete(QGraphicsSvgItem* self) {
    delete self;
}
