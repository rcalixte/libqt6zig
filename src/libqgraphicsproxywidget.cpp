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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGraphicsProxyWidget_Tr(const char* s) {
    auto _ret = QGraphicsProxyWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

void QGraphicsProxyWidget_SetGeometry(QGraphicsProxyWidget* self, const QRectF* rect) {
    self->setGeometry(*rect);
}

void QGraphicsProxyWidget_Paint(QGraphicsProxyWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paint(painter, option, widget);
}

int QGraphicsProxyWidget_Type(const QGraphicsProxyWidget* self) {
    return self->type();
}

QGraphicsProxyWidget* QGraphicsProxyWidget_CreateProxyForChildWidget(QGraphicsProxyWidget* self, QWidget* child) {
    return self->createProxyForChildWidget(child);
}

QVariant* QGraphicsProxyWidget_ItemChange(QGraphicsProxyWidget* self, int change, const QVariant* value) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        return new QVariant(vqgraphicsproxywidget->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    qFatal("Error: Protected method QGraphicsProxyWidget::itemChange called without a directly constructed type");
}

bool QGraphicsProxyWidget_Event(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        return vqgraphicsproxywidget->event(event);
    }
    qFatal("Error: Protected method QGraphicsProxyWidget::event called without a directly constructed type");
}

bool QGraphicsProxyWidget_EventFilter(QGraphicsProxyWidget* self, QObject* object, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        return vqgraphicsproxywidget->eventFilter(object, event);
    }
    qFatal("Error: Protected method QGraphicsProxyWidget::eventFilter called without a directly constructed type");
}

void QGraphicsProxyWidget_ShowEvent(QGraphicsProxyWidget* self, QShowEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->showEvent(event);
    }
}

void QGraphicsProxyWidget_HideEvent(QGraphicsProxyWidget* self, QHideEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->hideEvent(event);
    }
}

void QGraphicsProxyWidget_ContextMenuEvent(QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->contextMenuEvent(event);
    }
}

void QGraphicsProxyWidget_DragEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->dragEnterEvent(event);
    }
}

void QGraphicsProxyWidget_DragLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->dragLeaveEvent(event);
    }
}

void QGraphicsProxyWidget_DragMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->dragMoveEvent(event);
    }
}

void QGraphicsProxyWidget_DropEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->dropEvent(event);
    }
}

void QGraphicsProxyWidget_HoverEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->hoverEnterEvent(event);
    }
}

void QGraphicsProxyWidget_HoverLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->hoverLeaveEvent(event);
    }
}

void QGraphicsProxyWidget_HoverMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->hoverMoveEvent(event);
    }
}

void QGraphicsProxyWidget_GrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->grabMouseEvent(event);
    }
}

void QGraphicsProxyWidget_UngrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->ungrabMouseEvent(event);
    }
}

void QGraphicsProxyWidget_MouseMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->mouseMoveEvent(event);
    }
}

void QGraphicsProxyWidget_MousePressEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->mousePressEvent(event);
    }
}

void QGraphicsProxyWidget_MouseReleaseEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->mouseReleaseEvent(event);
    }
}

void QGraphicsProxyWidget_MouseDoubleClickEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->mouseDoubleClickEvent(event);
    }
}

void QGraphicsProxyWidget_WheelEvent(QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->wheelEvent(event);
    }
}

void QGraphicsProxyWidget_KeyPressEvent(QGraphicsProxyWidget* self, QKeyEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->keyPressEvent(event);
    }
}

void QGraphicsProxyWidget_KeyReleaseEvent(QGraphicsProxyWidget* self, QKeyEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->keyReleaseEvent(event);
    }
}

void QGraphicsProxyWidget_FocusInEvent(QGraphicsProxyWidget* self, QFocusEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->focusInEvent(event);
    }
}

void QGraphicsProxyWidget_FocusOutEvent(QGraphicsProxyWidget* self, QFocusEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->focusOutEvent(event);
    }
}

