#pragma once
#ifndef LIBQGRAPHICSITEM_HXX
#define LIBQGRAPHICSITEM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsItem
class VirtualQGraphicsItem : public QGraphicsItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsItem::Extension;
    using QGraphicsItem_Advance_Callback = void (*)(QGraphicsItem*, int);
    using QGraphicsItem_BoundingRect_Callback = QRectF* (*)(const QGraphicsItem*);
    using QGraphicsItem_Shape_Callback = QPainterPath* (*)(const QGraphicsItem*);
    using QGraphicsItem_Contains_Callback = bool (*)(const QGraphicsItem*, QPointF*);
    using QGraphicsItem_CollidesWithItem_Callback = bool (*)(const QGraphicsItem*, QGraphicsItem*, int);
    using QGraphicsItem_CollidesWithPath_Callback = bool (*)(const QGraphicsItem*, QPainterPath*, int);
    using QGraphicsItem_IsObscuredBy_Callback = bool (*)(const QGraphicsItem*, QGraphicsItem*);
    using QGraphicsItem_OpaqueArea_Callback = QPainterPath* (*)(const QGraphicsItem*);
    using QGraphicsItem_Paint_Callback = void (*)(QGraphicsItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsItem_Type_Callback = int (*)(const QGraphicsItem*);
    using QGraphicsItem_SceneEventFilter_Callback = bool (*)(QGraphicsItem*, QGraphicsItem*, QEvent*);
    using QGraphicsItem_SceneEvent_Callback = bool (*)(QGraphicsItem*, QEvent*);
    using QGraphicsItem_ContextMenuEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsItem_DragEnterEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsItem_DragLeaveEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsItem_DragMoveEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsItem_DropEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsItem_FocusInEvent_Callback = void (*)(QGraphicsItem*, QFocusEvent*);
    using QGraphicsItem_FocusOutEvent_Callback = void (*)(QGraphicsItem*, QFocusEvent*);
    using QGraphicsItem_HoverEnterEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsItem_HoverMoveEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsItem_HoverLeaveEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsItem_KeyPressEvent_Callback = void (*)(QGraphicsItem*, QKeyEvent*);
    using QGraphicsItem_KeyReleaseEvent_Callback = void (*)(QGraphicsItem*, QKeyEvent*);
    using QGraphicsItem_MousePressEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsItem_MouseMoveEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsItem_MouseReleaseEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsItem_MouseDoubleClickEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsItem_WheelEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneWheelEvent*);
    using QGraphicsItem_InputMethodEvent_Callback = void (*)(QGraphicsItem*, QInputMethodEvent*);
    using QGraphicsItem_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsItem*, int);
    using QGraphicsItem_ItemChange_Callback = QVariant* (*)(QGraphicsItem*, int, QVariant*);
    using QGraphicsItem_SupportsExtension_Callback = bool (*)(const QGraphicsItem*, int);
    using QGraphicsItem_SetExtension_Callback = void (*)(QGraphicsItem*, int, QVariant*);
    using QGraphicsItem_Extension_Callback = QVariant* (*)(const QGraphicsItem*, QVariant*);
    using QGraphicsItem::addToIndex;
    using QGraphicsItem::prepareGeometryChange;
    using QGraphicsItem::removeFromIndex;
    using QGraphicsItem::updateMicroFocus;

    // Instance callback storage
    QGraphicsItem_Advance_Callback qgraphicsitem_advance_callback = nullptr;
    QGraphicsItem_BoundingRect_Callback qgraphicsitem_boundingrect_callback = nullptr;
    QGraphicsItem_Shape_Callback qgraphicsitem_shape_callback = nullptr;
    QGraphicsItem_Contains_Callback qgraphicsitem_contains_callback = nullptr;
    QGraphicsItem_CollidesWithItem_Callback qgraphicsitem_collideswithitem_callback = nullptr;
    QGraphicsItem_CollidesWithPath_Callback qgraphicsitem_collideswithpath_callback = nullptr;
    QGraphicsItem_IsObscuredBy_Callback qgraphicsitem_isobscuredby_callback = nullptr;
    QGraphicsItem_OpaqueArea_Callback qgraphicsitem_opaquearea_callback = nullptr;
    QGraphicsItem_Paint_Callback qgraphicsitem_paint_callback = nullptr;
    QGraphicsItem_Type_Callback qgraphicsitem_type_callback = nullptr;
    QGraphicsItem_SceneEventFilter_Callback qgraphicsitem_sceneeventfilter_callback = nullptr;
    QGraphicsItem_SceneEvent_Callback qgraphicsitem_sceneevent_callback = nullptr;
    QGraphicsItem_ContextMenuEvent_Callback qgraphicsitem_contextmenuevent_callback = nullptr;
    QGraphicsItem_DragEnterEvent_Callback qgraphicsitem_dragenterevent_callback = nullptr;
    QGraphicsItem_DragLeaveEvent_Callback qgraphicsitem_dragleaveevent_callback = nullptr;
    QGraphicsItem_DragMoveEvent_Callback qgraphicsitem_dragmoveevent_callback = nullptr;
    QGraphicsItem_DropEvent_Callback qgraphicsitem_dropevent_callback = nullptr;
    QGraphicsItem_FocusInEvent_Callback qgraphicsitem_focusinevent_callback = nullptr;
    QGraphicsItem_FocusOutEvent_Callback qgraphicsitem_focusoutevent_callback = nullptr;
    QGraphicsItem_HoverEnterEvent_Callback qgraphicsitem_hoverenterevent_callback = nullptr;
    QGraphicsItem_HoverMoveEvent_Callback qgraphicsitem_hovermoveevent_callback = nullptr;
    QGraphicsItem_HoverLeaveEvent_Callback qgraphicsitem_hoverleaveevent_callback = nullptr;
    QGraphicsItem_KeyPressEvent_Callback qgraphicsitem_keypressevent_callback = nullptr;
    QGraphicsItem_KeyReleaseEvent_Callback qgraphicsitem_keyreleaseevent_callback = nullptr;
    QGraphicsItem_MousePressEvent_Callback qgraphicsitem_mousepressevent_callback = nullptr;
    QGraphicsItem_MouseMoveEvent_Callback qgraphicsitem_mousemoveevent_callback = nullptr;
    QGraphicsItem_MouseReleaseEvent_Callback qgraphicsitem_mousereleaseevent_callback = nullptr;
    QGraphicsItem_MouseDoubleClickEvent_Callback qgraphicsitem_mousedoubleclickevent_callback = nullptr;
    QGraphicsItem_WheelEvent_Callback qgraphicsitem_wheelevent_callback = nullptr;
    QGraphicsItem_InputMethodEvent_Callback qgraphicsitem_inputmethodevent_callback = nullptr;
    QGraphicsItem_InputMethodQuery_Callback qgraphicsitem_inputmethodquery_callback = nullptr;
    QGraphicsItem_ItemChange_Callback qgraphicsitem_itemchange_callback = nullptr;
    QGraphicsItem_SupportsExtension_Callback qgraphicsitem_supportsextension_callback = nullptr;
    QGraphicsItem_SetExtension_Callback qgraphicsitem_setextension_callback = nullptr;
    QGraphicsItem_Extension_Callback qgraphicsitem_extension_callback = nullptr;

    // Access struct
    struct Base : QGraphicsItem {
        using QGraphicsItem::contextMenuEvent;
        using QGraphicsItem::dragEnterEvent;
        using QGraphicsItem::dragLeaveEvent;
        using QGraphicsItem::dragMoveEvent;
        using QGraphicsItem::dropEvent;
        using QGraphicsItem::extension;
        using QGraphicsItem::focusInEvent;
        using QGraphicsItem::focusOutEvent;
        using QGraphicsItem::hoverEnterEvent;
        using QGraphicsItem::hoverLeaveEvent;
        using QGraphicsItem::hoverMoveEvent;
        using QGraphicsItem::inputMethodEvent;
        using QGraphicsItem::inputMethodQuery;
        using QGraphicsItem::itemChange;
        using QGraphicsItem::keyPressEvent;
        using QGraphicsItem::keyReleaseEvent;
        using QGraphicsItem::mouseDoubleClickEvent;
        using QGraphicsItem::mouseMoveEvent;
        using QGraphicsItem::mousePressEvent;
        using QGraphicsItem::mouseReleaseEvent;
        using QGraphicsItem::sceneEvent;
        using QGraphicsItem::sceneEventFilter;
        using QGraphicsItem::setExtension;
        using QGraphicsItem::supportsExtension;
        using QGraphicsItem::wheelEvent;
    };

    VirtualQGraphicsItem() : QGraphicsItem() {};
    VirtualQGraphicsItem(QGraphicsItem* parent) : QGraphicsItem(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicsitem_advance_callback) {
            int cbval1 = phase;
            qgraphicsitem_advance_callback(this, cbval1);
            return;
        }
        QGraphicsItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicsitem_boundingrect_callback) {
            QRectF* callback_ret = qgraphicsitem_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGraphicsItem::boundingRect called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicsitem_shape_callback) {
            QPainterPath* callback_ret = qgraphicsitem_shape_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicsitem_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qgraphicsitem_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsitem_collideswithitem_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicsitem_collideswithitem_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsitem_collideswithpath_callback) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicsitem_collideswithpath_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicsitem_isobscuredby_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;
            bool callback_ret = qgraphicsitem_isobscuredby_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicsitem_opaquearea_callback) {
            QPainterPath* callback_ret = qgraphicsitem_opaquearea_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicsitem_paint_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qgraphicsitem_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGraphicsItem::paint called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicsitem_type_callback) {
            int callback_ret = qgraphicsitem_type_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicsitem_sceneeventfilter_callback) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicsitem_sceneeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicsitem_sceneevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicsitem_sceneevent_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicsitem_contextmenuevent_callback) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;
            qgraphicsitem_contextmenuevent_callback(this, cbval1);
            return;
        }
        QGraphicsItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsitem_dragenterevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsitem_dragenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsitem_dragleaveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsitem_dragleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsitem_dragmoveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsitem_dragmoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsitem_dropevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsitem_dropevent_callback(this, cbval1);
            return;
        }
        QGraphicsItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicsitem_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicsitem_focusinevent_callback(this, cbval1);
            return;
        }
        QGraphicsItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicsitem_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicsitem_focusoutevent_callback(this, cbval1);
            return;
        }
        QGraphicsItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsitem_hoverenterevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsitem_hoverenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsitem_hovermoveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsitem_hovermoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsitem_hoverleaveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsitem_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicsitem_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicsitem_keypressevent_callback(this, cbval1);
            return;
        }
        QGraphicsItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicsitem_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicsitem_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsitem_mousepressevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsitem_mousepressevent_callback(this, cbval1);
            return;
        }
        QGraphicsItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsitem_mousemoveevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsitem_mousemoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsitem_mousereleaseevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsitem_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsitem_mousedoubleclickevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsitem_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QGraphicsItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicsitem_wheelevent_callback) {
            QGraphicsSceneWheelEvent* cbval1 = event;
            qgraphicsitem_wheelevent_callback(this, cbval1);
            return;
        }
        QGraphicsItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicsitem_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qgraphicsitem_inputmethodevent_callback(this, cbval1);
            return;
        }
        QGraphicsItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicsitem_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qgraphicsitem_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicsitem_itemchange_callback) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            QVariant* callback_ret = qgraphicsitem_itemchange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsItem::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicsitem_supportsextension_callback) {
            int cbval1 = static_cast<int>(extension);
            bool callback_ret = qgraphicsitem_supportsextension_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicsitem_setextension_callback) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);
            qgraphicsitem_setextension_callback(this, cbval1, cbval2);
            return;
        }
        QGraphicsItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicsitem_extension_callback) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);
            QVariant* callback_ret = qgraphicsitem_extension_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsItem::extension(variant);
    }

    // Friend functions
    friend bool QGraphicsItem_SuperSceneEventFilter(QGraphicsItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsItem_SuperSceneEvent(QGraphicsItem* self, QEvent* event);
    friend void QGraphicsItem_SuperContextMenuEvent(QGraphicsItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsItem_SuperDragEnterEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItem_SuperDragLeaveEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItem_SuperDragMoveEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItem_SuperDropEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItem_SuperFocusInEvent(QGraphicsItem* self, QFocusEvent* event);
    friend void QGraphicsItem_SuperFocusOutEvent(QGraphicsItem* self, QFocusEvent* event);
    friend void QGraphicsItem_SuperHoverEnterEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsItem_SuperHoverMoveEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsItem_SuperHoverLeaveEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsItem_SuperKeyPressEvent(QGraphicsItem* self, QKeyEvent* event);
    friend void QGraphicsItem_SuperKeyReleaseEvent(QGraphicsItem* self, QKeyEvent* event);
    friend void QGraphicsItem_SuperMousePressEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItem_SuperMouseMoveEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItem_SuperMouseReleaseEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItem_SuperMouseDoubleClickEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItem_SuperWheelEvent(QGraphicsItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsItem_SuperInputMethodEvent(QGraphicsItem* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsItem_SuperInputMethodQuery(const QGraphicsItem* self, int query);
    friend QVariant* QGraphicsItem_SuperItemChange(QGraphicsItem* self, int change, const QVariant* value);
    friend bool QGraphicsItem_SuperSupportsExtension(const QGraphicsItem* self, int extension);
    friend void QGraphicsItem_SuperSetExtension(QGraphicsItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsItem_SuperExtension(const QGraphicsItem* self, const QVariant* variant);
};

// This class is a subclass of QGraphicsObject
class VirtualQGraphicsObject : public QGraphicsObject {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsItem::Extension;
    using QGraphicsObject_MetaObject_Callback = QMetaObject* (*)(const QGraphicsObject*);
    using QGraphicsObject_Metacast_Callback = void* (*)(QGraphicsObject*, const char*);
    using QGraphicsObject_Metacall_Callback = int (*)(QGraphicsObject*, int, int, void**);
    using QGraphicsObject_Event_Callback = bool (*)(QGraphicsObject*, QEvent*);
    using QGraphicsObject_EventFilter_Callback = bool (*)(QGraphicsObject*, QObject*, QEvent*);
    using QGraphicsObject_TimerEvent_Callback = void (*)(QGraphicsObject*, QTimerEvent*);
    using QGraphicsObject_ChildEvent_Callback = void (*)(QGraphicsObject*, QChildEvent*);
    using QGraphicsObject_CustomEvent_Callback = void (*)(QGraphicsObject*, QEvent*);
    using QGraphicsObject_ConnectNotify_Callback = void (*)(QGraphicsObject*, QMetaMethod*);
    using QGraphicsObject_DisconnectNotify_Callback = void (*)(QGraphicsObject*, QMetaMethod*);
    using QGraphicsObject_Advance_Callback = void (*)(QGraphicsObject*, int);
    using QGraphicsObject_BoundingRect_Callback = QRectF* (*)(const QGraphicsObject*);
    using QGraphicsObject_Shape_Callback = QPainterPath* (*)(const QGraphicsObject*);
    using QGraphicsObject_Contains_Callback = bool (*)(const QGraphicsObject*, QPointF*);
    using QGraphicsObject_CollidesWithItem_Callback = bool (*)(const QGraphicsObject*, QGraphicsItem*, int);
    using QGraphicsObject_CollidesWithPath_Callback = bool (*)(const QGraphicsObject*, QPainterPath*, int);
    using QGraphicsObject_IsObscuredBy_Callback = bool (*)(const QGraphicsObject*, QGraphicsItem*);
    using QGraphicsObject_OpaqueArea_Callback = QPainterPath* (*)(const QGraphicsObject*);
    using QGraphicsObject_Paint_Callback = void (*)(QGraphicsObject*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsObject_Type_Callback = int (*)(const QGraphicsObject*);
    using QGraphicsObject_SceneEventFilter_Callback = bool (*)(QGraphicsObject*, QGraphicsItem*, QEvent*);
    using QGraphicsObject_SceneEvent_Callback = bool (*)(QGraphicsObject*, QEvent*);
    using QGraphicsObject_ContextMenuEvent_Callback = void (*)(QGraphicsObject*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsObject_DragEnterEvent_Callback = void (*)(QGraphicsObject*, QGraphicsSceneDragDropEvent*);
    using QGraphicsObject_DragLeaveEvent_Callback = void (*)(QGraphicsObject*, QGraphicsSceneDragDropEvent*);
    using QGraphicsObject_DragMoveEvent_Callback = void (*)(QGraphicsObject*, QGraphicsSceneDragDropEvent*);
    using QGraphicsObject_DropEvent_Callback = void (*)(QGraphicsObject*, QGraphicsSceneDragDropEvent*);
    using QGraphicsObject_FocusInEvent_Callback = void (*)(QGraphicsObject*, QFocusEvent*);
    using QGraphicsObject_FocusOutEvent_Callback = void (*)(QGraphicsObject*, QFocusEvent*);
    using QGraphicsObject_HoverEnterEvent_Callback = void (*)(QGraphicsObject*, QGraphicsSceneHoverEvent*);
    using QGraphicsObject_HoverMoveEvent_Callback = void (*)(QGraphicsObject*, QGraphicsSceneHoverEvent*);
    using QGraphicsObject_HoverLeaveEvent_Callback = void (*)(QGraphicsObject*, QGraphicsSceneHoverEvent*);
    using QGraphicsObject_KeyPressEvent_Callback = void (*)(QGraphicsObject*, QKeyEvent*);
    using QGraphicsObject_KeyReleaseEvent_Callback = void (*)(QGraphicsObject*, QKeyEvent*);
    using QGraphicsObject_MousePressEvent_Callback = void (*)(QGraphicsObject*, QGraphicsSceneMouseEvent*);
    using QGraphicsObject_MouseMoveEvent_Callback = void (*)(QGraphicsObject*, QGraphicsSceneMouseEvent*);
    using QGraphicsObject_MouseReleaseEvent_Callback = void (*)(QGraphicsObject*, QGraphicsSceneMouseEvent*);
    using QGraphicsObject_MouseDoubleClickEvent_Callback = void (*)(QGraphicsObject*, QGraphicsSceneMouseEvent*);
    using QGraphicsObject_WheelEvent_Callback = void (*)(QGraphicsObject*, QGraphicsSceneWheelEvent*);
    using QGraphicsObject_InputMethodEvent_Callback = void (*)(QGraphicsObject*, QInputMethodEvent*);
    using QGraphicsObject_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsObject*, int);
    using QGraphicsObject_ItemChange_Callback = QVariant* (*)(QGraphicsObject*, int, QVariant*);
    using QGraphicsObject_SupportsExtension_Callback = bool (*)(const QGraphicsObject*, int);
    using QGraphicsObject_SetExtension_Callback = void (*)(QGraphicsObject*, int, QVariant*);
    using QGraphicsObject_Extension_Callback = QVariant* (*)(const QGraphicsObject*, QVariant*);
    using QGraphicsObject::addToIndex;
    using QGraphicsObject::isSignalConnected;
    using QGraphicsObject::prepareGeometryChange;
    using QGraphicsObject::receivers;
    using QGraphicsObject::removeFromIndex;
    using QGraphicsObject::sender;
    using QGraphicsObject::senderSignalIndex;
    using QGraphicsObject::updateMicroFocus;

    // Instance callback storage
    QGraphicsObject_MetaObject_Callback qgraphicsobject_metaobject_callback = nullptr;
    QGraphicsObject_Metacast_Callback qgraphicsobject_metacast_callback = nullptr;
    QGraphicsObject_Metacall_Callback qgraphicsobject_metacall_callback = nullptr;
    QGraphicsObject_Event_Callback qgraphicsobject_event_callback = nullptr;
    QGraphicsObject_EventFilter_Callback qgraphicsobject_eventfilter_callback = nullptr;
    QGraphicsObject_TimerEvent_Callback qgraphicsobject_timerevent_callback = nullptr;
    QGraphicsObject_ChildEvent_Callback qgraphicsobject_childevent_callback = nullptr;
    QGraphicsObject_CustomEvent_Callback qgraphicsobject_customevent_callback = nullptr;
    QGraphicsObject_ConnectNotify_Callback qgraphicsobject_connectnotify_callback = nullptr;
    QGraphicsObject_DisconnectNotify_Callback qgraphicsobject_disconnectnotify_callback = nullptr;
    QGraphicsObject_Advance_Callback qgraphicsobject_advance_callback = nullptr;
    QGraphicsObject_BoundingRect_Callback qgraphicsobject_boundingrect_callback = nullptr;
    QGraphicsObject_Shape_Callback qgraphicsobject_shape_callback = nullptr;
    QGraphicsObject_Contains_Callback qgraphicsobject_contains_callback = nullptr;
    QGraphicsObject_CollidesWithItem_Callback qgraphicsobject_collideswithitem_callback = nullptr;
    QGraphicsObject_CollidesWithPath_Callback qgraphicsobject_collideswithpath_callback = nullptr;
    QGraphicsObject_IsObscuredBy_Callback qgraphicsobject_isobscuredby_callback = nullptr;
    QGraphicsObject_OpaqueArea_Callback qgraphicsobject_opaquearea_callback = nullptr;
    QGraphicsObject_Paint_Callback qgraphicsobject_paint_callback = nullptr;
    QGraphicsObject_Type_Callback qgraphicsobject_type_callback = nullptr;
    QGraphicsObject_SceneEventFilter_Callback qgraphicsobject_sceneeventfilter_callback = nullptr;
    QGraphicsObject_SceneEvent_Callback qgraphicsobject_sceneevent_callback = nullptr;
    QGraphicsObject_ContextMenuEvent_Callback qgraphicsobject_contextmenuevent_callback = nullptr;
    QGraphicsObject_DragEnterEvent_Callback qgraphicsobject_dragenterevent_callback = nullptr;
    QGraphicsObject_DragLeaveEvent_Callback qgraphicsobject_dragleaveevent_callback = nullptr;
    QGraphicsObject_DragMoveEvent_Callback qgraphicsobject_dragmoveevent_callback = nullptr;
    QGraphicsObject_DropEvent_Callback qgraphicsobject_dropevent_callback = nullptr;
    QGraphicsObject_FocusInEvent_Callback qgraphicsobject_focusinevent_callback = nullptr;
    QGraphicsObject_FocusOutEvent_Callback qgraphicsobject_focusoutevent_callback = nullptr;
    QGraphicsObject_HoverEnterEvent_Callback qgraphicsobject_hoverenterevent_callback = nullptr;
    QGraphicsObject_HoverMoveEvent_Callback qgraphicsobject_hovermoveevent_callback = nullptr;
    QGraphicsObject_HoverLeaveEvent_Callback qgraphicsobject_hoverleaveevent_callback = nullptr;
    QGraphicsObject_KeyPressEvent_Callback qgraphicsobject_keypressevent_callback = nullptr;
    QGraphicsObject_KeyReleaseEvent_Callback qgraphicsobject_keyreleaseevent_callback = nullptr;
    QGraphicsObject_MousePressEvent_Callback qgraphicsobject_mousepressevent_callback = nullptr;
    QGraphicsObject_MouseMoveEvent_Callback qgraphicsobject_mousemoveevent_callback = nullptr;
    QGraphicsObject_MouseReleaseEvent_Callback qgraphicsobject_mousereleaseevent_callback = nullptr;
    QGraphicsObject_MouseDoubleClickEvent_Callback qgraphicsobject_mousedoubleclickevent_callback = nullptr;
    QGraphicsObject_WheelEvent_Callback qgraphicsobject_wheelevent_callback = nullptr;
    QGraphicsObject_InputMethodEvent_Callback qgraphicsobject_inputmethodevent_callback = nullptr;
    QGraphicsObject_InputMethodQuery_Callback qgraphicsobject_inputmethodquery_callback = nullptr;
    QGraphicsObject_ItemChange_Callback qgraphicsobject_itemchange_callback = nullptr;
    QGraphicsObject_SupportsExtension_Callback qgraphicsobject_supportsextension_callback = nullptr;
    QGraphicsObject_SetExtension_Callback qgraphicsobject_setextension_callback = nullptr;
    QGraphicsObject_Extension_Callback qgraphicsobject_extension_callback = nullptr;

    // Access struct
    struct Base : QGraphicsObject {
        using QGraphicsObject::childEvent;
        using QGraphicsObject::connectNotify;
        using QGraphicsObject::contextMenuEvent;
        using QGraphicsObject::customEvent;
        using QGraphicsObject::disconnectNotify;
        using QGraphicsObject::dragEnterEvent;
        using QGraphicsObject::dragLeaveEvent;
        using QGraphicsObject::dragMoveEvent;
        using QGraphicsObject::dropEvent;
        using QGraphicsObject::event;
        using QGraphicsObject::extension;
        using QGraphicsObject::focusInEvent;
        using QGraphicsObject::focusOutEvent;
        using QGraphicsObject::hoverEnterEvent;
        using QGraphicsObject::hoverLeaveEvent;
        using QGraphicsObject::hoverMoveEvent;
        using QGraphicsObject::inputMethodEvent;
        using QGraphicsObject::inputMethodQuery;
        using QGraphicsObject::itemChange;
        using QGraphicsObject::keyPressEvent;
        using QGraphicsObject::keyReleaseEvent;
        using QGraphicsObject::mouseDoubleClickEvent;
        using QGraphicsObject::mouseMoveEvent;
        using QGraphicsObject::mousePressEvent;
        using QGraphicsObject::mouseReleaseEvent;
        using QGraphicsObject::sceneEvent;
        using QGraphicsObject::sceneEventFilter;
        using QGraphicsObject::setExtension;
        using QGraphicsObject::supportsExtension;
        using QGraphicsObject::timerEvent;
        using QGraphicsObject::wheelEvent;
    };

    VirtualQGraphicsObject() : QGraphicsObject() {};
    VirtualQGraphicsObject(QGraphicsItem* parent) : QGraphicsObject(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicsobject_metaobject_callback) {
            QMetaObject* callback_ret = qgraphicsobject_metaobject_callback(this);
            return callback_ret;
        }
        return QGraphicsObject::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicsobject_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgraphicsobject_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsObject::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsobject_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgraphicsobject_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsObject::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* ev) override {
        if (qgraphicsobject_event_callback) {
            QEvent* cbval1 = ev;
            bool callback_ret = qgraphicsobject_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsObject::event(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicsobject_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicsobject_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsObject::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsobject_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgraphicsobject_timerevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsobject_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgraphicsobject_childevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsobject_customevent_callback) {
            QEvent* cbval1 = event;
            qgraphicsobject_customevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsobject_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsobject_connectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsObject::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsobject_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsobject_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsObject::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicsobject_advance_callback) {
            int cbval1 = phase;
            qgraphicsobject_advance_callback(this, cbval1);
            return;
        }
        QGraphicsObject::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicsobject_boundingrect_callback) {
            QRectF* callback_ret = qgraphicsobject_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGraphicsObject::boundingRect called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicsobject_shape_callback) {
            QPainterPath* callback_ret = qgraphicsobject_shape_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsObject::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicsobject_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qgraphicsobject_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsObject::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsobject_collideswithitem_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicsobject_collideswithitem_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsObject::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsobject_collideswithpath_callback) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicsobject_collideswithpath_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsObject::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicsobject_isobscuredby_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;
            bool callback_ret = qgraphicsobject_isobscuredby_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsObject::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicsobject_opaquearea_callback) {
            QPainterPath* callback_ret = qgraphicsobject_opaquearea_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsObject::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicsobject_paint_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qgraphicsobject_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGraphicsObject::paint called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicsobject_type_callback) {
            int callback_ret = qgraphicsobject_type_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsObject::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicsobject_sceneeventfilter_callback) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicsobject_sceneeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsObject::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicsobject_sceneevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicsobject_sceneevent_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsObject::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicsobject_contextmenuevent_callback) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;
            qgraphicsobject_contextmenuevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsobject_dragenterevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsobject_dragenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsobject_dragleaveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsobject_dragleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsobject_dragmoveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsobject_dragmoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsobject_dropevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsobject_dropevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicsobject_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicsobject_focusinevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicsobject_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicsobject_focusoutevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsobject_hoverenterevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsobject_hoverenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsobject_hovermoveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsobject_hovermoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsobject_hoverleaveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsobject_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicsobject_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicsobject_keypressevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicsobject_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicsobject_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsobject_mousepressevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsobject_mousepressevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsobject_mousemoveevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsobject_mousemoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsobject_mousereleaseevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsobject_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsobject_mousedoubleclickevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsobject_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicsobject_wheelevent_callback) {
            QGraphicsSceneWheelEvent* cbval1 = event;
            qgraphicsobject_wheelevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicsobject_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qgraphicsobject_inputmethodevent_callback(this, cbval1);
            return;
        }
        QGraphicsObject::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicsobject_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qgraphicsobject_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsObject::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicsobject_itemchange_callback) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            QVariant* callback_ret = qgraphicsobject_itemchange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsObject::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicsobject_supportsextension_callback) {
            int cbval1 = static_cast<int>(extension);
            bool callback_ret = qgraphicsobject_supportsextension_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsObject::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicsobject_setextension_callback) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);
            qgraphicsobject_setextension_callback(this, cbval1, cbval2);
            return;
        }
        QGraphicsObject::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicsobject_extension_callback) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);
            QVariant* callback_ret = qgraphicsobject_extension_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsObject::extension(variant);
    }

    // Friend functions
    friend bool QGraphicsObject_SuperEvent(QGraphicsObject* self, QEvent* ev);
    friend void QGraphicsObject_SuperTimerEvent(QGraphicsObject* self, QTimerEvent* event);
    friend void QGraphicsObject_SuperChildEvent(QGraphicsObject* self, QChildEvent* event);
    friend void QGraphicsObject_SuperCustomEvent(QGraphicsObject* self, QEvent* event);
    friend void QGraphicsObject_SuperConnectNotify(QGraphicsObject* self, const QMetaMethod* signal);
    friend void QGraphicsObject_SuperDisconnectNotify(QGraphicsObject* self, const QMetaMethod* signal);
    friend bool QGraphicsObject_SuperSceneEventFilter(QGraphicsObject* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsObject_SuperSceneEvent(QGraphicsObject* self, QEvent* event);
    friend void QGraphicsObject_SuperContextMenuEvent(QGraphicsObject* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsObject_SuperDragEnterEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsObject_SuperDragLeaveEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsObject_SuperDragMoveEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsObject_SuperDropEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsObject_SuperFocusInEvent(QGraphicsObject* self, QFocusEvent* event);
    friend void QGraphicsObject_SuperFocusOutEvent(QGraphicsObject* self, QFocusEvent* event);
    friend void QGraphicsObject_SuperHoverEnterEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsObject_SuperHoverMoveEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsObject_SuperHoverLeaveEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsObject_SuperKeyPressEvent(QGraphicsObject* self, QKeyEvent* event);
    friend void QGraphicsObject_SuperKeyReleaseEvent(QGraphicsObject* self, QKeyEvent* event);
    friend void QGraphicsObject_SuperMousePressEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsObject_SuperMouseMoveEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsObject_SuperMouseReleaseEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsObject_SuperMouseDoubleClickEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsObject_SuperWheelEvent(QGraphicsObject* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsObject_SuperInputMethodEvent(QGraphicsObject* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsObject_SuperInputMethodQuery(const QGraphicsObject* self, int query);
    friend QVariant* QGraphicsObject_SuperItemChange(QGraphicsObject* self, int change, const QVariant* value);
    friend bool QGraphicsObject_SuperSupportsExtension(const QGraphicsObject* self, int extension);
    friend void QGraphicsObject_SuperSetExtension(QGraphicsObject* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsObject_SuperExtension(const QGraphicsObject* self, const QVariant* variant);
};

// This class is a subclass of QAbstractGraphicsShapeItem
class VirtualQAbstractGraphicsShapeItem : public QAbstractGraphicsShapeItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsItem::Extension;
    using QAbstractGraphicsShapeItem_IsObscuredBy_Callback = bool (*)(const QAbstractGraphicsShapeItem*, QGraphicsItem*);
    using QAbstractGraphicsShapeItem_OpaqueArea_Callback = QPainterPath* (*)(const QAbstractGraphicsShapeItem*);
    using QAbstractGraphicsShapeItem_Advance_Callback = void (*)(QAbstractGraphicsShapeItem*, int);
    using QAbstractGraphicsShapeItem_BoundingRect_Callback = QRectF* (*)(const QAbstractGraphicsShapeItem*);
    using QAbstractGraphicsShapeItem_Shape_Callback = QPainterPath* (*)(const QAbstractGraphicsShapeItem*);
    using QAbstractGraphicsShapeItem_Contains_Callback = bool (*)(const QAbstractGraphicsShapeItem*, QPointF*);
    using QAbstractGraphicsShapeItem_CollidesWithItem_Callback = bool (*)(const QAbstractGraphicsShapeItem*, QGraphicsItem*, int);
    using QAbstractGraphicsShapeItem_CollidesWithPath_Callback = bool (*)(const QAbstractGraphicsShapeItem*, QPainterPath*, int);
    using QAbstractGraphicsShapeItem_Paint_Callback = void (*)(QAbstractGraphicsShapeItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QAbstractGraphicsShapeItem_Type_Callback = int (*)(const QAbstractGraphicsShapeItem*);
    using QAbstractGraphicsShapeItem_SceneEventFilter_Callback = bool (*)(QAbstractGraphicsShapeItem*, QGraphicsItem*, QEvent*);
    using QAbstractGraphicsShapeItem_SceneEvent_Callback = bool (*)(QAbstractGraphicsShapeItem*, QEvent*);
    using QAbstractGraphicsShapeItem_ContextMenuEvent_Callback = void (*)(QAbstractGraphicsShapeItem*, QGraphicsSceneContextMenuEvent*);
    using QAbstractGraphicsShapeItem_DragEnterEvent_Callback = void (*)(QAbstractGraphicsShapeItem*, QGraphicsSceneDragDropEvent*);
    using QAbstractGraphicsShapeItem_DragLeaveEvent_Callback = void (*)(QAbstractGraphicsShapeItem*, QGraphicsSceneDragDropEvent*);
    using QAbstractGraphicsShapeItem_DragMoveEvent_Callback = void (*)(QAbstractGraphicsShapeItem*, QGraphicsSceneDragDropEvent*);
    using QAbstractGraphicsShapeItem_DropEvent_Callback = void (*)(QAbstractGraphicsShapeItem*, QGraphicsSceneDragDropEvent*);
    using QAbstractGraphicsShapeItem_FocusInEvent_Callback = void (*)(QAbstractGraphicsShapeItem*, QFocusEvent*);
    using QAbstractGraphicsShapeItem_FocusOutEvent_Callback = void (*)(QAbstractGraphicsShapeItem*, QFocusEvent*);
    using QAbstractGraphicsShapeItem_HoverEnterEvent_Callback = void (*)(QAbstractGraphicsShapeItem*, QGraphicsSceneHoverEvent*);
    using QAbstractGraphicsShapeItem_HoverMoveEvent_Callback = void (*)(QAbstractGraphicsShapeItem*, QGraphicsSceneHoverEvent*);
    using QAbstractGraphicsShapeItem_HoverLeaveEvent_Callback = void (*)(QAbstractGraphicsShapeItem*, QGraphicsSceneHoverEvent*);
    using QAbstractGraphicsShapeItem_KeyPressEvent_Callback = void (*)(QAbstractGraphicsShapeItem*, QKeyEvent*);
    using QAbstractGraphicsShapeItem_KeyReleaseEvent_Callback = void (*)(QAbstractGraphicsShapeItem*, QKeyEvent*);
    using QAbstractGraphicsShapeItem_MousePressEvent_Callback = void (*)(QAbstractGraphicsShapeItem*, QGraphicsSceneMouseEvent*);
    using QAbstractGraphicsShapeItem_MouseMoveEvent_Callback = void (*)(QAbstractGraphicsShapeItem*, QGraphicsSceneMouseEvent*);
    using QAbstractGraphicsShapeItem_MouseReleaseEvent_Callback = void (*)(QAbstractGraphicsShapeItem*, QGraphicsSceneMouseEvent*);
    using QAbstractGraphicsShapeItem_MouseDoubleClickEvent_Callback = void (*)(QAbstractGraphicsShapeItem*, QGraphicsSceneMouseEvent*);
    using QAbstractGraphicsShapeItem_WheelEvent_Callback = void (*)(QAbstractGraphicsShapeItem*, QGraphicsSceneWheelEvent*);
    using QAbstractGraphicsShapeItem_InputMethodEvent_Callback = void (*)(QAbstractGraphicsShapeItem*, QInputMethodEvent*);
    using QAbstractGraphicsShapeItem_InputMethodQuery_Callback = QVariant* (*)(const QAbstractGraphicsShapeItem*, int);
    using QAbstractGraphicsShapeItem_ItemChange_Callback = QVariant* (*)(QAbstractGraphicsShapeItem*, int, QVariant*);
    using QAbstractGraphicsShapeItem_SupportsExtension_Callback = bool (*)(const QAbstractGraphicsShapeItem*, int);
    using QAbstractGraphicsShapeItem_SetExtension_Callback = void (*)(QAbstractGraphicsShapeItem*, int, QVariant*);
    using QAbstractGraphicsShapeItem_Extension_Callback = QVariant* (*)(const QAbstractGraphicsShapeItem*, QVariant*);
    using QAbstractGraphicsShapeItem::addToIndex;
    using QAbstractGraphicsShapeItem::prepareGeometryChange;
    using QAbstractGraphicsShapeItem::removeFromIndex;
    using QAbstractGraphicsShapeItem::updateMicroFocus;

    // Instance callback storage
    QAbstractGraphicsShapeItem_IsObscuredBy_Callback qabstractgraphicsshapeitem_isobscuredby_callback = nullptr;
    QAbstractGraphicsShapeItem_OpaqueArea_Callback qabstractgraphicsshapeitem_opaquearea_callback = nullptr;
    QAbstractGraphicsShapeItem_Advance_Callback qabstractgraphicsshapeitem_advance_callback = nullptr;
    QAbstractGraphicsShapeItem_BoundingRect_Callback qabstractgraphicsshapeitem_boundingrect_callback = nullptr;
    QAbstractGraphicsShapeItem_Shape_Callback qabstractgraphicsshapeitem_shape_callback = nullptr;
    QAbstractGraphicsShapeItem_Contains_Callback qabstractgraphicsshapeitem_contains_callback = nullptr;
    QAbstractGraphicsShapeItem_CollidesWithItem_Callback qabstractgraphicsshapeitem_collideswithitem_callback = nullptr;
    QAbstractGraphicsShapeItem_CollidesWithPath_Callback qabstractgraphicsshapeitem_collideswithpath_callback = nullptr;
    QAbstractGraphicsShapeItem_Paint_Callback qabstractgraphicsshapeitem_paint_callback = nullptr;
    QAbstractGraphicsShapeItem_Type_Callback qabstractgraphicsshapeitem_type_callback = nullptr;
    QAbstractGraphicsShapeItem_SceneEventFilter_Callback qabstractgraphicsshapeitem_sceneeventfilter_callback = nullptr;
    QAbstractGraphicsShapeItem_SceneEvent_Callback qabstractgraphicsshapeitem_sceneevent_callback = nullptr;
    QAbstractGraphicsShapeItem_ContextMenuEvent_Callback qabstractgraphicsshapeitem_contextmenuevent_callback = nullptr;
    QAbstractGraphicsShapeItem_DragEnterEvent_Callback qabstractgraphicsshapeitem_dragenterevent_callback = nullptr;
    QAbstractGraphicsShapeItem_DragLeaveEvent_Callback qabstractgraphicsshapeitem_dragleaveevent_callback = nullptr;
    QAbstractGraphicsShapeItem_DragMoveEvent_Callback qabstractgraphicsshapeitem_dragmoveevent_callback = nullptr;
    QAbstractGraphicsShapeItem_DropEvent_Callback qabstractgraphicsshapeitem_dropevent_callback = nullptr;
    QAbstractGraphicsShapeItem_FocusInEvent_Callback qabstractgraphicsshapeitem_focusinevent_callback = nullptr;
    QAbstractGraphicsShapeItem_FocusOutEvent_Callback qabstractgraphicsshapeitem_focusoutevent_callback = nullptr;
    QAbstractGraphicsShapeItem_HoverEnterEvent_Callback qabstractgraphicsshapeitem_hoverenterevent_callback = nullptr;
    QAbstractGraphicsShapeItem_HoverMoveEvent_Callback qabstractgraphicsshapeitem_hovermoveevent_callback = nullptr;
    QAbstractGraphicsShapeItem_HoverLeaveEvent_Callback qabstractgraphicsshapeitem_hoverleaveevent_callback = nullptr;
    QAbstractGraphicsShapeItem_KeyPressEvent_Callback qabstractgraphicsshapeitem_keypressevent_callback = nullptr;
    QAbstractGraphicsShapeItem_KeyReleaseEvent_Callback qabstractgraphicsshapeitem_keyreleaseevent_callback = nullptr;
    QAbstractGraphicsShapeItem_MousePressEvent_Callback qabstractgraphicsshapeitem_mousepressevent_callback = nullptr;
    QAbstractGraphicsShapeItem_MouseMoveEvent_Callback qabstractgraphicsshapeitem_mousemoveevent_callback = nullptr;
    QAbstractGraphicsShapeItem_MouseReleaseEvent_Callback qabstractgraphicsshapeitem_mousereleaseevent_callback = nullptr;
    QAbstractGraphicsShapeItem_MouseDoubleClickEvent_Callback qabstractgraphicsshapeitem_mousedoubleclickevent_callback = nullptr;
    QAbstractGraphicsShapeItem_WheelEvent_Callback qabstractgraphicsshapeitem_wheelevent_callback = nullptr;
    QAbstractGraphicsShapeItem_InputMethodEvent_Callback qabstractgraphicsshapeitem_inputmethodevent_callback = nullptr;
    QAbstractGraphicsShapeItem_InputMethodQuery_Callback qabstractgraphicsshapeitem_inputmethodquery_callback = nullptr;
    QAbstractGraphicsShapeItem_ItemChange_Callback qabstractgraphicsshapeitem_itemchange_callback = nullptr;
    QAbstractGraphicsShapeItem_SupportsExtension_Callback qabstractgraphicsshapeitem_supportsextension_callback = nullptr;
    QAbstractGraphicsShapeItem_SetExtension_Callback qabstractgraphicsshapeitem_setextension_callback = nullptr;
    QAbstractGraphicsShapeItem_Extension_Callback qabstractgraphicsshapeitem_extension_callback = nullptr;

    // Access struct
    struct Base : QAbstractGraphicsShapeItem {
        using QAbstractGraphicsShapeItem::contextMenuEvent;
        using QAbstractGraphicsShapeItem::dragEnterEvent;
        using QAbstractGraphicsShapeItem::dragLeaveEvent;
        using QAbstractGraphicsShapeItem::dragMoveEvent;
        using QAbstractGraphicsShapeItem::dropEvent;
        using QAbstractGraphicsShapeItem::extension;
        using QAbstractGraphicsShapeItem::focusInEvent;
        using QAbstractGraphicsShapeItem::focusOutEvent;
        using QAbstractGraphicsShapeItem::hoverEnterEvent;
        using QAbstractGraphicsShapeItem::hoverLeaveEvent;
        using QAbstractGraphicsShapeItem::hoverMoveEvent;
        using QAbstractGraphicsShapeItem::inputMethodEvent;
        using QAbstractGraphicsShapeItem::inputMethodQuery;
        using QAbstractGraphicsShapeItem::itemChange;
        using QAbstractGraphicsShapeItem::keyPressEvent;
        using QAbstractGraphicsShapeItem::keyReleaseEvent;
        using QAbstractGraphicsShapeItem::mouseDoubleClickEvent;
        using QAbstractGraphicsShapeItem::mouseMoveEvent;
        using QAbstractGraphicsShapeItem::mousePressEvent;
        using QAbstractGraphicsShapeItem::mouseReleaseEvent;
        using QAbstractGraphicsShapeItem::sceneEvent;
        using QAbstractGraphicsShapeItem::sceneEventFilter;
        using QAbstractGraphicsShapeItem::setExtension;
        using QAbstractGraphicsShapeItem::supportsExtension;
        using QAbstractGraphicsShapeItem::wheelEvent;
    };

    VirtualQAbstractGraphicsShapeItem() : QAbstractGraphicsShapeItem() {};
    VirtualQAbstractGraphicsShapeItem(QGraphicsItem* parent) : QAbstractGraphicsShapeItem(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qabstractgraphicsshapeitem_isobscuredby_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;
            bool callback_ret = qabstractgraphicsshapeitem_isobscuredby_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractGraphicsShapeItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qabstractgraphicsshapeitem_opaquearea_callback) {
            QPainterPath* callback_ret = qabstractgraphicsshapeitem_opaquearea_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractGraphicsShapeItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qabstractgraphicsshapeitem_advance_callback) {
            int cbval1 = phase;
            qabstractgraphicsshapeitem_advance_callback(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qabstractgraphicsshapeitem_boundingrect_callback) {
            QRectF* callback_ret = qabstractgraphicsshapeitem_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractGraphicsShapeItem::boundingRect called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qabstractgraphicsshapeitem_shape_callback) {
            QPainterPath* callback_ret = qabstractgraphicsshapeitem_shape_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractGraphicsShapeItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qabstractgraphicsshapeitem_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qabstractgraphicsshapeitem_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractGraphicsShapeItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qabstractgraphicsshapeitem_collideswithitem_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qabstractgraphicsshapeitem_collideswithitem_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractGraphicsShapeItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qabstractgraphicsshapeitem_collideswithpath_callback) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qabstractgraphicsshapeitem_collideswithpath_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractGraphicsShapeItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qabstractgraphicsshapeitem_paint_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qabstractgraphicsshapeitem_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractGraphicsShapeItem::paint called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qabstractgraphicsshapeitem_type_callback) {
            int callback_ret = qabstractgraphicsshapeitem_type_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QAbstractGraphicsShapeItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qabstractgraphicsshapeitem_sceneeventfilter_callback) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qabstractgraphicsshapeitem_sceneeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractGraphicsShapeItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qabstractgraphicsshapeitem_sceneevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qabstractgraphicsshapeitem_sceneevent_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractGraphicsShapeItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qabstractgraphicsshapeitem_contextmenuevent_callback) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;
            qabstractgraphicsshapeitem_contextmenuevent_callback(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qabstractgraphicsshapeitem_dragenterevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qabstractgraphicsshapeitem_dragenterevent_callback(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qabstractgraphicsshapeitem_dragleaveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qabstractgraphicsshapeitem_dragleaveevent_callback(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qabstractgraphicsshapeitem_dragmoveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qabstractgraphicsshapeitem_dragmoveevent_callback(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qabstractgraphicsshapeitem_dropevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qabstractgraphicsshapeitem_dropevent_callback(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qabstractgraphicsshapeitem_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qabstractgraphicsshapeitem_focusinevent_callback(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qabstractgraphicsshapeitem_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qabstractgraphicsshapeitem_focusoutevent_callback(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qabstractgraphicsshapeitem_hoverenterevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qabstractgraphicsshapeitem_hoverenterevent_callback(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qabstractgraphicsshapeitem_hovermoveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qabstractgraphicsshapeitem_hovermoveevent_callback(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qabstractgraphicsshapeitem_hoverleaveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qabstractgraphicsshapeitem_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qabstractgraphicsshapeitem_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qabstractgraphicsshapeitem_keypressevent_callback(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qabstractgraphicsshapeitem_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qabstractgraphicsshapeitem_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qabstractgraphicsshapeitem_mousepressevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qabstractgraphicsshapeitem_mousepressevent_callback(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qabstractgraphicsshapeitem_mousemoveevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qabstractgraphicsshapeitem_mousemoveevent_callback(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qabstractgraphicsshapeitem_mousereleaseevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qabstractgraphicsshapeitem_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qabstractgraphicsshapeitem_mousedoubleclickevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qabstractgraphicsshapeitem_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qabstractgraphicsshapeitem_wheelevent_callback) {
            QGraphicsSceneWheelEvent* cbval1 = event;
            qabstractgraphicsshapeitem_wheelevent_callback(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qabstractgraphicsshapeitem_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qabstractgraphicsshapeitem_inputmethodevent_callback(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qabstractgraphicsshapeitem_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qabstractgraphicsshapeitem_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractGraphicsShapeItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qabstractgraphicsshapeitem_itemchange_callback) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            QVariant* callback_ret = qabstractgraphicsshapeitem_itemchange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractGraphicsShapeItem::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qabstractgraphicsshapeitem_supportsextension_callback) {
            int cbval1 = static_cast<int>(extension);
            bool callback_ret = qabstractgraphicsshapeitem_supportsextension_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractGraphicsShapeItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qabstractgraphicsshapeitem_setextension_callback) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);
            qabstractgraphicsshapeitem_setextension_callback(this, cbval1, cbval2);
            return;
        }
        QAbstractGraphicsShapeItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qabstractgraphicsshapeitem_extension_callback) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);
            QVariant* callback_ret = qabstractgraphicsshapeitem_extension_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractGraphicsShapeItem::extension(variant);
    }

    // Friend functions
    friend bool QAbstractGraphicsShapeItem_SuperSceneEventFilter(QAbstractGraphicsShapeItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QAbstractGraphicsShapeItem_SuperSceneEvent(QAbstractGraphicsShapeItem* self, QEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperContextMenuEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperDragEnterEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperDragLeaveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperDragMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperDropEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperFocusInEvent(QAbstractGraphicsShapeItem* self, QFocusEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperFocusOutEvent(QAbstractGraphicsShapeItem* self, QFocusEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperHoverEnterEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperHoverMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperHoverLeaveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperKeyPressEvent(QAbstractGraphicsShapeItem* self, QKeyEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperKeyReleaseEvent(QAbstractGraphicsShapeItem* self, QKeyEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperMousePressEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperMouseMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperMouseReleaseEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperMouseDoubleClickEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperWheelEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneWheelEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperInputMethodEvent(QAbstractGraphicsShapeItem* self, QInputMethodEvent* event);
    friend QVariant* QAbstractGraphicsShapeItem_SuperInputMethodQuery(const QAbstractGraphicsShapeItem* self, int query);
    friend QVariant* QAbstractGraphicsShapeItem_SuperItemChange(QAbstractGraphicsShapeItem* self, int change, const QVariant* value);
    friend bool QAbstractGraphicsShapeItem_SuperSupportsExtension(const QAbstractGraphicsShapeItem* self, int extension);
    friend void QAbstractGraphicsShapeItem_SuperSetExtension(QAbstractGraphicsShapeItem* self, int extension, const QVariant* variant);
    friend QVariant* QAbstractGraphicsShapeItem_SuperExtension(const QAbstractGraphicsShapeItem* self, const QVariant* variant);
};

// This class is a subclass of QGraphicsPathItem
class VirtualQGraphicsPathItem final : public QGraphicsPathItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsItem::Extension;
    using QGraphicsPathItem_BoundingRect_Callback = QRectF* (*)(const QGraphicsPathItem*);
    using QGraphicsPathItem_Shape_Callback = QPainterPath* (*)(const QGraphicsPathItem*);
    using QGraphicsPathItem_Contains_Callback = bool (*)(const QGraphicsPathItem*, QPointF*);
    using QGraphicsPathItem_Paint_Callback = void (*)(QGraphicsPathItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsPathItem_IsObscuredBy_Callback = bool (*)(const QGraphicsPathItem*, QGraphicsItem*);
    using QGraphicsPathItem_OpaqueArea_Callback = QPainterPath* (*)(const QGraphicsPathItem*);
    using QGraphicsPathItem_Type_Callback = int (*)(const QGraphicsPathItem*);
    using QGraphicsPathItem_SupportsExtension_Callback = bool (*)(const QGraphicsPathItem*, int);
    using QGraphicsPathItem_SetExtension_Callback = void (*)(QGraphicsPathItem*, int, QVariant*);
    using QGraphicsPathItem_Extension_Callback = QVariant* (*)(const QGraphicsPathItem*, QVariant*);
    using QGraphicsPathItem_Advance_Callback = void (*)(QGraphicsPathItem*, int);
    using QGraphicsPathItem_CollidesWithItem_Callback = bool (*)(const QGraphicsPathItem*, QGraphicsItem*, int);
    using QGraphicsPathItem_CollidesWithPath_Callback = bool (*)(const QGraphicsPathItem*, QPainterPath*, int);
    using QGraphicsPathItem_SceneEventFilter_Callback = bool (*)(QGraphicsPathItem*, QGraphicsItem*, QEvent*);
    using QGraphicsPathItem_SceneEvent_Callback = bool (*)(QGraphicsPathItem*, QEvent*);
    using QGraphicsPathItem_ContextMenuEvent_Callback = void (*)(QGraphicsPathItem*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsPathItem_DragEnterEvent_Callback = void (*)(QGraphicsPathItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsPathItem_DragLeaveEvent_Callback = void (*)(QGraphicsPathItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsPathItem_DragMoveEvent_Callback = void (*)(QGraphicsPathItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsPathItem_DropEvent_Callback = void (*)(QGraphicsPathItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsPathItem_FocusInEvent_Callback = void (*)(QGraphicsPathItem*, QFocusEvent*);
    using QGraphicsPathItem_FocusOutEvent_Callback = void (*)(QGraphicsPathItem*, QFocusEvent*);
    using QGraphicsPathItem_HoverEnterEvent_Callback = void (*)(QGraphicsPathItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsPathItem_HoverMoveEvent_Callback = void (*)(QGraphicsPathItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsPathItem_HoverLeaveEvent_Callback = void (*)(QGraphicsPathItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsPathItem_KeyPressEvent_Callback = void (*)(QGraphicsPathItem*, QKeyEvent*);
    using QGraphicsPathItem_KeyReleaseEvent_Callback = void (*)(QGraphicsPathItem*, QKeyEvent*);
    using QGraphicsPathItem_MousePressEvent_Callback = void (*)(QGraphicsPathItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsPathItem_MouseMoveEvent_Callback = void (*)(QGraphicsPathItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsPathItem_MouseReleaseEvent_Callback = void (*)(QGraphicsPathItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsPathItem_MouseDoubleClickEvent_Callback = void (*)(QGraphicsPathItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsPathItem_WheelEvent_Callback = void (*)(QGraphicsPathItem*, QGraphicsSceneWheelEvent*);
    using QGraphicsPathItem_InputMethodEvent_Callback = void (*)(QGraphicsPathItem*, QInputMethodEvent*);
    using QGraphicsPathItem_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsPathItem*, int);
    using QGraphicsPathItem_ItemChange_Callback = QVariant* (*)(QGraphicsPathItem*, int, QVariant*);
    using QGraphicsPathItem::addToIndex;
    using QGraphicsPathItem::prepareGeometryChange;
    using QGraphicsPathItem::removeFromIndex;
    using QGraphicsPathItem::updateMicroFocus;

    // Instance callback storage
    QGraphicsPathItem_BoundingRect_Callback qgraphicspathitem_boundingrect_callback = nullptr;
    QGraphicsPathItem_Shape_Callback qgraphicspathitem_shape_callback = nullptr;
    QGraphicsPathItem_Contains_Callback qgraphicspathitem_contains_callback = nullptr;
    QGraphicsPathItem_Paint_Callback qgraphicspathitem_paint_callback = nullptr;
    QGraphicsPathItem_IsObscuredBy_Callback qgraphicspathitem_isobscuredby_callback = nullptr;
    QGraphicsPathItem_OpaqueArea_Callback qgraphicspathitem_opaquearea_callback = nullptr;
    QGraphicsPathItem_Type_Callback qgraphicspathitem_type_callback = nullptr;
    QGraphicsPathItem_SupportsExtension_Callback qgraphicspathitem_supportsextension_callback = nullptr;
    QGraphicsPathItem_SetExtension_Callback qgraphicspathitem_setextension_callback = nullptr;
    QGraphicsPathItem_Extension_Callback qgraphicspathitem_extension_callback = nullptr;
    QGraphicsPathItem_Advance_Callback qgraphicspathitem_advance_callback = nullptr;
    QGraphicsPathItem_CollidesWithItem_Callback qgraphicspathitem_collideswithitem_callback = nullptr;
    QGraphicsPathItem_CollidesWithPath_Callback qgraphicspathitem_collideswithpath_callback = nullptr;
    QGraphicsPathItem_SceneEventFilter_Callback qgraphicspathitem_sceneeventfilter_callback = nullptr;
    QGraphicsPathItem_SceneEvent_Callback qgraphicspathitem_sceneevent_callback = nullptr;
    QGraphicsPathItem_ContextMenuEvent_Callback qgraphicspathitem_contextmenuevent_callback = nullptr;
    QGraphicsPathItem_DragEnterEvent_Callback qgraphicspathitem_dragenterevent_callback = nullptr;
    QGraphicsPathItem_DragLeaveEvent_Callback qgraphicspathitem_dragleaveevent_callback = nullptr;
    QGraphicsPathItem_DragMoveEvent_Callback qgraphicspathitem_dragmoveevent_callback = nullptr;
    QGraphicsPathItem_DropEvent_Callback qgraphicspathitem_dropevent_callback = nullptr;
    QGraphicsPathItem_FocusInEvent_Callback qgraphicspathitem_focusinevent_callback = nullptr;
    QGraphicsPathItem_FocusOutEvent_Callback qgraphicspathitem_focusoutevent_callback = nullptr;
    QGraphicsPathItem_HoverEnterEvent_Callback qgraphicspathitem_hoverenterevent_callback = nullptr;
    QGraphicsPathItem_HoverMoveEvent_Callback qgraphicspathitem_hovermoveevent_callback = nullptr;
    QGraphicsPathItem_HoverLeaveEvent_Callback qgraphicspathitem_hoverleaveevent_callback = nullptr;
    QGraphicsPathItem_KeyPressEvent_Callback qgraphicspathitem_keypressevent_callback = nullptr;
    QGraphicsPathItem_KeyReleaseEvent_Callback qgraphicspathitem_keyreleaseevent_callback = nullptr;
    QGraphicsPathItem_MousePressEvent_Callback qgraphicspathitem_mousepressevent_callback = nullptr;
    QGraphicsPathItem_MouseMoveEvent_Callback qgraphicspathitem_mousemoveevent_callback = nullptr;
    QGraphicsPathItem_MouseReleaseEvent_Callback qgraphicspathitem_mousereleaseevent_callback = nullptr;
    QGraphicsPathItem_MouseDoubleClickEvent_Callback qgraphicspathitem_mousedoubleclickevent_callback = nullptr;
    QGraphicsPathItem_WheelEvent_Callback qgraphicspathitem_wheelevent_callback = nullptr;
    QGraphicsPathItem_InputMethodEvent_Callback qgraphicspathitem_inputmethodevent_callback = nullptr;
    QGraphicsPathItem_InputMethodQuery_Callback qgraphicspathitem_inputmethodquery_callback = nullptr;
    QGraphicsPathItem_ItemChange_Callback qgraphicspathitem_itemchange_callback = nullptr;

    // Access struct
    struct Base : QGraphicsPathItem {
        using QGraphicsPathItem::contextMenuEvent;
        using QGraphicsPathItem::dragEnterEvent;
        using QGraphicsPathItem::dragLeaveEvent;
        using QGraphicsPathItem::dragMoveEvent;
        using QGraphicsPathItem::dropEvent;
        using QGraphicsPathItem::extension;
        using QGraphicsPathItem::focusInEvent;
        using QGraphicsPathItem::focusOutEvent;
        using QGraphicsPathItem::hoverEnterEvent;
        using QGraphicsPathItem::hoverLeaveEvent;
        using QGraphicsPathItem::hoverMoveEvent;
        using QGraphicsPathItem::inputMethodEvent;
        using QGraphicsPathItem::inputMethodQuery;
        using QGraphicsPathItem::itemChange;
        using QGraphicsPathItem::keyPressEvent;
        using QGraphicsPathItem::keyReleaseEvent;
        using QGraphicsPathItem::mouseDoubleClickEvent;
        using QGraphicsPathItem::mouseMoveEvent;
        using QGraphicsPathItem::mousePressEvent;
        using QGraphicsPathItem::mouseReleaseEvent;
        using QGraphicsPathItem::sceneEvent;
        using QGraphicsPathItem::sceneEventFilter;
        using QGraphicsPathItem::setExtension;
        using QGraphicsPathItem::supportsExtension;
        using QGraphicsPathItem::wheelEvent;
    };

    VirtualQGraphicsPathItem() : QGraphicsPathItem() {};
    VirtualQGraphicsPathItem(const QPainterPath& path) : QGraphicsPathItem(path) {};
    VirtualQGraphicsPathItem(QGraphicsItem* parent) : QGraphicsPathItem(parent) {};
    VirtualQGraphicsPathItem(const QPainterPath& path, QGraphicsItem* parent) : QGraphicsPathItem(path, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicspathitem_boundingrect_callback) {
            QRectF* callback_ret = qgraphicspathitem_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsPathItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicspathitem_shape_callback) {
            QPainterPath* callback_ret = qgraphicspathitem_shape_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsPathItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicspathitem_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qgraphicspathitem_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPathItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicspathitem_paint_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qgraphicspathitem_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsPathItem::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicspathitem_isobscuredby_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;
            bool callback_ret = qgraphicspathitem_isobscuredby_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPathItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicspathitem_opaquearea_callback) {
            QPainterPath* callback_ret = qgraphicspathitem_opaquearea_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsPathItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicspathitem_type_callback) {
            int callback_ret = qgraphicspathitem_type_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsPathItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicspathitem_supportsextension_callback) {
            int cbval1 = static_cast<int>(extension);
            bool callback_ret = qgraphicspathitem_supportsextension_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPathItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicspathitem_setextension_callback) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);
            qgraphicspathitem_setextension_callback(this, cbval1, cbval2);
            return;
        }
        QGraphicsPathItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicspathitem_extension_callback) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);
            QVariant* callback_ret = qgraphicspathitem_extension_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsPathItem::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicspathitem_advance_callback) {
            int cbval1 = phase;
            qgraphicspathitem_advance_callback(this, cbval1);
            return;
        }
        QGraphicsPathItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicspathitem_collideswithitem_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicspathitem_collideswithitem_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsPathItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicspathitem_collideswithpath_callback) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicspathitem_collideswithpath_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsPathItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicspathitem_sceneeventfilter_callback) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicspathitem_sceneeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsPathItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicspathitem_sceneevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicspathitem_sceneevent_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPathItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicspathitem_contextmenuevent_callback) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;
            qgraphicspathitem_contextmenuevent_callback(this, cbval1);
            return;
        }
        QGraphicsPathItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspathitem_dragenterevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicspathitem_dragenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsPathItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspathitem_dragleaveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicspathitem_dragleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsPathItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspathitem_dragmoveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicspathitem_dragmoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsPathItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspathitem_dropevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicspathitem_dropevent_callback(this, cbval1);
            return;
        }
        QGraphicsPathItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicspathitem_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicspathitem_focusinevent_callback(this, cbval1);
            return;
        }
        QGraphicsPathItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicspathitem_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicspathitem_focusoutevent_callback(this, cbval1);
            return;
        }
        QGraphicsPathItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicspathitem_hoverenterevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicspathitem_hoverenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsPathItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicspathitem_hovermoveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicspathitem_hovermoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsPathItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicspathitem_hoverleaveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicspathitem_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsPathItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicspathitem_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicspathitem_keypressevent_callback(this, cbval1);
            return;
        }
        QGraphicsPathItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicspathitem_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicspathitem_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsPathItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspathitem_mousepressevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicspathitem_mousepressevent_callback(this, cbval1);
            return;
        }
        QGraphicsPathItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspathitem_mousemoveevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicspathitem_mousemoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsPathItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspathitem_mousereleaseevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicspathitem_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsPathItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspathitem_mousedoubleclickevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicspathitem_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QGraphicsPathItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicspathitem_wheelevent_callback) {
            QGraphicsSceneWheelEvent* cbval1 = event;
            qgraphicspathitem_wheelevent_callback(this, cbval1);
            return;
        }
        QGraphicsPathItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicspathitem_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qgraphicspathitem_inputmethodevent_callback(this, cbval1);
            return;
        }
        QGraphicsPathItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicspathitem_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qgraphicspathitem_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsPathItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicspathitem_itemchange_callback) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            QVariant* callback_ret = qgraphicspathitem_itemchange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsPathItem::itemChange(change, value);
    }

    // Friend functions
    friend bool QGraphicsPathItem_SuperSupportsExtension(const QGraphicsPathItem* self, int extension);
    friend void QGraphicsPathItem_SuperSetExtension(QGraphicsPathItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsPathItem_SuperExtension(const QGraphicsPathItem* self, const QVariant* variant);
    friend bool QGraphicsPathItem_SuperSceneEventFilter(QGraphicsPathItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsPathItem_SuperSceneEvent(QGraphicsPathItem* self, QEvent* event);
    friend void QGraphicsPathItem_SuperContextMenuEvent(QGraphicsPathItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsPathItem_SuperDragEnterEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPathItem_SuperDragLeaveEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPathItem_SuperDragMoveEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPathItem_SuperDropEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPathItem_SuperFocusInEvent(QGraphicsPathItem* self, QFocusEvent* event);
    friend void QGraphicsPathItem_SuperFocusOutEvent(QGraphicsPathItem* self, QFocusEvent* event);
    friend void QGraphicsPathItem_SuperHoverEnterEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPathItem_SuperHoverMoveEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPathItem_SuperHoverLeaveEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPathItem_SuperKeyPressEvent(QGraphicsPathItem* self, QKeyEvent* event);
    friend void QGraphicsPathItem_SuperKeyReleaseEvent(QGraphicsPathItem* self, QKeyEvent* event);
    friend void QGraphicsPathItem_SuperMousePressEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPathItem_SuperMouseMoveEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPathItem_SuperMouseReleaseEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPathItem_SuperMouseDoubleClickEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPathItem_SuperWheelEvent(QGraphicsPathItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsPathItem_SuperInputMethodEvent(QGraphicsPathItem* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsPathItem_SuperInputMethodQuery(const QGraphicsPathItem* self, int query);
    friend QVariant* QGraphicsPathItem_SuperItemChange(QGraphicsPathItem* self, int change, const QVariant* value);
};

// This class is a subclass of QGraphicsRectItem
class VirtualQGraphicsRectItem final : public QGraphicsRectItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsItem::Extension;
    using QGraphicsRectItem_BoundingRect_Callback = QRectF* (*)(const QGraphicsRectItem*);
    using QGraphicsRectItem_Shape_Callback = QPainterPath* (*)(const QGraphicsRectItem*);
    using QGraphicsRectItem_Contains_Callback = bool (*)(const QGraphicsRectItem*, QPointF*);
    using QGraphicsRectItem_Paint_Callback = void (*)(QGraphicsRectItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsRectItem_IsObscuredBy_Callback = bool (*)(const QGraphicsRectItem*, QGraphicsItem*);
    using QGraphicsRectItem_OpaqueArea_Callback = QPainterPath* (*)(const QGraphicsRectItem*);
    using QGraphicsRectItem_Type_Callback = int (*)(const QGraphicsRectItem*);
    using QGraphicsRectItem_SupportsExtension_Callback = bool (*)(const QGraphicsRectItem*, int);
    using QGraphicsRectItem_SetExtension_Callback = void (*)(QGraphicsRectItem*, int, QVariant*);
    using QGraphicsRectItem_Extension_Callback = QVariant* (*)(const QGraphicsRectItem*, QVariant*);
    using QGraphicsRectItem_Advance_Callback = void (*)(QGraphicsRectItem*, int);
    using QGraphicsRectItem_CollidesWithItem_Callback = bool (*)(const QGraphicsRectItem*, QGraphicsItem*, int);
    using QGraphicsRectItem_CollidesWithPath_Callback = bool (*)(const QGraphicsRectItem*, QPainterPath*, int);
    using QGraphicsRectItem_SceneEventFilter_Callback = bool (*)(QGraphicsRectItem*, QGraphicsItem*, QEvent*);
    using QGraphicsRectItem_SceneEvent_Callback = bool (*)(QGraphicsRectItem*, QEvent*);
    using QGraphicsRectItem_ContextMenuEvent_Callback = void (*)(QGraphicsRectItem*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsRectItem_DragEnterEvent_Callback = void (*)(QGraphicsRectItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsRectItem_DragLeaveEvent_Callback = void (*)(QGraphicsRectItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsRectItem_DragMoveEvent_Callback = void (*)(QGraphicsRectItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsRectItem_DropEvent_Callback = void (*)(QGraphicsRectItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsRectItem_FocusInEvent_Callback = void (*)(QGraphicsRectItem*, QFocusEvent*);
    using QGraphicsRectItem_FocusOutEvent_Callback = void (*)(QGraphicsRectItem*, QFocusEvent*);
    using QGraphicsRectItem_HoverEnterEvent_Callback = void (*)(QGraphicsRectItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsRectItem_HoverMoveEvent_Callback = void (*)(QGraphicsRectItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsRectItem_HoverLeaveEvent_Callback = void (*)(QGraphicsRectItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsRectItem_KeyPressEvent_Callback = void (*)(QGraphicsRectItem*, QKeyEvent*);
    using QGraphicsRectItem_KeyReleaseEvent_Callback = void (*)(QGraphicsRectItem*, QKeyEvent*);
    using QGraphicsRectItem_MousePressEvent_Callback = void (*)(QGraphicsRectItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsRectItem_MouseMoveEvent_Callback = void (*)(QGraphicsRectItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsRectItem_MouseReleaseEvent_Callback = void (*)(QGraphicsRectItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsRectItem_MouseDoubleClickEvent_Callback = void (*)(QGraphicsRectItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsRectItem_WheelEvent_Callback = void (*)(QGraphicsRectItem*, QGraphicsSceneWheelEvent*);
    using QGraphicsRectItem_InputMethodEvent_Callback = void (*)(QGraphicsRectItem*, QInputMethodEvent*);
    using QGraphicsRectItem_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsRectItem*, int);
    using QGraphicsRectItem_ItemChange_Callback = QVariant* (*)(QGraphicsRectItem*, int, QVariant*);
    using QGraphicsRectItem::addToIndex;
    using QGraphicsRectItem::prepareGeometryChange;
    using QGraphicsRectItem::removeFromIndex;
    using QGraphicsRectItem::updateMicroFocus;

    // Instance callback storage
    QGraphicsRectItem_BoundingRect_Callback qgraphicsrectitem_boundingrect_callback = nullptr;
    QGraphicsRectItem_Shape_Callback qgraphicsrectitem_shape_callback = nullptr;
    QGraphicsRectItem_Contains_Callback qgraphicsrectitem_contains_callback = nullptr;
    QGraphicsRectItem_Paint_Callback qgraphicsrectitem_paint_callback = nullptr;
    QGraphicsRectItem_IsObscuredBy_Callback qgraphicsrectitem_isobscuredby_callback = nullptr;
    QGraphicsRectItem_OpaqueArea_Callback qgraphicsrectitem_opaquearea_callback = nullptr;
    QGraphicsRectItem_Type_Callback qgraphicsrectitem_type_callback = nullptr;
    QGraphicsRectItem_SupportsExtension_Callback qgraphicsrectitem_supportsextension_callback = nullptr;
    QGraphicsRectItem_SetExtension_Callback qgraphicsrectitem_setextension_callback = nullptr;
    QGraphicsRectItem_Extension_Callback qgraphicsrectitem_extension_callback = nullptr;
    QGraphicsRectItem_Advance_Callback qgraphicsrectitem_advance_callback = nullptr;
    QGraphicsRectItem_CollidesWithItem_Callback qgraphicsrectitem_collideswithitem_callback = nullptr;
    QGraphicsRectItem_CollidesWithPath_Callback qgraphicsrectitem_collideswithpath_callback = nullptr;
    QGraphicsRectItem_SceneEventFilter_Callback qgraphicsrectitem_sceneeventfilter_callback = nullptr;
    QGraphicsRectItem_SceneEvent_Callback qgraphicsrectitem_sceneevent_callback = nullptr;
    QGraphicsRectItem_ContextMenuEvent_Callback qgraphicsrectitem_contextmenuevent_callback = nullptr;
    QGraphicsRectItem_DragEnterEvent_Callback qgraphicsrectitem_dragenterevent_callback = nullptr;
    QGraphicsRectItem_DragLeaveEvent_Callback qgraphicsrectitem_dragleaveevent_callback = nullptr;
    QGraphicsRectItem_DragMoveEvent_Callback qgraphicsrectitem_dragmoveevent_callback = nullptr;
    QGraphicsRectItem_DropEvent_Callback qgraphicsrectitem_dropevent_callback = nullptr;
    QGraphicsRectItem_FocusInEvent_Callback qgraphicsrectitem_focusinevent_callback = nullptr;
    QGraphicsRectItem_FocusOutEvent_Callback qgraphicsrectitem_focusoutevent_callback = nullptr;
    QGraphicsRectItem_HoverEnterEvent_Callback qgraphicsrectitem_hoverenterevent_callback = nullptr;
    QGraphicsRectItem_HoverMoveEvent_Callback qgraphicsrectitem_hovermoveevent_callback = nullptr;
    QGraphicsRectItem_HoverLeaveEvent_Callback qgraphicsrectitem_hoverleaveevent_callback = nullptr;
    QGraphicsRectItem_KeyPressEvent_Callback qgraphicsrectitem_keypressevent_callback = nullptr;
    QGraphicsRectItem_KeyReleaseEvent_Callback qgraphicsrectitem_keyreleaseevent_callback = nullptr;
    QGraphicsRectItem_MousePressEvent_Callback qgraphicsrectitem_mousepressevent_callback = nullptr;
    QGraphicsRectItem_MouseMoveEvent_Callback qgraphicsrectitem_mousemoveevent_callback = nullptr;
    QGraphicsRectItem_MouseReleaseEvent_Callback qgraphicsrectitem_mousereleaseevent_callback = nullptr;
    QGraphicsRectItem_MouseDoubleClickEvent_Callback qgraphicsrectitem_mousedoubleclickevent_callback = nullptr;
    QGraphicsRectItem_WheelEvent_Callback qgraphicsrectitem_wheelevent_callback = nullptr;
    QGraphicsRectItem_InputMethodEvent_Callback qgraphicsrectitem_inputmethodevent_callback = nullptr;
    QGraphicsRectItem_InputMethodQuery_Callback qgraphicsrectitem_inputmethodquery_callback = nullptr;
    QGraphicsRectItem_ItemChange_Callback qgraphicsrectitem_itemchange_callback = nullptr;

    // Access struct
    struct Base : QGraphicsRectItem {
        using QGraphicsRectItem::contextMenuEvent;
        using QGraphicsRectItem::dragEnterEvent;
        using QGraphicsRectItem::dragLeaveEvent;
        using QGraphicsRectItem::dragMoveEvent;
        using QGraphicsRectItem::dropEvent;
        using QGraphicsRectItem::extension;
        using QGraphicsRectItem::focusInEvent;
        using QGraphicsRectItem::focusOutEvent;
        using QGraphicsRectItem::hoverEnterEvent;
        using QGraphicsRectItem::hoverLeaveEvent;
        using QGraphicsRectItem::hoverMoveEvent;
        using QGraphicsRectItem::inputMethodEvent;
        using QGraphicsRectItem::inputMethodQuery;
        using QGraphicsRectItem::itemChange;
        using QGraphicsRectItem::keyPressEvent;
        using QGraphicsRectItem::keyReleaseEvent;
        using QGraphicsRectItem::mouseDoubleClickEvent;
        using QGraphicsRectItem::mouseMoveEvent;
        using QGraphicsRectItem::mousePressEvent;
        using QGraphicsRectItem::mouseReleaseEvent;
        using QGraphicsRectItem::sceneEvent;
        using QGraphicsRectItem::sceneEventFilter;
        using QGraphicsRectItem::setExtension;
        using QGraphicsRectItem::supportsExtension;
        using QGraphicsRectItem::wheelEvent;
    };

    VirtualQGraphicsRectItem() : QGraphicsRectItem() {};
    VirtualQGraphicsRectItem(const QRectF& rect) : QGraphicsRectItem(rect) {};
    VirtualQGraphicsRectItem(qreal x, qreal y, qreal w, qreal h) : QGraphicsRectItem(x, y, w, h) {};
    VirtualQGraphicsRectItem(QGraphicsItem* parent) : QGraphicsRectItem(parent) {};
    VirtualQGraphicsRectItem(const QRectF& rect, QGraphicsItem* parent) : QGraphicsRectItem(rect, parent) {};
    VirtualQGraphicsRectItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem* parent) : QGraphicsRectItem(x, y, w, h, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicsrectitem_boundingrect_callback) {
            QRectF* callback_ret = qgraphicsrectitem_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsRectItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicsrectitem_shape_callback) {
            QPainterPath* callback_ret = qgraphicsrectitem_shape_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsRectItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicsrectitem_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qgraphicsrectitem_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsRectItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicsrectitem_paint_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qgraphicsrectitem_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsRectItem::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicsrectitem_isobscuredby_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;
            bool callback_ret = qgraphicsrectitem_isobscuredby_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsRectItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicsrectitem_opaquearea_callback) {
            QPainterPath* callback_ret = qgraphicsrectitem_opaquearea_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsRectItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicsrectitem_type_callback) {
            int callback_ret = qgraphicsrectitem_type_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsRectItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicsrectitem_supportsextension_callback) {
            int cbval1 = static_cast<int>(extension);
            bool callback_ret = qgraphicsrectitem_supportsextension_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsRectItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicsrectitem_setextension_callback) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);
            qgraphicsrectitem_setextension_callback(this, cbval1, cbval2);
            return;
        }
        QGraphicsRectItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicsrectitem_extension_callback) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);
            QVariant* callback_ret = qgraphicsrectitem_extension_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsRectItem::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicsrectitem_advance_callback) {
            int cbval1 = phase;
            qgraphicsrectitem_advance_callback(this, cbval1);
            return;
        }
        QGraphicsRectItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsrectitem_collideswithitem_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicsrectitem_collideswithitem_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsRectItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsrectitem_collideswithpath_callback) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicsrectitem_collideswithpath_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsRectItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicsrectitem_sceneeventfilter_callback) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicsrectitem_sceneeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsRectItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicsrectitem_sceneevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicsrectitem_sceneevent_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsRectItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicsrectitem_contextmenuevent_callback) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;
            qgraphicsrectitem_contextmenuevent_callback(this, cbval1);
            return;
        }
        QGraphicsRectItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsrectitem_dragenterevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsrectitem_dragenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsRectItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsrectitem_dragleaveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsrectitem_dragleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsRectItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsrectitem_dragmoveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsrectitem_dragmoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsRectItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsrectitem_dropevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsrectitem_dropevent_callback(this, cbval1);
            return;
        }
        QGraphicsRectItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicsrectitem_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicsrectitem_focusinevent_callback(this, cbval1);
            return;
        }
        QGraphicsRectItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicsrectitem_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicsrectitem_focusoutevent_callback(this, cbval1);
            return;
        }
        QGraphicsRectItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsrectitem_hoverenterevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsrectitem_hoverenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsRectItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsrectitem_hovermoveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsrectitem_hovermoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsRectItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsrectitem_hoverleaveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsrectitem_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsRectItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicsrectitem_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicsrectitem_keypressevent_callback(this, cbval1);
            return;
        }
        QGraphicsRectItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicsrectitem_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicsrectitem_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsRectItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsrectitem_mousepressevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsrectitem_mousepressevent_callback(this, cbval1);
            return;
        }
        QGraphicsRectItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsrectitem_mousemoveevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsrectitem_mousemoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsRectItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsrectitem_mousereleaseevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsrectitem_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsRectItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsrectitem_mousedoubleclickevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsrectitem_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QGraphicsRectItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicsrectitem_wheelevent_callback) {
            QGraphicsSceneWheelEvent* cbval1 = event;
            qgraphicsrectitem_wheelevent_callback(this, cbval1);
            return;
        }
        QGraphicsRectItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicsrectitem_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qgraphicsrectitem_inputmethodevent_callback(this, cbval1);
            return;
        }
        QGraphicsRectItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicsrectitem_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qgraphicsrectitem_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsRectItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicsrectitem_itemchange_callback) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            QVariant* callback_ret = qgraphicsrectitem_itemchange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsRectItem::itemChange(change, value);
    }

    // Friend functions
    friend bool QGraphicsRectItem_SuperSupportsExtension(const QGraphicsRectItem* self, int extension);
    friend void QGraphicsRectItem_SuperSetExtension(QGraphicsRectItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsRectItem_SuperExtension(const QGraphicsRectItem* self, const QVariant* variant);
    friend bool QGraphicsRectItem_SuperSceneEventFilter(QGraphicsRectItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsRectItem_SuperSceneEvent(QGraphicsRectItem* self, QEvent* event);
    friend void QGraphicsRectItem_SuperContextMenuEvent(QGraphicsRectItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsRectItem_SuperDragEnterEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsRectItem_SuperDragLeaveEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsRectItem_SuperDragMoveEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsRectItem_SuperDropEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsRectItem_SuperFocusInEvent(QGraphicsRectItem* self, QFocusEvent* event);
    friend void QGraphicsRectItem_SuperFocusOutEvent(QGraphicsRectItem* self, QFocusEvent* event);
    friend void QGraphicsRectItem_SuperHoverEnterEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsRectItem_SuperHoverMoveEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsRectItem_SuperHoverLeaveEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsRectItem_SuperKeyPressEvent(QGraphicsRectItem* self, QKeyEvent* event);
    friend void QGraphicsRectItem_SuperKeyReleaseEvent(QGraphicsRectItem* self, QKeyEvent* event);
    friend void QGraphicsRectItem_SuperMousePressEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsRectItem_SuperMouseMoveEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsRectItem_SuperMouseReleaseEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsRectItem_SuperMouseDoubleClickEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsRectItem_SuperWheelEvent(QGraphicsRectItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsRectItem_SuperInputMethodEvent(QGraphicsRectItem* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsRectItem_SuperInputMethodQuery(const QGraphicsRectItem* self, int query);
    friend QVariant* QGraphicsRectItem_SuperItemChange(QGraphicsRectItem* self, int change, const QVariant* value);
};

// This class is a subclass of QGraphicsEllipseItem
class VirtualQGraphicsEllipseItem final : public QGraphicsEllipseItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsItem::Extension;
    using QGraphicsEllipseItem_BoundingRect_Callback = QRectF* (*)(const QGraphicsEllipseItem*);
    using QGraphicsEllipseItem_Shape_Callback = QPainterPath* (*)(const QGraphicsEllipseItem*);
    using QGraphicsEllipseItem_Contains_Callback = bool (*)(const QGraphicsEllipseItem*, QPointF*);
    using QGraphicsEllipseItem_Paint_Callback = void (*)(QGraphicsEllipseItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsEllipseItem_IsObscuredBy_Callback = bool (*)(const QGraphicsEllipseItem*, QGraphicsItem*);
    using QGraphicsEllipseItem_OpaqueArea_Callback = QPainterPath* (*)(const QGraphicsEllipseItem*);
    using QGraphicsEllipseItem_Type_Callback = int (*)(const QGraphicsEllipseItem*);
    using QGraphicsEllipseItem_SupportsExtension_Callback = bool (*)(const QGraphicsEllipseItem*, int);
    using QGraphicsEllipseItem_SetExtension_Callback = void (*)(QGraphicsEllipseItem*, int, QVariant*);
    using QGraphicsEllipseItem_Extension_Callback = QVariant* (*)(const QGraphicsEllipseItem*, QVariant*);
    using QGraphicsEllipseItem_Advance_Callback = void (*)(QGraphicsEllipseItem*, int);
    using QGraphicsEllipseItem_CollidesWithItem_Callback = bool (*)(const QGraphicsEllipseItem*, QGraphicsItem*, int);
    using QGraphicsEllipseItem_CollidesWithPath_Callback = bool (*)(const QGraphicsEllipseItem*, QPainterPath*, int);
    using QGraphicsEllipseItem_SceneEventFilter_Callback = bool (*)(QGraphicsEllipseItem*, QGraphicsItem*, QEvent*);
    using QGraphicsEllipseItem_SceneEvent_Callback = bool (*)(QGraphicsEllipseItem*, QEvent*);
    using QGraphicsEllipseItem_ContextMenuEvent_Callback = void (*)(QGraphicsEllipseItem*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsEllipseItem_DragEnterEvent_Callback = void (*)(QGraphicsEllipseItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsEllipseItem_DragLeaveEvent_Callback = void (*)(QGraphicsEllipseItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsEllipseItem_DragMoveEvent_Callback = void (*)(QGraphicsEllipseItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsEllipseItem_DropEvent_Callback = void (*)(QGraphicsEllipseItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsEllipseItem_FocusInEvent_Callback = void (*)(QGraphicsEllipseItem*, QFocusEvent*);
    using QGraphicsEllipseItem_FocusOutEvent_Callback = void (*)(QGraphicsEllipseItem*, QFocusEvent*);
    using QGraphicsEllipseItem_HoverEnterEvent_Callback = void (*)(QGraphicsEllipseItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsEllipseItem_HoverMoveEvent_Callback = void (*)(QGraphicsEllipseItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsEllipseItem_HoverLeaveEvent_Callback = void (*)(QGraphicsEllipseItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsEllipseItem_KeyPressEvent_Callback = void (*)(QGraphicsEllipseItem*, QKeyEvent*);
    using QGraphicsEllipseItem_KeyReleaseEvent_Callback = void (*)(QGraphicsEllipseItem*, QKeyEvent*);
    using QGraphicsEllipseItem_MousePressEvent_Callback = void (*)(QGraphicsEllipseItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsEllipseItem_MouseMoveEvent_Callback = void (*)(QGraphicsEllipseItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsEllipseItem_MouseReleaseEvent_Callback = void (*)(QGraphicsEllipseItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsEllipseItem_MouseDoubleClickEvent_Callback = void (*)(QGraphicsEllipseItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsEllipseItem_WheelEvent_Callback = void (*)(QGraphicsEllipseItem*, QGraphicsSceneWheelEvent*);
    using QGraphicsEllipseItem_InputMethodEvent_Callback = void (*)(QGraphicsEllipseItem*, QInputMethodEvent*);
    using QGraphicsEllipseItem_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsEllipseItem*, int);
    using QGraphicsEllipseItem_ItemChange_Callback = QVariant* (*)(QGraphicsEllipseItem*, int, QVariant*);
    using QGraphicsEllipseItem::addToIndex;
    using QGraphicsEllipseItem::prepareGeometryChange;
    using QGraphicsEllipseItem::removeFromIndex;
    using QGraphicsEllipseItem::updateMicroFocus;

    // Instance callback storage
    QGraphicsEllipseItem_BoundingRect_Callback qgraphicsellipseitem_boundingrect_callback = nullptr;
    QGraphicsEllipseItem_Shape_Callback qgraphicsellipseitem_shape_callback = nullptr;
    QGraphicsEllipseItem_Contains_Callback qgraphicsellipseitem_contains_callback = nullptr;
    QGraphicsEllipseItem_Paint_Callback qgraphicsellipseitem_paint_callback = nullptr;
    QGraphicsEllipseItem_IsObscuredBy_Callback qgraphicsellipseitem_isobscuredby_callback = nullptr;
    QGraphicsEllipseItem_OpaqueArea_Callback qgraphicsellipseitem_opaquearea_callback = nullptr;
    QGraphicsEllipseItem_Type_Callback qgraphicsellipseitem_type_callback = nullptr;
    QGraphicsEllipseItem_SupportsExtension_Callback qgraphicsellipseitem_supportsextension_callback = nullptr;
    QGraphicsEllipseItem_SetExtension_Callback qgraphicsellipseitem_setextension_callback = nullptr;
    QGraphicsEllipseItem_Extension_Callback qgraphicsellipseitem_extension_callback = nullptr;
    QGraphicsEllipseItem_Advance_Callback qgraphicsellipseitem_advance_callback = nullptr;
    QGraphicsEllipseItem_CollidesWithItem_Callback qgraphicsellipseitem_collideswithitem_callback = nullptr;
    QGraphicsEllipseItem_CollidesWithPath_Callback qgraphicsellipseitem_collideswithpath_callback = nullptr;
    QGraphicsEllipseItem_SceneEventFilter_Callback qgraphicsellipseitem_sceneeventfilter_callback = nullptr;
    QGraphicsEllipseItem_SceneEvent_Callback qgraphicsellipseitem_sceneevent_callback = nullptr;
    QGraphicsEllipseItem_ContextMenuEvent_Callback qgraphicsellipseitem_contextmenuevent_callback = nullptr;
    QGraphicsEllipseItem_DragEnterEvent_Callback qgraphicsellipseitem_dragenterevent_callback = nullptr;
    QGraphicsEllipseItem_DragLeaveEvent_Callback qgraphicsellipseitem_dragleaveevent_callback = nullptr;
    QGraphicsEllipseItem_DragMoveEvent_Callback qgraphicsellipseitem_dragmoveevent_callback = nullptr;
    QGraphicsEllipseItem_DropEvent_Callback qgraphicsellipseitem_dropevent_callback = nullptr;
    QGraphicsEllipseItem_FocusInEvent_Callback qgraphicsellipseitem_focusinevent_callback = nullptr;
    QGraphicsEllipseItem_FocusOutEvent_Callback qgraphicsellipseitem_focusoutevent_callback = nullptr;
    QGraphicsEllipseItem_HoverEnterEvent_Callback qgraphicsellipseitem_hoverenterevent_callback = nullptr;
    QGraphicsEllipseItem_HoverMoveEvent_Callback qgraphicsellipseitem_hovermoveevent_callback = nullptr;
    QGraphicsEllipseItem_HoverLeaveEvent_Callback qgraphicsellipseitem_hoverleaveevent_callback = nullptr;
    QGraphicsEllipseItem_KeyPressEvent_Callback qgraphicsellipseitem_keypressevent_callback = nullptr;
    QGraphicsEllipseItem_KeyReleaseEvent_Callback qgraphicsellipseitem_keyreleaseevent_callback = nullptr;
    QGraphicsEllipseItem_MousePressEvent_Callback qgraphicsellipseitem_mousepressevent_callback = nullptr;
    QGraphicsEllipseItem_MouseMoveEvent_Callback qgraphicsellipseitem_mousemoveevent_callback = nullptr;
    QGraphicsEllipseItem_MouseReleaseEvent_Callback qgraphicsellipseitem_mousereleaseevent_callback = nullptr;
    QGraphicsEllipseItem_MouseDoubleClickEvent_Callback qgraphicsellipseitem_mousedoubleclickevent_callback = nullptr;
    QGraphicsEllipseItem_WheelEvent_Callback qgraphicsellipseitem_wheelevent_callback = nullptr;
    QGraphicsEllipseItem_InputMethodEvent_Callback qgraphicsellipseitem_inputmethodevent_callback = nullptr;
    QGraphicsEllipseItem_InputMethodQuery_Callback qgraphicsellipseitem_inputmethodquery_callback = nullptr;
    QGraphicsEllipseItem_ItemChange_Callback qgraphicsellipseitem_itemchange_callback = nullptr;

    // Access struct
    struct Base : QGraphicsEllipseItem {
        using QGraphicsEllipseItem::contextMenuEvent;
        using QGraphicsEllipseItem::dragEnterEvent;
        using QGraphicsEllipseItem::dragLeaveEvent;
        using QGraphicsEllipseItem::dragMoveEvent;
        using QGraphicsEllipseItem::dropEvent;
        using QGraphicsEllipseItem::extension;
        using QGraphicsEllipseItem::focusInEvent;
        using QGraphicsEllipseItem::focusOutEvent;
        using QGraphicsEllipseItem::hoverEnterEvent;
        using QGraphicsEllipseItem::hoverLeaveEvent;
        using QGraphicsEllipseItem::hoverMoveEvent;
        using QGraphicsEllipseItem::inputMethodEvent;
        using QGraphicsEllipseItem::inputMethodQuery;
        using QGraphicsEllipseItem::itemChange;
        using QGraphicsEllipseItem::keyPressEvent;
        using QGraphicsEllipseItem::keyReleaseEvent;
        using QGraphicsEllipseItem::mouseDoubleClickEvent;
        using QGraphicsEllipseItem::mouseMoveEvent;
        using QGraphicsEllipseItem::mousePressEvent;
        using QGraphicsEllipseItem::mouseReleaseEvent;
        using QGraphicsEllipseItem::sceneEvent;
        using QGraphicsEllipseItem::sceneEventFilter;
        using QGraphicsEllipseItem::setExtension;
        using QGraphicsEllipseItem::supportsExtension;
        using QGraphicsEllipseItem::wheelEvent;
    };

    VirtualQGraphicsEllipseItem() : QGraphicsEllipseItem() {};
    VirtualQGraphicsEllipseItem(const QRectF& rect) : QGraphicsEllipseItem(rect) {};
    VirtualQGraphicsEllipseItem(qreal x, qreal y, qreal w, qreal h) : QGraphicsEllipseItem(x, y, w, h) {};
    VirtualQGraphicsEllipseItem(QGraphicsItem* parent) : QGraphicsEllipseItem(parent) {};
    VirtualQGraphicsEllipseItem(const QRectF& rect, QGraphicsItem* parent) : QGraphicsEllipseItem(rect, parent) {};
    VirtualQGraphicsEllipseItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem* parent) : QGraphicsEllipseItem(x, y, w, h, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicsellipseitem_boundingrect_callback) {
            QRectF* callback_ret = qgraphicsellipseitem_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsEllipseItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicsellipseitem_shape_callback) {
            QPainterPath* callback_ret = qgraphicsellipseitem_shape_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsEllipseItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicsellipseitem_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qgraphicsellipseitem_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsEllipseItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicsellipseitem_paint_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qgraphicsellipseitem_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsEllipseItem::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicsellipseitem_isobscuredby_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;
            bool callback_ret = qgraphicsellipseitem_isobscuredby_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsEllipseItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicsellipseitem_opaquearea_callback) {
            QPainterPath* callback_ret = qgraphicsellipseitem_opaquearea_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsEllipseItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicsellipseitem_type_callback) {
            int callback_ret = qgraphicsellipseitem_type_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsEllipseItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicsellipseitem_supportsextension_callback) {
            int cbval1 = static_cast<int>(extension);
            bool callback_ret = qgraphicsellipseitem_supportsextension_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsEllipseItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicsellipseitem_setextension_callback) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);
            qgraphicsellipseitem_setextension_callback(this, cbval1, cbval2);
            return;
        }
        QGraphicsEllipseItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicsellipseitem_extension_callback) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);
            QVariant* callback_ret = qgraphicsellipseitem_extension_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsEllipseItem::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicsellipseitem_advance_callback) {
            int cbval1 = phase;
            qgraphicsellipseitem_advance_callback(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsellipseitem_collideswithitem_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicsellipseitem_collideswithitem_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsEllipseItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsellipseitem_collideswithpath_callback) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicsellipseitem_collideswithpath_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsEllipseItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicsellipseitem_sceneeventfilter_callback) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicsellipseitem_sceneeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsEllipseItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicsellipseitem_sceneevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicsellipseitem_sceneevent_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsEllipseItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicsellipseitem_contextmenuevent_callback) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;
            qgraphicsellipseitem_contextmenuevent_callback(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsellipseitem_dragenterevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsellipseitem_dragenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsellipseitem_dragleaveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsellipseitem_dragleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsellipseitem_dragmoveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsellipseitem_dragmoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsellipseitem_dropevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsellipseitem_dropevent_callback(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicsellipseitem_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicsellipseitem_focusinevent_callback(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicsellipseitem_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicsellipseitem_focusoutevent_callback(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsellipseitem_hoverenterevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsellipseitem_hoverenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsellipseitem_hovermoveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsellipseitem_hovermoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsellipseitem_hoverleaveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsellipseitem_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicsellipseitem_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicsellipseitem_keypressevent_callback(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicsellipseitem_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicsellipseitem_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsellipseitem_mousepressevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsellipseitem_mousepressevent_callback(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsellipseitem_mousemoveevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsellipseitem_mousemoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsellipseitem_mousereleaseevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsellipseitem_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsellipseitem_mousedoubleclickevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsellipseitem_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicsellipseitem_wheelevent_callback) {
            QGraphicsSceneWheelEvent* cbval1 = event;
            qgraphicsellipseitem_wheelevent_callback(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicsellipseitem_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qgraphicsellipseitem_inputmethodevent_callback(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicsellipseitem_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qgraphicsellipseitem_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsEllipseItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicsellipseitem_itemchange_callback) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            QVariant* callback_ret = qgraphicsellipseitem_itemchange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsEllipseItem::itemChange(change, value);
    }

    // Friend functions
    friend bool QGraphicsEllipseItem_SuperSupportsExtension(const QGraphicsEllipseItem* self, int extension);
    friend void QGraphicsEllipseItem_SuperSetExtension(QGraphicsEllipseItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsEllipseItem_SuperExtension(const QGraphicsEllipseItem* self, const QVariant* variant);
    friend bool QGraphicsEllipseItem_SuperSceneEventFilter(QGraphicsEllipseItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsEllipseItem_SuperSceneEvent(QGraphicsEllipseItem* self, QEvent* event);
    friend void QGraphicsEllipseItem_SuperContextMenuEvent(QGraphicsEllipseItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsEllipseItem_SuperDragEnterEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsEllipseItem_SuperDragLeaveEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsEllipseItem_SuperDragMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsEllipseItem_SuperDropEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsEllipseItem_SuperFocusInEvent(QGraphicsEllipseItem* self, QFocusEvent* event);
    friend void QGraphicsEllipseItem_SuperFocusOutEvent(QGraphicsEllipseItem* self, QFocusEvent* event);
    friend void QGraphicsEllipseItem_SuperHoverEnterEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsEllipseItem_SuperHoverMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsEllipseItem_SuperHoverLeaveEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsEllipseItem_SuperKeyPressEvent(QGraphicsEllipseItem* self, QKeyEvent* event);
    friend void QGraphicsEllipseItem_SuperKeyReleaseEvent(QGraphicsEllipseItem* self, QKeyEvent* event);
    friend void QGraphicsEllipseItem_SuperMousePressEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsEllipseItem_SuperMouseMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsEllipseItem_SuperMouseReleaseEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsEllipseItem_SuperMouseDoubleClickEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsEllipseItem_SuperWheelEvent(QGraphicsEllipseItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsEllipseItem_SuperInputMethodEvent(QGraphicsEllipseItem* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsEllipseItem_SuperInputMethodQuery(const QGraphicsEllipseItem* self, int query);
    friend QVariant* QGraphicsEllipseItem_SuperItemChange(QGraphicsEllipseItem* self, int change, const QVariant* value);
};

// This class is a subclass of QGraphicsPolygonItem
class VirtualQGraphicsPolygonItem final : public QGraphicsPolygonItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsItem::Extension;
    using QGraphicsPolygonItem_BoundingRect_Callback = QRectF* (*)(const QGraphicsPolygonItem*);
    using QGraphicsPolygonItem_Shape_Callback = QPainterPath* (*)(const QGraphicsPolygonItem*);
    using QGraphicsPolygonItem_Contains_Callback = bool (*)(const QGraphicsPolygonItem*, QPointF*);
    using QGraphicsPolygonItem_Paint_Callback = void (*)(QGraphicsPolygonItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsPolygonItem_IsObscuredBy_Callback = bool (*)(const QGraphicsPolygonItem*, QGraphicsItem*);
    using QGraphicsPolygonItem_OpaqueArea_Callback = QPainterPath* (*)(const QGraphicsPolygonItem*);
    using QGraphicsPolygonItem_Type_Callback = int (*)(const QGraphicsPolygonItem*);
    using QGraphicsPolygonItem_SupportsExtension_Callback = bool (*)(const QGraphicsPolygonItem*, int);
    using QGraphicsPolygonItem_SetExtension_Callback = void (*)(QGraphicsPolygonItem*, int, QVariant*);
    using QGraphicsPolygonItem_Extension_Callback = QVariant* (*)(const QGraphicsPolygonItem*, QVariant*);
    using QGraphicsPolygonItem_Advance_Callback = void (*)(QGraphicsPolygonItem*, int);
    using QGraphicsPolygonItem_CollidesWithItem_Callback = bool (*)(const QGraphicsPolygonItem*, QGraphicsItem*, int);
    using QGraphicsPolygonItem_CollidesWithPath_Callback = bool (*)(const QGraphicsPolygonItem*, QPainterPath*, int);
    using QGraphicsPolygonItem_SceneEventFilter_Callback = bool (*)(QGraphicsPolygonItem*, QGraphicsItem*, QEvent*);
    using QGraphicsPolygonItem_SceneEvent_Callback = bool (*)(QGraphicsPolygonItem*, QEvent*);
    using QGraphicsPolygonItem_ContextMenuEvent_Callback = void (*)(QGraphicsPolygonItem*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsPolygonItem_DragEnterEvent_Callback = void (*)(QGraphicsPolygonItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsPolygonItem_DragLeaveEvent_Callback = void (*)(QGraphicsPolygonItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsPolygonItem_DragMoveEvent_Callback = void (*)(QGraphicsPolygonItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsPolygonItem_DropEvent_Callback = void (*)(QGraphicsPolygonItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsPolygonItem_FocusInEvent_Callback = void (*)(QGraphicsPolygonItem*, QFocusEvent*);
    using QGraphicsPolygonItem_FocusOutEvent_Callback = void (*)(QGraphicsPolygonItem*, QFocusEvent*);
    using QGraphicsPolygonItem_HoverEnterEvent_Callback = void (*)(QGraphicsPolygonItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsPolygonItem_HoverMoveEvent_Callback = void (*)(QGraphicsPolygonItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsPolygonItem_HoverLeaveEvent_Callback = void (*)(QGraphicsPolygonItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsPolygonItem_KeyPressEvent_Callback = void (*)(QGraphicsPolygonItem*, QKeyEvent*);
    using QGraphicsPolygonItem_KeyReleaseEvent_Callback = void (*)(QGraphicsPolygonItem*, QKeyEvent*);
    using QGraphicsPolygonItem_MousePressEvent_Callback = void (*)(QGraphicsPolygonItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsPolygonItem_MouseMoveEvent_Callback = void (*)(QGraphicsPolygonItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsPolygonItem_MouseReleaseEvent_Callback = void (*)(QGraphicsPolygonItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsPolygonItem_MouseDoubleClickEvent_Callback = void (*)(QGraphicsPolygonItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsPolygonItem_WheelEvent_Callback = void (*)(QGraphicsPolygonItem*, QGraphicsSceneWheelEvent*);
    using QGraphicsPolygonItem_InputMethodEvent_Callback = void (*)(QGraphicsPolygonItem*, QInputMethodEvent*);
    using QGraphicsPolygonItem_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsPolygonItem*, int);
    using QGraphicsPolygonItem_ItemChange_Callback = QVariant* (*)(QGraphicsPolygonItem*, int, QVariant*);
    using QGraphicsPolygonItem::addToIndex;
    using QGraphicsPolygonItem::prepareGeometryChange;
    using QGraphicsPolygonItem::removeFromIndex;
    using QGraphicsPolygonItem::updateMicroFocus;

    // Instance callback storage
    QGraphicsPolygonItem_BoundingRect_Callback qgraphicspolygonitem_boundingrect_callback = nullptr;
    QGraphicsPolygonItem_Shape_Callback qgraphicspolygonitem_shape_callback = nullptr;
    QGraphicsPolygonItem_Contains_Callback qgraphicspolygonitem_contains_callback = nullptr;
    QGraphicsPolygonItem_Paint_Callback qgraphicspolygonitem_paint_callback = nullptr;
    QGraphicsPolygonItem_IsObscuredBy_Callback qgraphicspolygonitem_isobscuredby_callback = nullptr;
    QGraphicsPolygonItem_OpaqueArea_Callback qgraphicspolygonitem_opaquearea_callback = nullptr;
    QGraphicsPolygonItem_Type_Callback qgraphicspolygonitem_type_callback = nullptr;
    QGraphicsPolygonItem_SupportsExtension_Callback qgraphicspolygonitem_supportsextension_callback = nullptr;
    QGraphicsPolygonItem_SetExtension_Callback qgraphicspolygonitem_setextension_callback = nullptr;
    QGraphicsPolygonItem_Extension_Callback qgraphicspolygonitem_extension_callback = nullptr;
    QGraphicsPolygonItem_Advance_Callback qgraphicspolygonitem_advance_callback = nullptr;
    QGraphicsPolygonItem_CollidesWithItem_Callback qgraphicspolygonitem_collideswithitem_callback = nullptr;
    QGraphicsPolygonItem_CollidesWithPath_Callback qgraphicspolygonitem_collideswithpath_callback = nullptr;
    QGraphicsPolygonItem_SceneEventFilter_Callback qgraphicspolygonitem_sceneeventfilter_callback = nullptr;
    QGraphicsPolygonItem_SceneEvent_Callback qgraphicspolygonitem_sceneevent_callback = nullptr;
    QGraphicsPolygonItem_ContextMenuEvent_Callback qgraphicspolygonitem_contextmenuevent_callback = nullptr;
    QGraphicsPolygonItem_DragEnterEvent_Callback qgraphicspolygonitem_dragenterevent_callback = nullptr;
    QGraphicsPolygonItem_DragLeaveEvent_Callback qgraphicspolygonitem_dragleaveevent_callback = nullptr;
    QGraphicsPolygonItem_DragMoveEvent_Callback qgraphicspolygonitem_dragmoveevent_callback = nullptr;
    QGraphicsPolygonItem_DropEvent_Callback qgraphicspolygonitem_dropevent_callback = nullptr;
    QGraphicsPolygonItem_FocusInEvent_Callback qgraphicspolygonitem_focusinevent_callback = nullptr;
    QGraphicsPolygonItem_FocusOutEvent_Callback qgraphicspolygonitem_focusoutevent_callback = nullptr;
    QGraphicsPolygonItem_HoverEnterEvent_Callback qgraphicspolygonitem_hoverenterevent_callback = nullptr;
    QGraphicsPolygonItem_HoverMoveEvent_Callback qgraphicspolygonitem_hovermoveevent_callback = nullptr;
    QGraphicsPolygonItem_HoverLeaveEvent_Callback qgraphicspolygonitem_hoverleaveevent_callback = nullptr;
    QGraphicsPolygonItem_KeyPressEvent_Callback qgraphicspolygonitem_keypressevent_callback = nullptr;
    QGraphicsPolygonItem_KeyReleaseEvent_Callback qgraphicspolygonitem_keyreleaseevent_callback = nullptr;
    QGraphicsPolygonItem_MousePressEvent_Callback qgraphicspolygonitem_mousepressevent_callback = nullptr;
    QGraphicsPolygonItem_MouseMoveEvent_Callback qgraphicspolygonitem_mousemoveevent_callback = nullptr;
    QGraphicsPolygonItem_MouseReleaseEvent_Callback qgraphicspolygonitem_mousereleaseevent_callback = nullptr;
    QGraphicsPolygonItem_MouseDoubleClickEvent_Callback qgraphicspolygonitem_mousedoubleclickevent_callback = nullptr;
    QGraphicsPolygonItem_WheelEvent_Callback qgraphicspolygonitem_wheelevent_callback = nullptr;
    QGraphicsPolygonItem_InputMethodEvent_Callback qgraphicspolygonitem_inputmethodevent_callback = nullptr;
    QGraphicsPolygonItem_InputMethodQuery_Callback qgraphicspolygonitem_inputmethodquery_callback = nullptr;
    QGraphicsPolygonItem_ItemChange_Callback qgraphicspolygonitem_itemchange_callback = nullptr;

    // Access struct
    struct Base : QGraphicsPolygonItem {
        using QGraphicsPolygonItem::contextMenuEvent;
        using QGraphicsPolygonItem::dragEnterEvent;
        using QGraphicsPolygonItem::dragLeaveEvent;
        using QGraphicsPolygonItem::dragMoveEvent;
        using QGraphicsPolygonItem::dropEvent;
        using QGraphicsPolygonItem::extension;
        using QGraphicsPolygonItem::focusInEvent;
        using QGraphicsPolygonItem::focusOutEvent;
        using QGraphicsPolygonItem::hoverEnterEvent;
        using QGraphicsPolygonItem::hoverLeaveEvent;
        using QGraphicsPolygonItem::hoverMoveEvent;
        using QGraphicsPolygonItem::inputMethodEvent;
        using QGraphicsPolygonItem::inputMethodQuery;
        using QGraphicsPolygonItem::itemChange;
        using QGraphicsPolygonItem::keyPressEvent;
        using QGraphicsPolygonItem::keyReleaseEvent;
        using QGraphicsPolygonItem::mouseDoubleClickEvent;
        using QGraphicsPolygonItem::mouseMoveEvent;
        using QGraphicsPolygonItem::mousePressEvent;
        using QGraphicsPolygonItem::mouseReleaseEvent;
        using QGraphicsPolygonItem::sceneEvent;
        using QGraphicsPolygonItem::sceneEventFilter;
        using QGraphicsPolygonItem::setExtension;
        using QGraphicsPolygonItem::supportsExtension;
        using QGraphicsPolygonItem::wheelEvent;
    };

    VirtualQGraphicsPolygonItem() : QGraphicsPolygonItem() {};
    VirtualQGraphicsPolygonItem(const QPolygonF& polygon) : QGraphicsPolygonItem(polygon) {};
    VirtualQGraphicsPolygonItem(QGraphicsItem* parent) : QGraphicsPolygonItem(parent) {};
    VirtualQGraphicsPolygonItem(const QPolygonF& polygon, QGraphicsItem* parent) : QGraphicsPolygonItem(polygon, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicspolygonitem_boundingrect_callback) {
            QRectF* callback_ret = qgraphicspolygonitem_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsPolygonItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicspolygonitem_shape_callback) {
            QPainterPath* callback_ret = qgraphicspolygonitem_shape_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsPolygonItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicspolygonitem_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qgraphicspolygonitem_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPolygonItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicspolygonitem_paint_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qgraphicspolygonitem_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsPolygonItem::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicspolygonitem_isobscuredby_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;
            bool callback_ret = qgraphicspolygonitem_isobscuredby_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPolygonItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicspolygonitem_opaquearea_callback) {
            QPainterPath* callback_ret = qgraphicspolygonitem_opaquearea_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsPolygonItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicspolygonitem_type_callback) {
            int callback_ret = qgraphicspolygonitem_type_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsPolygonItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicspolygonitem_supportsextension_callback) {
            int cbval1 = static_cast<int>(extension);
            bool callback_ret = qgraphicspolygonitem_supportsextension_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPolygonItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicspolygonitem_setextension_callback) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);
            qgraphicspolygonitem_setextension_callback(this, cbval1, cbval2);
            return;
        }
        QGraphicsPolygonItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicspolygonitem_extension_callback) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);
            QVariant* callback_ret = qgraphicspolygonitem_extension_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsPolygonItem::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicspolygonitem_advance_callback) {
            int cbval1 = phase;
            qgraphicspolygonitem_advance_callback(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicspolygonitem_collideswithitem_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicspolygonitem_collideswithitem_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsPolygonItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicspolygonitem_collideswithpath_callback) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicspolygonitem_collideswithpath_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsPolygonItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicspolygonitem_sceneeventfilter_callback) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicspolygonitem_sceneeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsPolygonItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicspolygonitem_sceneevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicspolygonitem_sceneevent_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPolygonItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicspolygonitem_contextmenuevent_callback) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;
            qgraphicspolygonitem_contextmenuevent_callback(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspolygonitem_dragenterevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicspolygonitem_dragenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspolygonitem_dragleaveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicspolygonitem_dragleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspolygonitem_dragmoveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicspolygonitem_dragmoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspolygonitem_dropevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicspolygonitem_dropevent_callback(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicspolygonitem_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicspolygonitem_focusinevent_callback(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicspolygonitem_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicspolygonitem_focusoutevent_callback(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicspolygonitem_hoverenterevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicspolygonitem_hoverenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicspolygonitem_hovermoveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicspolygonitem_hovermoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicspolygonitem_hoverleaveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicspolygonitem_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicspolygonitem_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicspolygonitem_keypressevent_callback(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicspolygonitem_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicspolygonitem_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspolygonitem_mousepressevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicspolygonitem_mousepressevent_callback(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspolygonitem_mousemoveevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicspolygonitem_mousemoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspolygonitem_mousereleaseevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicspolygonitem_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspolygonitem_mousedoubleclickevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicspolygonitem_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicspolygonitem_wheelevent_callback) {
            QGraphicsSceneWheelEvent* cbval1 = event;
            qgraphicspolygonitem_wheelevent_callback(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicspolygonitem_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qgraphicspolygonitem_inputmethodevent_callback(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicspolygonitem_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qgraphicspolygonitem_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsPolygonItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicspolygonitem_itemchange_callback) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            QVariant* callback_ret = qgraphicspolygonitem_itemchange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsPolygonItem::itemChange(change, value);
    }

    // Friend functions
    friend bool QGraphicsPolygonItem_SuperSupportsExtension(const QGraphicsPolygonItem* self, int extension);
    friend void QGraphicsPolygonItem_SuperSetExtension(QGraphicsPolygonItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsPolygonItem_SuperExtension(const QGraphicsPolygonItem* self, const QVariant* variant);
    friend bool QGraphicsPolygonItem_SuperSceneEventFilter(QGraphicsPolygonItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsPolygonItem_SuperSceneEvent(QGraphicsPolygonItem* self, QEvent* event);
    friend void QGraphicsPolygonItem_SuperContextMenuEvent(QGraphicsPolygonItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsPolygonItem_SuperDragEnterEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPolygonItem_SuperDragLeaveEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPolygonItem_SuperDragMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPolygonItem_SuperDropEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPolygonItem_SuperFocusInEvent(QGraphicsPolygonItem* self, QFocusEvent* event);
    friend void QGraphicsPolygonItem_SuperFocusOutEvent(QGraphicsPolygonItem* self, QFocusEvent* event);
    friend void QGraphicsPolygonItem_SuperHoverEnterEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPolygonItem_SuperHoverMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPolygonItem_SuperHoverLeaveEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPolygonItem_SuperKeyPressEvent(QGraphicsPolygonItem* self, QKeyEvent* event);
    friend void QGraphicsPolygonItem_SuperKeyReleaseEvent(QGraphicsPolygonItem* self, QKeyEvent* event);
    friend void QGraphicsPolygonItem_SuperMousePressEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPolygonItem_SuperMouseMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPolygonItem_SuperMouseReleaseEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPolygonItem_SuperMouseDoubleClickEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPolygonItem_SuperWheelEvent(QGraphicsPolygonItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsPolygonItem_SuperInputMethodEvent(QGraphicsPolygonItem* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsPolygonItem_SuperInputMethodQuery(const QGraphicsPolygonItem* self, int query);
    friend QVariant* QGraphicsPolygonItem_SuperItemChange(QGraphicsPolygonItem* self, int change, const QVariant* value);
};

// This class is a subclass of QGraphicsLineItem
class VirtualQGraphicsLineItem final : public QGraphicsLineItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsItem::Extension;
    using QGraphicsLineItem_BoundingRect_Callback = QRectF* (*)(const QGraphicsLineItem*);
    using QGraphicsLineItem_Shape_Callback = QPainterPath* (*)(const QGraphicsLineItem*);
    using QGraphicsLineItem_Contains_Callback = bool (*)(const QGraphicsLineItem*, QPointF*);
    using QGraphicsLineItem_Paint_Callback = void (*)(QGraphicsLineItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsLineItem_IsObscuredBy_Callback = bool (*)(const QGraphicsLineItem*, QGraphicsItem*);
    using QGraphicsLineItem_OpaqueArea_Callback = QPainterPath* (*)(const QGraphicsLineItem*);
    using QGraphicsLineItem_Type_Callback = int (*)(const QGraphicsLineItem*);
    using QGraphicsLineItem_SupportsExtension_Callback = bool (*)(const QGraphicsLineItem*, int);
    using QGraphicsLineItem_SetExtension_Callback = void (*)(QGraphicsLineItem*, int, QVariant*);
    using QGraphicsLineItem_Extension_Callback = QVariant* (*)(const QGraphicsLineItem*, QVariant*);
    using QGraphicsLineItem_Advance_Callback = void (*)(QGraphicsLineItem*, int);
    using QGraphicsLineItem_CollidesWithItem_Callback = bool (*)(const QGraphicsLineItem*, QGraphicsItem*, int);
    using QGraphicsLineItem_CollidesWithPath_Callback = bool (*)(const QGraphicsLineItem*, QPainterPath*, int);
    using QGraphicsLineItem_SceneEventFilter_Callback = bool (*)(QGraphicsLineItem*, QGraphicsItem*, QEvent*);
    using QGraphicsLineItem_SceneEvent_Callback = bool (*)(QGraphicsLineItem*, QEvent*);
    using QGraphicsLineItem_ContextMenuEvent_Callback = void (*)(QGraphicsLineItem*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsLineItem_DragEnterEvent_Callback = void (*)(QGraphicsLineItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsLineItem_DragLeaveEvent_Callback = void (*)(QGraphicsLineItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsLineItem_DragMoveEvent_Callback = void (*)(QGraphicsLineItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsLineItem_DropEvent_Callback = void (*)(QGraphicsLineItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsLineItem_FocusInEvent_Callback = void (*)(QGraphicsLineItem*, QFocusEvent*);
    using QGraphicsLineItem_FocusOutEvent_Callback = void (*)(QGraphicsLineItem*, QFocusEvent*);
    using QGraphicsLineItem_HoverEnterEvent_Callback = void (*)(QGraphicsLineItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsLineItem_HoverMoveEvent_Callback = void (*)(QGraphicsLineItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsLineItem_HoverLeaveEvent_Callback = void (*)(QGraphicsLineItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsLineItem_KeyPressEvent_Callback = void (*)(QGraphicsLineItem*, QKeyEvent*);
    using QGraphicsLineItem_KeyReleaseEvent_Callback = void (*)(QGraphicsLineItem*, QKeyEvent*);
    using QGraphicsLineItem_MousePressEvent_Callback = void (*)(QGraphicsLineItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsLineItem_MouseMoveEvent_Callback = void (*)(QGraphicsLineItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsLineItem_MouseReleaseEvent_Callback = void (*)(QGraphicsLineItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsLineItem_MouseDoubleClickEvent_Callback = void (*)(QGraphicsLineItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsLineItem_WheelEvent_Callback = void (*)(QGraphicsLineItem*, QGraphicsSceneWheelEvent*);
    using QGraphicsLineItem_InputMethodEvent_Callback = void (*)(QGraphicsLineItem*, QInputMethodEvent*);
    using QGraphicsLineItem_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsLineItem*, int);
    using QGraphicsLineItem_ItemChange_Callback = QVariant* (*)(QGraphicsLineItem*, int, QVariant*);
    using QGraphicsLineItem::addToIndex;
    using QGraphicsLineItem::prepareGeometryChange;
    using QGraphicsLineItem::removeFromIndex;
    using QGraphicsLineItem::updateMicroFocus;

    // Instance callback storage
    QGraphicsLineItem_BoundingRect_Callback qgraphicslineitem_boundingrect_callback = nullptr;
    QGraphicsLineItem_Shape_Callback qgraphicslineitem_shape_callback = nullptr;
    QGraphicsLineItem_Contains_Callback qgraphicslineitem_contains_callback = nullptr;
    QGraphicsLineItem_Paint_Callback qgraphicslineitem_paint_callback = nullptr;
    QGraphicsLineItem_IsObscuredBy_Callback qgraphicslineitem_isobscuredby_callback = nullptr;
    QGraphicsLineItem_OpaqueArea_Callback qgraphicslineitem_opaquearea_callback = nullptr;
    QGraphicsLineItem_Type_Callback qgraphicslineitem_type_callback = nullptr;
    QGraphicsLineItem_SupportsExtension_Callback qgraphicslineitem_supportsextension_callback = nullptr;
    QGraphicsLineItem_SetExtension_Callback qgraphicslineitem_setextension_callback = nullptr;
    QGraphicsLineItem_Extension_Callback qgraphicslineitem_extension_callback = nullptr;
    QGraphicsLineItem_Advance_Callback qgraphicslineitem_advance_callback = nullptr;
    QGraphicsLineItem_CollidesWithItem_Callback qgraphicslineitem_collideswithitem_callback = nullptr;
    QGraphicsLineItem_CollidesWithPath_Callback qgraphicslineitem_collideswithpath_callback = nullptr;
    QGraphicsLineItem_SceneEventFilter_Callback qgraphicslineitem_sceneeventfilter_callback = nullptr;
    QGraphicsLineItem_SceneEvent_Callback qgraphicslineitem_sceneevent_callback = nullptr;
    QGraphicsLineItem_ContextMenuEvent_Callback qgraphicslineitem_contextmenuevent_callback = nullptr;
    QGraphicsLineItem_DragEnterEvent_Callback qgraphicslineitem_dragenterevent_callback = nullptr;
    QGraphicsLineItem_DragLeaveEvent_Callback qgraphicslineitem_dragleaveevent_callback = nullptr;
    QGraphicsLineItem_DragMoveEvent_Callback qgraphicslineitem_dragmoveevent_callback = nullptr;
    QGraphicsLineItem_DropEvent_Callback qgraphicslineitem_dropevent_callback = nullptr;
    QGraphicsLineItem_FocusInEvent_Callback qgraphicslineitem_focusinevent_callback = nullptr;
    QGraphicsLineItem_FocusOutEvent_Callback qgraphicslineitem_focusoutevent_callback = nullptr;
    QGraphicsLineItem_HoverEnterEvent_Callback qgraphicslineitem_hoverenterevent_callback = nullptr;
    QGraphicsLineItem_HoverMoveEvent_Callback qgraphicslineitem_hovermoveevent_callback = nullptr;
    QGraphicsLineItem_HoverLeaveEvent_Callback qgraphicslineitem_hoverleaveevent_callback = nullptr;
    QGraphicsLineItem_KeyPressEvent_Callback qgraphicslineitem_keypressevent_callback = nullptr;
    QGraphicsLineItem_KeyReleaseEvent_Callback qgraphicslineitem_keyreleaseevent_callback = nullptr;
    QGraphicsLineItem_MousePressEvent_Callback qgraphicslineitem_mousepressevent_callback = nullptr;
    QGraphicsLineItem_MouseMoveEvent_Callback qgraphicslineitem_mousemoveevent_callback = nullptr;
    QGraphicsLineItem_MouseReleaseEvent_Callback qgraphicslineitem_mousereleaseevent_callback = nullptr;
    QGraphicsLineItem_MouseDoubleClickEvent_Callback qgraphicslineitem_mousedoubleclickevent_callback = nullptr;
    QGraphicsLineItem_WheelEvent_Callback qgraphicslineitem_wheelevent_callback = nullptr;
    QGraphicsLineItem_InputMethodEvent_Callback qgraphicslineitem_inputmethodevent_callback = nullptr;
    QGraphicsLineItem_InputMethodQuery_Callback qgraphicslineitem_inputmethodquery_callback = nullptr;
    QGraphicsLineItem_ItemChange_Callback qgraphicslineitem_itemchange_callback = nullptr;

    // Access struct
    struct Base : QGraphicsLineItem {
        using QGraphicsLineItem::contextMenuEvent;
        using QGraphicsLineItem::dragEnterEvent;
        using QGraphicsLineItem::dragLeaveEvent;
        using QGraphicsLineItem::dragMoveEvent;
        using QGraphicsLineItem::dropEvent;
        using QGraphicsLineItem::extension;
        using QGraphicsLineItem::focusInEvent;
        using QGraphicsLineItem::focusOutEvent;
        using QGraphicsLineItem::hoverEnterEvent;
        using QGraphicsLineItem::hoverLeaveEvent;
        using QGraphicsLineItem::hoverMoveEvent;
        using QGraphicsLineItem::inputMethodEvent;
        using QGraphicsLineItem::inputMethodQuery;
        using QGraphicsLineItem::itemChange;
        using QGraphicsLineItem::keyPressEvent;
        using QGraphicsLineItem::keyReleaseEvent;
        using QGraphicsLineItem::mouseDoubleClickEvent;
        using QGraphicsLineItem::mouseMoveEvent;
        using QGraphicsLineItem::mousePressEvent;
        using QGraphicsLineItem::mouseReleaseEvent;
        using QGraphicsLineItem::sceneEvent;
        using QGraphicsLineItem::sceneEventFilter;
        using QGraphicsLineItem::setExtension;
        using QGraphicsLineItem::supportsExtension;
        using QGraphicsLineItem::wheelEvent;
    };

    VirtualQGraphicsLineItem() : QGraphicsLineItem() {};
    VirtualQGraphicsLineItem(const QLineF& line) : QGraphicsLineItem(line) {};
    VirtualQGraphicsLineItem(qreal x1, qreal y1, qreal x2, qreal y2) : QGraphicsLineItem(x1, y1, x2, y2) {};
    VirtualQGraphicsLineItem(QGraphicsItem* parent) : QGraphicsLineItem(parent) {};
    VirtualQGraphicsLineItem(const QLineF& line, QGraphicsItem* parent) : QGraphicsLineItem(line, parent) {};
    VirtualQGraphicsLineItem(qreal x1, qreal y1, qreal x2, qreal y2, QGraphicsItem* parent) : QGraphicsLineItem(x1, y1, x2, y2, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicslineitem_boundingrect_callback) {
            QRectF* callback_ret = qgraphicslineitem_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsLineItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicslineitem_shape_callback) {
            QPainterPath* callback_ret = qgraphicslineitem_shape_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsLineItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicslineitem_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qgraphicslineitem_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsLineItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicslineitem_paint_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qgraphicslineitem_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsLineItem::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicslineitem_isobscuredby_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;
            bool callback_ret = qgraphicslineitem_isobscuredby_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsLineItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicslineitem_opaquearea_callback) {
            QPainterPath* callback_ret = qgraphicslineitem_opaquearea_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsLineItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicslineitem_type_callback) {
            int callback_ret = qgraphicslineitem_type_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsLineItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicslineitem_supportsextension_callback) {
            int cbval1 = static_cast<int>(extension);
            bool callback_ret = qgraphicslineitem_supportsextension_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsLineItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicslineitem_setextension_callback) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);
            qgraphicslineitem_setextension_callback(this, cbval1, cbval2);
            return;
        }
        QGraphicsLineItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicslineitem_extension_callback) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);
            QVariant* callback_ret = qgraphicslineitem_extension_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsLineItem::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicslineitem_advance_callback) {
            int cbval1 = phase;
            qgraphicslineitem_advance_callback(this, cbval1);
            return;
        }
        QGraphicsLineItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicslineitem_collideswithitem_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicslineitem_collideswithitem_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsLineItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicslineitem_collideswithpath_callback) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicslineitem_collideswithpath_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsLineItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicslineitem_sceneeventfilter_callback) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicslineitem_sceneeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsLineItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicslineitem_sceneevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicslineitem_sceneevent_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsLineItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicslineitem_contextmenuevent_callback) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;
            qgraphicslineitem_contextmenuevent_callback(this, cbval1);
            return;
        }
        QGraphicsLineItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicslineitem_dragenterevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicslineitem_dragenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsLineItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicslineitem_dragleaveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicslineitem_dragleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsLineItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicslineitem_dragmoveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicslineitem_dragmoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsLineItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicslineitem_dropevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicslineitem_dropevent_callback(this, cbval1);
            return;
        }
        QGraphicsLineItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicslineitem_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicslineitem_focusinevent_callback(this, cbval1);
            return;
        }
        QGraphicsLineItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicslineitem_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicslineitem_focusoutevent_callback(this, cbval1);
            return;
        }
        QGraphicsLineItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicslineitem_hoverenterevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicslineitem_hoverenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsLineItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicslineitem_hovermoveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicslineitem_hovermoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsLineItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicslineitem_hoverleaveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicslineitem_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsLineItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicslineitem_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicslineitem_keypressevent_callback(this, cbval1);
            return;
        }
        QGraphicsLineItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicslineitem_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicslineitem_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsLineItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicslineitem_mousepressevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicslineitem_mousepressevent_callback(this, cbval1);
            return;
        }
        QGraphicsLineItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicslineitem_mousemoveevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicslineitem_mousemoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsLineItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicslineitem_mousereleaseevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicslineitem_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsLineItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicslineitem_mousedoubleclickevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicslineitem_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QGraphicsLineItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicslineitem_wheelevent_callback) {
            QGraphicsSceneWheelEvent* cbval1 = event;
            qgraphicslineitem_wheelevent_callback(this, cbval1);
            return;
        }
        QGraphicsLineItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicslineitem_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qgraphicslineitem_inputmethodevent_callback(this, cbval1);
            return;
        }
        QGraphicsLineItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicslineitem_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qgraphicslineitem_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsLineItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicslineitem_itemchange_callback) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            QVariant* callback_ret = qgraphicslineitem_itemchange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsLineItem::itemChange(change, value);
    }

    // Friend functions
    friend bool QGraphicsLineItem_SuperSupportsExtension(const QGraphicsLineItem* self, int extension);
    friend void QGraphicsLineItem_SuperSetExtension(QGraphicsLineItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsLineItem_SuperExtension(const QGraphicsLineItem* self, const QVariant* variant);
    friend bool QGraphicsLineItem_SuperSceneEventFilter(QGraphicsLineItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsLineItem_SuperSceneEvent(QGraphicsLineItem* self, QEvent* event);
    friend void QGraphicsLineItem_SuperContextMenuEvent(QGraphicsLineItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsLineItem_SuperDragEnterEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsLineItem_SuperDragLeaveEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsLineItem_SuperDragMoveEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsLineItem_SuperDropEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsLineItem_SuperFocusInEvent(QGraphicsLineItem* self, QFocusEvent* event);
    friend void QGraphicsLineItem_SuperFocusOutEvent(QGraphicsLineItem* self, QFocusEvent* event);
    friend void QGraphicsLineItem_SuperHoverEnterEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsLineItem_SuperHoverMoveEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsLineItem_SuperHoverLeaveEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsLineItem_SuperKeyPressEvent(QGraphicsLineItem* self, QKeyEvent* event);
    friend void QGraphicsLineItem_SuperKeyReleaseEvent(QGraphicsLineItem* self, QKeyEvent* event);
    friend void QGraphicsLineItem_SuperMousePressEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsLineItem_SuperMouseMoveEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsLineItem_SuperMouseReleaseEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsLineItem_SuperMouseDoubleClickEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsLineItem_SuperWheelEvent(QGraphicsLineItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsLineItem_SuperInputMethodEvent(QGraphicsLineItem* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsLineItem_SuperInputMethodQuery(const QGraphicsLineItem* self, int query);
    friend QVariant* QGraphicsLineItem_SuperItemChange(QGraphicsLineItem* self, int change, const QVariant* value);
};

// This class is a subclass of QGraphicsPixmapItem
class VirtualQGraphicsPixmapItem final : public QGraphicsPixmapItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsItem::Extension;
    using QGraphicsPixmapItem_BoundingRect_Callback = QRectF* (*)(const QGraphicsPixmapItem*);
    using QGraphicsPixmapItem_Shape_Callback = QPainterPath* (*)(const QGraphicsPixmapItem*);
    using QGraphicsPixmapItem_Contains_Callback = bool (*)(const QGraphicsPixmapItem*, QPointF*);
    using QGraphicsPixmapItem_Paint_Callback = void (*)(QGraphicsPixmapItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsPixmapItem_IsObscuredBy_Callback = bool (*)(const QGraphicsPixmapItem*, QGraphicsItem*);
    using QGraphicsPixmapItem_OpaqueArea_Callback = QPainterPath* (*)(const QGraphicsPixmapItem*);
    using QGraphicsPixmapItem_Type_Callback = int (*)(const QGraphicsPixmapItem*);
    using QGraphicsPixmapItem_SupportsExtension_Callback = bool (*)(const QGraphicsPixmapItem*, int);
    using QGraphicsPixmapItem_SetExtension_Callback = void (*)(QGraphicsPixmapItem*, int, QVariant*);
    using QGraphicsPixmapItem_Extension_Callback = QVariant* (*)(const QGraphicsPixmapItem*, QVariant*);
    using QGraphicsPixmapItem_Advance_Callback = void (*)(QGraphicsPixmapItem*, int);
    using QGraphicsPixmapItem_CollidesWithItem_Callback = bool (*)(const QGraphicsPixmapItem*, QGraphicsItem*, int);
    using QGraphicsPixmapItem_CollidesWithPath_Callback = bool (*)(const QGraphicsPixmapItem*, QPainterPath*, int);
    using QGraphicsPixmapItem_SceneEventFilter_Callback = bool (*)(QGraphicsPixmapItem*, QGraphicsItem*, QEvent*);
    using QGraphicsPixmapItem_SceneEvent_Callback = bool (*)(QGraphicsPixmapItem*, QEvent*);
    using QGraphicsPixmapItem_ContextMenuEvent_Callback = void (*)(QGraphicsPixmapItem*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsPixmapItem_DragEnterEvent_Callback = void (*)(QGraphicsPixmapItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsPixmapItem_DragLeaveEvent_Callback = void (*)(QGraphicsPixmapItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsPixmapItem_DragMoveEvent_Callback = void (*)(QGraphicsPixmapItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsPixmapItem_DropEvent_Callback = void (*)(QGraphicsPixmapItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsPixmapItem_FocusInEvent_Callback = void (*)(QGraphicsPixmapItem*, QFocusEvent*);
    using QGraphicsPixmapItem_FocusOutEvent_Callback = void (*)(QGraphicsPixmapItem*, QFocusEvent*);
    using QGraphicsPixmapItem_HoverEnterEvent_Callback = void (*)(QGraphicsPixmapItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsPixmapItem_HoverMoveEvent_Callback = void (*)(QGraphicsPixmapItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsPixmapItem_HoverLeaveEvent_Callback = void (*)(QGraphicsPixmapItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsPixmapItem_KeyPressEvent_Callback = void (*)(QGraphicsPixmapItem*, QKeyEvent*);
    using QGraphicsPixmapItem_KeyReleaseEvent_Callback = void (*)(QGraphicsPixmapItem*, QKeyEvent*);
    using QGraphicsPixmapItem_MousePressEvent_Callback = void (*)(QGraphicsPixmapItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsPixmapItem_MouseMoveEvent_Callback = void (*)(QGraphicsPixmapItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsPixmapItem_MouseReleaseEvent_Callback = void (*)(QGraphicsPixmapItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsPixmapItem_MouseDoubleClickEvent_Callback = void (*)(QGraphicsPixmapItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsPixmapItem_WheelEvent_Callback = void (*)(QGraphicsPixmapItem*, QGraphicsSceneWheelEvent*);
    using QGraphicsPixmapItem_InputMethodEvent_Callback = void (*)(QGraphicsPixmapItem*, QInputMethodEvent*);
    using QGraphicsPixmapItem_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsPixmapItem*, int);
    using QGraphicsPixmapItem_ItemChange_Callback = QVariant* (*)(QGraphicsPixmapItem*, int, QVariant*);
    using QGraphicsPixmapItem::addToIndex;
    using QGraphicsPixmapItem::prepareGeometryChange;
    using QGraphicsPixmapItem::removeFromIndex;
    using QGraphicsPixmapItem::updateMicroFocus;

    // Instance callback storage
    QGraphicsPixmapItem_BoundingRect_Callback qgraphicspixmapitem_boundingrect_callback = nullptr;
    QGraphicsPixmapItem_Shape_Callback qgraphicspixmapitem_shape_callback = nullptr;
    QGraphicsPixmapItem_Contains_Callback qgraphicspixmapitem_contains_callback = nullptr;
    QGraphicsPixmapItem_Paint_Callback qgraphicspixmapitem_paint_callback = nullptr;
    QGraphicsPixmapItem_IsObscuredBy_Callback qgraphicspixmapitem_isobscuredby_callback = nullptr;
    QGraphicsPixmapItem_OpaqueArea_Callback qgraphicspixmapitem_opaquearea_callback = nullptr;
    QGraphicsPixmapItem_Type_Callback qgraphicspixmapitem_type_callback = nullptr;
    QGraphicsPixmapItem_SupportsExtension_Callback qgraphicspixmapitem_supportsextension_callback = nullptr;
    QGraphicsPixmapItem_SetExtension_Callback qgraphicspixmapitem_setextension_callback = nullptr;
    QGraphicsPixmapItem_Extension_Callback qgraphicspixmapitem_extension_callback = nullptr;
    QGraphicsPixmapItem_Advance_Callback qgraphicspixmapitem_advance_callback = nullptr;
    QGraphicsPixmapItem_CollidesWithItem_Callback qgraphicspixmapitem_collideswithitem_callback = nullptr;
    QGraphicsPixmapItem_CollidesWithPath_Callback qgraphicspixmapitem_collideswithpath_callback = nullptr;
    QGraphicsPixmapItem_SceneEventFilter_Callback qgraphicspixmapitem_sceneeventfilter_callback = nullptr;
    QGraphicsPixmapItem_SceneEvent_Callback qgraphicspixmapitem_sceneevent_callback = nullptr;
    QGraphicsPixmapItem_ContextMenuEvent_Callback qgraphicspixmapitem_contextmenuevent_callback = nullptr;
    QGraphicsPixmapItem_DragEnterEvent_Callback qgraphicspixmapitem_dragenterevent_callback = nullptr;
    QGraphicsPixmapItem_DragLeaveEvent_Callback qgraphicspixmapitem_dragleaveevent_callback = nullptr;
    QGraphicsPixmapItem_DragMoveEvent_Callback qgraphicspixmapitem_dragmoveevent_callback = nullptr;
    QGraphicsPixmapItem_DropEvent_Callback qgraphicspixmapitem_dropevent_callback = nullptr;
    QGraphicsPixmapItem_FocusInEvent_Callback qgraphicspixmapitem_focusinevent_callback = nullptr;
    QGraphicsPixmapItem_FocusOutEvent_Callback qgraphicspixmapitem_focusoutevent_callback = nullptr;
    QGraphicsPixmapItem_HoverEnterEvent_Callback qgraphicspixmapitem_hoverenterevent_callback = nullptr;
    QGraphicsPixmapItem_HoverMoveEvent_Callback qgraphicspixmapitem_hovermoveevent_callback = nullptr;
    QGraphicsPixmapItem_HoverLeaveEvent_Callback qgraphicspixmapitem_hoverleaveevent_callback = nullptr;
    QGraphicsPixmapItem_KeyPressEvent_Callback qgraphicspixmapitem_keypressevent_callback = nullptr;
    QGraphicsPixmapItem_KeyReleaseEvent_Callback qgraphicspixmapitem_keyreleaseevent_callback = nullptr;
    QGraphicsPixmapItem_MousePressEvent_Callback qgraphicspixmapitem_mousepressevent_callback = nullptr;
    QGraphicsPixmapItem_MouseMoveEvent_Callback qgraphicspixmapitem_mousemoveevent_callback = nullptr;
    QGraphicsPixmapItem_MouseReleaseEvent_Callback qgraphicspixmapitem_mousereleaseevent_callback = nullptr;
    QGraphicsPixmapItem_MouseDoubleClickEvent_Callback qgraphicspixmapitem_mousedoubleclickevent_callback = nullptr;
    QGraphicsPixmapItem_WheelEvent_Callback qgraphicspixmapitem_wheelevent_callback = nullptr;
    QGraphicsPixmapItem_InputMethodEvent_Callback qgraphicspixmapitem_inputmethodevent_callback = nullptr;
    QGraphicsPixmapItem_InputMethodQuery_Callback qgraphicspixmapitem_inputmethodquery_callback = nullptr;
    QGraphicsPixmapItem_ItemChange_Callback qgraphicspixmapitem_itemchange_callback = nullptr;

    // Access struct
    struct Base : QGraphicsPixmapItem {
        using QGraphicsPixmapItem::contextMenuEvent;
        using QGraphicsPixmapItem::dragEnterEvent;
        using QGraphicsPixmapItem::dragLeaveEvent;
        using QGraphicsPixmapItem::dragMoveEvent;
        using QGraphicsPixmapItem::dropEvent;
        using QGraphicsPixmapItem::extension;
        using QGraphicsPixmapItem::focusInEvent;
        using QGraphicsPixmapItem::focusOutEvent;
        using QGraphicsPixmapItem::hoverEnterEvent;
        using QGraphicsPixmapItem::hoverLeaveEvent;
        using QGraphicsPixmapItem::hoverMoveEvent;
        using QGraphicsPixmapItem::inputMethodEvent;
        using QGraphicsPixmapItem::inputMethodQuery;
        using QGraphicsPixmapItem::itemChange;
        using QGraphicsPixmapItem::keyPressEvent;
        using QGraphicsPixmapItem::keyReleaseEvent;
        using QGraphicsPixmapItem::mouseDoubleClickEvent;
        using QGraphicsPixmapItem::mouseMoveEvent;
        using QGraphicsPixmapItem::mousePressEvent;
        using QGraphicsPixmapItem::mouseReleaseEvent;
        using QGraphicsPixmapItem::sceneEvent;
        using QGraphicsPixmapItem::sceneEventFilter;
        using QGraphicsPixmapItem::setExtension;
        using QGraphicsPixmapItem::supportsExtension;
        using QGraphicsPixmapItem::wheelEvent;
    };

    VirtualQGraphicsPixmapItem() : QGraphicsPixmapItem() {};
    VirtualQGraphicsPixmapItem(const QPixmap& pixmap) : QGraphicsPixmapItem(pixmap) {};
    VirtualQGraphicsPixmapItem(QGraphicsItem* parent) : QGraphicsPixmapItem(parent) {};
    VirtualQGraphicsPixmapItem(const QPixmap& pixmap, QGraphicsItem* parent) : QGraphicsPixmapItem(pixmap, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicspixmapitem_boundingrect_callback) {
            QRectF* callback_ret = qgraphicspixmapitem_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsPixmapItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicspixmapitem_shape_callback) {
            QPainterPath* callback_ret = qgraphicspixmapitem_shape_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsPixmapItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicspixmapitem_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qgraphicspixmapitem_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPixmapItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicspixmapitem_paint_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qgraphicspixmapitem_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsPixmapItem::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicspixmapitem_isobscuredby_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;
            bool callback_ret = qgraphicspixmapitem_isobscuredby_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPixmapItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicspixmapitem_opaquearea_callback) {
            QPainterPath* callback_ret = qgraphicspixmapitem_opaquearea_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsPixmapItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicspixmapitem_type_callback) {
            int callback_ret = qgraphicspixmapitem_type_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsPixmapItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicspixmapitem_supportsextension_callback) {
            int cbval1 = static_cast<int>(extension);
            bool callback_ret = qgraphicspixmapitem_supportsextension_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPixmapItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicspixmapitem_setextension_callback) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);
            qgraphicspixmapitem_setextension_callback(this, cbval1, cbval2);
            return;
        }
        QGraphicsPixmapItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicspixmapitem_extension_callback) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);
            QVariant* callback_ret = qgraphicspixmapitem_extension_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsPixmapItem::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicspixmapitem_advance_callback) {
            int cbval1 = phase;
            qgraphicspixmapitem_advance_callback(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicspixmapitem_collideswithitem_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicspixmapitem_collideswithitem_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsPixmapItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicspixmapitem_collideswithpath_callback) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicspixmapitem_collideswithpath_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsPixmapItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicspixmapitem_sceneeventfilter_callback) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicspixmapitem_sceneeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsPixmapItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicspixmapitem_sceneevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicspixmapitem_sceneevent_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPixmapItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicspixmapitem_contextmenuevent_callback) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;
            qgraphicspixmapitem_contextmenuevent_callback(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspixmapitem_dragenterevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicspixmapitem_dragenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspixmapitem_dragleaveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicspixmapitem_dragleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspixmapitem_dragmoveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicspixmapitem_dragmoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspixmapitem_dropevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicspixmapitem_dropevent_callback(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicspixmapitem_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicspixmapitem_focusinevent_callback(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicspixmapitem_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicspixmapitem_focusoutevent_callback(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicspixmapitem_hoverenterevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicspixmapitem_hoverenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicspixmapitem_hovermoveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicspixmapitem_hovermoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicspixmapitem_hoverleaveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicspixmapitem_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicspixmapitem_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicspixmapitem_keypressevent_callback(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicspixmapitem_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicspixmapitem_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspixmapitem_mousepressevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicspixmapitem_mousepressevent_callback(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspixmapitem_mousemoveevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicspixmapitem_mousemoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspixmapitem_mousereleaseevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicspixmapitem_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspixmapitem_mousedoubleclickevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicspixmapitem_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicspixmapitem_wheelevent_callback) {
            QGraphicsSceneWheelEvent* cbval1 = event;
            qgraphicspixmapitem_wheelevent_callback(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicspixmapitem_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qgraphicspixmapitem_inputmethodevent_callback(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicspixmapitem_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qgraphicspixmapitem_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsPixmapItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicspixmapitem_itemchange_callback) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            QVariant* callback_ret = qgraphicspixmapitem_itemchange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsPixmapItem::itemChange(change, value);
    }

    // Friend functions
    friend bool QGraphicsPixmapItem_SuperSupportsExtension(const QGraphicsPixmapItem* self, int extension);
    friend void QGraphicsPixmapItem_SuperSetExtension(QGraphicsPixmapItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsPixmapItem_SuperExtension(const QGraphicsPixmapItem* self, const QVariant* variant);
    friend bool QGraphicsPixmapItem_SuperSceneEventFilter(QGraphicsPixmapItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsPixmapItem_SuperSceneEvent(QGraphicsPixmapItem* self, QEvent* event);
    friend void QGraphicsPixmapItem_SuperContextMenuEvent(QGraphicsPixmapItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsPixmapItem_SuperDragEnterEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPixmapItem_SuperDragLeaveEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPixmapItem_SuperDragMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPixmapItem_SuperDropEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPixmapItem_SuperFocusInEvent(QGraphicsPixmapItem* self, QFocusEvent* event);
    friend void QGraphicsPixmapItem_SuperFocusOutEvent(QGraphicsPixmapItem* self, QFocusEvent* event);
    friend void QGraphicsPixmapItem_SuperHoverEnterEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPixmapItem_SuperHoverMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPixmapItem_SuperHoverLeaveEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPixmapItem_SuperKeyPressEvent(QGraphicsPixmapItem* self, QKeyEvent* event);
    friend void QGraphicsPixmapItem_SuperKeyReleaseEvent(QGraphicsPixmapItem* self, QKeyEvent* event);
    friend void QGraphicsPixmapItem_SuperMousePressEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPixmapItem_SuperMouseMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPixmapItem_SuperMouseReleaseEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPixmapItem_SuperMouseDoubleClickEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPixmapItem_SuperWheelEvent(QGraphicsPixmapItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsPixmapItem_SuperInputMethodEvent(QGraphicsPixmapItem* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsPixmapItem_SuperInputMethodQuery(const QGraphicsPixmapItem* self, int query);
    friend QVariant* QGraphicsPixmapItem_SuperItemChange(QGraphicsPixmapItem* self, int change, const QVariant* value);
};

// This class is a subclass of QGraphicsTextItem
class VirtualQGraphicsTextItem final : public QGraphicsTextItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsItem::Extension;
    using QGraphicsTextItem_MetaObject_Callback = QMetaObject* (*)(const QGraphicsTextItem*);
    using QGraphicsTextItem_Metacast_Callback = void* (*)(QGraphicsTextItem*, const char*);
    using QGraphicsTextItem_Metacall_Callback = int (*)(QGraphicsTextItem*, int, int, void**);
    using QGraphicsTextItem_BoundingRect_Callback = QRectF* (*)(const QGraphicsTextItem*);
    using QGraphicsTextItem_Shape_Callback = QPainterPath* (*)(const QGraphicsTextItem*);
    using QGraphicsTextItem_Contains_Callback = bool (*)(const QGraphicsTextItem*, QPointF*);
    using QGraphicsTextItem_Paint_Callback = void (*)(QGraphicsTextItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsTextItem_IsObscuredBy_Callback = bool (*)(const QGraphicsTextItem*, QGraphicsItem*);
    using QGraphicsTextItem_OpaqueArea_Callback = QPainterPath* (*)(const QGraphicsTextItem*);
    using QGraphicsTextItem_Type_Callback = int (*)(const QGraphicsTextItem*);
    using QGraphicsTextItem_SceneEvent_Callback = bool (*)(QGraphicsTextItem*, QEvent*);
    using QGraphicsTextItem_MousePressEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsTextItem_MouseMoveEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsTextItem_MouseReleaseEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsTextItem_MouseDoubleClickEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsTextItem_ContextMenuEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsTextItem_KeyPressEvent_Callback = void (*)(QGraphicsTextItem*, QKeyEvent*);
    using QGraphicsTextItem_KeyReleaseEvent_Callback = void (*)(QGraphicsTextItem*, QKeyEvent*);
    using QGraphicsTextItem_FocusInEvent_Callback = void (*)(QGraphicsTextItem*, QFocusEvent*);
    using QGraphicsTextItem_FocusOutEvent_Callback = void (*)(QGraphicsTextItem*, QFocusEvent*);
    using QGraphicsTextItem_DragEnterEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsTextItem_DragLeaveEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsTextItem_DragMoveEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsTextItem_DropEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsTextItem_InputMethodEvent_Callback = void (*)(QGraphicsTextItem*, QInputMethodEvent*);
    using QGraphicsTextItem_HoverEnterEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsTextItem_HoverMoveEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsTextItem_HoverLeaveEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsTextItem_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsTextItem*, int);
    using QGraphicsTextItem_SupportsExtension_Callback = bool (*)(const QGraphicsTextItem*, int);
    using QGraphicsTextItem_SetExtension_Callback = void (*)(QGraphicsTextItem*, int, QVariant*);
    using QGraphicsTextItem_Extension_Callback = QVariant* (*)(const QGraphicsTextItem*, QVariant*);
    using QGraphicsTextItem_Event_Callback = bool (*)(QGraphicsTextItem*, QEvent*);
    using QGraphicsTextItem_EventFilter_Callback = bool (*)(QGraphicsTextItem*, QObject*, QEvent*);
    using QGraphicsTextItem_TimerEvent_Callback = void (*)(QGraphicsTextItem*, QTimerEvent*);
    using QGraphicsTextItem_ChildEvent_Callback = void (*)(QGraphicsTextItem*, QChildEvent*);
    using QGraphicsTextItem_CustomEvent_Callback = void (*)(QGraphicsTextItem*, QEvent*);
    using QGraphicsTextItem_ConnectNotify_Callback = void (*)(QGraphicsTextItem*, QMetaMethod*);
    using QGraphicsTextItem_DisconnectNotify_Callback = void (*)(QGraphicsTextItem*, QMetaMethod*);
    using QGraphicsTextItem_Advance_Callback = void (*)(QGraphicsTextItem*, int);
    using QGraphicsTextItem_CollidesWithItem_Callback = bool (*)(const QGraphicsTextItem*, QGraphicsItem*, int);
    using QGraphicsTextItem_CollidesWithPath_Callback = bool (*)(const QGraphicsTextItem*, QPainterPath*, int);
    using QGraphicsTextItem_SceneEventFilter_Callback = bool (*)(QGraphicsTextItem*, QGraphicsItem*, QEvent*);
    using QGraphicsTextItem_WheelEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneWheelEvent*);
    using QGraphicsTextItem_ItemChange_Callback = QVariant* (*)(QGraphicsTextItem*, int, QVariant*);
    using QGraphicsTextItem::addToIndex;
    using QGraphicsTextItem::isSignalConnected;
    using QGraphicsTextItem::prepareGeometryChange;
    using QGraphicsTextItem::receivers;
    using QGraphicsTextItem::removeFromIndex;
    using QGraphicsTextItem::sender;
    using QGraphicsTextItem::senderSignalIndex;
    using QGraphicsTextItem::updateMicroFocus;

    // Instance callback storage
    QGraphicsTextItem_MetaObject_Callback qgraphicstextitem_metaobject_callback = nullptr;
    QGraphicsTextItem_Metacast_Callback qgraphicstextitem_metacast_callback = nullptr;
    QGraphicsTextItem_Metacall_Callback qgraphicstextitem_metacall_callback = nullptr;
    QGraphicsTextItem_BoundingRect_Callback qgraphicstextitem_boundingrect_callback = nullptr;
    QGraphicsTextItem_Shape_Callback qgraphicstextitem_shape_callback = nullptr;
    QGraphicsTextItem_Contains_Callback qgraphicstextitem_contains_callback = nullptr;
    QGraphicsTextItem_Paint_Callback qgraphicstextitem_paint_callback = nullptr;
    QGraphicsTextItem_IsObscuredBy_Callback qgraphicstextitem_isobscuredby_callback = nullptr;
    QGraphicsTextItem_OpaqueArea_Callback qgraphicstextitem_opaquearea_callback = nullptr;
    QGraphicsTextItem_Type_Callback qgraphicstextitem_type_callback = nullptr;
    QGraphicsTextItem_SceneEvent_Callback qgraphicstextitem_sceneevent_callback = nullptr;
    QGraphicsTextItem_MousePressEvent_Callback qgraphicstextitem_mousepressevent_callback = nullptr;
    QGraphicsTextItem_MouseMoveEvent_Callback qgraphicstextitem_mousemoveevent_callback = nullptr;
    QGraphicsTextItem_MouseReleaseEvent_Callback qgraphicstextitem_mousereleaseevent_callback = nullptr;
    QGraphicsTextItem_MouseDoubleClickEvent_Callback qgraphicstextitem_mousedoubleclickevent_callback = nullptr;
    QGraphicsTextItem_ContextMenuEvent_Callback qgraphicstextitem_contextmenuevent_callback = nullptr;
    QGraphicsTextItem_KeyPressEvent_Callback qgraphicstextitem_keypressevent_callback = nullptr;
    QGraphicsTextItem_KeyReleaseEvent_Callback qgraphicstextitem_keyreleaseevent_callback = nullptr;
    QGraphicsTextItem_FocusInEvent_Callback qgraphicstextitem_focusinevent_callback = nullptr;
    QGraphicsTextItem_FocusOutEvent_Callback qgraphicstextitem_focusoutevent_callback = nullptr;
    QGraphicsTextItem_DragEnterEvent_Callback qgraphicstextitem_dragenterevent_callback = nullptr;
    QGraphicsTextItem_DragLeaveEvent_Callback qgraphicstextitem_dragleaveevent_callback = nullptr;
    QGraphicsTextItem_DragMoveEvent_Callback qgraphicstextitem_dragmoveevent_callback = nullptr;
    QGraphicsTextItem_DropEvent_Callback qgraphicstextitem_dropevent_callback = nullptr;
    QGraphicsTextItem_InputMethodEvent_Callback qgraphicstextitem_inputmethodevent_callback = nullptr;
    QGraphicsTextItem_HoverEnterEvent_Callback qgraphicstextitem_hoverenterevent_callback = nullptr;
    QGraphicsTextItem_HoverMoveEvent_Callback qgraphicstextitem_hovermoveevent_callback = nullptr;
    QGraphicsTextItem_HoverLeaveEvent_Callback qgraphicstextitem_hoverleaveevent_callback = nullptr;
    QGraphicsTextItem_InputMethodQuery_Callback qgraphicstextitem_inputmethodquery_callback = nullptr;
    QGraphicsTextItem_SupportsExtension_Callback qgraphicstextitem_supportsextension_callback = nullptr;
    QGraphicsTextItem_SetExtension_Callback qgraphicstextitem_setextension_callback = nullptr;
    QGraphicsTextItem_Extension_Callback qgraphicstextitem_extension_callback = nullptr;
    QGraphicsTextItem_Event_Callback qgraphicstextitem_event_callback = nullptr;
    QGraphicsTextItem_EventFilter_Callback qgraphicstextitem_eventfilter_callback = nullptr;
    QGraphicsTextItem_TimerEvent_Callback qgraphicstextitem_timerevent_callback = nullptr;
    QGraphicsTextItem_ChildEvent_Callback qgraphicstextitem_childevent_callback = nullptr;
    QGraphicsTextItem_CustomEvent_Callback qgraphicstextitem_customevent_callback = nullptr;
    QGraphicsTextItem_ConnectNotify_Callback qgraphicstextitem_connectnotify_callback = nullptr;
    QGraphicsTextItem_DisconnectNotify_Callback qgraphicstextitem_disconnectnotify_callback = nullptr;
    QGraphicsTextItem_Advance_Callback qgraphicstextitem_advance_callback = nullptr;
    QGraphicsTextItem_CollidesWithItem_Callback qgraphicstextitem_collideswithitem_callback = nullptr;
    QGraphicsTextItem_CollidesWithPath_Callback qgraphicstextitem_collideswithpath_callback = nullptr;
    QGraphicsTextItem_SceneEventFilter_Callback qgraphicstextitem_sceneeventfilter_callback = nullptr;
    QGraphicsTextItem_WheelEvent_Callback qgraphicstextitem_wheelevent_callback = nullptr;
    QGraphicsTextItem_ItemChange_Callback qgraphicstextitem_itemchange_callback = nullptr;

    // Access struct
    struct Base : QGraphicsTextItem {
        using QGraphicsTextItem::childEvent;
        using QGraphicsTextItem::connectNotify;
        using QGraphicsTextItem::contextMenuEvent;
        using QGraphicsTextItem::customEvent;
        using QGraphicsTextItem::disconnectNotify;
        using QGraphicsTextItem::dragEnterEvent;
        using QGraphicsTextItem::dragLeaveEvent;
        using QGraphicsTextItem::dragMoveEvent;
        using QGraphicsTextItem::dropEvent;
        using QGraphicsTextItem::event;
        using QGraphicsTextItem::extension;
        using QGraphicsTextItem::focusInEvent;
        using QGraphicsTextItem::focusOutEvent;
        using QGraphicsTextItem::hoverEnterEvent;
        using QGraphicsTextItem::hoverLeaveEvent;
        using QGraphicsTextItem::hoverMoveEvent;
        using QGraphicsTextItem::inputMethodEvent;
        using QGraphicsTextItem::inputMethodQuery;
        using QGraphicsTextItem::itemChange;
        using QGraphicsTextItem::keyPressEvent;
        using QGraphicsTextItem::keyReleaseEvent;
        using QGraphicsTextItem::mouseDoubleClickEvent;
        using QGraphicsTextItem::mouseMoveEvent;
        using QGraphicsTextItem::mousePressEvent;
        using QGraphicsTextItem::mouseReleaseEvent;
        using QGraphicsTextItem::sceneEvent;
        using QGraphicsTextItem::sceneEventFilter;
        using QGraphicsTextItem::setExtension;
        using QGraphicsTextItem::supportsExtension;
        using QGraphicsTextItem::timerEvent;
        using QGraphicsTextItem::wheelEvent;
    };

    VirtualQGraphicsTextItem() : QGraphicsTextItem() {};
    VirtualQGraphicsTextItem(const QString& text) : QGraphicsTextItem(text) {};
    VirtualQGraphicsTextItem(QGraphicsItem* parent) : QGraphicsTextItem(parent) {};
    VirtualQGraphicsTextItem(const QString& text, QGraphicsItem* parent) : QGraphicsTextItem(text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicstextitem_metaobject_callback) {
            QMetaObject* callback_ret = qgraphicstextitem_metaobject_callback(this);
            return callback_ret;
        }
        return QGraphicsTextItem::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicstextitem_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgraphicstextitem_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsTextItem::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicstextitem_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgraphicstextitem_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsTextItem::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicstextitem_boundingrect_callback) {
            QRectF* callback_ret = qgraphicstextitem_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsTextItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicstextitem_shape_callback) {
            QPainterPath* callback_ret = qgraphicstextitem_shape_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsTextItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicstextitem_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qgraphicstextitem_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsTextItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicstextitem_paint_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qgraphicstextitem_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsTextItem::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicstextitem_isobscuredby_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;
            bool callback_ret = qgraphicstextitem_isobscuredby_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsTextItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicstextitem_opaquearea_callback) {
            QPainterPath* callback_ret = qgraphicstextitem_opaquearea_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsTextItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicstextitem_type_callback) {
            int callback_ret = qgraphicstextitem_type_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsTextItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicstextitem_sceneevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicstextitem_sceneevent_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsTextItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicstextitem_mousepressevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicstextitem_mousepressevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicstextitem_mousemoveevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicstextitem_mousemoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicstextitem_mousereleaseevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicstextitem_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicstextitem_mousedoubleclickevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicstextitem_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicstextitem_contextmenuevent_callback) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;
            qgraphicstextitem_contextmenuevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicstextitem_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicstextitem_keypressevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicstextitem_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicstextitem_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicstextitem_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicstextitem_focusinevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicstextitem_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicstextitem_focusoutevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicstextitem_dragenterevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicstextitem_dragenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicstextitem_dragleaveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicstextitem_dragleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicstextitem_dragmoveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicstextitem_dragmoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicstextitem_dropevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicstextitem_dropevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicstextitem_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qgraphicstextitem_inputmethodevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicstextitem_hoverenterevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicstextitem_hoverenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicstextitem_hovermoveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicstextitem_hovermoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicstextitem_hoverleaveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicstextitem_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicstextitem_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qgraphicstextitem_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsTextItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicstextitem_supportsextension_callback) {
            int cbval1 = static_cast<int>(extension);
            bool callback_ret = qgraphicstextitem_supportsextension_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsTextItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicstextitem_setextension_callback) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);
            qgraphicstextitem_setextension_callback(this, cbval1, cbval2);
            return;
        }
        QGraphicsTextItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicstextitem_extension_callback) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);
            QVariant* callback_ret = qgraphicstextitem_extension_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsTextItem::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* ev) override {
        if (qgraphicstextitem_event_callback) {
            QEvent* cbval1 = ev;
            bool callback_ret = qgraphicstextitem_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsTextItem::event(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicstextitem_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicstextitem_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsTextItem::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicstextitem_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgraphicstextitem_timerevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicstextitem_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgraphicstextitem_childevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicstextitem_customevent_callback) {
            QEvent* cbval1 = event;
            qgraphicstextitem_customevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicstextitem_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicstextitem_connectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicstextitem_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicstextitem_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicstextitem_advance_callback) {
            int cbval1 = phase;
            qgraphicstextitem_advance_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicstextitem_collideswithitem_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicstextitem_collideswithitem_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsTextItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicstextitem_collideswithpath_callback) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicstextitem_collideswithpath_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsTextItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicstextitem_sceneeventfilter_callback) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicstextitem_sceneeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsTextItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicstextitem_wheelevent_callback) {
            QGraphicsSceneWheelEvent* cbval1 = event;
            qgraphicstextitem_wheelevent_callback(this, cbval1);
            return;
        }
        QGraphicsTextItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicstextitem_itemchange_callback) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            QVariant* callback_ret = qgraphicstextitem_itemchange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsTextItem::itemChange(change, value);
    }

    // Friend functions
    friend bool QGraphicsTextItem_SuperSceneEvent(QGraphicsTextItem* self, QEvent* event);
    friend void QGraphicsTextItem_SuperMousePressEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsTextItem_SuperMouseMoveEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsTextItem_SuperMouseReleaseEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsTextItem_SuperMouseDoubleClickEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsTextItem_SuperContextMenuEvent(QGraphicsTextItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsTextItem_SuperKeyPressEvent(QGraphicsTextItem* self, QKeyEvent* event);
    friend void QGraphicsTextItem_SuperKeyReleaseEvent(QGraphicsTextItem* self, QKeyEvent* event);
    friend void QGraphicsTextItem_SuperFocusInEvent(QGraphicsTextItem* self, QFocusEvent* event);
    friend void QGraphicsTextItem_SuperFocusOutEvent(QGraphicsTextItem* self, QFocusEvent* event);
    friend void QGraphicsTextItem_SuperDragEnterEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsTextItem_SuperDragLeaveEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsTextItem_SuperDragMoveEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsTextItem_SuperDropEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsTextItem_SuperInputMethodEvent(QGraphicsTextItem* self, QInputMethodEvent* event);
    friend void QGraphicsTextItem_SuperHoverEnterEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsTextItem_SuperHoverMoveEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsTextItem_SuperHoverLeaveEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event);
    friend QVariant* QGraphicsTextItem_SuperInputMethodQuery(const QGraphicsTextItem* self, int query);
    friend bool QGraphicsTextItem_SuperSupportsExtension(const QGraphicsTextItem* self, int extension);
    friend void QGraphicsTextItem_SuperSetExtension(QGraphicsTextItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsTextItem_SuperExtension(const QGraphicsTextItem* self, const QVariant* variant);
    friend bool QGraphicsTextItem_SuperEvent(QGraphicsTextItem* self, QEvent* ev);
    friend void QGraphicsTextItem_SuperTimerEvent(QGraphicsTextItem* self, QTimerEvent* event);
    friend void QGraphicsTextItem_SuperChildEvent(QGraphicsTextItem* self, QChildEvent* event);
    friend void QGraphicsTextItem_SuperCustomEvent(QGraphicsTextItem* self, QEvent* event);
    friend void QGraphicsTextItem_SuperConnectNotify(QGraphicsTextItem* self, const QMetaMethod* signal);
    friend void QGraphicsTextItem_SuperDisconnectNotify(QGraphicsTextItem* self, const QMetaMethod* signal);
    friend bool QGraphicsTextItem_SuperSceneEventFilter(QGraphicsTextItem* self, QGraphicsItem* watched, QEvent* event);
    friend void QGraphicsTextItem_SuperWheelEvent(QGraphicsTextItem* self, QGraphicsSceneWheelEvent* event);
    friend QVariant* QGraphicsTextItem_SuperItemChange(QGraphicsTextItem* self, int change, const QVariant* value);
};

// This class is a subclass of QGraphicsSimpleTextItem
class VirtualQGraphicsSimpleTextItem final : public QGraphicsSimpleTextItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsItem::Extension;
    using QGraphicsSimpleTextItem_BoundingRect_Callback = QRectF* (*)(const QGraphicsSimpleTextItem*);
    using QGraphicsSimpleTextItem_Shape_Callback = QPainterPath* (*)(const QGraphicsSimpleTextItem*);
    using QGraphicsSimpleTextItem_Contains_Callback = bool (*)(const QGraphicsSimpleTextItem*, QPointF*);
    using QGraphicsSimpleTextItem_Paint_Callback = void (*)(QGraphicsSimpleTextItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsSimpleTextItem_IsObscuredBy_Callback = bool (*)(const QGraphicsSimpleTextItem*, QGraphicsItem*);
    using QGraphicsSimpleTextItem_OpaqueArea_Callback = QPainterPath* (*)(const QGraphicsSimpleTextItem*);
    using QGraphicsSimpleTextItem_Type_Callback = int (*)(const QGraphicsSimpleTextItem*);
    using QGraphicsSimpleTextItem_SupportsExtension_Callback = bool (*)(const QGraphicsSimpleTextItem*, int);
    using QGraphicsSimpleTextItem_SetExtension_Callback = void (*)(QGraphicsSimpleTextItem*, int, QVariant*);
    using QGraphicsSimpleTextItem_Extension_Callback = QVariant* (*)(const QGraphicsSimpleTextItem*, QVariant*);
    using QGraphicsSimpleTextItem_Advance_Callback = void (*)(QGraphicsSimpleTextItem*, int);
    using QGraphicsSimpleTextItem_CollidesWithItem_Callback = bool (*)(const QGraphicsSimpleTextItem*, QGraphicsItem*, int);
    using QGraphicsSimpleTextItem_CollidesWithPath_Callback = bool (*)(const QGraphicsSimpleTextItem*, QPainterPath*, int);
    using QGraphicsSimpleTextItem_SceneEventFilter_Callback = bool (*)(QGraphicsSimpleTextItem*, QGraphicsItem*, QEvent*);
    using QGraphicsSimpleTextItem_SceneEvent_Callback = bool (*)(QGraphicsSimpleTextItem*, QEvent*);
    using QGraphicsSimpleTextItem_ContextMenuEvent_Callback = void (*)(QGraphicsSimpleTextItem*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsSimpleTextItem_DragEnterEvent_Callback = void (*)(QGraphicsSimpleTextItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsSimpleTextItem_DragLeaveEvent_Callback = void (*)(QGraphicsSimpleTextItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsSimpleTextItem_DragMoveEvent_Callback = void (*)(QGraphicsSimpleTextItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsSimpleTextItem_DropEvent_Callback = void (*)(QGraphicsSimpleTextItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsSimpleTextItem_FocusInEvent_Callback = void (*)(QGraphicsSimpleTextItem*, QFocusEvent*);
    using QGraphicsSimpleTextItem_FocusOutEvent_Callback = void (*)(QGraphicsSimpleTextItem*, QFocusEvent*);
    using QGraphicsSimpleTextItem_HoverEnterEvent_Callback = void (*)(QGraphicsSimpleTextItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsSimpleTextItem_HoverMoveEvent_Callback = void (*)(QGraphicsSimpleTextItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsSimpleTextItem_HoverLeaveEvent_Callback = void (*)(QGraphicsSimpleTextItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsSimpleTextItem_KeyPressEvent_Callback = void (*)(QGraphicsSimpleTextItem*, QKeyEvent*);
    using QGraphicsSimpleTextItem_KeyReleaseEvent_Callback = void (*)(QGraphicsSimpleTextItem*, QKeyEvent*);
    using QGraphicsSimpleTextItem_MousePressEvent_Callback = void (*)(QGraphicsSimpleTextItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsSimpleTextItem_MouseMoveEvent_Callback = void (*)(QGraphicsSimpleTextItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsSimpleTextItem_MouseReleaseEvent_Callback = void (*)(QGraphicsSimpleTextItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsSimpleTextItem_MouseDoubleClickEvent_Callback = void (*)(QGraphicsSimpleTextItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsSimpleTextItem_WheelEvent_Callback = void (*)(QGraphicsSimpleTextItem*, QGraphicsSceneWheelEvent*);
    using QGraphicsSimpleTextItem_InputMethodEvent_Callback = void (*)(QGraphicsSimpleTextItem*, QInputMethodEvent*);
    using QGraphicsSimpleTextItem_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsSimpleTextItem*, int);
    using QGraphicsSimpleTextItem_ItemChange_Callback = QVariant* (*)(QGraphicsSimpleTextItem*, int, QVariant*);
    using QGraphicsSimpleTextItem::addToIndex;
    using QGraphicsSimpleTextItem::prepareGeometryChange;
    using QGraphicsSimpleTextItem::removeFromIndex;
    using QGraphicsSimpleTextItem::updateMicroFocus;

    // Instance callback storage
    QGraphicsSimpleTextItem_BoundingRect_Callback qgraphicssimpletextitem_boundingrect_callback = nullptr;
    QGraphicsSimpleTextItem_Shape_Callback qgraphicssimpletextitem_shape_callback = nullptr;
    QGraphicsSimpleTextItem_Contains_Callback qgraphicssimpletextitem_contains_callback = nullptr;
    QGraphicsSimpleTextItem_Paint_Callback qgraphicssimpletextitem_paint_callback = nullptr;
    QGraphicsSimpleTextItem_IsObscuredBy_Callback qgraphicssimpletextitem_isobscuredby_callback = nullptr;
    QGraphicsSimpleTextItem_OpaqueArea_Callback qgraphicssimpletextitem_opaquearea_callback = nullptr;
    QGraphicsSimpleTextItem_Type_Callback qgraphicssimpletextitem_type_callback = nullptr;
    QGraphicsSimpleTextItem_SupportsExtension_Callback qgraphicssimpletextitem_supportsextension_callback = nullptr;
    QGraphicsSimpleTextItem_SetExtension_Callback qgraphicssimpletextitem_setextension_callback = nullptr;
    QGraphicsSimpleTextItem_Extension_Callback qgraphicssimpletextitem_extension_callback = nullptr;
    QGraphicsSimpleTextItem_Advance_Callback qgraphicssimpletextitem_advance_callback = nullptr;
    QGraphicsSimpleTextItem_CollidesWithItem_Callback qgraphicssimpletextitem_collideswithitem_callback = nullptr;
    QGraphicsSimpleTextItem_CollidesWithPath_Callback qgraphicssimpletextitem_collideswithpath_callback = nullptr;
    QGraphicsSimpleTextItem_SceneEventFilter_Callback qgraphicssimpletextitem_sceneeventfilter_callback = nullptr;
    QGraphicsSimpleTextItem_SceneEvent_Callback qgraphicssimpletextitem_sceneevent_callback = nullptr;
    QGraphicsSimpleTextItem_ContextMenuEvent_Callback qgraphicssimpletextitem_contextmenuevent_callback = nullptr;
    QGraphicsSimpleTextItem_DragEnterEvent_Callback qgraphicssimpletextitem_dragenterevent_callback = nullptr;
    QGraphicsSimpleTextItem_DragLeaveEvent_Callback qgraphicssimpletextitem_dragleaveevent_callback = nullptr;
    QGraphicsSimpleTextItem_DragMoveEvent_Callback qgraphicssimpletextitem_dragmoveevent_callback = nullptr;
    QGraphicsSimpleTextItem_DropEvent_Callback qgraphicssimpletextitem_dropevent_callback = nullptr;
    QGraphicsSimpleTextItem_FocusInEvent_Callback qgraphicssimpletextitem_focusinevent_callback = nullptr;
    QGraphicsSimpleTextItem_FocusOutEvent_Callback qgraphicssimpletextitem_focusoutevent_callback = nullptr;
    QGraphicsSimpleTextItem_HoverEnterEvent_Callback qgraphicssimpletextitem_hoverenterevent_callback = nullptr;
    QGraphicsSimpleTextItem_HoverMoveEvent_Callback qgraphicssimpletextitem_hovermoveevent_callback = nullptr;
    QGraphicsSimpleTextItem_HoverLeaveEvent_Callback qgraphicssimpletextitem_hoverleaveevent_callback = nullptr;
    QGraphicsSimpleTextItem_KeyPressEvent_Callback qgraphicssimpletextitem_keypressevent_callback = nullptr;
    QGraphicsSimpleTextItem_KeyReleaseEvent_Callback qgraphicssimpletextitem_keyreleaseevent_callback = nullptr;
    QGraphicsSimpleTextItem_MousePressEvent_Callback qgraphicssimpletextitem_mousepressevent_callback = nullptr;
    QGraphicsSimpleTextItem_MouseMoveEvent_Callback qgraphicssimpletextitem_mousemoveevent_callback = nullptr;
    QGraphicsSimpleTextItem_MouseReleaseEvent_Callback qgraphicssimpletextitem_mousereleaseevent_callback = nullptr;
    QGraphicsSimpleTextItem_MouseDoubleClickEvent_Callback qgraphicssimpletextitem_mousedoubleclickevent_callback = nullptr;
    QGraphicsSimpleTextItem_WheelEvent_Callback qgraphicssimpletextitem_wheelevent_callback = nullptr;
    QGraphicsSimpleTextItem_InputMethodEvent_Callback qgraphicssimpletextitem_inputmethodevent_callback = nullptr;
    QGraphicsSimpleTextItem_InputMethodQuery_Callback qgraphicssimpletextitem_inputmethodquery_callback = nullptr;
    QGraphicsSimpleTextItem_ItemChange_Callback qgraphicssimpletextitem_itemchange_callback = nullptr;

    // Access struct
    struct Base : QGraphicsSimpleTextItem {
        using QGraphicsSimpleTextItem::contextMenuEvent;
        using QGraphicsSimpleTextItem::dragEnterEvent;
        using QGraphicsSimpleTextItem::dragLeaveEvent;
        using QGraphicsSimpleTextItem::dragMoveEvent;
        using QGraphicsSimpleTextItem::dropEvent;
        using QGraphicsSimpleTextItem::extension;
        using QGraphicsSimpleTextItem::focusInEvent;
        using QGraphicsSimpleTextItem::focusOutEvent;
        using QGraphicsSimpleTextItem::hoverEnterEvent;
        using QGraphicsSimpleTextItem::hoverLeaveEvent;
        using QGraphicsSimpleTextItem::hoverMoveEvent;
        using QGraphicsSimpleTextItem::inputMethodEvent;
        using QGraphicsSimpleTextItem::inputMethodQuery;
        using QGraphicsSimpleTextItem::itemChange;
        using QGraphicsSimpleTextItem::keyPressEvent;
        using QGraphicsSimpleTextItem::keyReleaseEvent;
        using QGraphicsSimpleTextItem::mouseDoubleClickEvent;
        using QGraphicsSimpleTextItem::mouseMoveEvent;
        using QGraphicsSimpleTextItem::mousePressEvent;
        using QGraphicsSimpleTextItem::mouseReleaseEvent;
        using QGraphicsSimpleTextItem::sceneEvent;
        using QGraphicsSimpleTextItem::sceneEventFilter;
        using QGraphicsSimpleTextItem::setExtension;
        using QGraphicsSimpleTextItem::supportsExtension;
        using QGraphicsSimpleTextItem::wheelEvent;
    };

    VirtualQGraphicsSimpleTextItem() : QGraphicsSimpleTextItem() {};
    VirtualQGraphicsSimpleTextItem(const QString& text) : QGraphicsSimpleTextItem(text) {};
    VirtualQGraphicsSimpleTextItem(QGraphicsItem* parent) : QGraphicsSimpleTextItem(parent) {};
    VirtualQGraphicsSimpleTextItem(const QString& text, QGraphicsItem* parent) : QGraphicsSimpleTextItem(text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicssimpletextitem_boundingrect_callback) {
            QRectF* callback_ret = qgraphicssimpletextitem_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsSimpleTextItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicssimpletextitem_shape_callback) {
            QPainterPath* callback_ret = qgraphicssimpletextitem_shape_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsSimpleTextItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicssimpletextitem_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qgraphicssimpletextitem_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsSimpleTextItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicssimpletextitem_paint_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qgraphicssimpletextitem_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsSimpleTextItem::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicssimpletextitem_isobscuredby_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;
            bool callback_ret = qgraphicssimpletextitem_isobscuredby_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsSimpleTextItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicssimpletextitem_opaquearea_callback) {
            QPainterPath* callback_ret = qgraphicssimpletextitem_opaquearea_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsSimpleTextItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicssimpletextitem_type_callback) {
            int callback_ret = qgraphicssimpletextitem_type_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsSimpleTextItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicssimpletextitem_supportsextension_callback) {
            int cbval1 = static_cast<int>(extension);
            bool callback_ret = qgraphicssimpletextitem_supportsextension_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsSimpleTextItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicssimpletextitem_setextension_callback) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);
            qgraphicssimpletextitem_setextension_callback(this, cbval1, cbval2);
            return;
        }
        QGraphicsSimpleTextItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicssimpletextitem_extension_callback) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);
            QVariant* callback_ret = qgraphicssimpletextitem_extension_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsSimpleTextItem::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicssimpletextitem_advance_callback) {
            int cbval1 = phase;
            qgraphicssimpletextitem_advance_callback(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicssimpletextitem_collideswithitem_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicssimpletextitem_collideswithitem_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsSimpleTextItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicssimpletextitem_collideswithpath_callback) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicssimpletextitem_collideswithpath_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsSimpleTextItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicssimpletextitem_sceneeventfilter_callback) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicssimpletextitem_sceneeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsSimpleTextItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicssimpletextitem_sceneevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicssimpletextitem_sceneevent_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsSimpleTextItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicssimpletextitem_contextmenuevent_callback) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;
            qgraphicssimpletextitem_contextmenuevent_callback(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicssimpletextitem_dragenterevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicssimpletextitem_dragenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicssimpletextitem_dragleaveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicssimpletextitem_dragleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicssimpletextitem_dragmoveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicssimpletextitem_dragmoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicssimpletextitem_dropevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicssimpletextitem_dropevent_callback(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicssimpletextitem_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicssimpletextitem_focusinevent_callback(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicssimpletextitem_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicssimpletextitem_focusoutevent_callback(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicssimpletextitem_hoverenterevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicssimpletextitem_hoverenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicssimpletextitem_hovermoveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicssimpletextitem_hovermoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicssimpletextitem_hoverleaveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicssimpletextitem_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicssimpletextitem_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicssimpletextitem_keypressevent_callback(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicssimpletextitem_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicssimpletextitem_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicssimpletextitem_mousepressevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicssimpletextitem_mousepressevent_callback(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicssimpletextitem_mousemoveevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicssimpletextitem_mousemoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicssimpletextitem_mousereleaseevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicssimpletextitem_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicssimpletextitem_mousedoubleclickevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicssimpletextitem_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicssimpletextitem_wheelevent_callback) {
            QGraphicsSceneWheelEvent* cbval1 = event;
            qgraphicssimpletextitem_wheelevent_callback(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicssimpletextitem_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qgraphicssimpletextitem_inputmethodevent_callback(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicssimpletextitem_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qgraphicssimpletextitem_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsSimpleTextItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicssimpletextitem_itemchange_callback) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            QVariant* callback_ret = qgraphicssimpletextitem_itemchange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsSimpleTextItem::itemChange(change, value);
    }

    // Friend functions
    friend bool QGraphicsSimpleTextItem_SuperSupportsExtension(const QGraphicsSimpleTextItem* self, int extension);
    friend void QGraphicsSimpleTextItem_SuperSetExtension(QGraphicsSimpleTextItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsSimpleTextItem_SuperExtension(const QGraphicsSimpleTextItem* self, const QVariant* variant);
    friend bool QGraphicsSimpleTextItem_SuperSceneEventFilter(QGraphicsSimpleTextItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsSimpleTextItem_SuperSceneEvent(QGraphicsSimpleTextItem* self, QEvent* event);
    friend void QGraphicsSimpleTextItem_SuperContextMenuEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsSimpleTextItem_SuperDragEnterEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSimpleTextItem_SuperDragLeaveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSimpleTextItem_SuperDragMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSimpleTextItem_SuperDropEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSimpleTextItem_SuperFocusInEvent(QGraphicsSimpleTextItem* self, QFocusEvent* event);
    friend void QGraphicsSimpleTextItem_SuperFocusOutEvent(QGraphicsSimpleTextItem* self, QFocusEvent* event);
    friend void QGraphicsSimpleTextItem_SuperHoverEnterEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsSimpleTextItem_SuperHoverMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsSimpleTextItem_SuperHoverLeaveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsSimpleTextItem_SuperKeyPressEvent(QGraphicsSimpleTextItem* self, QKeyEvent* event);
    friend void QGraphicsSimpleTextItem_SuperKeyReleaseEvent(QGraphicsSimpleTextItem* self, QKeyEvent* event);
    friend void QGraphicsSimpleTextItem_SuperMousePressEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSimpleTextItem_SuperMouseMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSimpleTextItem_SuperMouseReleaseEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSimpleTextItem_SuperMouseDoubleClickEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSimpleTextItem_SuperWheelEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsSimpleTextItem_SuperInputMethodEvent(QGraphicsSimpleTextItem* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsSimpleTextItem_SuperInputMethodQuery(const QGraphicsSimpleTextItem* self, int query);
    friend QVariant* QGraphicsSimpleTextItem_SuperItemChange(QGraphicsSimpleTextItem* self, int change, const QVariant* value);
};

// This class is a subclass of QGraphicsItemGroup
class VirtualQGraphicsItemGroup final : public QGraphicsItemGroup {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsItem::Extension;
    using QGraphicsItemGroup_BoundingRect_Callback = QRectF* (*)(const QGraphicsItemGroup*);
    using QGraphicsItemGroup_Paint_Callback = void (*)(QGraphicsItemGroup*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsItemGroup_IsObscuredBy_Callback = bool (*)(const QGraphicsItemGroup*, QGraphicsItem*);
    using QGraphicsItemGroup_OpaqueArea_Callback = QPainterPath* (*)(const QGraphicsItemGroup*);
    using QGraphicsItemGroup_Type_Callback = int (*)(const QGraphicsItemGroup*);
    using QGraphicsItemGroup_Advance_Callback = void (*)(QGraphicsItemGroup*, int);
    using QGraphicsItemGroup_Shape_Callback = QPainterPath* (*)(const QGraphicsItemGroup*);
    using QGraphicsItemGroup_Contains_Callback = bool (*)(const QGraphicsItemGroup*, QPointF*);
    using QGraphicsItemGroup_CollidesWithItem_Callback = bool (*)(const QGraphicsItemGroup*, QGraphicsItem*, int);
    using QGraphicsItemGroup_CollidesWithPath_Callback = bool (*)(const QGraphicsItemGroup*, QPainterPath*, int);
    using QGraphicsItemGroup_SceneEventFilter_Callback = bool (*)(QGraphicsItemGroup*, QGraphicsItem*, QEvent*);
    using QGraphicsItemGroup_SceneEvent_Callback = bool (*)(QGraphicsItemGroup*, QEvent*);
    using QGraphicsItemGroup_ContextMenuEvent_Callback = void (*)(QGraphicsItemGroup*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsItemGroup_DragEnterEvent_Callback = void (*)(QGraphicsItemGroup*, QGraphicsSceneDragDropEvent*);
    using QGraphicsItemGroup_DragLeaveEvent_Callback = void (*)(QGraphicsItemGroup*, QGraphicsSceneDragDropEvent*);
    using QGraphicsItemGroup_DragMoveEvent_Callback = void (*)(QGraphicsItemGroup*, QGraphicsSceneDragDropEvent*);
    using QGraphicsItemGroup_DropEvent_Callback = void (*)(QGraphicsItemGroup*, QGraphicsSceneDragDropEvent*);
    using QGraphicsItemGroup_FocusInEvent_Callback = void (*)(QGraphicsItemGroup*, QFocusEvent*);
    using QGraphicsItemGroup_FocusOutEvent_Callback = void (*)(QGraphicsItemGroup*, QFocusEvent*);
    using QGraphicsItemGroup_HoverEnterEvent_Callback = void (*)(QGraphicsItemGroup*, QGraphicsSceneHoverEvent*);
    using QGraphicsItemGroup_HoverMoveEvent_Callback = void (*)(QGraphicsItemGroup*, QGraphicsSceneHoverEvent*);
    using QGraphicsItemGroup_HoverLeaveEvent_Callback = void (*)(QGraphicsItemGroup*, QGraphicsSceneHoverEvent*);
    using QGraphicsItemGroup_KeyPressEvent_Callback = void (*)(QGraphicsItemGroup*, QKeyEvent*);
    using QGraphicsItemGroup_KeyReleaseEvent_Callback = void (*)(QGraphicsItemGroup*, QKeyEvent*);
    using QGraphicsItemGroup_MousePressEvent_Callback = void (*)(QGraphicsItemGroup*, QGraphicsSceneMouseEvent*);
    using QGraphicsItemGroup_MouseMoveEvent_Callback = void (*)(QGraphicsItemGroup*, QGraphicsSceneMouseEvent*);
    using QGraphicsItemGroup_MouseReleaseEvent_Callback = void (*)(QGraphicsItemGroup*, QGraphicsSceneMouseEvent*);
    using QGraphicsItemGroup_MouseDoubleClickEvent_Callback = void (*)(QGraphicsItemGroup*, QGraphicsSceneMouseEvent*);
    using QGraphicsItemGroup_WheelEvent_Callback = void (*)(QGraphicsItemGroup*, QGraphicsSceneWheelEvent*);
    using QGraphicsItemGroup_InputMethodEvent_Callback = void (*)(QGraphicsItemGroup*, QInputMethodEvent*);
    using QGraphicsItemGroup_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsItemGroup*, int);
    using QGraphicsItemGroup_ItemChange_Callback = QVariant* (*)(QGraphicsItemGroup*, int, QVariant*);
    using QGraphicsItemGroup_SupportsExtension_Callback = bool (*)(const QGraphicsItemGroup*, int);
    using QGraphicsItemGroup_SetExtension_Callback = void (*)(QGraphicsItemGroup*, int, QVariant*);
    using QGraphicsItemGroup_Extension_Callback = QVariant* (*)(const QGraphicsItemGroup*, QVariant*);
    using QGraphicsItemGroup::addToIndex;
    using QGraphicsItemGroup::prepareGeometryChange;
    using QGraphicsItemGroup::removeFromIndex;
    using QGraphicsItemGroup::updateMicroFocus;

    // Instance callback storage
    QGraphicsItemGroup_BoundingRect_Callback qgraphicsitemgroup_boundingrect_callback = nullptr;
    QGraphicsItemGroup_Paint_Callback qgraphicsitemgroup_paint_callback = nullptr;
    QGraphicsItemGroup_IsObscuredBy_Callback qgraphicsitemgroup_isobscuredby_callback = nullptr;
    QGraphicsItemGroup_OpaqueArea_Callback qgraphicsitemgroup_opaquearea_callback = nullptr;
    QGraphicsItemGroup_Type_Callback qgraphicsitemgroup_type_callback = nullptr;
    QGraphicsItemGroup_Advance_Callback qgraphicsitemgroup_advance_callback = nullptr;
    QGraphicsItemGroup_Shape_Callback qgraphicsitemgroup_shape_callback = nullptr;
    QGraphicsItemGroup_Contains_Callback qgraphicsitemgroup_contains_callback = nullptr;
    QGraphicsItemGroup_CollidesWithItem_Callback qgraphicsitemgroup_collideswithitem_callback = nullptr;
    QGraphicsItemGroup_CollidesWithPath_Callback qgraphicsitemgroup_collideswithpath_callback = nullptr;
    QGraphicsItemGroup_SceneEventFilter_Callback qgraphicsitemgroup_sceneeventfilter_callback = nullptr;
    QGraphicsItemGroup_SceneEvent_Callback qgraphicsitemgroup_sceneevent_callback = nullptr;
    QGraphicsItemGroup_ContextMenuEvent_Callback qgraphicsitemgroup_contextmenuevent_callback = nullptr;
    QGraphicsItemGroup_DragEnterEvent_Callback qgraphicsitemgroup_dragenterevent_callback = nullptr;
    QGraphicsItemGroup_DragLeaveEvent_Callback qgraphicsitemgroup_dragleaveevent_callback = nullptr;
    QGraphicsItemGroup_DragMoveEvent_Callback qgraphicsitemgroup_dragmoveevent_callback = nullptr;
    QGraphicsItemGroup_DropEvent_Callback qgraphicsitemgroup_dropevent_callback = nullptr;
    QGraphicsItemGroup_FocusInEvent_Callback qgraphicsitemgroup_focusinevent_callback = nullptr;
    QGraphicsItemGroup_FocusOutEvent_Callback qgraphicsitemgroup_focusoutevent_callback = nullptr;
    QGraphicsItemGroup_HoverEnterEvent_Callback qgraphicsitemgroup_hoverenterevent_callback = nullptr;
    QGraphicsItemGroup_HoverMoveEvent_Callback qgraphicsitemgroup_hovermoveevent_callback = nullptr;
    QGraphicsItemGroup_HoverLeaveEvent_Callback qgraphicsitemgroup_hoverleaveevent_callback = nullptr;
    QGraphicsItemGroup_KeyPressEvent_Callback qgraphicsitemgroup_keypressevent_callback = nullptr;
    QGraphicsItemGroup_KeyReleaseEvent_Callback qgraphicsitemgroup_keyreleaseevent_callback = nullptr;
    QGraphicsItemGroup_MousePressEvent_Callback qgraphicsitemgroup_mousepressevent_callback = nullptr;
    QGraphicsItemGroup_MouseMoveEvent_Callback qgraphicsitemgroup_mousemoveevent_callback = nullptr;
    QGraphicsItemGroup_MouseReleaseEvent_Callback qgraphicsitemgroup_mousereleaseevent_callback = nullptr;
    QGraphicsItemGroup_MouseDoubleClickEvent_Callback qgraphicsitemgroup_mousedoubleclickevent_callback = nullptr;
    QGraphicsItemGroup_WheelEvent_Callback qgraphicsitemgroup_wheelevent_callback = nullptr;
    QGraphicsItemGroup_InputMethodEvent_Callback qgraphicsitemgroup_inputmethodevent_callback = nullptr;
    QGraphicsItemGroup_InputMethodQuery_Callback qgraphicsitemgroup_inputmethodquery_callback = nullptr;
    QGraphicsItemGroup_ItemChange_Callback qgraphicsitemgroup_itemchange_callback = nullptr;
    QGraphicsItemGroup_SupportsExtension_Callback qgraphicsitemgroup_supportsextension_callback = nullptr;
    QGraphicsItemGroup_SetExtension_Callback qgraphicsitemgroup_setextension_callback = nullptr;
    QGraphicsItemGroup_Extension_Callback qgraphicsitemgroup_extension_callback = nullptr;

    // Access struct
    struct Base : QGraphicsItemGroup {
        using QGraphicsItemGroup::contextMenuEvent;
        using QGraphicsItemGroup::dragEnterEvent;
        using QGraphicsItemGroup::dragLeaveEvent;
        using QGraphicsItemGroup::dragMoveEvent;
        using QGraphicsItemGroup::dropEvent;
        using QGraphicsItemGroup::extension;
        using QGraphicsItemGroup::focusInEvent;
        using QGraphicsItemGroup::focusOutEvent;
        using QGraphicsItemGroup::hoverEnterEvent;
        using QGraphicsItemGroup::hoverLeaveEvent;
        using QGraphicsItemGroup::hoverMoveEvent;
        using QGraphicsItemGroup::inputMethodEvent;
        using QGraphicsItemGroup::inputMethodQuery;
        using QGraphicsItemGroup::itemChange;
        using QGraphicsItemGroup::keyPressEvent;
        using QGraphicsItemGroup::keyReleaseEvent;
        using QGraphicsItemGroup::mouseDoubleClickEvent;
        using QGraphicsItemGroup::mouseMoveEvent;
        using QGraphicsItemGroup::mousePressEvent;
        using QGraphicsItemGroup::mouseReleaseEvent;
        using QGraphicsItemGroup::sceneEvent;
        using QGraphicsItemGroup::sceneEventFilter;
        using QGraphicsItemGroup::setExtension;
        using QGraphicsItemGroup::supportsExtension;
        using QGraphicsItemGroup::wheelEvent;
    };

    VirtualQGraphicsItemGroup() : QGraphicsItemGroup() {};
    VirtualQGraphicsItemGroup(QGraphicsItem* parent) : QGraphicsItemGroup(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicsitemgroup_boundingrect_callback) {
            QRectF* callback_ret = qgraphicsitemgroup_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsItemGroup::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicsitemgroup_paint_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qgraphicsitemgroup_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsItemGroup::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicsitemgroup_isobscuredby_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;
            bool callback_ret = qgraphicsitemgroup_isobscuredby_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsItemGroup::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicsitemgroup_opaquearea_callback) {
            QPainterPath* callback_ret = qgraphicsitemgroup_opaquearea_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsItemGroup::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicsitemgroup_type_callback) {
            int callback_ret = qgraphicsitemgroup_type_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsItemGroup::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicsitemgroup_advance_callback) {
            int cbval1 = phase;
            qgraphicsitemgroup_advance_callback(this, cbval1);
            return;
        }
        QGraphicsItemGroup::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicsitemgroup_shape_callback) {
            QPainterPath* callback_ret = qgraphicsitemgroup_shape_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsItemGroup::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicsitemgroup_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qgraphicsitemgroup_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsItemGroup::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsitemgroup_collideswithitem_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicsitemgroup_collideswithitem_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsItemGroup::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsitemgroup_collideswithpath_callback) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicsitemgroup_collideswithpath_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsItemGroup::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicsitemgroup_sceneeventfilter_callback) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicsitemgroup_sceneeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsItemGroup::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicsitemgroup_sceneevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicsitemgroup_sceneevent_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsItemGroup::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicsitemgroup_contextmenuevent_callback) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;
            qgraphicsitemgroup_contextmenuevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemGroup::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsitemgroup_dragenterevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsitemgroup_dragenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemGroup::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsitemgroup_dragleaveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsitemgroup_dragleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemGroup::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsitemgroup_dragmoveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsitemgroup_dragmoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemGroup::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsitemgroup_dropevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsitemgroup_dropevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemGroup::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicsitemgroup_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicsitemgroup_focusinevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemGroup::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicsitemgroup_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicsitemgroup_focusoutevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemGroup::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsitemgroup_hoverenterevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsitemgroup_hoverenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemGroup::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsitemgroup_hovermoveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsitemgroup_hovermoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemGroup::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsitemgroup_hoverleaveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsitemgroup_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemGroup::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicsitemgroup_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicsitemgroup_keypressevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemGroup::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicsitemgroup_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicsitemgroup_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemGroup::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsitemgroup_mousepressevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsitemgroup_mousepressevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemGroup::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsitemgroup_mousemoveevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsitemgroup_mousemoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemGroup::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsitemgroup_mousereleaseevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsitemgroup_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemGroup::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsitemgroup_mousedoubleclickevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsitemgroup_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemGroup::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicsitemgroup_wheelevent_callback) {
            QGraphicsSceneWheelEvent* cbval1 = event;
            qgraphicsitemgroup_wheelevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemGroup::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicsitemgroup_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qgraphicsitemgroup_inputmethodevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemGroup::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicsitemgroup_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qgraphicsitemgroup_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsItemGroup::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicsitemgroup_itemchange_callback) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            QVariant* callback_ret = qgraphicsitemgroup_itemchange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsItemGroup::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicsitemgroup_supportsextension_callback) {
            int cbval1 = static_cast<int>(extension);
            bool callback_ret = qgraphicsitemgroup_supportsextension_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsItemGroup::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicsitemgroup_setextension_callback) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);
            qgraphicsitemgroup_setextension_callback(this, cbval1, cbval2);
            return;
        }
        QGraphicsItemGroup::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicsitemgroup_extension_callback) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);
            QVariant* callback_ret = qgraphicsitemgroup_extension_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsItemGroup::extension(variant);
    }

    // Friend functions
    friend bool QGraphicsItemGroup_SuperSceneEventFilter(QGraphicsItemGroup* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsItemGroup_SuperSceneEvent(QGraphicsItemGroup* self, QEvent* event);
    friend void QGraphicsItemGroup_SuperContextMenuEvent(QGraphicsItemGroup* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsItemGroup_SuperDragEnterEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItemGroup_SuperDragLeaveEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItemGroup_SuperDragMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItemGroup_SuperDropEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItemGroup_SuperFocusInEvent(QGraphicsItemGroup* self, QFocusEvent* event);
    friend void QGraphicsItemGroup_SuperFocusOutEvent(QGraphicsItemGroup* self, QFocusEvent* event);
    friend void QGraphicsItemGroup_SuperHoverEnterEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsItemGroup_SuperHoverMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsItemGroup_SuperHoverLeaveEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsItemGroup_SuperKeyPressEvent(QGraphicsItemGroup* self, QKeyEvent* event);
    friend void QGraphicsItemGroup_SuperKeyReleaseEvent(QGraphicsItemGroup* self, QKeyEvent* event);
    friend void QGraphicsItemGroup_SuperMousePressEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItemGroup_SuperMouseMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItemGroup_SuperMouseReleaseEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItemGroup_SuperMouseDoubleClickEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItemGroup_SuperWheelEvent(QGraphicsItemGroup* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsItemGroup_SuperInputMethodEvent(QGraphicsItemGroup* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsItemGroup_SuperInputMethodQuery(const QGraphicsItemGroup* self, int query);
    friend QVariant* QGraphicsItemGroup_SuperItemChange(QGraphicsItemGroup* self, int change, const QVariant* value);
    friend bool QGraphicsItemGroup_SuperSupportsExtension(const QGraphicsItemGroup* self, int extension);
    friend void QGraphicsItemGroup_SuperSetExtension(QGraphicsItemGroup* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsItemGroup_SuperExtension(const QGraphicsItemGroup* self, const QVariant* variant);
};

#endif
