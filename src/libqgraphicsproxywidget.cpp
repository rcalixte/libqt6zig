#include <QChildEvent>
#include <QCloseEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QGraphicsItem>
#include <QGraphicsLayoutItem>
#include <QGraphicsObject>
#include <QGraphicsProxyWidget>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneMoveEvent>
#include <QGraphicsSceneResizeEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsWidget>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPointF>
#include <QRectF>
#include <QShowEvent>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOption>
#include <QStyleOptionGraphicsItem>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qgraphicsproxywidget.h>
#include "libqgraphicsproxywidget.h"
#include "libqgraphicsproxywidget.hxx"

QGraphicsProxyWidget* QGraphicsProxyWidget_new() {
    return new VirtualQGraphicsProxyWidget();
}

QGraphicsProxyWidget* QGraphicsProxyWidget_new2(QGraphicsItem* parent) {
    return new VirtualQGraphicsProxyWidget(parent);
}

QGraphicsProxyWidget* QGraphicsProxyWidget_new3(QGraphicsItem* parent, int wFlags) {
    return new VirtualQGraphicsProxyWidget(parent, static_cast<Qt::WindowFlags>(wFlags));
}

QMetaObject* QGraphicsProxyWidget_MetaObject(const QGraphicsProxyWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsProxyWidget_Metacast(QGraphicsProxyWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsProxyWidget_Metacall(QGraphicsProxyWidget* self, int param1, int param2, void** param3) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsProxyWidget_OnMetacall(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_Metacall_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsProxyWidget_QBaseMetacall(QGraphicsProxyWidget* self, int param1, int param2, void** param3) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_Metacall_IsBase(true);
        return vqgraphicsproxywidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGraphicsProxyWidget_Tr(const char* s) {
    QString _ret = QGraphicsProxyWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGraphicsProxyWidget_SetWidget(QGraphicsProxyWidget* self, QWidget* widget) {
    self->setWidget(widget);
}

QWidget* QGraphicsProxyWidget_Widget(const QGraphicsProxyWidget* self) {
    return self->widget();
}

QRectF* QGraphicsProxyWidget_SubWidgetRect(const QGraphicsProxyWidget* self, const QWidget* widget) {
    return new QRectF(self->subWidgetRect(widget));
}

QGraphicsProxyWidget* QGraphicsProxyWidget_CreateProxyForChildWidget(QGraphicsProxyWidget* self, QWidget* child) {
    return self->createProxyForChildWidget(child);
}

libqt_string QGraphicsProxyWidget_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsProxyWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsProxyWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsProxyWidget::tr(s, c, static_cast<int>(n));
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
void QGraphicsProxyWidget_SetGeometry(QGraphicsProxyWidget* self, const QRectF* rect) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setGeometry(*rect);
    } else {
        self->QGraphicsProxyWidget::setGeometry(*rect);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseSetGeometry(QGraphicsProxyWidget* self, const QRectF* rect) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_SetGeometry_IsBase(true);
        vqgraphicsproxywidget->setGeometry(*rect);
    } else {
        self->QGraphicsProxyWidget::setGeometry(*rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnSetGeometry(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_SetGeometry_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_Paint(QGraphicsProxyWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->paint(painter, option, widget);
    } else {
        self->QGraphicsProxyWidget::paint(painter, option, widget);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBasePaint(QGraphicsProxyWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_Paint_IsBase(true);
        vqgraphicsproxywidget->paint(painter, option, widget);
    } else {
        self->QGraphicsProxyWidget::paint(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnPaint(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_Paint_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsProxyWidget_Type(const QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return vqgraphicsproxywidget->type();
    } else {
        return self->QGraphicsProxyWidget::type();
    }
}

// Base class handler implementation
int QGraphicsProxyWidget_QBaseType(const QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_Type_IsBase(true);
        return vqgraphicsproxywidget->type();
    } else {
        return self->QGraphicsProxyWidget::type();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnType(const QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_Type_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Type_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsProxyWidget_ItemChange(QGraphicsProxyWidget* self, int change, const QVariant* value) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return new QVariant(vqgraphicsproxywidget->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsProxyWidget_QBaseItemChange(QGraphicsProxyWidget* self, int change, const QVariant* value) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_ItemChange_IsBase(true);
        return new QVariant(vqgraphicsproxywidget->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnItemChange(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_ItemChange_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_ItemChange_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsProxyWidget_Event(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return vqgraphicsproxywidget->event(event);
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool QGraphicsProxyWidget_QBaseEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_Event_IsBase(true);
        return vqgraphicsproxywidget->event(event);
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_Event_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsProxyWidget_EventFilter(QGraphicsProxyWidget* self, QObject* object, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return vqgraphicsproxywidget->eventFilter(object, event);
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QGraphicsProxyWidget_QBaseEventFilter(QGraphicsProxyWidget* self, QObject* object, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_EventFilter_IsBase(true);
        return vqgraphicsproxywidget->eventFilter(object, event);
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnEventFilter(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_ShowEvent(QGraphicsProxyWidget* self, QShowEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->showEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseShowEvent(QGraphicsProxyWidget* self, QShowEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_ShowEvent_IsBase(true);
        vqgraphicsproxywidget->showEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnShowEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_ShowEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_HideEvent(QGraphicsProxyWidget* self, QHideEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->hideEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseHideEvent(QGraphicsProxyWidget* self, QHideEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_HideEvent_IsBase(true);
        vqgraphicsproxywidget->hideEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnHideEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_HideEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_ContextMenuEvent(QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->contextMenuEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseContextMenuEvent(QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_ContextMenuEvent_IsBase(true);
        vqgraphicsproxywidget->contextMenuEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnContextMenuEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_DragEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->dragEnterEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseDragEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_DragEnterEvent_IsBase(true);
        vqgraphicsproxywidget->dragEnterEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnDragEnterEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_DragLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->dragLeaveEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseDragLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_DragLeaveEvent_IsBase(true);
        vqgraphicsproxywidget->dragLeaveEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnDragLeaveEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_DragMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->dragMoveEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseDragMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_DragMoveEvent_IsBase(true);
        vqgraphicsproxywidget->dragMoveEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnDragMoveEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_DropEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->dropEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseDropEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_DropEvent_IsBase(true);
        vqgraphicsproxywidget->dropEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnDropEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_HoverEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->hoverEnterEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseHoverEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_HoverEnterEvent_IsBase(true);
        vqgraphicsproxywidget->hoverEnterEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnHoverEnterEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_HoverEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_HoverEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_HoverLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->hoverLeaveEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseHoverLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_HoverLeaveEvent_IsBase(true);
        vqgraphicsproxywidget->hoverLeaveEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnHoverLeaveEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_HoverLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_HoverMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->hoverMoveEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseHoverMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_HoverMoveEvent_IsBase(true);
        vqgraphicsproxywidget->hoverMoveEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnHoverMoveEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_HoverMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_HoverMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_GrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->grabMouseEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->grabMouseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseGrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_GrabMouseEvent_IsBase(true);
        vqgraphicsproxywidget->grabMouseEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->grabMouseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnGrabMouseEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_GrabMouseEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_GrabMouseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_UngrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->ungrabMouseEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->ungrabMouseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseUngrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_UngrabMouseEvent_IsBase(true);
        vqgraphicsproxywidget->ungrabMouseEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->ungrabMouseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnUngrabMouseEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_UngrabMouseEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_UngrabMouseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_MouseMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->mouseMoveEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseMouseMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_MouseMoveEvent_IsBase(true);
        vqgraphicsproxywidget->mouseMoveEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnMouseMoveEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_MousePressEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->mousePressEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseMousePressEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_MousePressEvent_IsBase(true);
        vqgraphicsproxywidget->mousePressEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnMousePressEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_MouseReleaseEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseMouseReleaseEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_MouseReleaseEvent_IsBase(true);
        vqgraphicsproxywidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnMouseReleaseEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_MouseDoubleClickEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseMouseDoubleClickEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_MouseDoubleClickEvent_IsBase(true);
        vqgraphicsproxywidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnMouseDoubleClickEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_WheelEvent(QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->wheelEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseWheelEvent(QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_WheelEvent_IsBase(true);
        vqgraphicsproxywidget->wheelEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnWheelEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_KeyPressEvent(QGraphicsProxyWidget* self, QKeyEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->keyPressEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseKeyPressEvent(QGraphicsProxyWidget* self, QKeyEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_KeyPressEvent_IsBase(true);
        vqgraphicsproxywidget->keyPressEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnKeyPressEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_KeyReleaseEvent(QGraphicsProxyWidget* self, QKeyEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->keyReleaseEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseKeyReleaseEvent(QGraphicsProxyWidget* self, QKeyEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_KeyReleaseEvent_IsBase(true);
        vqgraphicsproxywidget->keyReleaseEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnKeyReleaseEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_FocusInEvent(QGraphicsProxyWidget* self, QFocusEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->focusInEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseFocusInEvent(QGraphicsProxyWidget* self, QFocusEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_FocusInEvent_IsBase(true);
        vqgraphicsproxywidget->focusInEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnFocusInEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_FocusOutEvent(QGraphicsProxyWidget* self, QFocusEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->focusOutEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseFocusOutEvent(QGraphicsProxyWidget* self, QFocusEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_FocusOutEvent_IsBase(true);
        vqgraphicsproxywidget->focusOutEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnFocusOutEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsProxyWidget_FocusNextPrevChild(QGraphicsProxyWidget* self, bool next) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return vqgraphicsproxywidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QGraphicsProxyWidget_QBaseFocusNextPrevChild(QGraphicsProxyWidget* self, bool next) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_FocusNextPrevChild_IsBase(true);
        return vqgraphicsproxywidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnFocusNextPrevChild(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsProxyWidget_InputMethodQuery(const QGraphicsProxyWidget* self, int query) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return new QVariant(vqgraphicsproxywidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsProxyWidget_QBaseInputMethodQuery(const QGraphicsProxyWidget* self, int query) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqgraphicsproxywidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnInputMethodQuery(const QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_InputMethodEvent(QGraphicsProxyWidget* self, QInputMethodEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->inputMethodEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseInputMethodEvent(QGraphicsProxyWidget* self, QInputMethodEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_InputMethodEvent_IsBase(true);
        vqgraphicsproxywidget->inputMethodEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnInputMethodEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSizeF* QGraphicsProxyWidget_SizeHint(const QGraphicsProxyWidget* self, int which, const QSizeF* constraint) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return new QSizeF(vqgraphicsproxywidget->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    return {};
}

// Base class handler implementation
QSizeF* QGraphicsProxyWidget_QBaseSizeHint(const QGraphicsProxyWidget* self, int which, const QSizeF* constraint) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_SizeHint_IsBase(true);
        return new QSizeF(vqgraphicsproxywidget->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnSizeHint(const QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_SizeHint_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_ResizeEvent(QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->resizeEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseResizeEvent(QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_ResizeEvent_IsBase(true);
        vqgraphicsproxywidget->resizeEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnResizeEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_GetContentsMargins(const QGraphicsProxyWidget* self, double* left, double* top, double* right, double* bottom) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        self->QGraphicsProxyWidget::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseGetContentsMargins(const QGraphicsProxyWidget* self, double* left, double* top, double* right, double* bottom) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_GetContentsMargins_IsBase(true);
        vqgraphicsproxywidget->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        self->QGraphicsProxyWidget::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnGetContentsMargins(const QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_GetContentsMargins_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_GetContentsMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_PaintWindowFrame(QGraphicsProxyWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->paintWindowFrame(painter, option, widget);
    } else {
        self->QGraphicsProxyWidget::paintWindowFrame(painter, option, widget);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBasePaintWindowFrame(QGraphicsProxyWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_PaintWindowFrame_IsBase(true);
        vqgraphicsproxywidget->paintWindowFrame(painter, option, widget);
    } else {
        self->QGraphicsProxyWidget::paintWindowFrame(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnPaintWindowFrame(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_PaintWindowFrame_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_PaintWindowFrame_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QGraphicsProxyWidget_BoundingRect(const QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return new QRectF(vqgraphicsproxywidget->boundingRect());
    } else {
        return new QRectF(((VirtualQGraphicsProxyWidget*)self)->boundingRect());
    }
}

// Base class handler implementation
QRectF* QGraphicsProxyWidget_QBaseBoundingRect(const QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_BoundingRect_IsBase(true);
        return new QRectF(vqgraphicsproxywidget->boundingRect());
    } else {
        return new QRectF(((VirtualQGraphicsProxyWidget*)self)->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnBoundingRect(const QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_BoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsProxyWidget_Shape(const QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return new QPainterPath(vqgraphicsproxywidget->shape());
    } else {
        return new QPainterPath(((VirtualQGraphicsProxyWidget*)self)->shape());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsProxyWidget_QBaseShape(const QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_Shape_IsBase(true);
        return new QPainterPath(vqgraphicsproxywidget->shape());
    } else {
        return new QPainterPath(((VirtualQGraphicsProxyWidget*)self)->shape());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnShape(const QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_Shape_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Shape_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_InitStyleOption(const QGraphicsProxyWidget* self, QStyleOption* option) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->initStyleOption(option);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseInitStyleOption(const QGraphicsProxyWidget* self, QStyleOption* option) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_InitStyleOption_IsBase(true);
        vqgraphicsproxywidget->initStyleOption(option);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnInitStyleOption(const QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_InitStyleOption_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_UpdateGeometry(QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->updateGeometry();
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->updateGeometry();
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseUpdateGeometry(QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_UpdateGeometry_IsBase(true);
        vqgraphicsproxywidget->updateGeometry();
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->updateGeometry();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnUpdateGeometry(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_UpdateGeometry_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_UpdateGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsProxyWidget_PropertyChange(QGraphicsProxyWidget* self, const libqt_string propertyName, const QVariant* value) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return new QVariant(vqgraphicsproxywidget->propertyChange(propertyName_QString, *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsProxyWidget_QBasePropertyChange(QGraphicsProxyWidget* self, const libqt_string propertyName, const QVariant* value) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_PropertyChange_IsBase(true);
        return new QVariant(vqgraphicsproxywidget->propertyChange(propertyName_QString, *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnPropertyChange(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_PropertyChange_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_PropertyChange_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsProxyWidget_SceneEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return vqgraphicsproxywidget->sceneEvent(event);
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->sceneEvent(event);
    }
}

// Base class handler implementation
bool QGraphicsProxyWidget_QBaseSceneEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_SceneEvent_IsBase(true);
        return vqgraphicsproxywidget->sceneEvent(event);
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->sceneEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnSceneEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_SceneEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_SceneEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsProxyWidget_WindowFrameEvent(QGraphicsProxyWidget* self, QEvent* e) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return vqgraphicsproxywidget->windowFrameEvent(e);
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->windowFrameEvent(e);
    }
}

// Base class handler implementation
bool QGraphicsProxyWidget_QBaseWindowFrameEvent(QGraphicsProxyWidget* self, QEvent* e) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_WindowFrameEvent_IsBase(true);
        return vqgraphicsproxywidget->windowFrameEvent(e);
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->windowFrameEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnWindowFrameEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_WindowFrameEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_WindowFrameEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsProxyWidget_WindowFrameSectionAt(const QGraphicsProxyWidget* self, const QPointF* pos) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return static_cast<int>(vqgraphicsproxywidget->windowFrameSectionAt(*pos));
    } else {
        return static_cast<int>(((VirtualQGraphicsProxyWidget*)self)->windowFrameSectionAt(*pos));
    }
}

// Base class handler implementation
int QGraphicsProxyWidget_QBaseWindowFrameSectionAt(const QGraphicsProxyWidget* self, const QPointF* pos) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_WindowFrameSectionAt_IsBase(true);
        return static_cast<int>(vqgraphicsproxywidget->windowFrameSectionAt(*pos));
    } else {
        return static_cast<int>(((VirtualQGraphicsProxyWidget*)self)->windowFrameSectionAt(*pos));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnWindowFrameSectionAt(const QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_WindowFrameSectionAt_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_WindowFrameSectionAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_ChangeEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->changeEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->changeEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseChangeEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_ChangeEvent_IsBase(true);
        vqgraphicsproxywidget->changeEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnChangeEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_CloseEvent(QGraphicsProxyWidget* self, QCloseEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->closeEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseCloseEvent(QGraphicsProxyWidget* self, QCloseEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_CloseEvent_IsBase(true);
        vqgraphicsproxywidget->closeEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnCloseEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_CloseEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_MoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMoveEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->moveEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMoveEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_MoveEvent_IsBase(true);
        vqgraphicsproxywidget->moveEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnMoveEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_MoveEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_PolishEvent(QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->polishEvent();
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->polishEvent();
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBasePolishEvent(QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_PolishEvent_IsBase(true);
        vqgraphicsproxywidget->polishEvent();
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->polishEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnPolishEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_PolishEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_PolishEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_GrabKeyboardEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->grabKeyboardEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->grabKeyboardEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseGrabKeyboardEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_GrabKeyboardEvent_IsBase(true);
        vqgraphicsproxywidget->grabKeyboardEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->grabKeyboardEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnGrabKeyboardEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_GrabKeyboardEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_GrabKeyboardEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_UngrabKeyboardEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->ungrabKeyboardEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->ungrabKeyboardEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseUngrabKeyboardEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_UngrabKeyboardEvent_IsBase(true);
        vqgraphicsproxywidget->ungrabKeyboardEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->ungrabKeyboardEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnUngrabKeyboardEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_UngrabKeyboardEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_UngrabKeyboardEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_TimerEvent(QGraphicsProxyWidget* self, QTimerEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->timerEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseTimerEvent(QGraphicsProxyWidget* self, QTimerEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_TimerEvent_IsBase(true);
        vqgraphicsproxywidget->timerEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnTimerEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_TimerEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_ChildEvent(QGraphicsProxyWidget* self, QChildEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->childEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseChildEvent(QGraphicsProxyWidget* self, QChildEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_ChildEvent_IsBase(true);
        vqgraphicsproxywidget->childEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnChildEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_ChildEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_CustomEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->customEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseCustomEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_CustomEvent_IsBase(true);
        vqgraphicsproxywidget->customEvent(event);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnCustomEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_CustomEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_ConnectNotify(QGraphicsProxyWidget* self, const QMetaMethod* signal) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->connectNotify(*signal);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseConnectNotify(QGraphicsProxyWidget* self, const QMetaMethod* signal) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_ConnectNotify_IsBase(true);
        vqgraphicsproxywidget->connectNotify(*signal);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnConnectNotify(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_DisconnectNotify(QGraphicsProxyWidget* self, const QMetaMethod* signal) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->disconnectNotify(*signal);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseDisconnectNotify(QGraphicsProxyWidget* self, const QMetaMethod* signal) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_DisconnectNotify_IsBase(true);
        vqgraphicsproxywidget->disconnectNotify(*signal);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnDisconnectNotify(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_Advance(QGraphicsProxyWidget* self, int phase) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->advance(static_cast<int>(phase));
    } else {
        self->QGraphicsProxyWidget::advance(static_cast<int>(phase));
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseAdvance(QGraphicsProxyWidget* self, int phase) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_Advance_IsBase(true);
        vqgraphicsproxywidget->advance(static_cast<int>(phase));
    } else {
        self->QGraphicsProxyWidget::advance(static_cast<int>(phase));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnAdvance(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_Advance_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsProxyWidget_Contains(const QGraphicsProxyWidget* self, const QPointF* point) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return vqgraphicsproxywidget->contains(*point);
    } else {
        return self->QGraphicsProxyWidget::contains(*point);
    }
}

// Base class handler implementation
bool QGraphicsProxyWidget_QBaseContains(const QGraphicsProxyWidget* self, const QPointF* point) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_Contains_IsBase(true);
        return vqgraphicsproxywidget->contains(*point);
    } else {
        return self->QGraphicsProxyWidget::contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnContains(const QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_Contains_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Contains_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsProxyWidget_CollidesWithItem(const QGraphicsProxyWidget* self, const QGraphicsItem* other, int mode) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return vqgraphicsproxywidget->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return self->QGraphicsProxyWidget::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsProxyWidget_QBaseCollidesWithItem(const QGraphicsProxyWidget* self, const QGraphicsItem* other, int mode) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_CollidesWithItem_IsBase(true);
        return vqgraphicsproxywidget->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return self->QGraphicsProxyWidget::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnCollidesWithItem(const QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_CollidesWithItem_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_CollidesWithItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsProxyWidget_CollidesWithPath(const QGraphicsProxyWidget* self, const QPainterPath* path, int mode) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return vqgraphicsproxywidget->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return self->QGraphicsProxyWidget::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsProxyWidget_QBaseCollidesWithPath(const QGraphicsProxyWidget* self, const QPainterPath* path, int mode) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_CollidesWithPath_IsBase(true);
        return vqgraphicsproxywidget->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return self->QGraphicsProxyWidget::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnCollidesWithPath(const QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_CollidesWithPath_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_CollidesWithPath_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsProxyWidget_IsObscuredBy(const QGraphicsProxyWidget* self, const QGraphicsItem* item) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return vqgraphicsproxywidget->isObscuredBy(item);
    } else {
        return self->QGraphicsProxyWidget::isObscuredBy(item);
    }
}

// Base class handler implementation
bool QGraphicsProxyWidget_QBaseIsObscuredBy(const QGraphicsProxyWidget* self, const QGraphicsItem* item) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_IsObscuredBy_IsBase(true);
        return vqgraphicsproxywidget->isObscuredBy(item);
    } else {
        return self->QGraphicsProxyWidget::isObscuredBy(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnIsObscuredBy(const QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_IsObscuredBy_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsProxyWidget_OpaqueArea(const QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return new QPainterPath(vqgraphicsproxywidget->opaqueArea());
    } else {
        return new QPainterPath(((VirtualQGraphicsProxyWidget*)self)->opaqueArea());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsProxyWidget_QBaseOpaqueArea(const QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_OpaqueArea_IsBase(true);
        return new QPainterPath(vqgraphicsproxywidget->opaqueArea());
    } else {
        return new QPainterPath(((VirtualQGraphicsProxyWidget*)self)->opaqueArea());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnOpaqueArea(const QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_OpaqueArea_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsProxyWidget_SceneEventFilter(QGraphicsProxyWidget* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return vqgraphicsproxywidget->sceneEventFilter(watched, event);
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->sceneEventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsProxyWidget_QBaseSceneEventFilter(QGraphicsProxyWidget* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_SceneEventFilter_IsBase(true);
        return vqgraphicsproxywidget->sceneEventFilter(watched, event);
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->sceneEventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnSceneEventFilter(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_SceneEventFilter_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_SceneEventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsProxyWidget_SupportsExtension(const QGraphicsProxyWidget* self, int extension) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return vqgraphicsproxywidget->supportsExtension(static_cast<VirtualQGraphicsProxyWidget::Extension>(extension));
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->supportsExtension(static_cast<VirtualQGraphicsProxyWidget::Extension>(extension));
    }
}

// Base class handler implementation
bool QGraphicsProxyWidget_QBaseSupportsExtension(const QGraphicsProxyWidget* self, int extension) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_SupportsExtension_IsBase(true);
        return vqgraphicsproxywidget->supportsExtension(static_cast<VirtualQGraphicsProxyWidget::Extension>(extension));
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->supportsExtension(static_cast<VirtualQGraphicsProxyWidget::Extension>(extension));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnSupportsExtension(const QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_SupportsExtension_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_SupportsExtension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_SetExtension(QGraphicsProxyWidget* self, int extension, const QVariant* variant) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setExtension(static_cast<VirtualQGraphicsProxyWidget::Extension>(extension), *variant);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->setExtension(static_cast<VirtualQGraphicsProxyWidget::Extension>(extension), *variant);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseSetExtension(QGraphicsProxyWidget* self, int extension, const QVariant* variant) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_SetExtension_IsBase(true);
        vqgraphicsproxywidget->setExtension(static_cast<VirtualQGraphicsProxyWidget::Extension>(extension), *variant);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->setExtension(static_cast<VirtualQGraphicsProxyWidget::Extension>(extension), *variant);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnSetExtension(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_SetExtension_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_SetExtension_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsProxyWidget_Extension(const QGraphicsProxyWidget* self, const QVariant* variant) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return new QVariant(vqgraphicsproxywidget->extension(*variant));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsProxyWidget_QBaseExtension(const QGraphicsProxyWidget* self, const QVariant* variant) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_Extension_IsBase(true);
        return new QVariant(vqgraphicsproxywidget->extension(*variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnExtension(const QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_Extension_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsProxyWidget_IsEmpty(const QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return vqgraphicsproxywidget->isEmpty();
    } else {
        return self->QGraphicsProxyWidget::isEmpty();
    }
}

// Base class handler implementation
bool QGraphicsProxyWidget_QBaseIsEmpty(const QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_IsEmpty_IsBase(true);
        return vqgraphicsproxywidget->isEmpty();
    } else {
        return self->QGraphicsProxyWidget::isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnIsEmpty(const QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_IsEmpty_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
QGraphicsProxyWidget* QGraphicsProxyWidget_NewProxyWidget(QGraphicsProxyWidget* self, const QWidget* param1) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return vqgraphicsproxywidget->newProxyWidget(param1);
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->newProxyWidget(param1);
    }
}

// Base class handler implementation
QGraphicsProxyWidget* QGraphicsProxyWidget_QBaseNewProxyWidget(QGraphicsProxyWidget* self, const QWidget* param1) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_NewProxyWidget_IsBase(true);
        return vqgraphicsproxywidget->newProxyWidget(param1);
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->newProxyWidget(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnNewProxyWidget(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_NewProxyWidget_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_NewProxyWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_UpdateMicroFocus(QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->updateMicroFocus();
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseUpdateMicroFocus(QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_UpdateMicroFocus_IsBase(true);
        vqgraphicsproxywidget->updateMicroFocus();
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnUpdateMicroFocus(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGraphicsProxyWidget_Sender(const QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return vqgraphicsproxywidget->sender();
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* QGraphicsProxyWidget_QBaseSender(const QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_Sender_IsBase(true);
        return vqgraphicsproxywidget->sender();
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnSender(const QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_Sender_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsProxyWidget_SenderSignalIndex(const QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return vqgraphicsproxywidget->senderSignalIndex();
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QGraphicsProxyWidget_QBaseSenderSignalIndex(const QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_SenderSignalIndex_IsBase(true);
        return vqgraphicsproxywidget->senderSignalIndex();
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnSenderSignalIndex(const QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsProxyWidget_Receivers(const QGraphicsProxyWidget* self, const char* signal) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return vqgraphicsproxywidget->receivers(signal);
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QGraphicsProxyWidget_QBaseReceivers(const QGraphicsProxyWidget* self, const char* signal) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_Receivers_IsBase(true);
        return vqgraphicsproxywidget->receivers(signal);
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnReceivers(const QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_Receivers_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsProxyWidget_IsSignalConnected(const QGraphicsProxyWidget* self, const QMetaMethod* signal) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        return vqgraphicsproxywidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGraphicsProxyWidget_QBaseIsSignalConnected(const QGraphicsProxyWidget* self, const QMetaMethod* signal) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_IsSignalConnected_IsBase(true);
        return vqgraphicsproxywidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQGraphicsProxyWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnIsSignalConnected(const QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_AddToIndex(QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->addToIndex();
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->addToIndex();
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseAddToIndex(QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_AddToIndex_IsBase(true);
        vqgraphicsproxywidget->addToIndex();
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->addToIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnAddToIndex(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_AddToIndex_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_AddToIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_RemoveFromIndex(QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->removeFromIndex();
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->removeFromIndex();
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseRemoveFromIndex(QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_RemoveFromIndex_IsBase(true);
        vqgraphicsproxywidget->removeFromIndex();
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->removeFromIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnRemoveFromIndex(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_RemoveFromIndex_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_RemoveFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_PrepareGeometryChange(QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->prepareGeometryChange();
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->prepareGeometryChange();
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBasePrepareGeometryChange(QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_PrepareGeometryChange_IsBase(true);
        vqgraphicsproxywidget->prepareGeometryChange();
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->prepareGeometryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnPrepareGeometryChange(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_PrepareGeometryChange_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_PrepareGeometryChange_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_SetGraphicsItem(QGraphicsProxyWidget* self, QGraphicsItem* item) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setGraphicsItem(item);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->setGraphicsItem(item);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseSetGraphicsItem(QGraphicsProxyWidget* self, QGraphicsItem* item) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_SetGraphicsItem_IsBase(true);
        vqgraphicsproxywidget->setGraphicsItem(item);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->setGraphicsItem(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnSetGraphicsItem(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_SetGraphicsItem_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_SetGraphicsItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsProxyWidget_SetOwnedByLayout(QGraphicsProxyWidget* self, bool ownedByLayout) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setOwnedByLayout(ownedByLayout);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->setOwnedByLayout(ownedByLayout);
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseSetOwnedByLayout(QGraphicsProxyWidget* self, bool ownedByLayout) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_SetOwnedByLayout_IsBase(true);
        vqgraphicsproxywidget->setOwnedByLayout(ownedByLayout);
    } else {
        ((VirtualQGraphicsProxyWidget*)self)->setOwnedByLayout(ownedByLayout);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnSetOwnedByLayout(QGraphicsProxyWidget* self, intptr_t slot) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
        vqgraphicsproxywidget->setQGraphicsProxyWidget_SetOwnedByLayout_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_SetOwnedByLayout_Callback>(slot));
    }
}

void QGraphicsProxyWidget_Delete(QGraphicsProxyWidget* self) {
    delete self;
}