bool QGraphicsProxyWidget_FocusNextPrevChild(QGraphicsProxyWidget* self, bool next) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        return vqgraphicsproxywidget->focusNextPrevChild(next);
    }
    qFatal("Error: Protected method QGraphicsProxyWidget::focusNextPrevChild called without a directly constructed type");
}

QVariant* QGraphicsProxyWidget_InputMethodQuery(const QGraphicsProxyWidget* self, int query) {
    auto* vqgraphicsproxywidget = dynamic_cast<const VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        return new QVariant(vqgraphicsproxywidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    qFatal("Error: Protected method QGraphicsProxyWidget::inputMethodQuery called without a directly constructed type");
}

void QGraphicsProxyWidget_InputMethodEvent(QGraphicsProxyWidget* self, QInputMethodEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->inputMethodEvent(event);
    }
}

QSizeF* QGraphicsProxyWidget_SizeHint(const QGraphicsProxyWidget* self, int which, const QSizeF* constraint) {
    auto* vqgraphicsproxywidget = dynamic_cast<const VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        return new QSizeF(vqgraphicsproxywidget->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    qFatal("Error: Protected method QGraphicsProxyWidget::sizeHint called without a directly constructed type");
}

void QGraphicsProxyWidget_ResizeEvent(QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->resizeEvent(event);
    }
}

libqt_string QGraphicsProxyWidget_Tr2(const char* s, const char* c) {
    auto _ret = QGraphicsProxyWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsProxyWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGraphicsProxyWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* QGraphicsProxyWidget_SuperMetaObject(const QGraphicsProxyWidget* self) {
    return (QMetaObject*)self->QGraphicsProxyWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnMetaObject(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self)))
        vqgraphicsproxywidget->qgraphicsproxywidget_metaobject_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGraphicsProxyWidget_SuperMetacast(QGraphicsProxyWidget* self, const char* param1) {
    return self->QGraphicsProxyWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnMetacast(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_metacast_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGraphicsProxyWidget_SuperMetacall(QGraphicsProxyWidget* self, int param1, int param2, void** param3) {
    return self->QGraphicsProxyWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnMetacall(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_metacall_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperSetGeometry(QGraphicsProxyWidget* self, const QRectF* rect) {
    self->QGraphicsProxyWidget::setGeometry(*rect);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnSetGeometry(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_setgeometry_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_SetGeometry_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperPaint(QGraphicsProxyWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->QGraphicsProxyWidget::paint(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnPaint(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_paint_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Paint_Callback>(slot);
}

// Base class handler implementation
int QGraphicsProxyWidget_SuperType(const QGraphicsProxyWidget* self) {
    return self->QGraphicsProxyWidget::type();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnType(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self)))
        vqgraphicsproxywidget->qgraphicsproxywidget_type_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Type_Callback>(slot);
}

// Base class handler implementation
QVariant* QGraphicsProxyWidget_SuperItemChange(QGraphicsProxyWidget* self, int change, const QVariant* value) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        return new QVariant(vqgraphicsproxywidget->QGraphicsProxyWidget::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    qFatal("Error: Protected virtual method QGraphicsProxyWidget::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnItemChange(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_itemchange_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_ItemChange_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsProxyWidget_SuperEvent(QGraphicsProxyWidget* self, QEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        return vqgraphicsproxywidget->QGraphicsProxyWidget::event(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_event_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Event_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsProxyWidget_SuperEventFilter(QGraphicsProxyWidget* self, QObject* object, QEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        return vqgraphicsproxywidget->QGraphicsProxyWidget::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnEventFilter(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_eventfilter_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_EventFilter_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperShowEvent(QGraphicsProxyWidget* self, QShowEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnShowEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_showevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperHideEvent(QGraphicsProxyWidget* self, QHideEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnHideEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_hideevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_HideEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperContextMenuEvent(QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnContextMenuEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_contextmenuevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperDragEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnDragEnterEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_dragenterevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_DragEnterEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperDragLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnDragLeaveEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_dragleaveevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_DragLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperDragMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnDragMoveEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_dragmoveevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_DragMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperDropEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnDropEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_dropevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_DropEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperHoverEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnHoverEnterEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_hoverenterevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_HoverEnterEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperHoverLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnHoverLeaveEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_hoverleaveevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_HoverLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperHoverMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnHoverMoveEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_hovermoveevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_HoverMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperGrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::grabMouseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::grabMouseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnGrabMouseEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_grabmouseevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_GrabMouseEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperUngrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::ungrabMouseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::ungrabMouseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnUngrabMouseEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_ungrabmouseevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_UngrabMouseEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperMouseMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnMouseMoveEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_mousemoveevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperMousePressEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnMousePressEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_mousepressevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperMouseReleaseEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnMouseReleaseEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_mousereleaseevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperMouseDoubleClickEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnMouseDoubleClickEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperWheelEvent(QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnWheelEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_wheelevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_WheelEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperKeyPressEvent(QGraphicsProxyWidget* self, QKeyEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnKeyPressEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_keypressevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperKeyReleaseEvent(QGraphicsProxyWidget* self, QKeyEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnKeyReleaseEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_keyreleaseevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_KeyReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperFocusInEvent(QGraphicsProxyWidget* self, QFocusEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnFocusInEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_focusinevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperFocusOutEvent(QGraphicsProxyWidget* self, QFocusEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnFocusOutEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_focusoutevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsProxyWidget_SuperFocusNextPrevChild(QGraphicsProxyWidget* self, bool next) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        return vqgraphicsproxywidget->QGraphicsProxyWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnFocusNextPrevChild(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_focusnextprevchild_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_FocusNextPrevChild_Callback>(slot);
}

// Base class handler implementation
QVariant* QGraphicsProxyWidget_SuperInputMethodQuery(const QGraphicsProxyWidget* self, int query) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self)))
        return new QVariant(vqgraphicsproxywidget->QGraphicsProxyWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    qFatal("Error: Protected virtual method QGraphicsProxyWidget::inputMethodQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnInputMethodQuery(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self)))
        vqgraphicsproxywidget->qgraphicsproxywidget_inputmethodquery_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_InputMethodQuery_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperInputMethodEvent(QGraphicsProxyWidget* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnInputMethodEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_inputmethodevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_InputMethodEvent_Callback>(slot);
}

// Base class handler implementation
QSizeF* QGraphicsProxyWidget_SuperSizeHint(const QGraphicsProxyWidget* self, int which, const QSizeF* constraint) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self)))
        return new QSizeF(vqgraphicsproxywidget->QGraphicsProxyWidget::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    qFatal("Error: Protected virtual method QGraphicsProxyWidget::sizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnSizeHint(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self)))
        vqgraphicsproxywidget->qgraphicsproxywidget_sizehint_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_SizeHint_Callback>(slot);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperResizeEvent(QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnResizeEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_resizeevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsProxyWidget_GetContentsMargins(const QGraphicsProxyWidget* self, double* left, double* top, double* right, double* bottom) {
    self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperGetContentsMargins(const QGraphicsProxyWidget* self, double* left, double* top, double* right, double* bottom) {
    self->QGraphicsProxyWidget::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnGetContentsMargins(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self)))
        vqgraphicsproxywidget->qgraphicsproxywidget_getcontentsmargins_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_GetContentsMargins_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsProxyWidget_PaintWindowFrame(QGraphicsProxyWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paintWindowFrame(painter, option, widget);
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperPaintWindowFrame(QGraphicsProxyWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->QGraphicsProxyWidget::paintWindowFrame(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnPaintWindowFrame(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_paintwindowframe_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_PaintWindowFrame_Callback>(slot);
}

// Derived class handler implementation
QRectF* QGraphicsProxyWidget_BoundingRect(const QGraphicsProxyWidget* self) {
    return new QRectF(self->boundingRect());
}

// Base class handler implementation
QRectF* QGraphicsProxyWidget_SuperBoundingRect(const QGraphicsProxyWidget* self) {
    return new QRectF(self->QGraphicsProxyWidget::boundingRect());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnBoundingRect(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self)))
        vqgraphicsproxywidget->qgraphicsproxywidget_boundingrect_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_BoundingRect_Callback>(slot);
}

// Derived class handler implementation
QPainterPath* QGraphicsProxyWidget_Shape(const QGraphicsProxyWidget* self) {
    return new QPainterPath(self->shape());
}

// Base class handler implementation
QPainterPath* QGraphicsProxyWidget_SuperShape(const QGraphicsProxyWidget* self) {
    return new QPainterPath(self->QGraphicsProxyWidget::shape());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnShape(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self)))
        vqgraphicsproxywidget->qgraphicsproxywidget_shape_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Shape_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsProxyWidget_InitStyleOption(const QGraphicsProxyWidget* self, QStyleOption* option) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperInitStyleOption(const QGraphicsProxyWidget* self, QStyleOption* option) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self))) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnInitStyleOption(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self)))
        vqgraphicsproxywidget->qgraphicsproxywidget_initstyleoption_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsProxyWidget_UpdateGeometry(QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->updateGeometry();
    } else {
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::updateGeometry called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperUpdateGeometry(QGraphicsProxyWidget* self) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::updateGeometry();
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::updateGeometry called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnUpdateGeometry(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_updategeometry_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_UpdateGeometry_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsProxyWidget_PropertyChange(QGraphicsProxyWidget* self, const libqt_string propertyName, const QVariant* value) {
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    return new QVariant((self->*&VirtualQGraphicsProxyWidget::Base::propertyChange)(propertyName_QString, *value));
}

// Base class handler implementation
QVariant* QGraphicsProxyWidget_SuperPropertyChange(QGraphicsProxyWidget* self, const libqt_string propertyName, const QVariant* value) {
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        return new QVariant(vqgraphicsproxywidget->propertyChange(propertyName_QString, *value));
    qFatal("Error: Protected virtual method QGraphicsProxyWidget::propertyChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnPropertyChange(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_propertychange_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_PropertyChange_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsProxyWidget_SceneEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        return vqgraphicsproxywidget->sceneEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::sceneEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsProxyWidget_SuperSceneEvent(QGraphicsProxyWidget* self, QEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        return vqgraphicsproxywidget->QGraphicsProxyWidget::sceneEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::sceneEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnSceneEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_sceneevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_SceneEvent_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsProxyWidget_WindowFrameEvent(QGraphicsProxyWidget* self, QEvent* e) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        return vqgraphicsproxywidget->windowFrameEvent(e);
    } else {
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::windowFrameEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsProxyWidget_SuperWindowFrameEvent(QGraphicsProxyWidget* self, QEvent* e) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        return vqgraphicsproxywidget->QGraphicsProxyWidget::windowFrameEvent(e);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::windowFrameEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnWindowFrameEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_windowframeevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_WindowFrameEvent_Callback>(slot);
}

// Derived class handler implementation
int QGraphicsProxyWidget_WindowFrameSectionAt(const QGraphicsProxyWidget* self, const QPointF* pos) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget) {
        return static_cast<int>(vqgraphicsproxywidget->windowFrameSectionAt(*pos));
    } else {
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::windowFrameSectionAt called without a directly constructed type");
    }
}

// Base class handler implementation
int QGraphicsProxyWidget_SuperWindowFrameSectionAt(const QGraphicsProxyWidget* self, const QPointF* pos) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self))) {
        return static_cast<int>(vqgraphicsproxywidget->QGraphicsProxyWidget::windowFrameSectionAt(*pos));
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::windowFrameSectionAt called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnWindowFrameSectionAt(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self)))
        vqgraphicsproxywidget->qgraphicsproxywidget_windowframesectionat_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_WindowFrameSectionAt_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsProxyWidget_ChangeEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->changeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperChangeEvent(QGraphicsProxyWidget* self, QEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnChangeEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_changeevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsProxyWidget_CloseEvent(QGraphicsProxyWidget* self, QCloseEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperCloseEvent(QGraphicsProxyWidget* self, QCloseEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnCloseEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_closeevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsProxyWidget_MoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMoveEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMoveEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnMoveEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_moveevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsProxyWidget_PolishEvent(QGraphicsProxyWidget* self) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->polishEvent();
    } else {
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::polishEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperPolishEvent(QGraphicsProxyWidget* self) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::polishEvent();
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::polishEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnPolishEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_polishevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_PolishEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsProxyWidget_GrabKeyboardEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->grabKeyboardEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::grabKeyboardEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperGrabKeyboardEvent(QGraphicsProxyWidget* self, QEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::grabKeyboardEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::grabKeyboardEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnGrabKeyboardEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_grabkeyboardevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_GrabKeyboardEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsProxyWidget_UngrabKeyboardEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->ungrabKeyboardEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::ungrabKeyboardEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperUngrabKeyboardEvent(QGraphicsProxyWidget* self, QEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::ungrabKeyboardEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::ungrabKeyboardEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnUngrabKeyboardEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_ungrabkeyboardevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_UngrabKeyboardEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsProxyWidget_TimerEvent(QGraphicsProxyWidget* self, QTimerEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperTimerEvent(QGraphicsProxyWidget* self, QTimerEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnTimerEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_timerevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsProxyWidget_ChildEvent(QGraphicsProxyWidget* self, QChildEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperChildEvent(QGraphicsProxyWidget* self, QChildEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnChildEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_childevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsProxyWidget_CustomEvent(QGraphicsProxyWidget* self, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperCustomEvent(QGraphicsProxyWidget* self, QEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnCustomEvent(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_customevent_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsProxyWidget_ConnectNotify(QGraphicsProxyWidget* self, const QMetaMethod* signal) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperConnectNotify(QGraphicsProxyWidget* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnConnectNotify(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_connectnotify_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsProxyWidget_DisconnectNotify(QGraphicsProxyWidget* self, const QMetaMethod* signal) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperDisconnectNotify(QGraphicsProxyWidget* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnDisconnectNotify(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_disconnectnotify_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsProxyWidget_Advance(QGraphicsProxyWidget* self, int phase) {
    self->advance(static_cast<int>(phase));
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperAdvance(QGraphicsProxyWidget* self, int phase) {
    self->QGraphicsProxyWidget::advance(static_cast<int>(phase));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnAdvance(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_advance_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Advance_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsProxyWidget_Contains(const QGraphicsProxyWidget* self, const QPointF* point) {
    return self->contains(*point);
}

// Base class handler implementation
bool QGraphicsProxyWidget_SuperContains(const QGraphicsProxyWidget* self, const QPointF* point) {
    return self->QGraphicsProxyWidget::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnContains(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self)))
        vqgraphicsproxywidget->qgraphicsproxywidget_contains_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Contains_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsProxyWidget_CollidesWithItem(const QGraphicsProxyWidget* self, const QGraphicsItem* other, int mode) {
    return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsProxyWidget_SuperCollidesWithItem(const QGraphicsProxyWidget* self, const QGraphicsItem* other, int mode) {
    return self->QGraphicsProxyWidget::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnCollidesWithItem(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self)))
        vqgraphicsproxywidget->qgraphicsproxywidget_collideswithitem_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_CollidesWithItem_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsProxyWidget_CollidesWithPath(const QGraphicsProxyWidget* self, const QPainterPath* path, int mode) {
    return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsProxyWidget_SuperCollidesWithPath(const QGraphicsProxyWidget* self, const QPainterPath* path, int mode) {
    return self->QGraphicsProxyWidget::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnCollidesWithPath(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self)))
        vqgraphicsproxywidget->qgraphicsproxywidget_collideswithpath_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_CollidesWithPath_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsProxyWidget_IsObscuredBy(const QGraphicsProxyWidget* self, const QGraphicsItem* item) {
    return self->isObscuredBy(item);
}

// Base class handler implementation
bool QGraphicsProxyWidget_SuperIsObscuredBy(const QGraphicsProxyWidget* self, const QGraphicsItem* item) {
    return self->QGraphicsProxyWidget::isObscuredBy(item);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnIsObscuredBy(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self)))
        vqgraphicsproxywidget->qgraphicsproxywidget_isobscuredby_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_IsObscuredBy_Callback>(slot);
}

// Derived class handler implementation
QPainterPath* QGraphicsProxyWidget_OpaqueArea(const QGraphicsProxyWidget* self) {
    return new QPainterPath(self->opaqueArea());
}

// Base class handler implementation
QPainterPath* QGraphicsProxyWidget_SuperOpaqueArea(const QGraphicsProxyWidget* self) {
    return new QPainterPath(self->QGraphicsProxyWidget::opaqueArea());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnOpaqueArea(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self)))
        vqgraphicsproxywidget->qgraphicsproxywidget_opaquearea_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_OpaqueArea_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsProxyWidget_SceneEventFilter(QGraphicsProxyWidget* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        return vqgraphicsproxywidget->sceneEventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::sceneEventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsProxyWidget_SuperSceneEventFilter(QGraphicsProxyWidget* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        return vqgraphicsproxywidget->QGraphicsProxyWidget::sceneEventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::sceneEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnSceneEventFilter(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_sceneeventfilter_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_SceneEventFilter_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsProxyWidget_SupportsExtension(const QGraphicsProxyWidget* self, int extension) {
    auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self));
    if (vqgraphicsproxywidget) {
        return vqgraphicsproxywidget->supportsExtension(static_cast<VirtualQGraphicsProxyWidget::Extension>(extension));
    } else {
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::supportsExtension called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsProxyWidget_SuperSupportsExtension(const QGraphicsProxyWidget* self, int extension) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self))) {
        return vqgraphicsproxywidget->QGraphicsProxyWidget::supportsExtension(static_cast<VirtualQGraphicsProxyWidget::Extension>(extension));
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::supportsExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnSupportsExtension(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self)))
        vqgraphicsproxywidget->qgraphicsproxywidget_supportsextension_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_SupportsExtension_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsProxyWidget_SetExtension(QGraphicsProxyWidget* self, int extension, const QVariant* variant) {
    auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
    if (vqgraphicsproxywidget) {
        vqgraphicsproxywidget->setExtension(static_cast<VirtualQGraphicsProxyWidget::Extension>(extension), *variant);
    } else {
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::setExtension called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsProxyWidget_SuperSetExtension(QGraphicsProxyWidget* self, int extension, const QVariant* variant) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->QGraphicsProxyWidget::setExtension(static_cast<VirtualQGraphicsProxyWidget::Extension>(extension), *variant);
    } else
        qFatal("Error: Protected virtual method QGraphicsProxyWidget::setExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnSetExtension(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self))
        vqgraphicsproxywidget->qgraphicsproxywidget_setextension_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_SetExtension_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsProxyWidget_Extension(const QGraphicsProxyWidget* self, const QVariant* variant) {
    return new QVariant((self->*&VirtualQGraphicsProxyWidget::Base::extension)(*variant));
}

// Base class handler implementation
QVariant* QGraphicsProxyWidget_SuperExtension(const QGraphicsProxyWidget* self, const QVariant* variant) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self)))
        return new QVariant(vqgraphicsproxywidget->extension(*variant));
    qFatal("Error: Protected virtual method QGraphicsProxyWidget::extension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnExtension(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self)))
        vqgraphicsproxywidget->qgraphicsproxywidget_extension_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Extension_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsProxyWidget_IsEmpty(const QGraphicsProxyWidget* self) {
    return self->isEmpty();
}

// Base class handler implementation
bool QGraphicsProxyWidget_SuperIsEmpty(const QGraphicsProxyWidget* self) {
    return self->QGraphicsProxyWidget::isEmpty();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnIsEmpty(QGraphicsProxyWidget* self, intptr_t slot) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self)))
        vqgraphicsproxywidget->qgraphicsproxywidget_isempty_callback = reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_IsEmpty_Callback>(slot);
}

// Derived class protected handler implementation
QGraphicsProxyWidget* QGraphicsProxyWidget_NewProxyWidget(QGraphicsProxyWidget* self, const QWidget* param1) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        return vqgraphicsproxywidget->VirtualQGraphicsProxyWidget::newProxyWidget(param1);
    } else
        qFatal("Error: Protected method QGraphicsProxyWidget::newProxyWidget called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsProxyWidget_UpdateMicroFocus(QGraphicsProxyWidget* self) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->VirtualQGraphicsProxyWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method QGraphicsProxyWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGraphicsProxyWidget_Sender(const QGraphicsProxyWidget* self) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self))) {
        return vqgraphicsproxywidget->VirtualQGraphicsProxyWidget::sender();
    } else
        qFatal("Error: Protected method QGraphicsProxyWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsProxyWidget_SenderSignalIndex(const QGraphicsProxyWidget* self) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self))) {
        return vqgraphicsproxywidget->VirtualQGraphicsProxyWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGraphicsProxyWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsProxyWidget_Receivers(const QGraphicsProxyWidget* self, const char* signal) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self))) {
        return vqgraphicsproxywidget->VirtualQGraphicsProxyWidget::receivers(signal);
    } else
        qFatal("Error: Protected method QGraphicsProxyWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsProxyWidget_IsSignalConnected(const QGraphicsProxyWidget* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsproxywidget = const_cast<VirtualQGraphicsProxyWidget*>(dynamic_cast<const VirtualQGraphicsProxyWidget*>(self))) {
        return vqgraphicsproxywidget->VirtualQGraphicsProxyWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGraphicsProxyWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsProxyWidget_AddToIndex(QGraphicsProxyWidget* self) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->VirtualQGraphicsProxyWidget::addToIndex();
    } else
        qFatal("Error: Protected method QGraphicsProxyWidget::addToIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsProxyWidget_RemoveFromIndex(QGraphicsProxyWidget* self) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->VirtualQGraphicsProxyWidget::removeFromIndex();
    } else
        qFatal("Error: Protected method QGraphicsProxyWidget::removeFromIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsProxyWidget_PrepareGeometryChange(QGraphicsProxyWidget* self) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->VirtualQGraphicsProxyWidget::prepareGeometryChange();
    } else
        qFatal("Error: Protected method QGraphicsProxyWidget::prepareGeometryChange called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsProxyWidget_SetGraphicsItem(QGraphicsProxyWidget* self, QGraphicsItem* item) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->VirtualQGraphicsProxyWidget::setGraphicsItem(item);
    } else
        qFatal("Error: Protected method QGraphicsProxyWidget::setGraphicsItem called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsProxyWidget_SetOwnedByLayout(QGraphicsProxyWidget* self, bool ownedByLayout) {
    if (auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self)) {
        vqgraphicsproxywidget->VirtualQGraphicsProxyWidget::setOwnedByLayout(ownedByLayout);
    } else
        qFatal("Error: Protected method QGraphicsProxyWidget::setOwnedByLayout called without a directly constructed type");
}

void QGraphicsProxyWidget_Delete(QGraphicsProxyWidget* self) {
    delete self;
}
