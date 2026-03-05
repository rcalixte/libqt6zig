#pragma once
#ifndef SRCC_LIBVIRTUALQGRAPHICSITEM_H
#define SRCC_LIBVIRTUALQGRAPHICSITEM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsItem so that we can call protected methods
class VirtualQGraphicsItem : public QGraphicsItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsItem = true;

    // Virtual class public types (including callbacks)
    using QGraphicsItem::Extension;
    using QGraphicsItem_Advance_Callback = void (*)(QGraphicsItem*, int);
    using QGraphicsItem_BoundingRect_Callback = QRectF* (*)();
    using QGraphicsItem_Shape_Callback = QPainterPath* (*)();
    using QGraphicsItem_Contains_Callback = bool (*)(const QGraphicsItem*, QPointF*);
    using QGraphicsItem_CollidesWithItem_Callback = bool (*)(const QGraphicsItem*, QGraphicsItem*, int);
    using QGraphicsItem_CollidesWithPath_Callback = bool (*)(const QGraphicsItem*, QPainterPath*, int);
    using QGraphicsItem_IsObscuredBy_Callback = bool (*)(const QGraphicsItem*, QGraphicsItem*);
    using QGraphicsItem_OpaqueArea_Callback = QPainterPath* (*)();
    using QGraphicsItem_Paint_Callback = void (*)(QGraphicsItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsItem_Type_Callback = int (*)();
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
    using QGraphicsItem_UpdateMicroFocus_Callback = void (*)();
    using QGraphicsItem_AddToIndex_Callback = void (*)();
    using QGraphicsItem_RemoveFromIndex_Callback = void (*)();
    using QGraphicsItem_PrepareGeometryChange_Callback = void (*)();

  protected:
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
    QGraphicsItem_UpdateMicroFocus_Callback qgraphicsitem_updatemicrofocus_callback = nullptr;
    QGraphicsItem_AddToIndex_Callback qgraphicsitem_addtoindex_callback = nullptr;
    QGraphicsItem_RemoveFromIndex_Callback qgraphicsitem_removefromindex_callback = nullptr;
    QGraphicsItem_PrepareGeometryChange_Callback qgraphicsitem_preparegeometrychange_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsitem_advance_isbase = false;
    mutable bool qgraphicsitem_boundingrect_isbase = false;
    mutable bool qgraphicsitem_shape_isbase = false;
    mutable bool qgraphicsitem_contains_isbase = false;
    mutable bool qgraphicsitem_collideswithitem_isbase = false;
    mutable bool qgraphicsitem_collideswithpath_isbase = false;
    mutable bool qgraphicsitem_isobscuredby_isbase = false;
    mutable bool qgraphicsitem_opaquearea_isbase = false;
    mutable bool qgraphicsitem_paint_isbase = false;
    mutable bool qgraphicsitem_type_isbase = false;
    mutable bool qgraphicsitem_sceneeventfilter_isbase = false;
    mutable bool qgraphicsitem_sceneevent_isbase = false;
    mutable bool qgraphicsitem_contextmenuevent_isbase = false;
    mutable bool qgraphicsitem_dragenterevent_isbase = false;
    mutable bool qgraphicsitem_dragleaveevent_isbase = false;
    mutable bool qgraphicsitem_dragmoveevent_isbase = false;
    mutable bool qgraphicsitem_dropevent_isbase = false;
    mutable bool qgraphicsitem_focusinevent_isbase = false;
    mutable bool qgraphicsitem_focusoutevent_isbase = false;
    mutable bool qgraphicsitem_hoverenterevent_isbase = false;
    mutable bool qgraphicsitem_hovermoveevent_isbase = false;
    mutable bool qgraphicsitem_hoverleaveevent_isbase = false;
    mutable bool qgraphicsitem_keypressevent_isbase = false;
    mutable bool qgraphicsitem_keyreleaseevent_isbase = false;
    mutable bool qgraphicsitem_mousepressevent_isbase = false;
    mutable bool qgraphicsitem_mousemoveevent_isbase = false;
    mutable bool qgraphicsitem_mousereleaseevent_isbase = false;
    mutable bool qgraphicsitem_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicsitem_wheelevent_isbase = false;
    mutable bool qgraphicsitem_inputmethodevent_isbase = false;
    mutable bool qgraphicsitem_inputmethodquery_isbase = false;
    mutable bool qgraphicsitem_itemchange_isbase = false;
    mutable bool qgraphicsitem_supportsextension_isbase = false;
    mutable bool qgraphicsitem_setextension_isbase = false;
    mutable bool qgraphicsitem_extension_isbase = false;
    mutable bool qgraphicsitem_updatemicrofocus_isbase = false;
    mutable bool qgraphicsitem_addtoindex_isbase = false;
    mutable bool qgraphicsitem_removefromindex_isbase = false;
    mutable bool qgraphicsitem_preparegeometrychange_isbase = false;

  public:
    VirtualQGraphicsItem() : QGraphicsItem() {};
    VirtualQGraphicsItem(QGraphicsItem* parent) : QGraphicsItem(parent) {};

    // Callback setters
    inline void setQGraphicsItem_Advance_Callback(QGraphicsItem_Advance_Callback cb) { qgraphicsitem_advance_callback = cb; }
    inline void setQGraphicsItem_BoundingRect_Callback(QGraphicsItem_BoundingRect_Callback cb) { qgraphicsitem_boundingrect_callback = cb; }
    inline void setQGraphicsItem_Shape_Callback(QGraphicsItem_Shape_Callback cb) { qgraphicsitem_shape_callback = cb; }
    inline void setQGraphicsItem_Contains_Callback(QGraphicsItem_Contains_Callback cb) { qgraphicsitem_contains_callback = cb; }
    inline void setQGraphicsItem_CollidesWithItem_Callback(QGraphicsItem_CollidesWithItem_Callback cb) { qgraphicsitem_collideswithitem_callback = cb; }
    inline void setQGraphicsItem_CollidesWithPath_Callback(QGraphicsItem_CollidesWithPath_Callback cb) { qgraphicsitem_collideswithpath_callback = cb; }
    inline void setQGraphicsItem_IsObscuredBy_Callback(QGraphicsItem_IsObscuredBy_Callback cb) { qgraphicsitem_isobscuredby_callback = cb; }
    inline void setQGraphicsItem_OpaqueArea_Callback(QGraphicsItem_OpaqueArea_Callback cb) { qgraphicsitem_opaquearea_callback = cb; }
    inline void setQGraphicsItem_Paint_Callback(QGraphicsItem_Paint_Callback cb) { qgraphicsitem_paint_callback = cb; }
    inline void setQGraphicsItem_Type_Callback(QGraphicsItem_Type_Callback cb) { qgraphicsitem_type_callback = cb; }
    inline void setQGraphicsItem_SceneEventFilter_Callback(QGraphicsItem_SceneEventFilter_Callback cb) { qgraphicsitem_sceneeventfilter_callback = cb; }
    inline void setQGraphicsItem_SceneEvent_Callback(QGraphicsItem_SceneEvent_Callback cb) { qgraphicsitem_sceneevent_callback = cb; }
    inline void setQGraphicsItem_ContextMenuEvent_Callback(QGraphicsItem_ContextMenuEvent_Callback cb) { qgraphicsitem_contextmenuevent_callback = cb; }
    inline void setQGraphicsItem_DragEnterEvent_Callback(QGraphicsItem_DragEnterEvent_Callback cb) { qgraphicsitem_dragenterevent_callback = cb; }
    inline void setQGraphicsItem_DragLeaveEvent_Callback(QGraphicsItem_DragLeaveEvent_Callback cb) { qgraphicsitem_dragleaveevent_callback = cb; }
    inline void setQGraphicsItem_DragMoveEvent_Callback(QGraphicsItem_DragMoveEvent_Callback cb) { qgraphicsitem_dragmoveevent_callback = cb; }
    inline void setQGraphicsItem_DropEvent_Callback(QGraphicsItem_DropEvent_Callback cb) { qgraphicsitem_dropevent_callback = cb; }
    inline void setQGraphicsItem_FocusInEvent_Callback(QGraphicsItem_FocusInEvent_Callback cb) { qgraphicsitem_focusinevent_callback = cb; }
    inline void setQGraphicsItem_FocusOutEvent_Callback(QGraphicsItem_FocusOutEvent_Callback cb) { qgraphicsitem_focusoutevent_callback = cb; }
    inline void setQGraphicsItem_HoverEnterEvent_Callback(QGraphicsItem_HoverEnterEvent_Callback cb) { qgraphicsitem_hoverenterevent_callback = cb; }
    inline void setQGraphicsItem_HoverMoveEvent_Callback(QGraphicsItem_HoverMoveEvent_Callback cb) { qgraphicsitem_hovermoveevent_callback = cb; }
    inline void setQGraphicsItem_HoverLeaveEvent_Callback(QGraphicsItem_HoverLeaveEvent_Callback cb) { qgraphicsitem_hoverleaveevent_callback = cb; }
    inline void setQGraphicsItem_KeyPressEvent_Callback(QGraphicsItem_KeyPressEvent_Callback cb) { qgraphicsitem_keypressevent_callback = cb; }
    inline void setQGraphicsItem_KeyReleaseEvent_Callback(QGraphicsItem_KeyReleaseEvent_Callback cb) { qgraphicsitem_keyreleaseevent_callback = cb; }
    inline void setQGraphicsItem_MousePressEvent_Callback(QGraphicsItem_MousePressEvent_Callback cb) { qgraphicsitem_mousepressevent_callback = cb; }
    inline void setQGraphicsItem_MouseMoveEvent_Callback(QGraphicsItem_MouseMoveEvent_Callback cb) { qgraphicsitem_mousemoveevent_callback = cb; }
    inline void setQGraphicsItem_MouseReleaseEvent_Callback(QGraphicsItem_MouseReleaseEvent_Callback cb) { qgraphicsitem_mousereleaseevent_callback = cb; }
    inline void setQGraphicsItem_MouseDoubleClickEvent_Callback(QGraphicsItem_MouseDoubleClickEvent_Callback cb) { qgraphicsitem_mousedoubleclickevent_callback = cb; }
    inline void setQGraphicsItem_WheelEvent_Callback(QGraphicsItem_WheelEvent_Callback cb) { qgraphicsitem_wheelevent_callback = cb; }
    inline void setQGraphicsItem_InputMethodEvent_Callback(QGraphicsItem_InputMethodEvent_Callback cb) { qgraphicsitem_inputmethodevent_callback = cb; }
    inline void setQGraphicsItem_InputMethodQuery_Callback(QGraphicsItem_InputMethodQuery_Callback cb) { qgraphicsitem_inputmethodquery_callback = cb; }
    inline void setQGraphicsItem_ItemChange_Callback(QGraphicsItem_ItemChange_Callback cb) { qgraphicsitem_itemchange_callback = cb; }
    inline void setQGraphicsItem_SupportsExtension_Callback(QGraphicsItem_SupportsExtension_Callback cb) { qgraphicsitem_supportsextension_callback = cb; }
    inline void setQGraphicsItem_SetExtension_Callback(QGraphicsItem_SetExtension_Callback cb) { qgraphicsitem_setextension_callback = cb; }
    inline void setQGraphicsItem_Extension_Callback(QGraphicsItem_Extension_Callback cb) { qgraphicsitem_extension_callback = cb; }
    inline void setQGraphicsItem_UpdateMicroFocus_Callback(QGraphicsItem_UpdateMicroFocus_Callback cb) { qgraphicsitem_updatemicrofocus_callback = cb; }
    inline void setQGraphicsItem_AddToIndex_Callback(QGraphicsItem_AddToIndex_Callback cb) { qgraphicsitem_addtoindex_callback = cb; }
    inline void setQGraphicsItem_RemoveFromIndex_Callback(QGraphicsItem_RemoveFromIndex_Callback cb) { qgraphicsitem_removefromindex_callback = cb; }
    inline void setQGraphicsItem_PrepareGeometryChange_Callback(QGraphicsItem_PrepareGeometryChange_Callback cb) { qgraphicsitem_preparegeometrychange_callback = cb; }

    // Base flag setters
    inline void setQGraphicsItem_Advance_IsBase(bool value) const { qgraphicsitem_advance_isbase = value; }
    inline void setQGraphicsItem_BoundingRect_IsBase(bool value) const { qgraphicsitem_boundingrect_isbase = value; }
    inline void setQGraphicsItem_Shape_IsBase(bool value) const { qgraphicsitem_shape_isbase = value; }
    inline void setQGraphicsItem_Contains_IsBase(bool value) const { qgraphicsitem_contains_isbase = value; }
    inline void setQGraphicsItem_CollidesWithItem_IsBase(bool value) const { qgraphicsitem_collideswithitem_isbase = value; }
    inline void setQGraphicsItem_CollidesWithPath_IsBase(bool value) const { qgraphicsitem_collideswithpath_isbase = value; }
    inline void setQGraphicsItem_IsObscuredBy_IsBase(bool value) const { qgraphicsitem_isobscuredby_isbase = value; }
    inline void setQGraphicsItem_OpaqueArea_IsBase(bool value) const { qgraphicsitem_opaquearea_isbase = value; }
    inline void setQGraphicsItem_Paint_IsBase(bool value) const { qgraphicsitem_paint_isbase = value; }
    inline void setQGraphicsItem_Type_IsBase(bool value) const { qgraphicsitem_type_isbase = value; }
    inline void setQGraphicsItem_SceneEventFilter_IsBase(bool value) const { qgraphicsitem_sceneeventfilter_isbase = value; }
    inline void setQGraphicsItem_SceneEvent_IsBase(bool value) const { qgraphicsitem_sceneevent_isbase = value; }
    inline void setQGraphicsItem_ContextMenuEvent_IsBase(bool value) const { qgraphicsitem_contextmenuevent_isbase = value; }
    inline void setQGraphicsItem_DragEnterEvent_IsBase(bool value) const { qgraphicsitem_dragenterevent_isbase = value; }
    inline void setQGraphicsItem_DragLeaveEvent_IsBase(bool value) const { qgraphicsitem_dragleaveevent_isbase = value; }
    inline void setQGraphicsItem_DragMoveEvent_IsBase(bool value) const { qgraphicsitem_dragmoveevent_isbase = value; }
    inline void setQGraphicsItem_DropEvent_IsBase(bool value) const { qgraphicsitem_dropevent_isbase = value; }
    inline void setQGraphicsItem_FocusInEvent_IsBase(bool value) const { qgraphicsitem_focusinevent_isbase = value; }
    inline void setQGraphicsItem_FocusOutEvent_IsBase(bool value) const { qgraphicsitem_focusoutevent_isbase = value; }
    inline void setQGraphicsItem_HoverEnterEvent_IsBase(bool value) const { qgraphicsitem_hoverenterevent_isbase = value; }
    inline void setQGraphicsItem_HoverMoveEvent_IsBase(bool value) const { qgraphicsitem_hovermoveevent_isbase = value; }
    inline void setQGraphicsItem_HoverLeaveEvent_IsBase(bool value) const { qgraphicsitem_hoverleaveevent_isbase = value; }
    inline void setQGraphicsItem_KeyPressEvent_IsBase(bool value) const { qgraphicsitem_keypressevent_isbase = value; }
    inline void setQGraphicsItem_KeyReleaseEvent_IsBase(bool value) const { qgraphicsitem_keyreleaseevent_isbase = value; }
    inline void setQGraphicsItem_MousePressEvent_IsBase(bool value) const { qgraphicsitem_mousepressevent_isbase = value; }
    inline void setQGraphicsItem_MouseMoveEvent_IsBase(bool value) const { qgraphicsitem_mousemoveevent_isbase = value; }
    inline void setQGraphicsItem_MouseReleaseEvent_IsBase(bool value) const { qgraphicsitem_mousereleaseevent_isbase = value; }
    inline void setQGraphicsItem_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicsitem_mousedoubleclickevent_isbase = value; }
    inline void setQGraphicsItem_WheelEvent_IsBase(bool value) const { qgraphicsitem_wheelevent_isbase = value; }
    inline void setQGraphicsItem_InputMethodEvent_IsBase(bool value) const { qgraphicsitem_inputmethodevent_isbase = value; }
    inline void setQGraphicsItem_InputMethodQuery_IsBase(bool value) const { qgraphicsitem_inputmethodquery_isbase = value; }
    inline void setQGraphicsItem_ItemChange_IsBase(bool value) const { qgraphicsitem_itemchange_isbase = value; }
    inline void setQGraphicsItem_SupportsExtension_IsBase(bool value) const { qgraphicsitem_supportsextension_isbase = value; }
    inline void setQGraphicsItem_SetExtension_IsBase(bool value) const { qgraphicsitem_setextension_isbase = value; }
    inline void setQGraphicsItem_Extension_IsBase(bool value) const { qgraphicsitem_extension_isbase = value; }
    inline void setQGraphicsItem_UpdateMicroFocus_IsBase(bool value) const { qgraphicsitem_updatemicrofocus_isbase = value; }
    inline void setQGraphicsItem_AddToIndex_IsBase(bool value) const { qgraphicsitem_addtoindex_isbase = value; }
    inline void setQGraphicsItem_RemoveFromIndex_IsBase(bool value) const { qgraphicsitem_removefromindex_isbase = value; }
    inline void setQGraphicsItem_PrepareGeometryChange_IsBase(bool value) const { qgraphicsitem_preparegeometrychange_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicsitem_advance_isbase) {
            qgraphicsitem_advance_isbase = false;
            QGraphicsItem::advance(phase);
            return;
        }
        auto advance_cb = qgraphicsitem_advance_callback;
        if (advance_cb) {
            int cbval1 = phase;

            advance_cb(this, cbval1);
            return;
        }
        QGraphicsItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        auto boundingrect_cb = qgraphicsitem_boundingrect_callback;
        if (boundingrect_cb) {
            QRectF* callback_ret = boundingrect_cb();
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicsitem_shape_isbase) {
            qgraphicsitem_shape_isbase = false;
            return QGraphicsItem::shape();
        }
        auto shape_cb = qgraphicsitem_shape_callback;
        if (shape_cb) {
            QPainterPath* callback_ret = shape_cb();
            return *callback_ret;
        }
        return QGraphicsItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicsitem_contains_isbase) {
            qgraphicsitem_contains_isbase = false;
            return QGraphicsItem::contains(point);
        }
        auto contains_cb = qgraphicsitem_contains_callback;
        if (contains_cb) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);

            bool callback_ret = contains_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsitem_collideswithitem_isbase) {
            qgraphicsitem_collideswithitem_isbase = false;
            return QGraphicsItem::collidesWithItem(other, mode);
        }
        auto collideswithitem_cb = qgraphicsitem_collideswithitem_callback;
        if (collideswithitem_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithitem_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsitem_collideswithpath_isbase) {
            qgraphicsitem_collideswithpath_isbase = false;
            return QGraphicsItem::collidesWithPath(path, mode);
        }
        auto collideswithpath_cb = qgraphicsitem_collideswithpath_callback;
        if (collideswithpath_cb) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithpath_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicsitem_isobscuredby_isbase) {
            qgraphicsitem_isobscuredby_isbase = false;
            return QGraphicsItem::isObscuredBy(item);
        }
        auto isobscuredby_cb = qgraphicsitem_isobscuredby_callback;
        if (isobscuredby_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;

            bool callback_ret = isobscuredby_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicsitem_opaquearea_isbase) {
            qgraphicsitem_opaquearea_isbase = false;
            return QGraphicsItem::opaqueArea();
        }
        auto opaquearea_cb = qgraphicsitem_opaquearea_callback;
        if (opaquearea_cb) {
            QPainterPath* callback_ret = opaquearea_cb();
            return *callback_ret;
        }
        return QGraphicsItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        auto paint_cb = qgraphicsitem_paint_callback;
        if (paint_cb) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            paint_cb(this, cbval1, cbval2, cbval3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicsitem_type_isbase) {
            qgraphicsitem_type_isbase = false;
            return QGraphicsItem::type();
        }
        auto type_cb = qgraphicsitem_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<int>(callback_ret);
        }
        return QGraphicsItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicsitem_sceneeventfilter_isbase) {
            qgraphicsitem_sceneeventfilter_isbase = false;
            return QGraphicsItem::sceneEventFilter(watched, event);
        }
        auto sceneeventfilter_cb = qgraphicsitem_sceneeventfilter_callback;
        if (sceneeventfilter_cb) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = sceneeventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicsitem_sceneevent_isbase) {
            qgraphicsitem_sceneevent_isbase = false;
            return QGraphicsItem::sceneEvent(event);
        }
        auto sceneevent_cb = qgraphicsitem_sceneevent_callback;
        if (sceneevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = sceneevent_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicsitem_contextmenuevent_isbase) {
            qgraphicsitem_contextmenuevent_isbase = false;
            QGraphicsItem::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qgraphicsitem_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QGraphicsItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsitem_dragenterevent_isbase) {
            qgraphicsitem_dragenterevent_isbase = false;
            QGraphicsItem::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qgraphicsitem_dragenterevent_callback;
        if (dragenterevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsitem_dragleaveevent_isbase) {
            qgraphicsitem_dragleaveevent_isbase = false;
            QGraphicsItem::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qgraphicsitem_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsitem_dragmoveevent_isbase) {
            qgraphicsitem_dragmoveevent_isbase = false;
            QGraphicsItem::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qgraphicsitem_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsitem_dropevent_isbase) {
            qgraphicsitem_dropevent_isbase = false;
            QGraphicsItem::dropEvent(event);
            return;
        }
        auto dropevent_cb = qgraphicsitem_dropevent_callback;
        if (dropevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QGraphicsItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicsitem_focusinevent_isbase) {
            qgraphicsitem_focusinevent_isbase = false;
            QGraphicsItem::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qgraphicsitem_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QGraphicsItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicsitem_focusoutevent_isbase) {
            qgraphicsitem_focusoutevent_isbase = false;
            QGraphicsItem::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qgraphicsitem_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QGraphicsItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsitem_hoverenterevent_isbase) {
            qgraphicsitem_hoverenterevent_isbase = false;
            QGraphicsItem::hoverEnterEvent(event);
            return;
        }
        auto hoverenterevent_cb = qgraphicsitem_hoverenterevent_callback;
        if (hoverenterevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsitem_hovermoveevent_isbase) {
            qgraphicsitem_hovermoveevent_isbase = false;
            QGraphicsItem::hoverMoveEvent(event);
            return;
        }
        auto hovermoveevent_cb = qgraphicsitem_hovermoveevent_callback;
        if (hovermoveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hovermoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsitem_hoverleaveevent_isbase) {
            qgraphicsitem_hoverleaveevent_isbase = false;
            QGraphicsItem::hoverLeaveEvent(event);
            return;
        }
        auto hoverleaveevent_cb = qgraphicsitem_hoverleaveevent_callback;
        if (hoverleaveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicsitem_keypressevent_isbase) {
            qgraphicsitem_keypressevent_isbase = false;
            QGraphicsItem::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qgraphicsitem_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QGraphicsItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicsitem_keyreleaseevent_isbase) {
            qgraphicsitem_keyreleaseevent_isbase = false;
            QGraphicsItem::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qgraphicsitem_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsitem_mousepressevent_isbase) {
            qgraphicsitem_mousepressevent_isbase = false;
            QGraphicsItem::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qgraphicsitem_mousepressevent_callback;
        if (mousepressevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QGraphicsItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsitem_mousemoveevent_isbase) {
            qgraphicsitem_mousemoveevent_isbase = false;
            QGraphicsItem::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qgraphicsitem_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsitem_mousereleaseevent_isbase) {
            qgraphicsitem_mousereleaseevent_isbase = false;
            QGraphicsItem::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qgraphicsitem_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsitem_mousedoubleclickevent_isbase) {
            qgraphicsitem_mousedoubleclickevent_isbase = false;
            QGraphicsItem::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qgraphicsitem_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QGraphicsItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicsitem_wheelevent_isbase) {
            qgraphicsitem_wheelevent_isbase = false;
            QGraphicsItem::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qgraphicsitem_wheelevent_callback;
        if (wheelevent_cb) {
            QGraphicsSceneWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QGraphicsItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicsitem_inputmethodevent_isbase) {
            qgraphicsitem_inputmethodevent_isbase = false;
            QGraphicsItem::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = qgraphicsitem_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QGraphicsItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicsitem_inputmethodquery_isbase) {
            qgraphicsitem_inputmethodquery_isbase = false;
            return QGraphicsItem::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qgraphicsitem_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicsitem_itemchange_isbase) {
            qgraphicsitem_itemchange_isbase = false;
            return QGraphicsItem::itemChange(change, value);
        }
        auto itemchange_cb = qgraphicsitem_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            QVariant* callback_ret = itemchange_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QGraphicsItem::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicsitem_supportsextension_isbase) {
            qgraphicsitem_supportsextension_isbase = false;
            return QGraphicsItem::supportsExtension(extension);
        }
        auto supportsextension_cb = qgraphicsitem_supportsextension_callback;
        if (supportsextension_cb) {
            int cbval1 = static_cast<int>(extension);

            bool callback_ret = supportsextension_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicsitem_setextension_isbase) {
            qgraphicsitem_setextension_isbase = false;
            QGraphicsItem::setExtension(extension, variant);
            return;
        }
        auto setextension_cb = qgraphicsitem_setextension_callback;
        if (setextension_cb) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);

            setextension_cb(this, cbval1, cbval2);
            return;
        }
        QGraphicsItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicsitem_extension_isbase) {
            qgraphicsitem_extension_isbase = false;
            return QGraphicsItem::extension(variant);
        }
        auto extension_cb = qgraphicsitem_extension_callback;
        if (extension_cb) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);

            QVariant* callback_ret = extension_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsItem::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qgraphicsitem_updatemicrofocus_isbase) {
            qgraphicsitem_updatemicrofocus_isbase = false;
            QGraphicsItem::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qgraphicsitem_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QGraphicsItem::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qgraphicsitem_addtoindex_isbase) {
            qgraphicsitem_addtoindex_isbase = false;
            QGraphicsItem::addToIndex();
            return;
        }
        auto addtoindex_cb = qgraphicsitem_addtoindex_callback;
        if (addtoindex_cb) {
            addtoindex_cb();
            return;
        }
        QGraphicsItem::addToIndex();
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qgraphicsitem_removefromindex_isbase) {
            qgraphicsitem_removefromindex_isbase = false;
            QGraphicsItem::removeFromIndex();
            return;
        }
        auto removefromindex_cb = qgraphicsitem_removefromindex_callback;
        if (removefromindex_cb) {
            removefromindex_cb();
            return;
        }
        QGraphicsItem::removeFromIndex();
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qgraphicsitem_preparegeometrychange_isbase) {
            qgraphicsitem_preparegeometrychange_isbase = false;
            QGraphicsItem::prepareGeometryChange();
            return;
        }
        auto preparegeometrychange_cb = qgraphicsitem_preparegeometrychange_callback;
        if (preparegeometrychange_cb) {
            preparegeometrychange_cb();
            return;
        }
        QGraphicsItem::prepareGeometryChange();
    }

    // Friend functions
    friend bool QGraphicsItem_SceneEventFilter(QGraphicsItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsItem_SuperSceneEventFilter(QGraphicsItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsItem_SceneEvent(QGraphicsItem* self, QEvent* event);
    friend bool QGraphicsItem_SuperSceneEvent(QGraphicsItem* self, QEvent* event);
    friend void QGraphicsItem_ContextMenuEvent(QGraphicsItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsItem_SuperContextMenuEvent(QGraphicsItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsItem_DragEnterEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItem_SuperDragEnterEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItem_DragLeaveEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItem_SuperDragLeaveEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItem_DragMoveEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItem_SuperDragMoveEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItem_DropEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItem_SuperDropEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItem_FocusInEvent(QGraphicsItem* self, QFocusEvent* event);
    friend void QGraphicsItem_SuperFocusInEvent(QGraphicsItem* self, QFocusEvent* event);
    friend void QGraphicsItem_FocusOutEvent(QGraphicsItem* self, QFocusEvent* event);
    friend void QGraphicsItem_SuperFocusOutEvent(QGraphicsItem* self, QFocusEvent* event);
    friend void QGraphicsItem_HoverEnterEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsItem_SuperHoverEnterEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsItem_HoverMoveEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsItem_SuperHoverMoveEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsItem_HoverLeaveEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsItem_SuperHoverLeaveEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsItem_KeyPressEvent(QGraphicsItem* self, QKeyEvent* event);
    friend void QGraphicsItem_SuperKeyPressEvent(QGraphicsItem* self, QKeyEvent* event);
    friend void QGraphicsItem_KeyReleaseEvent(QGraphicsItem* self, QKeyEvent* event);
    friend void QGraphicsItem_SuperKeyReleaseEvent(QGraphicsItem* self, QKeyEvent* event);
    friend void QGraphicsItem_MousePressEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItem_SuperMousePressEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItem_MouseMoveEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItem_SuperMouseMoveEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItem_MouseReleaseEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItem_SuperMouseReleaseEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItem_MouseDoubleClickEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItem_SuperMouseDoubleClickEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItem_WheelEvent(QGraphicsItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsItem_SuperWheelEvent(QGraphicsItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsItem_InputMethodEvent(QGraphicsItem* self, QInputMethodEvent* event);
    friend void QGraphicsItem_SuperInputMethodEvent(QGraphicsItem* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsItem_InputMethodQuery(const QGraphicsItem* self, int query);
    friend QVariant* QGraphicsItem_SuperInputMethodQuery(const QGraphicsItem* self, int query);
    friend QVariant* QGraphicsItem_ItemChange(QGraphicsItem* self, int change, const QVariant* value);
    friend QVariant* QGraphicsItem_SuperItemChange(QGraphicsItem* self, int change, const QVariant* value);
    friend bool QGraphicsItem_SupportsExtension(const QGraphicsItem* self, int extension);
    friend bool QGraphicsItem_SuperSupportsExtension(const QGraphicsItem* self, int extension);
    friend void QGraphicsItem_SetExtension(QGraphicsItem* self, int extension, const QVariant* variant);
    friend void QGraphicsItem_SuperSetExtension(QGraphicsItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsItem_Extension(const QGraphicsItem* self, const QVariant* variant);
    friend QVariant* QGraphicsItem_SuperExtension(const QGraphicsItem* self, const QVariant* variant);
    friend void QGraphicsItem_UpdateMicroFocus(QGraphicsItem* self);
    friend void QGraphicsItem_SuperUpdateMicroFocus(QGraphicsItem* self);
    friend void QGraphicsItem_AddToIndex(QGraphicsItem* self);
    friend void QGraphicsItem_SuperAddToIndex(QGraphicsItem* self);
    friend void QGraphicsItem_RemoveFromIndex(QGraphicsItem* self);
    friend void QGraphicsItem_SuperRemoveFromIndex(QGraphicsItem* self);
    friend void QGraphicsItem_PrepareGeometryChange(QGraphicsItem* self);
    friend void QGraphicsItem_SuperPrepareGeometryChange(QGraphicsItem* self);
};

// This class is a subclass of QGraphicsObject so that we can call protected methods
class VirtualQGraphicsObject : public QGraphicsObject {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsObject = true;

    // Virtual class public types (including callbacks)
    using QGraphicsItem::Extension;
    using QGraphicsObject_MetaObject_Callback = QMetaObject* (*)();
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
    using QGraphicsObject_BoundingRect_Callback = QRectF* (*)();
    using QGraphicsObject_Shape_Callback = QPainterPath* (*)();
    using QGraphicsObject_Contains_Callback = bool (*)(const QGraphicsObject*, QPointF*);
    using QGraphicsObject_CollidesWithItem_Callback = bool (*)(const QGraphicsObject*, QGraphicsItem*, int);
    using QGraphicsObject_CollidesWithPath_Callback = bool (*)(const QGraphicsObject*, QPainterPath*, int);
    using QGraphicsObject_IsObscuredBy_Callback = bool (*)(const QGraphicsObject*, QGraphicsItem*);
    using QGraphicsObject_OpaqueArea_Callback = QPainterPath* (*)();
    using QGraphicsObject_Paint_Callback = void (*)(QGraphicsObject*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsObject_Type_Callback = int (*)();
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
    using QGraphicsObject_UpdateMicroFocus_Callback = void (*)();
    using QGraphicsObject_Sender_Callback = QObject* (*)();
    using QGraphicsObject_SenderSignalIndex_Callback = int (*)();
    using QGraphicsObject_Receivers_Callback = int (*)(const QGraphicsObject*, const char*);
    using QGraphicsObject_IsSignalConnected_Callback = bool (*)(const QGraphicsObject*, QMetaMethod*);
    using QGraphicsObject_AddToIndex_Callback = void (*)();
    using QGraphicsObject_RemoveFromIndex_Callback = void (*)();
    using QGraphicsObject_PrepareGeometryChange_Callback = void (*)();

  protected:
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
    QGraphicsObject_UpdateMicroFocus_Callback qgraphicsobject_updatemicrofocus_callback = nullptr;
    QGraphicsObject_Sender_Callback qgraphicsobject_sender_callback = nullptr;
    QGraphicsObject_SenderSignalIndex_Callback qgraphicsobject_sendersignalindex_callback = nullptr;
    QGraphicsObject_Receivers_Callback qgraphicsobject_receivers_callback = nullptr;
    QGraphicsObject_IsSignalConnected_Callback qgraphicsobject_issignalconnected_callback = nullptr;
    QGraphicsObject_AddToIndex_Callback qgraphicsobject_addtoindex_callback = nullptr;
    QGraphicsObject_RemoveFromIndex_Callback qgraphicsobject_removefromindex_callback = nullptr;
    QGraphicsObject_PrepareGeometryChange_Callback qgraphicsobject_preparegeometrychange_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsobject_metaobject_isbase = false;
    mutable bool qgraphicsobject_metacast_isbase = false;
    mutable bool qgraphicsobject_metacall_isbase = false;
    mutable bool qgraphicsobject_event_isbase = false;
    mutable bool qgraphicsobject_eventfilter_isbase = false;
    mutable bool qgraphicsobject_timerevent_isbase = false;
    mutable bool qgraphicsobject_childevent_isbase = false;
    mutable bool qgraphicsobject_customevent_isbase = false;
    mutable bool qgraphicsobject_connectnotify_isbase = false;
    mutable bool qgraphicsobject_disconnectnotify_isbase = false;
    mutable bool qgraphicsobject_advance_isbase = false;
    mutable bool qgraphicsobject_boundingrect_isbase = false;
    mutable bool qgraphicsobject_shape_isbase = false;
    mutable bool qgraphicsobject_contains_isbase = false;
    mutable bool qgraphicsobject_collideswithitem_isbase = false;
    mutable bool qgraphicsobject_collideswithpath_isbase = false;
    mutable bool qgraphicsobject_isobscuredby_isbase = false;
    mutable bool qgraphicsobject_opaquearea_isbase = false;
    mutable bool qgraphicsobject_paint_isbase = false;
    mutable bool qgraphicsobject_type_isbase = false;
    mutable bool qgraphicsobject_sceneeventfilter_isbase = false;
    mutable bool qgraphicsobject_sceneevent_isbase = false;
    mutable bool qgraphicsobject_contextmenuevent_isbase = false;
    mutable bool qgraphicsobject_dragenterevent_isbase = false;
    mutable bool qgraphicsobject_dragleaveevent_isbase = false;
    mutable bool qgraphicsobject_dragmoveevent_isbase = false;
    mutable bool qgraphicsobject_dropevent_isbase = false;
    mutable bool qgraphicsobject_focusinevent_isbase = false;
    mutable bool qgraphicsobject_focusoutevent_isbase = false;
    mutable bool qgraphicsobject_hoverenterevent_isbase = false;
    mutable bool qgraphicsobject_hovermoveevent_isbase = false;
    mutable bool qgraphicsobject_hoverleaveevent_isbase = false;
    mutable bool qgraphicsobject_keypressevent_isbase = false;
    mutable bool qgraphicsobject_keyreleaseevent_isbase = false;
    mutable bool qgraphicsobject_mousepressevent_isbase = false;
    mutable bool qgraphicsobject_mousemoveevent_isbase = false;
    mutable bool qgraphicsobject_mousereleaseevent_isbase = false;
    mutable bool qgraphicsobject_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicsobject_wheelevent_isbase = false;
    mutable bool qgraphicsobject_inputmethodevent_isbase = false;
    mutable bool qgraphicsobject_inputmethodquery_isbase = false;
    mutable bool qgraphicsobject_itemchange_isbase = false;
    mutable bool qgraphicsobject_supportsextension_isbase = false;
    mutable bool qgraphicsobject_setextension_isbase = false;
    mutable bool qgraphicsobject_extension_isbase = false;
    mutable bool qgraphicsobject_updatemicrofocus_isbase = false;
    mutable bool qgraphicsobject_sender_isbase = false;
    mutable bool qgraphicsobject_sendersignalindex_isbase = false;
    mutable bool qgraphicsobject_receivers_isbase = false;
    mutable bool qgraphicsobject_issignalconnected_isbase = false;
    mutable bool qgraphicsobject_addtoindex_isbase = false;
    mutable bool qgraphicsobject_removefromindex_isbase = false;
    mutable bool qgraphicsobject_preparegeometrychange_isbase = false;

  public:
    VirtualQGraphicsObject() : QGraphicsObject() {};
    VirtualQGraphicsObject(QGraphicsItem* parent) : QGraphicsObject(parent) {};

    // Callback setters
    inline void setQGraphicsObject_MetaObject_Callback(QGraphicsObject_MetaObject_Callback cb) { qgraphicsobject_metaobject_callback = cb; }
    inline void setQGraphicsObject_Metacast_Callback(QGraphicsObject_Metacast_Callback cb) { qgraphicsobject_metacast_callback = cb; }
    inline void setQGraphicsObject_Metacall_Callback(QGraphicsObject_Metacall_Callback cb) { qgraphicsobject_metacall_callback = cb; }
    inline void setQGraphicsObject_Event_Callback(QGraphicsObject_Event_Callback cb) { qgraphicsobject_event_callback = cb; }
    inline void setQGraphicsObject_EventFilter_Callback(QGraphicsObject_EventFilter_Callback cb) { qgraphicsobject_eventfilter_callback = cb; }
    inline void setQGraphicsObject_TimerEvent_Callback(QGraphicsObject_TimerEvent_Callback cb) { qgraphicsobject_timerevent_callback = cb; }
    inline void setQGraphicsObject_ChildEvent_Callback(QGraphicsObject_ChildEvent_Callback cb) { qgraphicsobject_childevent_callback = cb; }
    inline void setQGraphicsObject_CustomEvent_Callback(QGraphicsObject_CustomEvent_Callback cb) { qgraphicsobject_customevent_callback = cb; }
    inline void setQGraphicsObject_ConnectNotify_Callback(QGraphicsObject_ConnectNotify_Callback cb) { qgraphicsobject_connectnotify_callback = cb; }
    inline void setQGraphicsObject_DisconnectNotify_Callback(QGraphicsObject_DisconnectNotify_Callback cb) { qgraphicsobject_disconnectnotify_callback = cb; }
    inline void setQGraphicsObject_Advance_Callback(QGraphicsObject_Advance_Callback cb) { qgraphicsobject_advance_callback = cb; }
    inline void setQGraphicsObject_BoundingRect_Callback(QGraphicsObject_BoundingRect_Callback cb) { qgraphicsobject_boundingrect_callback = cb; }
    inline void setQGraphicsObject_Shape_Callback(QGraphicsObject_Shape_Callback cb) { qgraphicsobject_shape_callback = cb; }
    inline void setQGraphicsObject_Contains_Callback(QGraphicsObject_Contains_Callback cb) { qgraphicsobject_contains_callback = cb; }
    inline void setQGraphicsObject_CollidesWithItem_Callback(QGraphicsObject_CollidesWithItem_Callback cb) { qgraphicsobject_collideswithitem_callback = cb; }
    inline void setQGraphicsObject_CollidesWithPath_Callback(QGraphicsObject_CollidesWithPath_Callback cb) { qgraphicsobject_collideswithpath_callback = cb; }
    inline void setQGraphicsObject_IsObscuredBy_Callback(QGraphicsObject_IsObscuredBy_Callback cb) { qgraphicsobject_isobscuredby_callback = cb; }
    inline void setQGraphicsObject_OpaqueArea_Callback(QGraphicsObject_OpaqueArea_Callback cb) { qgraphicsobject_opaquearea_callback = cb; }
    inline void setQGraphicsObject_Paint_Callback(QGraphicsObject_Paint_Callback cb) { qgraphicsobject_paint_callback = cb; }
    inline void setQGraphicsObject_Type_Callback(QGraphicsObject_Type_Callback cb) { qgraphicsobject_type_callback = cb; }
    inline void setQGraphicsObject_SceneEventFilter_Callback(QGraphicsObject_SceneEventFilter_Callback cb) { qgraphicsobject_sceneeventfilter_callback = cb; }
    inline void setQGraphicsObject_SceneEvent_Callback(QGraphicsObject_SceneEvent_Callback cb) { qgraphicsobject_sceneevent_callback = cb; }
    inline void setQGraphicsObject_ContextMenuEvent_Callback(QGraphicsObject_ContextMenuEvent_Callback cb) { qgraphicsobject_contextmenuevent_callback = cb; }
    inline void setQGraphicsObject_DragEnterEvent_Callback(QGraphicsObject_DragEnterEvent_Callback cb) { qgraphicsobject_dragenterevent_callback = cb; }
    inline void setQGraphicsObject_DragLeaveEvent_Callback(QGraphicsObject_DragLeaveEvent_Callback cb) { qgraphicsobject_dragleaveevent_callback = cb; }
    inline void setQGraphicsObject_DragMoveEvent_Callback(QGraphicsObject_DragMoveEvent_Callback cb) { qgraphicsobject_dragmoveevent_callback = cb; }
    inline void setQGraphicsObject_DropEvent_Callback(QGraphicsObject_DropEvent_Callback cb) { qgraphicsobject_dropevent_callback = cb; }
    inline void setQGraphicsObject_FocusInEvent_Callback(QGraphicsObject_FocusInEvent_Callback cb) { qgraphicsobject_focusinevent_callback = cb; }
    inline void setQGraphicsObject_FocusOutEvent_Callback(QGraphicsObject_FocusOutEvent_Callback cb) { qgraphicsobject_focusoutevent_callback = cb; }
    inline void setQGraphicsObject_HoverEnterEvent_Callback(QGraphicsObject_HoverEnterEvent_Callback cb) { qgraphicsobject_hoverenterevent_callback = cb; }
    inline void setQGraphicsObject_HoverMoveEvent_Callback(QGraphicsObject_HoverMoveEvent_Callback cb) { qgraphicsobject_hovermoveevent_callback = cb; }
    inline void setQGraphicsObject_HoverLeaveEvent_Callback(QGraphicsObject_HoverLeaveEvent_Callback cb) { qgraphicsobject_hoverleaveevent_callback = cb; }
    inline void setQGraphicsObject_KeyPressEvent_Callback(QGraphicsObject_KeyPressEvent_Callback cb) { qgraphicsobject_keypressevent_callback = cb; }
    inline void setQGraphicsObject_KeyReleaseEvent_Callback(QGraphicsObject_KeyReleaseEvent_Callback cb) { qgraphicsobject_keyreleaseevent_callback = cb; }
    inline void setQGraphicsObject_MousePressEvent_Callback(QGraphicsObject_MousePressEvent_Callback cb) { qgraphicsobject_mousepressevent_callback = cb; }
    inline void setQGraphicsObject_MouseMoveEvent_Callback(QGraphicsObject_MouseMoveEvent_Callback cb) { qgraphicsobject_mousemoveevent_callback = cb; }
    inline void setQGraphicsObject_MouseReleaseEvent_Callback(QGraphicsObject_MouseReleaseEvent_Callback cb) { qgraphicsobject_mousereleaseevent_callback = cb; }
    inline void setQGraphicsObject_MouseDoubleClickEvent_Callback(QGraphicsObject_MouseDoubleClickEvent_Callback cb) { qgraphicsobject_mousedoubleclickevent_callback = cb; }
    inline void setQGraphicsObject_WheelEvent_Callback(QGraphicsObject_WheelEvent_Callback cb) { qgraphicsobject_wheelevent_callback = cb; }
    inline void setQGraphicsObject_InputMethodEvent_Callback(QGraphicsObject_InputMethodEvent_Callback cb) { qgraphicsobject_inputmethodevent_callback = cb; }
    inline void setQGraphicsObject_InputMethodQuery_Callback(QGraphicsObject_InputMethodQuery_Callback cb) { qgraphicsobject_inputmethodquery_callback = cb; }
    inline void setQGraphicsObject_ItemChange_Callback(QGraphicsObject_ItemChange_Callback cb) { qgraphicsobject_itemchange_callback = cb; }
    inline void setQGraphicsObject_SupportsExtension_Callback(QGraphicsObject_SupportsExtension_Callback cb) { qgraphicsobject_supportsextension_callback = cb; }
    inline void setQGraphicsObject_SetExtension_Callback(QGraphicsObject_SetExtension_Callback cb) { qgraphicsobject_setextension_callback = cb; }
    inline void setQGraphicsObject_Extension_Callback(QGraphicsObject_Extension_Callback cb) { qgraphicsobject_extension_callback = cb; }
    inline void setQGraphicsObject_UpdateMicroFocus_Callback(QGraphicsObject_UpdateMicroFocus_Callback cb) { qgraphicsobject_updatemicrofocus_callback = cb; }
    inline void setQGraphicsObject_Sender_Callback(QGraphicsObject_Sender_Callback cb) { qgraphicsobject_sender_callback = cb; }
    inline void setQGraphicsObject_SenderSignalIndex_Callback(QGraphicsObject_SenderSignalIndex_Callback cb) { qgraphicsobject_sendersignalindex_callback = cb; }
    inline void setQGraphicsObject_Receivers_Callback(QGraphicsObject_Receivers_Callback cb) { qgraphicsobject_receivers_callback = cb; }
    inline void setQGraphicsObject_IsSignalConnected_Callback(QGraphicsObject_IsSignalConnected_Callback cb) { qgraphicsobject_issignalconnected_callback = cb; }
    inline void setQGraphicsObject_AddToIndex_Callback(QGraphicsObject_AddToIndex_Callback cb) { qgraphicsobject_addtoindex_callback = cb; }
    inline void setQGraphicsObject_RemoveFromIndex_Callback(QGraphicsObject_RemoveFromIndex_Callback cb) { qgraphicsobject_removefromindex_callback = cb; }
    inline void setQGraphicsObject_PrepareGeometryChange_Callback(QGraphicsObject_PrepareGeometryChange_Callback cb) { qgraphicsobject_preparegeometrychange_callback = cb; }

    // Base flag setters
    inline void setQGraphicsObject_MetaObject_IsBase(bool value) const { qgraphicsobject_metaobject_isbase = value; }
    inline void setQGraphicsObject_Metacast_IsBase(bool value) const { qgraphicsobject_metacast_isbase = value; }
    inline void setQGraphicsObject_Metacall_IsBase(bool value) const { qgraphicsobject_metacall_isbase = value; }
    inline void setQGraphicsObject_Event_IsBase(bool value) const { qgraphicsobject_event_isbase = value; }
    inline void setQGraphicsObject_EventFilter_IsBase(bool value) const { qgraphicsobject_eventfilter_isbase = value; }
    inline void setQGraphicsObject_TimerEvent_IsBase(bool value) const { qgraphicsobject_timerevent_isbase = value; }
    inline void setQGraphicsObject_ChildEvent_IsBase(bool value) const { qgraphicsobject_childevent_isbase = value; }
    inline void setQGraphicsObject_CustomEvent_IsBase(bool value) const { qgraphicsobject_customevent_isbase = value; }
    inline void setQGraphicsObject_ConnectNotify_IsBase(bool value) const { qgraphicsobject_connectnotify_isbase = value; }
    inline void setQGraphicsObject_DisconnectNotify_IsBase(bool value) const { qgraphicsobject_disconnectnotify_isbase = value; }
    inline void setQGraphicsObject_Advance_IsBase(bool value) const { qgraphicsobject_advance_isbase = value; }
    inline void setQGraphicsObject_BoundingRect_IsBase(bool value) const { qgraphicsobject_boundingrect_isbase = value; }
    inline void setQGraphicsObject_Shape_IsBase(bool value) const { qgraphicsobject_shape_isbase = value; }
    inline void setQGraphicsObject_Contains_IsBase(bool value) const { qgraphicsobject_contains_isbase = value; }
    inline void setQGraphicsObject_CollidesWithItem_IsBase(bool value) const { qgraphicsobject_collideswithitem_isbase = value; }
    inline void setQGraphicsObject_CollidesWithPath_IsBase(bool value) const { qgraphicsobject_collideswithpath_isbase = value; }
    inline void setQGraphicsObject_IsObscuredBy_IsBase(bool value) const { qgraphicsobject_isobscuredby_isbase = value; }
    inline void setQGraphicsObject_OpaqueArea_IsBase(bool value) const { qgraphicsobject_opaquearea_isbase = value; }
    inline void setQGraphicsObject_Paint_IsBase(bool value) const { qgraphicsobject_paint_isbase = value; }
    inline void setQGraphicsObject_Type_IsBase(bool value) const { qgraphicsobject_type_isbase = value; }
    inline void setQGraphicsObject_SceneEventFilter_IsBase(bool value) const { qgraphicsobject_sceneeventfilter_isbase = value; }
    inline void setQGraphicsObject_SceneEvent_IsBase(bool value) const { qgraphicsobject_sceneevent_isbase = value; }
    inline void setQGraphicsObject_ContextMenuEvent_IsBase(bool value) const { qgraphicsobject_contextmenuevent_isbase = value; }
    inline void setQGraphicsObject_DragEnterEvent_IsBase(bool value) const { qgraphicsobject_dragenterevent_isbase = value; }
    inline void setQGraphicsObject_DragLeaveEvent_IsBase(bool value) const { qgraphicsobject_dragleaveevent_isbase = value; }
    inline void setQGraphicsObject_DragMoveEvent_IsBase(bool value) const { qgraphicsobject_dragmoveevent_isbase = value; }
    inline void setQGraphicsObject_DropEvent_IsBase(bool value) const { qgraphicsobject_dropevent_isbase = value; }
    inline void setQGraphicsObject_FocusInEvent_IsBase(bool value) const { qgraphicsobject_focusinevent_isbase = value; }
    inline void setQGraphicsObject_FocusOutEvent_IsBase(bool value) const { qgraphicsobject_focusoutevent_isbase = value; }
    inline void setQGraphicsObject_HoverEnterEvent_IsBase(bool value) const { qgraphicsobject_hoverenterevent_isbase = value; }
    inline void setQGraphicsObject_HoverMoveEvent_IsBase(bool value) const { qgraphicsobject_hovermoveevent_isbase = value; }
    inline void setQGraphicsObject_HoverLeaveEvent_IsBase(bool value) const { qgraphicsobject_hoverleaveevent_isbase = value; }
    inline void setQGraphicsObject_KeyPressEvent_IsBase(bool value) const { qgraphicsobject_keypressevent_isbase = value; }
    inline void setQGraphicsObject_KeyReleaseEvent_IsBase(bool value) const { qgraphicsobject_keyreleaseevent_isbase = value; }
    inline void setQGraphicsObject_MousePressEvent_IsBase(bool value) const { qgraphicsobject_mousepressevent_isbase = value; }
    inline void setQGraphicsObject_MouseMoveEvent_IsBase(bool value) const { qgraphicsobject_mousemoveevent_isbase = value; }
    inline void setQGraphicsObject_MouseReleaseEvent_IsBase(bool value) const { qgraphicsobject_mousereleaseevent_isbase = value; }
    inline void setQGraphicsObject_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicsobject_mousedoubleclickevent_isbase = value; }
    inline void setQGraphicsObject_WheelEvent_IsBase(bool value) const { qgraphicsobject_wheelevent_isbase = value; }
    inline void setQGraphicsObject_InputMethodEvent_IsBase(bool value) const { qgraphicsobject_inputmethodevent_isbase = value; }
    inline void setQGraphicsObject_InputMethodQuery_IsBase(bool value) const { qgraphicsobject_inputmethodquery_isbase = value; }
    inline void setQGraphicsObject_ItemChange_IsBase(bool value) const { qgraphicsobject_itemchange_isbase = value; }
    inline void setQGraphicsObject_SupportsExtension_IsBase(bool value) const { qgraphicsobject_supportsextension_isbase = value; }
    inline void setQGraphicsObject_SetExtension_IsBase(bool value) const { qgraphicsobject_setextension_isbase = value; }
    inline void setQGraphicsObject_Extension_IsBase(bool value) const { qgraphicsobject_extension_isbase = value; }
    inline void setQGraphicsObject_UpdateMicroFocus_IsBase(bool value) const { qgraphicsobject_updatemicrofocus_isbase = value; }
    inline void setQGraphicsObject_Sender_IsBase(bool value) const { qgraphicsobject_sender_isbase = value; }
    inline void setQGraphicsObject_SenderSignalIndex_IsBase(bool value) const { qgraphicsobject_sendersignalindex_isbase = value; }
    inline void setQGraphicsObject_Receivers_IsBase(bool value) const { qgraphicsobject_receivers_isbase = value; }
    inline void setQGraphicsObject_IsSignalConnected_IsBase(bool value) const { qgraphicsobject_issignalconnected_isbase = value; }
    inline void setQGraphicsObject_AddToIndex_IsBase(bool value) const { qgraphicsobject_addtoindex_isbase = value; }
    inline void setQGraphicsObject_RemoveFromIndex_IsBase(bool value) const { qgraphicsobject_removefromindex_isbase = value; }
    inline void setQGraphicsObject_PrepareGeometryChange_IsBase(bool value) const { qgraphicsobject_preparegeometrychange_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicsobject_metaobject_isbase) {
            qgraphicsobject_metaobject_isbase = false;
            return QGraphicsObject::metaObject();
        }
        auto metaobject_cb = qgraphicsobject_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QGraphicsObject::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicsobject_metacast_isbase) {
            qgraphicsobject_metacast_isbase = false;
            return QGraphicsObject::qt_metacast(param1);
        }
        auto metacast_cb = qgraphicsobject_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsObject::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsobject_metacall_isbase) {
            qgraphicsobject_metacall_isbase = false;
            return QGraphicsObject::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qgraphicsobject_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsObject::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* ev) override {
        if (qgraphicsobject_event_isbase) {
            qgraphicsobject_event_isbase = false;
            return QGraphicsObject::event(ev);
        }
        auto event_cb = qgraphicsobject_event_callback;
        if (event_cb) {
            QEvent* cbval1 = ev;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsObject::event(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicsobject_eventfilter_isbase) {
            qgraphicsobject_eventfilter_isbase = false;
            return QGraphicsObject::eventFilter(watched, event);
        }
        auto eventfilter_cb = qgraphicsobject_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsObject::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsobject_timerevent_isbase) {
            qgraphicsobject_timerevent_isbase = false;
            QGraphicsObject::timerEvent(event);
            return;
        }
        auto timerevent_cb = qgraphicsobject_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsobject_childevent_isbase) {
            qgraphicsobject_childevent_isbase = false;
            QGraphicsObject::childEvent(event);
            return;
        }
        auto childevent_cb = qgraphicsobject_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsobject_customevent_isbase) {
            qgraphicsobject_customevent_isbase = false;
            QGraphicsObject::customEvent(event);
            return;
        }
        auto customevent_cb = qgraphicsobject_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsobject_connectnotify_isbase) {
            qgraphicsobject_connectnotify_isbase = false;
            QGraphicsObject::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qgraphicsobject_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QGraphicsObject::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsobject_disconnectnotify_isbase) {
            qgraphicsobject_disconnectnotify_isbase = false;
            QGraphicsObject::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qgraphicsobject_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QGraphicsObject::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicsobject_advance_isbase) {
            qgraphicsobject_advance_isbase = false;
            QGraphicsObject::advance(phase);
            return;
        }
        auto advance_cb = qgraphicsobject_advance_callback;
        if (advance_cb) {
            int cbval1 = phase;

            advance_cb(this, cbval1);
            return;
        }
        QGraphicsObject::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        auto boundingrect_cb = qgraphicsobject_boundingrect_callback;
        if (boundingrect_cb) {
            QRectF* callback_ret = boundingrect_cb();
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicsobject_shape_isbase) {
            qgraphicsobject_shape_isbase = false;
            return QGraphicsObject::shape();
        }
        auto shape_cb = qgraphicsobject_shape_callback;
        if (shape_cb) {
            QPainterPath* callback_ret = shape_cb();
            return *callback_ret;
        }
        return QGraphicsObject::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicsobject_contains_isbase) {
            qgraphicsobject_contains_isbase = false;
            return QGraphicsObject::contains(point);
        }
        auto contains_cb = qgraphicsobject_contains_callback;
        if (contains_cb) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);

            bool callback_ret = contains_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsObject::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsobject_collideswithitem_isbase) {
            qgraphicsobject_collideswithitem_isbase = false;
            return QGraphicsObject::collidesWithItem(other, mode);
        }
        auto collideswithitem_cb = qgraphicsobject_collideswithitem_callback;
        if (collideswithitem_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithitem_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsObject::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsobject_collideswithpath_isbase) {
            qgraphicsobject_collideswithpath_isbase = false;
            return QGraphicsObject::collidesWithPath(path, mode);
        }
        auto collideswithpath_cb = qgraphicsobject_collideswithpath_callback;
        if (collideswithpath_cb) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithpath_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsObject::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicsobject_isobscuredby_isbase) {
            qgraphicsobject_isobscuredby_isbase = false;
            return QGraphicsObject::isObscuredBy(item);
        }
        auto isobscuredby_cb = qgraphicsobject_isobscuredby_callback;
        if (isobscuredby_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;

            bool callback_ret = isobscuredby_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsObject::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicsobject_opaquearea_isbase) {
            qgraphicsobject_opaquearea_isbase = false;
            return QGraphicsObject::opaqueArea();
        }
        auto opaquearea_cb = qgraphicsobject_opaquearea_callback;
        if (opaquearea_cb) {
            QPainterPath* callback_ret = opaquearea_cb();
            return *callback_ret;
        }
        return QGraphicsObject::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        auto paint_cb = qgraphicsobject_paint_callback;
        if (paint_cb) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            paint_cb(this, cbval1, cbval2, cbval3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicsobject_type_isbase) {
            qgraphicsobject_type_isbase = false;
            return QGraphicsObject::type();
        }
        auto type_cb = qgraphicsobject_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<int>(callback_ret);
        }
        return QGraphicsObject::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicsobject_sceneeventfilter_isbase) {
            qgraphicsobject_sceneeventfilter_isbase = false;
            return QGraphicsObject::sceneEventFilter(watched, event);
        }
        auto sceneeventfilter_cb = qgraphicsobject_sceneeventfilter_callback;
        if (sceneeventfilter_cb) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = sceneeventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsObject::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicsobject_sceneevent_isbase) {
            qgraphicsobject_sceneevent_isbase = false;
            return QGraphicsObject::sceneEvent(event);
        }
        auto sceneevent_cb = qgraphicsobject_sceneevent_callback;
        if (sceneevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = sceneevent_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsObject::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicsobject_contextmenuevent_isbase) {
            qgraphicsobject_contextmenuevent_isbase = false;
            QGraphicsObject::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qgraphicsobject_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsobject_dragenterevent_isbase) {
            qgraphicsobject_dragenterevent_isbase = false;
            QGraphicsObject::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qgraphicsobject_dragenterevent_callback;
        if (dragenterevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsobject_dragleaveevent_isbase) {
            qgraphicsobject_dragleaveevent_isbase = false;
            QGraphicsObject::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qgraphicsobject_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsobject_dragmoveevent_isbase) {
            qgraphicsobject_dragmoveevent_isbase = false;
            QGraphicsObject::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qgraphicsobject_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsobject_dropevent_isbase) {
            qgraphicsobject_dropevent_isbase = false;
            QGraphicsObject::dropEvent(event);
            return;
        }
        auto dropevent_cb = qgraphicsobject_dropevent_callback;
        if (dropevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicsobject_focusinevent_isbase) {
            qgraphicsobject_focusinevent_isbase = false;
            QGraphicsObject::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qgraphicsobject_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicsobject_focusoutevent_isbase) {
            qgraphicsobject_focusoutevent_isbase = false;
            QGraphicsObject::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qgraphicsobject_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsobject_hoverenterevent_isbase) {
            qgraphicsobject_hoverenterevent_isbase = false;
            QGraphicsObject::hoverEnterEvent(event);
            return;
        }
        auto hoverenterevent_cb = qgraphicsobject_hoverenterevent_callback;
        if (hoverenterevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsobject_hovermoveevent_isbase) {
            qgraphicsobject_hovermoveevent_isbase = false;
            QGraphicsObject::hoverMoveEvent(event);
            return;
        }
        auto hovermoveevent_cb = qgraphicsobject_hovermoveevent_callback;
        if (hovermoveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hovermoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsobject_hoverleaveevent_isbase) {
            qgraphicsobject_hoverleaveevent_isbase = false;
            QGraphicsObject::hoverLeaveEvent(event);
            return;
        }
        auto hoverleaveevent_cb = qgraphicsobject_hoverleaveevent_callback;
        if (hoverleaveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicsobject_keypressevent_isbase) {
            qgraphicsobject_keypressevent_isbase = false;
            QGraphicsObject::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qgraphicsobject_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicsobject_keyreleaseevent_isbase) {
            qgraphicsobject_keyreleaseevent_isbase = false;
            QGraphicsObject::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qgraphicsobject_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsobject_mousepressevent_isbase) {
            qgraphicsobject_mousepressevent_isbase = false;
            QGraphicsObject::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qgraphicsobject_mousepressevent_callback;
        if (mousepressevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsobject_mousemoveevent_isbase) {
            qgraphicsobject_mousemoveevent_isbase = false;
            QGraphicsObject::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qgraphicsobject_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsobject_mousereleaseevent_isbase) {
            qgraphicsobject_mousereleaseevent_isbase = false;
            QGraphicsObject::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qgraphicsobject_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsobject_mousedoubleclickevent_isbase) {
            qgraphicsobject_mousedoubleclickevent_isbase = false;
            QGraphicsObject::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qgraphicsobject_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicsobject_wheelevent_isbase) {
            qgraphicsobject_wheelevent_isbase = false;
            QGraphicsObject::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qgraphicsobject_wheelevent_callback;
        if (wheelevent_cb) {
            QGraphicsSceneWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicsobject_inputmethodevent_isbase) {
            qgraphicsobject_inputmethodevent_isbase = false;
            QGraphicsObject::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = qgraphicsobject_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QGraphicsObject::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicsobject_inputmethodquery_isbase) {
            qgraphicsobject_inputmethodquery_isbase = false;
            return QGraphicsObject::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qgraphicsobject_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsObject::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicsobject_itemchange_isbase) {
            qgraphicsobject_itemchange_isbase = false;
            return QGraphicsObject::itemChange(change, value);
        }
        auto itemchange_cb = qgraphicsobject_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            QVariant* callback_ret = itemchange_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QGraphicsObject::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicsobject_supportsextension_isbase) {
            qgraphicsobject_supportsextension_isbase = false;
            return QGraphicsObject::supportsExtension(extension);
        }
        auto supportsextension_cb = qgraphicsobject_supportsextension_callback;
        if (supportsextension_cb) {
            int cbval1 = static_cast<int>(extension);

            bool callback_ret = supportsextension_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsObject::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicsobject_setextension_isbase) {
            qgraphicsobject_setextension_isbase = false;
            QGraphicsObject::setExtension(extension, variant);
            return;
        }
        auto setextension_cb = qgraphicsobject_setextension_callback;
        if (setextension_cb) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);

            setextension_cb(this, cbval1, cbval2);
            return;
        }
        QGraphicsObject::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicsobject_extension_isbase) {
            qgraphicsobject_extension_isbase = false;
            return QGraphicsObject::extension(variant);
        }
        auto extension_cb = qgraphicsobject_extension_callback;
        if (extension_cb) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);

            QVariant* callback_ret = extension_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsObject::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qgraphicsobject_updatemicrofocus_isbase) {
            qgraphicsobject_updatemicrofocus_isbase = false;
            QGraphicsObject::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qgraphicsobject_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QGraphicsObject::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicsobject_sender_isbase) {
            qgraphicsobject_sender_isbase = false;
            return QGraphicsObject::sender();
        }
        auto sender_cb = qgraphicsobject_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QGraphicsObject::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicsobject_sendersignalindex_isbase) {
            qgraphicsobject_sendersignalindex_isbase = false;
            return QGraphicsObject::senderSignalIndex();
        }
        auto sendersignalindex_cb = qgraphicsobject_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QGraphicsObject::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicsobject_receivers_isbase) {
            qgraphicsobject_receivers_isbase = false;
            return QGraphicsObject::receivers(signal);
        }
        auto receivers_cb = qgraphicsobject_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsObject::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicsobject_issignalconnected_isbase) {
            qgraphicsobject_issignalconnected_isbase = false;
            return QGraphicsObject::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qgraphicsobject_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsObject::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qgraphicsobject_addtoindex_isbase) {
            qgraphicsobject_addtoindex_isbase = false;
            QGraphicsObject::addToIndex();
            return;
        }
        auto addtoindex_cb = qgraphicsobject_addtoindex_callback;
        if (addtoindex_cb) {
            addtoindex_cb();
            return;
        }
        QGraphicsObject::addToIndex();
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qgraphicsobject_removefromindex_isbase) {
            qgraphicsobject_removefromindex_isbase = false;
            QGraphicsObject::removeFromIndex();
            return;
        }
        auto removefromindex_cb = qgraphicsobject_removefromindex_callback;
        if (removefromindex_cb) {
            removefromindex_cb();
            return;
        }
        QGraphicsObject::removeFromIndex();
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qgraphicsobject_preparegeometrychange_isbase) {
            qgraphicsobject_preparegeometrychange_isbase = false;
            QGraphicsObject::prepareGeometryChange();
            return;
        }
        auto preparegeometrychange_cb = qgraphicsobject_preparegeometrychange_callback;
        if (preparegeometrychange_cb) {
            preparegeometrychange_cb();
            return;
        }
        QGraphicsObject::prepareGeometryChange();
    }

    // Friend functions
    friend bool QGraphicsObject_Event(QGraphicsObject* self, QEvent* ev);
    friend bool QGraphicsObject_SuperEvent(QGraphicsObject* self, QEvent* ev);
    friend void QGraphicsObject_TimerEvent(QGraphicsObject* self, QTimerEvent* event);
    friend void QGraphicsObject_SuperTimerEvent(QGraphicsObject* self, QTimerEvent* event);
    friend void QGraphicsObject_ChildEvent(QGraphicsObject* self, QChildEvent* event);
    friend void QGraphicsObject_SuperChildEvent(QGraphicsObject* self, QChildEvent* event);
    friend void QGraphicsObject_CustomEvent(QGraphicsObject* self, QEvent* event);
    friend void QGraphicsObject_SuperCustomEvent(QGraphicsObject* self, QEvent* event);
    friend void QGraphicsObject_ConnectNotify(QGraphicsObject* self, const QMetaMethod* signal);
    friend void QGraphicsObject_SuperConnectNotify(QGraphicsObject* self, const QMetaMethod* signal);
    friend void QGraphicsObject_DisconnectNotify(QGraphicsObject* self, const QMetaMethod* signal);
    friend void QGraphicsObject_SuperDisconnectNotify(QGraphicsObject* self, const QMetaMethod* signal);
    friend bool QGraphicsObject_SceneEventFilter(QGraphicsObject* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsObject_SuperSceneEventFilter(QGraphicsObject* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsObject_SceneEvent(QGraphicsObject* self, QEvent* event);
    friend bool QGraphicsObject_SuperSceneEvent(QGraphicsObject* self, QEvent* event);
    friend void QGraphicsObject_ContextMenuEvent(QGraphicsObject* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsObject_SuperContextMenuEvent(QGraphicsObject* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsObject_DragEnterEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsObject_SuperDragEnterEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsObject_DragLeaveEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsObject_SuperDragLeaveEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsObject_DragMoveEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsObject_SuperDragMoveEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsObject_DropEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsObject_SuperDropEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsObject_FocusInEvent(QGraphicsObject* self, QFocusEvent* event);
    friend void QGraphicsObject_SuperFocusInEvent(QGraphicsObject* self, QFocusEvent* event);
    friend void QGraphicsObject_FocusOutEvent(QGraphicsObject* self, QFocusEvent* event);
    friend void QGraphicsObject_SuperFocusOutEvent(QGraphicsObject* self, QFocusEvent* event);
    friend void QGraphicsObject_HoverEnterEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsObject_SuperHoverEnterEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsObject_HoverMoveEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsObject_SuperHoverMoveEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsObject_HoverLeaveEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsObject_SuperHoverLeaveEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsObject_KeyPressEvent(QGraphicsObject* self, QKeyEvent* event);
    friend void QGraphicsObject_SuperKeyPressEvent(QGraphicsObject* self, QKeyEvent* event);
    friend void QGraphicsObject_KeyReleaseEvent(QGraphicsObject* self, QKeyEvent* event);
    friend void QGraphicsObject_SuperKeyReleaseEvent(QGraphicsObject* self, QKeyEvent* event);
    friend void QGraphicsObject_MousePressEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsObject_SuperMousePressEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsObject_MouseMoveEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsObject_SuperMouseMoveEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsObject_MouseReleaseEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsObject_SuperMouseReleaseEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsObject_MouseDoubleClickEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsObject_SuperMouseDoubleClickEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsObject_WheelEvent(QGraphicsObject* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsObject_SuperWheelEvent(QGraphicsObject* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsObject_InputMethodEvent(QGraphicsObject* self, QInputMethodEvent* event);
    friend void QGraphicsObject_SuperInputMethodEvent(QGraphicsObject* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsObject_InputMethodQuery(const QGraphicsObject* self, int query);
    friend QVariant* QGraphicsObject_SuperInputMethodQuery(const QGraphicsObject* self, int query);
    friend QVariant* QGraphicsObject_ItemChange(QGraphicsObject* self, int change, const QVariant* value);
    friend QVariant* QGraphicsObject_SuperItemChange(QGraphicsObject* self, int change, const QVariant* value);
    friend bool QGraphicsObject_SupportsExtension(const QGraphicsObject* self, int extension);
    friend bool QGraphicsObject_SuperSupportsExtension(const QGraphicsObject* self, int extension);
    friend void QGraphicsObject_SetExtension(QGraphicsObject* self, int extension, const QVariant* variant);
    friend void QGraphicsObject_SuperSetExtension(QGraphicsObject* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsObject_Extension(const QGraphicsObject* self, const QVariant* variant);
    friend QVariant* QGraphicsObject_SuperExtension(const QGraphicsObject* self, const QVariant* variant);
    friend void QGraphicsObject_UpdateMicroFocus(QGraphicsObject* self);
    friend void QGraphicsObject_SuperUpdateMicroFocus(QGraphicsObject* self);
    friend QObject* QGraphicsObject_Sender(const QGraphicsObject* self);
    friend QObject* QGraphicsObject_SuperSender(const QGraphicsObject* self);
    friend int QGraphicsObject_SenderSignalIndex(const QGraphicsObject* self);
    friend int QGraphicsObject_SuperSenderSignalIndex(const QGraphicsObject* self);
    friend int QGraphicsObject_Receivers(const QGraphicsObject* self, const char* signal);
    friend int QGraphicsObject_SuperReceivers(const QGraphicsObject* self, const char* signal);
    friend bool QGraphicsObject_IsSignalConnected(const QGraphicsObject* self, const QMetaMethod* signal);
    friend bool QGraphicsObject_SuperIsSignalConnected(const QGraphicsObject* self, const QMetaMethod* signal);
    friend void QGraphicsObject_AddToIndex(QGraphicsObject* self);
    friend void QGraphicsObject_SuperAddToIndex(QGraphicsObject* self);
    friend void QGraphicsObject_RemoveFromIndex(QGraphicsObject* self);
    friend void QGraphicsObject_SuperRemoveFromIndex(QGraphicsObject* self);
    friend void QGraphicsObject_PrepareGeometryChange(QGraphicsObject* self);
    friend void QGraphicsObject_SuperPrepareGeometryChange(QGraphicsObject* self);
};

// This class is a subclass of QAbstractGraphicsShapeItem so that we can call protected methods
class VirtualQAbstractGraphicsShapeItem : public QAbstractGraphicsShapeItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQAbstractGraphicsShapeItem = true;

    // Virtual class public types (including callbacks)
    using QGraphicsItem::Extension;
    using QAbstractGraphicsShapeItem_IsObscuredBy_Callback = bool (*)(const QAbstractGraphicsShapeItem*, QGraphicsItem*);
    using QAbstractGraphicsShapeItem_OpaqueArea_Callback = QPainterPath* (*)();
    using QAbstractGraphicsShapeItem_Advance_Callback = void (*)(QAbstractGraphicsShapeItem*, int);
    using QAbstractGraphicsShapeItem_BoundingRect_Callback = QRectF* (*)();
    using QAbstractGraphicsShapeItem_Shape_Callback = QPainterPath* (*)();
    using QAbstractGraphicsShapeItem_Contains_Callback = bool (*)(const QAbstractGraphicsShapeItem*, QPointF*);
    using QAbstractGraphicsShapeItem_CollidesWithItem_Callback = bool (*)(const QAbstractGraphicsShapeItem*, QGraphicsItem*, int);
    using QAbstractGraphicsShapeItem_CollidesWithPath_Callback = bool (*)(const QAbstractGraphicsShapeItem*, QPainterPath*, int);
    using QAbstractGraphicsShapeItem_Paint_Callback = void (*)(QAbstractGraphicsShapeItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QAbstractGraphicsShapeItem_Type_Callback = int (*)();
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
    using QAbstractGraphicsShapeItem_UpdateMicroFocus_Callback = void (*)();
    using QAbstractGraphicsShapeItem_AddToIndex_Callback = void (*)();
    using QAbstractGraphicsShapeItem_RemoveFromIndex_Callback = void (*)();
    using QAbstractGraphicsShapeItem_PrepareGeometryChange_Callback = void (*)();

  protected:
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
    QAbstractGraphicsShapeItem_UpdateMicroFocus_Callback qabstractgraphicsshapeitem_updatemicrofocus_callback = nullptr;
    QAbstractGraphicsShapeItem_AddToIndex_Callback qabstractgraphicsshapeitem_addtoindex_callback = nullptr;
    QAbstractGraphicsShapeItem_RemoveFromIndex_Callback qabstractgraphicsshapeitem_removefromindex_callback = nullptr;
    QAbstractGraphicsShapeItem_PrepareGeometryChange_Callback qabstractgraphicsshapeitem_preparegeometrychange_callback = nullptr;

    // Instance base flags
    mutable bool qabstractgraphicsshapeitem_isobscuredby_isbase = false;
    mutable bool qabstractgraphicsshapeitem_opaquearea_isbase = false;
    mutable bool qabstractgraphicsshapeitem_advance_isbase = false;
    mutable bool qabstractgraphicsshapeitem_boundingrect_isbase = false;
    mutable bool qabstractgraphicsshapeitem_shape_isbase = false;
    mutable bool qabstractgraphicsshapeitem_contains_isbase = false;
    mutable bool qabstractgraphicsshapeitem_collideswithitem_isbase = false;
    mutable bool qabstractgraphicsshapeitem_collideswithpath_isbase = false;
    mutable bool qabstractgraphicsshapeitem_paint_isbase = false;
    mutable bool qabstractgraphicsshapeitem_type_isbase = false;
    mutable bool qabstractgraphicsshapeitem_sceneeventfilter_isbase = false;
    mutable bool qabstractgraphicsshapeitem_sceneevent_isbase = false;
    mutable bool qabstractgraphicsshapeitem_contextmenuevent_isbase = false;
    mutable bool qabstractgraphicsshapeitem_dragenterevent_isbase = false;
    mutable bool qabstractgraphicsshapeitem_dragleaveevent_isbase = false;
    mutable bool qabstractgraphicsshapeitem_dragmoveevent_isbase = false;
    mutable bool qabstractgraphicsshapeitem_dropevent_isbase = false;
    mutable bool qabstractgraphicsshapeitem_focusinevent_isbase = false;
    mutable bool qabstractgraphicsshapeitem_focusoutevent_isbase = false;
    mutable bool qabstractgraphicsshapeitem_hoverenterevent_isbase = false;
    mutable bool qabstractgraphicsshapeitem_hovermoveevent_isbase = false;
    mutable bool qabstractgraphicsshapeitem_hoverleaveevent_isbase = false;
    mutable bool qabstractgraphicsshapeitem_keypressevent_isbase = false;
    mutable bool qabstractgraphicsshapeitem_keyreleaseevent_isbase = false;
    mutable bool qabstractgraphicsshapeitem_mousepressevent_isbase = false;
    mutable bool qabstractgraphicsshapeitem_mousemoveevent_isbase = false;
    mutable bool qabstractgraphicsshapeitem_mousereleaseevent_isbase = false;
    mutable bool qabstractgraphicsshapeitem_mousedoubleclickevent_isbase = false;
    mutable bool qabstractgraphicsshapeitem_wheelevent_isbase = false;
    mutable bool qabstractgraphicsshapeitem_inputmethodevent_isbase = false;
    mutable bool qabstractgraphicsshapeitem_inputmethodquery_isbase = false;
    mutable bool qabstractgraphicsshapeitem_itemchange_isbase = false;
    mutable bool qabstractgraphicsshapeitem_supportsextension_isbase = false;
    mutable bool qabstractgraphicsshapeitem_setextension_isbase = false;
    mutable bool qabstractgraphicsshapeitem_extension_isbase = false;
    mutable bool qabstractgraphicsshapeitem_updatemicrofocus_isbase = false;
    mutable bool qabstractgraphicsshapeitem_addtoindex_isbase = false;
    mutable bool qabstractgraphicsshapeitem_removefromindex_isbase = false;
    mutable bool qabstractgraphicsshapeitem_preparegeometrychange_isbase = false;

  public:
    VirtualQAbstractGraphicsShapeItem() : QAbstractGraphicsShapeItem() {};
    VirtualQAbstractGraphicsShapeItem(QGraphicsItem* parent) : QAbstractGraphicsShapeItem(parent) {};

    // Callback setters
    inline void setQAbstractGraphicsShapeItem_IsObscuredBy_Callback(QAbstractGraphicsShapeItem_IsObscuredBy_Callback cb) { qabstractgraphicsshapeitem_isobscuredby_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_OpaqueArea_Callback(QAbstractGraphicsShapeItem_OpaqueArea_Callback cb) { qabstractgraphicsshapeitem_opaquearea_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_Advance_Callback(QAbstractGraphicsShapeItem_Advance_Callback cb) { qabstractgraphicsshapeitem_advance_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_BoundingRect_Callback(QAbstractGraphicsShapeItem_BoundingRect_Callback cb) { qabstractgraphicsshapeitem_boundingrect_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_Shape_Callback(QAbstractGraphicsShapeItem_Shape_Callback cb) { qabstractgraphicsshapeitem_shape_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_Contains_Callback(QAbstractGraphicsShapeItem_Contains_Callback cb) { qabstractgraphicsshapeitem_contains_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_CollidesWithItem_Callback(QAbstractGraphicsShapeItem_CollidesWithItem_Callback cb) { qabstractgraphicsshapeitem_collideswithitem_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_CollidesWithPath_Callback(QAbstractGraphicsShapeItem_CollidesWithPath_Callback cb) { qabstractgraphicsshapeitem_collideswithpath_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_Paint_Callback(QAbstractGraphicsShapeItem_Paint_Callback cb) { qabstractgraphicsshapeitem_paint_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_Type_Callback(QAbstractGraphicsShapeItem_Type_Callback cb) { qabstractgraphicsshapeitem_type_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_SceneEventFilter_Callback(QAbstractGraphicsShapeItem_SceneEventFilter_Callback cb) { qabstractgraphicsshapeitem_sceneeventfilter_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_SceneEvent_Callback(QAbstractGraphicsShapeItem_SceneEvent_Callback cb) { qabstractgraphicsshapeitem_sceneevent_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_ContextMenuEvent_Callback(QAbstractGraphicsShapeItem_ContextMenuEvent_Callback cb) { qabstractgraphicsshapeitem_contextmenuevent_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_DragEnterEvent_Callback(QAbstractGraphicsShapeItem_DragEnterEvent_Callback cb) { qabstractgraphicsshapeitem_dragenterevent_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_DragLeaveEvent_Callback(QAbstractGraphicsShapeItem_DragLeaveEvent_Callback cb) { qabstractgraphicsshapeitem_dragleaveevent_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_DragMoveEvent_Callback(QAbstractGraphicsShapeItem_DragMoveEvent_Callback cb) { qabstractgraphicsshapeitem_dragmoveevent_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_DropEvent_Callback(QAbstractGraphicsShapeItem_DropEvent_Callback cb) { qabstractgraphicsshapeitem_dropevent_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_FocusInEvent_Callback(QAbstractGraphicsShapeItem_FocusInEvent_Callback cb) { qabstractgraphicsshapeitem_focusinevent_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_FocusOutEvent_Callback(QAbstractGraphicsShapeItem_FocusOutEvent_Callback cb) { qabstractgraphicsshapeitem_focusoutevent_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_HoverEnterEvent_Callback(QAbstractGraphicsShapeItem_HoverEnterEvent_Callback cb) { qabstractgraphicsshapeitem_hoverenterevent_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_HoverMoveEvent_Callback(QAbstractGraphicsShapeItem_HoverMoveEvent_Callback cb) { qabstractgraphicsshapeitem_hovermoveevent_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_HoverLeaveEvent_Callback(QAbstractGraphicsShapeItem_HoverLeaveEvent_Callback cb) { qabstractgraphicsshapeitem_hoverleaveevent_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_KeyPressEvent_Callback(QAbstractGraphicsShapeItem_KeyPressEvent_Callback cb) { qabstractgraphicsshapeitem_keypressevent_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_KeyReleaseEvent_Callback(QAbstractGraphicsShapeItem_KeyReleaseEvent_Callback cb) { qabstractgraphicsshapeitem_keyreleaseevent_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_MousePressEvent_Callback(QAbstractGraphicsShapeItem_MousePressEvent_Callback cb) { qabstractgraphicsshapeitem_mousepressevent_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_MouseMoveEvent_Callback(QAbstractGraphicsShapeItem_MouseMoveEvent_Callback cb) { qabstractgraphicsshapeitem_mousemoveevent_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_MouseReleaseEvent_Callback(QAbstractGraphicsShapeItem_MouseReleaseEvent_Callback cb) { qabstractgraphicsshapeitem_mousereleaseevent_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_MouseDoubleClickEvent_Callback(QAbstractGraphicsShapeItem_MouseDoubleClickEvent_Callback cb) { qabstractgraphicsshapeitem_mousedoubleclickevent_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_WheelEvent_Callback(QAbstractGraphicsShapeItem_WheelEvent_Callback cb) { qabstractgraphicsshapeitem_wheelevent_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_InputMethodEvent_Callback(QAbstractGraphicsShapeItem_InputMethodEvent_Callback cb) { qabstractgraphicsshapeitem_inputmethodevent_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_InputMethodQuery_Callback(QAbstractGraphicsShapeItem_InputMethodQuery_Callback cb) { qabstractgraphicsshapeitem_inputmethodquery_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_ItemChange_Callback(QAbstractGraphicsShapeItem_ItemChange_Callback cb) { qabstractgraphicsshapeitem_itemchange_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_SupportsExtension_Callback(QAbstractGraphicsShapeItem_SupportsExtension_Callback cb) { qabstractgraphicsshapeitem_supportsextension_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_SetExtension_Callback(QAbstractGraphicsShapeItem_SetExtension_Callback cb) { qabstractgraphicsshapeitem_setextension_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_Extension_Callback(QAbstractGraphicsShapeItem_Extension_Callback cb) { qabstractgraphicsshapeitem_extension_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_UpdateMicroFocus_Callback(QAbstractGraphicsShapeItem_UpdateMicroFocus_Callback cb) { qabstractgraphicsshapeitem_updatemicrofocus_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_AddToIndex_Callback(QAbstractGraphicsShapeItem_AddToIndex_Callback cb) { qabstractgraphicsshapeitem_addtoindex_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_RemoveFromIndex_Callback(QAbstractGraphicsShapeItem_RemoveFromIndex_Callback cb) { qabstractgraphicsshapeitem_removefromindex_callback = cb; }
    inline void setQAbstractGraphicsShapeItem_PrepareGeometryChange_Callback(QAbstractGraphicsShapeItem_PrepareGeometryChange_Callback cb) { qabstractgraphicsshapeitem_preparegeometrychange_callback = cb; }

    // Base flag setters
    inline void setQAbstractGraphicsShapeItem_IsObscuredBy_IsBase(bool value) const { qabstractgraphicsshapeitem_isobscuredby_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_OpaqueArea_IsBase(bool value) const { qabstractgraphicsshapeitem_opaquearea_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_Advance_IsBase(bool value) const { qabstractgraphicsshapeitem_advance_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_BoundingRect_IsBase(bool value) const { qabstractgraphicsshapeitem_boundingrect_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_Shape_IsBase(bool value) const { qabstractgraphicsshapeitem_shape_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_Contains_IsBase(bool value) const { qabstractgraphicsshapeitem_contains_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_CollidesWithItem_IsBase(bool value) const { qabstractgraphicsshapeitem_collideswithitem_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_CollidesWithPath_IsBase(bool value) const { qabstractgraphicsshapeitem_collideswithpath_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_Paint_IsBase(bool value) const { qabstractgraphicsshapeitem_paint_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_Type_IsBase(bool value) const { qabstractgraphicsshapeitem_type_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_SceneEventFilter_IsBase(bool value) const { qabstractgraphicsshapeitem_sceneeventfilter_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_SceneEvent_IsBase(bool value) const { qabstractgraphicsshapeitem_sceneevent_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_ContextMenuEvent_IsBase(bool value) const { qabstractgraphicsshapeitem_contextmenuevent_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_DragEnterEvent_IsBase(bool value) const { qabstractgraphicsshapeitem_dragenterevent_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_DragLeaveEvent_IsBase(bool value) const { qabstractgraphicsshapeitem_dragleaveevent_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_DragMoveEvent_IsBase(bool value) const { qabstractgraphicsshapeitem_dragmoveevent_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_DropEvent_IsBase(bool value) const { qabstractgraphicsshapeitem_dropevent_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_FocusInEvent_IsBase(bool value) const { qabstractgraphicsshapeitem_focusinevent_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_FocusOutEvent_IsBase(bool value) const { qabstractgraphicsshapeitem_focusoutevent_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_HoverEnterEvent_IsBase(bool value) const { qabstractgraphicsshapeitem_hoverenterevent_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_HoverMoveEvent_IsBase(bool value) const { qabstractgraphicsshapeitem_hovermoveevent_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_HoverLeaveEvent_IsBase(bool value) const { qabstractgraphicsshapeitem_hoverleaveevent_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_KeyPressEvent_IsBase(bool value) const { qabstractgraphicsshapeitem_keypressevent_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_KeyReleaseEvent_IsBase(bool value) const { qabstractgraphicsshapeitem_keyreleaseevent_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_MousePressEvent_IsBase(bool value) const { qabstractgraphicsshapeitem_mousepressevent_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_MouseMoveEvent_IsBase(bool value) const { qabstractgraphicsshapeitem_mousemoveevent_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_MouseReleaseEvent_IsBase(bool value) const { qabstractgraphicsshapeitem_mousereleaseevent_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_MouseDoubleClickEvent_IsBase(bool value) const { qabstractgraphicsshapeitem_mousedoubleclickevent_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_WheelEvent_IsBase(bool value) const { qabstractgraphicsshapeitem_wheelevent_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_InputMethodEvent_IsBase(bool value) const { qabstractgraphicsshapeitem_inputmethodevent_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_InputMethodQuery_IsBase(bool value) const { qabstractgraphicsshapeitem_inputmethodquery_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_ItemChange_IsBase(bool value) const { qabstractgraphicsshapeitem_itemchange_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_SupportsExtension_IsBase(bool value) const { qabstractgraphicsshapeitem_supportsextension_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_SetExtension_IsBase(bool value) const { qabstractgraphicsshapeitem_setextension_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_Extension_IsBase(bool value) const { qabstractgraphicsshapeitem_extension_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_UpdateMicroFocus_IsBase(bool value) const { qabstractgraphicsshapeitem_updatemicrofocus_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_AddToIndex_IsBase(bool value) const { qabstractgraphicsshapeitem_addtoindex_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_RemoveFromIndex_IsBase(bool value) const { qabstractgraphicsshapeitem_removefromindex_isbase = value; }
    inline void setQAbstractGraphicsShapeItem_PrepareGeometryChange_IsBase(bool value) const { qabstractgraphicsshapeitem_preparegeometrychange_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qabstractgraphicsshapeitem_isobscuredby_isbase) {
            qabstractgraphicsshapeitem_isobscuredby_isbase = false;
            return QAbstractGraphicsShapeItem::isObscuredBy(item);
        }
        auto isobscuredby_cb = qabstractgraphicsshapeitem_isobscuredby_callback;
        if (isobscuredby_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;

            bool callback_ret = isobscuredby_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractGraphicsShapeItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qabstractgraphicsshapeitem_opaquearea_isbase) {
            qabstractgraphicsshapeitem_opaquearea_isbase = false;
            return QAbstractGraphicsShapeItem::opaqueArea();
        }
        auto opaquearea_cb = qabstractgraphicsshapeitem_opaquearea_callback;
        if (opaquearea_cb) {
            QPainterPath* callback_ret = opaquearea_cb();
            return *callback_ret;
        }
        return QAbstractGraphicsShapeItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qabstractgraphicsshapeitem_advance_isbase) {
            qabstractgraphicsshapeitem_advance_isbase = false;
            QAbstractGraphicsShapeItem::advance(phase);
            return;
        }
        auto advance_cb = qabstractgraphicsshapeitem_advance_callback;
        if (advance_cb) {
            int cbval1 = phase;

            advance_cb(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        auto boundingrect_cb = qabstractgraphicsshapeitem_boundingrect_callback;
        if (boundingrect_cb) {
            QRectF* callback_ret = boundingrect_cb();
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qabstractgraphicsshapeitem_shape_isbase) {
            qabstractgraphicsshapeitem_shape_isbase = false;
            return QAbstractGraphicsShapeItem::shape();
        }
        auto shape_cb = qabstractgraphicsshapeitem_shape_callback;
        if (shape_cb) {
            QPainterPath* callback_ret = shape_cb();
            return *callback_ret;
        }
        return QAbstractGraphicsShapeItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qabstractgraphicsshapeitem_contains_isbase) {
            qabstractgraphicsshapeitem_contains_isbase = false;
            return QAbstractGraphicsShapeItem::contains(point);
        }
        auto contains_cb = qabstractgraphicsshapeitem_contains_callback;
        if (contains_cb) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);

            bool callback_ret = contains_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractGraphicsShapeItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qabstractgraphicsshapeitem_collideswithitem_isbase) {
            qabstractgraphicsshapeitem_collideswithitem_isbase = false;
            return QAbstractGraphicsShapeItem::collidesWithItem(other, mode);
        }
        auto collideswithitem_cb = qabstractgraphicsshapeitem_collideswithitem_callback;
        if (collideswithitem_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithitem_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractGraphicsShapeItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qabstractgraphicsshapeitem_collideswithpath_isbase) {
            qabstractgraphicsshapeitem_collideswithpath_isbase = false;
            return QAbstractGraphicsShapeItem::collidesWithPath(path, mode);
        }
        auto collideswithpath_cb = qabstractgraphicsshapeitem_collideswithpath_callback;
        if (collideswithpath_cb) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithpath_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractGraphicsShapeItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        auto paint_cb = qabstractgraphicsshapeitem_paint_callback;
        if (paint_cb) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            paint_cb(this, cbval1, cbval2, cbval3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qabstractgraphicsshapeitem_type_isbase) {
            qabstractgraphicsshapeitem_type_isbase = false;
            return QAbstractGraphicsShapeItem::type();
        }
        auto type_cb = qabstractgraphicsshapeitem_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<int>(callback_ret);
        }
        return QAbstractGraphicsShapeItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qabstractgraphicsshapeitem_sceneeventfilter_isbase) {
            qabstractgraphicsshapeitem_sceneeventfilter_isbase = false;
            return QAbstractGraphicsShapeItem::sceneEventFilter(watched, event);
        }
        auto sceneeventfilter_cb = qabstractgraphicsshapeitem_sceneeventfilter_callback;
        if (sceneeventfilter_cb) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = sceneeventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractGraphicsShapeItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qabstractgraphicsshapeitem_sceneevent_isbase) {
            qabstractgraphicsshapeitem_sceneevent_isbase = false;
            return QAbstractGraphicsShapeItem::sceneEvent(event);
        }
        auto sceneevent_cb = qabstractgraphicsshapeitem_sceneevent_callback;
        if (sceneevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = sceneevent_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractGraphicsShapeItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qabstractgraphicsshapeitem_contextmenuevent_isbase) {
            qabstractgraphicsshapeitem_contextmenuevent_isbase = false;
            QAbstractGraphicsShapeItem::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qabstractgraphicsshapeitem_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qabstractgraphicsshapeitem_dragenterevent_isbase) {
            qabstractgraphicsshapeitem_dragenterevent_isbase = false;
            QAbstractGraphicsShapeItem::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qabstractgraphicsshapeitem_dragenterevent_callback;
        if (dragenterevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qabstractgraphicsshapeitem_dragleaveevent_isbase) {
            qabstractgraphicsshapeitem_dragleaveevent_isbase = false;
            QAbstractGraphicsShapeItem::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qabstractgraphicsshapeitem_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qabstractgraphicsshapeitem_dragmoveevent_isbase) {
            qabstractgraphicsshapeitem_dragmoveevent_isbase = false;
            QAbstractGraphicsShapeItem::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qabstractgraphicsshapeitem_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qabstractgraphicsshapeitem_dropevent_isbase) {
            qabstractgraphicsshapeitem_dropevent_isbase = false;
            QAbstractGraphicsShapeItem::dropEvent(event);
            return;
        }
        auto dropevent_cb = qabstractgraphicsshapeitem_dropevent_callback;
        if (dropevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qabstractgraphicsshapeitem_focusinevent_isbase) {
            qabstractgraphicsshapeitem_focusinevent_isbase = false;
            QAbstractGraphicsShapeItem::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qabstractgraphicsshapeitem_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qabstractgraphicsshapeitem_focusoutevent_isbase) {
            qabstractgraphicsshapeitem_focusoutevent_isbase = false;
            QAbstractGraphicsShapeItem::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qabstractgraphicsshapeitem_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qabstractgraphicsshapeitem_hoverenterevent_isbase) {
            qabstractgraphicsshapeitem_hoverenterevent_isbase = false;
            QAbstractGraphicsShapeItem::hoverEnterEvent(event);
            return;
        }
        auto hoverenterevent_cb = qabstractgraphicsshapeitem_hoverenterevent_callback;
        if (hoverenterevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverenterevent_cb(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qabstractgraphicsshapeitem_hovermoveevent_isbase) {
            qabstractgraphicsshapeitem_hovermoveevent_isbase = false;
            QAbstractGraphicsShapeItem::hoverMoveEvent(event);
            return;
        }
        auto hovermoveevent_cb = qabstractgraphicsshapeitem_hovermoveevent_callback;
        if (hovermoveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hovermoveevent_cb(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qabstractgraphicsshapeitem_hoverleaveevent_isbase) {
            qabstractgraphicsshapeitem_hoverleaveevent_isbase = false;
            QAbstractGraphicsShapeItem::hoverLeaveEvent(event);
            return;
        }
        auto hoverleaveevent_cb = qabstractgraphicsshapeitem_hoverleaveevent_callback;
        if (hoverleaveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverleaveevent_cb(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qabstractgraphicsshapeitem_keypressevent_isbase) {
            qabstractgraphicsshapeitem_keypressevent_isbase = false;
            QAbstractGraphicsShapeItem::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qabstractgraphicsshapeitem_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qabstractgraphicsshapeitem_keyreleaseevent_isbase) {
            qabstractgraphicsshapeitem_keyreleaseevent_isbase = false;
            QAbstractGraphicsShapeItem::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qabstractgraphicsshapeitem_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qabstractgraphicsshapeitem_mousepressevent_isbase) {
            qabstractgraphicsshapeitem_mousepressevent_isbase = false;
            QAbstractGraphicsShapeItem::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qabstractgraphicsshapeitem_mousepressevent_callback;
        if (mousepressevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qabstractgraphicsshapeitem_mousemoveevent_isbase) {
            qabstractgraphicsshapeitem_mousemoveevent_isbase = false;
            QAbstractGraphicsShapeItem::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qabstractgraphicsshapeitem_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qabstractgraphicsshapeitem_mousereleaseevent_isbase) {
            qabstractgraphicsshapeitem_mousereleaseevent_isbase = false;
            QAbstractGraphicsShapeItem::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qabstractgraphicsshapeitem_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qabstractgraphicsshapeitem_mousedoubleclickevent_isbase) {
            qabstractgraphicsshapeitem_mousedoubleclickevent_isbase = false;
            QAbstractGraphicsShapeItem::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qabstractgraphicsshapeitem_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qabstractgraphicsshapeitem_wheelevent_isbase) {
            qabstractgraphicsshapeitem_wheelevent_isbase = false;
            QAbstractGraphicsShapeItem::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qabstractgraphicsshapeitem_wheelevent_callback;
        if (wheelevent_cb) {
            QGraphicsSceneWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qabstractgraphicsshapeitem_inputmethodevent_isbase) {
            qabstractgraphicsshapeitem_inputmethodevent_isbase = false;
            QAbstractGraphicsShapeItem::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = qabstractgraphicsshapeitem_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QAbstractGraphicsShapeItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qabstractgraphicsshapeitem_inputmethodquery_isbase) {
            qabstractgraphicsshapeitem_inputmethodquery_isbase = false;
            return QAbstractGraphicsShapeItem::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qabstractgraphicsshapeitem_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QAbstractGraphicsShapeItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qabstractgraphicsshapeitem_itemchange_isbase) {
            qabstractgraphicsshapeitem_itemchange_isbase = false;
            return QAbstractGraphicsShapeItem::itemChange(change, value);
        }
        auto itemchange_cb = qabstractgraphicsshapeitem_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            QVariant* callback_ret = itemchange_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QAbstractGraphicsShapeItem::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qabstractgraphicsshapeitem_supportsextension_isbase) {
            qabstractgraphicsshapeitem_supportsextension_isbase = false;
            return QAbstractGraphicsShapeItem::supportsExtension(extension);
        }
        auto supportsextension_cb = qabstractgraphicsshapeitem_supportsextension_callback;
        if (supportsextension_cb) {
            int cbval1 = static_cast<int>(extension);

            bool callback_ret = supportsextension_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractGraphicsShapeItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qabstractgraphicsshapeitem_setextension_isbase) {
            qabstractgraphicsshapeitem_setextension_isbase = false;
            QAbstractGraphicsShapeItem::setExtension(extension, variant);
            return;
        }
        auto setextension_cb = qabstractgraphicsshapeitem_setextension_callback;
        if (setextension_cb) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);

            setextension_cb(this, cbval1, cbval2);
            return;
        }
        QAbstractGraphicsShapeItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qabstractgraphicsshapeitem_extension_isbase) {
            qabstractgraphicsshapeitem_extension_isbase = false;
            return QAbstractGraphicsShapeItem::extension(variant);
        }
        auto extension_cb = qabstractgraphicsshapeitem_extension_callback;
        if (extension_cb) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);

            QVariant* callback_ret = extension_cb(this, cbval1);
            return *callback_ret;
        }
        return QAbstractGraphicsShapeItem::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qabstractgraphicsshapeitem_updatemicrofocus_isbase) {
            qabstractgraphicsshapeitem_updatemicrofocus_isbase = false;
            QAbstractGraphicsShapeItem::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qabstractgraphicsshapeitem_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QAbstractGraphicsShapeItem::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qabstractgraphicsshapeitem_addtoindex_isbase) {
            qabstractgraphicsshapeitem_addtoindex_isbase = false;
            QAbstractGraphicsShapeItem::addToIndex();
            return;
        }
        auto addtoindex_cb = qabstractgraphicsshapeitem_addtoindex_callback;
        if (addtoindex_cb) {
            addtoindex_cb();
            return;
        }
        QAbstractGraphicsShapeItem::addToIndex();
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qabstractgraphicsshapeitem_removefromindex_isbase) {
            qabstractgraphicsshapeitem_removefromindex_isbase = false;
            QAbstractGraphicsShapeItem::removeFromIndex();
            return;
        }
        auto removefromindex_cb = qabstractgraphicsshapeitem_removefromindex_callback;
        if (removefromindex_cb) {
            removefromindex_cb();
            return;
        }
        QAbstractGraphicsShapeItem::removeFromIndex();
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qabstractgraphicsshapeitem_preparegeometrychange_isbase) {
            qabstractgraphicsshapeitem_preparegeometrychange_isbase = false;
            QAbstractGraphicsShapeItem::prepareGeometryChange();
            return;
        }
        auto preparegeometrychange_cb = qabstractgraphicsshapeitem_preparegeometrychange_callback;
        if (preparegeometrychange_cb) {
            preparegeometrychange_cb();
            return;
        }
        QAbstractGraphicsShapeItem::prepareGeometryChange();
    }

    // Friend functions
    friend bool QAbstractGraphicsShapeItem_SceneEventFilter(QAbstractGraphicsShapeItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QAbstractGraphicsShapeItem_SuperSceneEventFilter(QAbstractGraphicsShapeItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QAbstractGraphicsShapeItem_SceneEvent(QAbstractGraphicsShapeItem* self, QEvent* event);
    friend bool QAbstractGraphicsShapeItem_SuperSceneEvent(QAbstractGraphicsShapeItem* self, QEvent* event);
    friend void QAbstractGraphicsShapeItem_ContextMenuEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperContextMenuEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QAbstractGraphicsShapeItem_DragEnterEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperDragEnterEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QAbstractGraphicsShapeItem_DragLeaveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperDragLeaveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QAbstractGraphicsShapeItem_DragMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperDragMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QAbstractGraphicsShapeItem_DropEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperDropEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QAbstractGraphicsShapeItem_FocusInEvent(QAbstractGraphicsShapeItem* self, QFocusEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperFocusInEvent(QAbstractGraphicsShapeItem* self, QFocusEvent* event);
    friend void QAbstractGraphicsShapeItem_FocusOutEvent(QAbstractGraphicsShapeItem* self, QFocusEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperFocusOutEvent(QAbstractGraphicsShapeItem* self, QFocusEvent* event);
    friend void QAbstractGraphicsShapeItem_HoverEnterEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperHoverEnterEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event);
    friend void QAbstractGraphicsShapeItem_HoverMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperHoverMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event);
    friend void QAbstractGraphicsShapeItem_HoverLeaveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperHoverLeaveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event);
    friend void QAbstractGraphicsShapeItem_KeyPressEvent(QAbstractGraphicsShapeItem* self, QKeyEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperKeyPressEvent(QAbstractGraphicsShapeItem* self, QKeyEvent* event);
    friend void QAbstractGraphicsShapeItem_KeyReleaseEvent(QAbstractGraphicsShapeItem* self, QKeyEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperKeyReleaseEvent(QAbstractGraphicsShapeItem* self, QKeyEvent* event);
    friend void QAbstractGraphicsShapeItem_MousePressEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperMousePressEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event);
    friend void QAbstractGraphicsShapeItem_MouseMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperMouseMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event);
    friend void QAbstractGraphicsShapeItem_MouseReleaseEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperMouseReleaseEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event);
    friend void QAbstractGraphicsShapeItem_MouseDoubleClickEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperMouseDoubleClickEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event);
    friend void QAbstractGraphicsShapeItem_WheelEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneWheelEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperWheelEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneWheelEvent* event);
    friend void QAbstractGraphicsShapeItem_InputMethodEvent(QAbstractGraphicsShapeItem* self, QInputMethodEvent* event);
    friend void QAbstractGraphicsShapeItem_SuperInputMethodEvent(QAbstractGraphicsShapeItem* self, QInputMethodEvent* event);
    friend QVariant* QAbstractGraphicsShapeItem_InputMethodQuery(const QAbstractGraphicsShapeItem* self, int query);
    friend QVariant* QAbstractGraphicsShapeItem_SuperInputMethodQuery(const QAbstractGraphicsShapeItem* self, int query);
    friend QVariant* QAbstractGraphicsShapeItem_ItemChange(QAbstractGraphicsShapeItem* self, int change, const QVariant* value);
    friend QVariant* QAbstractGraphicsShapeItem_SuperItemChange(QAbstractGraphicsShapeItem* self, int change, const QVariant* value);
    friend bool QAbstractGraphicsShapeItem_SupportsExtension(const QAbstractGraphicsShapeItem* self, int extension);
    friend bool QAbstractGraphicsShapeItem_SuperSupportsExtension(const QAbstractGraphicsShapeItem* self, int extension);
    friend void QAbstractGraphicsShapeItem_SetExtension(QAbstractGraphicsShapeItem* self, int extension, const QVariant* variant);
    friend void QAbstractGraphicsShapeItem_SuperSetExtension(QAbstractGraphicsShapeItem* self, int extension, const QVariant* variant);
    friend QVariant* QAbstractGraphicsShapeItem_Extension(const QAbstractGraphicsShapeItem* self, const QVariant* variant);
    friend QVariant* QAbstractGraphicsShapeItem_SuperExtension(const QAbstractGraphicsShapeItem* self, const QVariant* variant);
    friend void QAbstractGraphicsShapeItem_UpdateMicroFocus(QAbstractGraphicsShapeItem* self);
    friend void QAbstractGraphicsShapeItem_SuperUpdateMicroFocus(QAbstractGraphicsShapeItem* self);
    friend void QAbstractGraphicsShapeItem_AddToIndex(QAbstractGraphicsShapeItem* self);
    friend void QAbstractGraphicsShapeItem_SuperAddToIndex(QAbstractGraphicsShapeItem* self);
    friend void QAbstractGraphicsShapeItem_RemoveFromIndex(QAbstractGraphicsShapeItem* self);
    friend void QAbstractGraphicsShapeItem_SuperRemoveFromIndex(QAbstractGraphicsShapeItem* self);
    friend void QAbstractGraphicsShapeItem_PrepareGeometryChange(QAbstractGraphicsShapeItem* self);
    friend void QAbstractGraphicsShapeItem_SuperPrepareGeometryChange(QAbstractGraphicsShapeItem* self);
};

// This class is a subclass of QGraphicsPathItem so that we can call protected methods
class VirtualQGraphicsPathItem final : public QGraphicsPathItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsPathItem = true;

    // Virtual class public types (including callbacks)
    using QGraphicsItem::Extension;
    using QGraphicsPathItem_BoundingRect_Callback = QRectF* (*)();
    using QGraphicsPathItem_Shape_Callback = QPainterPath* (*)();
    using QGraphicsPathItem_Contains_Callback = bool (*)(const QGraphicsPathItem*, QPointF*);
    using QGraphicsPathItem_Paint_Callback = void (*)(QGraphicsPathItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsPathItem_IsObscuredBy_Callback = bool (*)(const QGraphicsPathItem*, QGraphicsItem*);
    using QGraphicsPathItem_OpaqueArea_Callback = QPainterPath* (*)();
    using QGraphicsPathItem_Type_Callback = int (*)();
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
    using QGraphicsPathItem_UpdateMicroFocus_Callback = void (*)();
    using QGraphicsPathItem_AddToIndex_Callback = void (*)();
    using QGraphicsPathItem_RemoveFromIndex_Callback = void (*)();
    using QGraphicsPathItem_PrepareGeometryChange_Callback = void (*)();

  protected:
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
    QGraphicsPathItem_UpdateMicroFocus_Callback qgraphicspathitem_updatemicrofocus_callback = nullptr;
    QGraphicsPathItem_AddToIndex_Callback qgraphicspathitem_addtoindex_callback = nullptr;
    QGraphicsPathItem_RemoveFromIndex_Callback qgraphicspathitem_removefromindex_callback = nullptr;
    QGraphicsPathItem_PrepareGeometryChange_Callback qgraphicspathitem_preparegeometrychange_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicspathitem_boundingrect_isbase = false;
    mutable bool qgraphicspathitem_shape_isbase = false;
    mutable bool qgraphicspathitem_contains_isbase = false;
    mutable bool qgraphicspathitem_paint_isbase = false;
    mutable bool qgraphicspathitem_isobscuredby_isbase = false;
    mutable bool qgraphicspathitem_opaquearea_isbase = false;
    mutable bool qgraphicspathitem_type_isbase = false;
    mutable bool qgraphicspathitem_supportsextension_isbase = false;
    mutable bool qgraphicspathitem_setextension_isbase = false;
    mutable bool qgraphicspathitem_extension_isbase = false;
    mutable bool qgraphicspathitem_advance_isbase = false;
    mutable bool qgraphicspathitem_collideswithitem_isbase = false;
    mutable bool qgraphicspathitem_collideswithpath_isbase = false;
    mutable bool qgraphicspathitem_sceneeventfilter_isbase = false;
    mutable bool qgraphicspathitem_sceneevent_isbase = false;
    mutable bool qgraphicspathitem_contextmenuevent_isbase = false;
    mutable bool qgraphicspathitem_dragenterevent_isbase = false;
    mutable bool qgraphicspathitem_dragleaveevent_isbase = false;
    mutable bool qgraphicspathitem_dragmoveevent_isbase = false;
    mutable bool qgraphicspathitem_dropevent_isbase = false;
    mutable bool qgraphicspathitem_focusinevent_isbase = false;
    mutable bool qgraphicspathitem_focusoutevent_isbase = false;
    mutable bool qgraphicspathitem_hoverenterevent_isbase = false;
    mutable bool qgraphicspathitem_hovermoveevent_isbase = false;
    mutable bool qgraphicspathitem_hoverleaveevent_isbase = false;
    mutable bool qgraphicspathitem_keypressevent_isbase = false;
    mutable bool qgraphicspathitem_keyreleaseevent_isbase = false;
    mutable bool qgraphicspathitem_mousepressevent_isbase = false;
    mutable bool qgraphicspathitem_mousemoveevent_isbase = false;
    mutable bool qgraphicspathitem_mousereleaseevent_isbase = false;
    mutable bool qgraphicspathitem_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicspathitem_wheelevent_isbase = false;
    mutable bool qgraphicspathitem_inputmethodevent_isbase = false;
    mutable bool qgraphicspathitem_inputmethodquery_isbase = false;
    mutable bool qgraphicspathitem_itemchange_isbase = false;
    mutable bool qgraphicspathitem_updatemicrofocus_isbase = false;
    mutable bool qgraphicspathitem_addtoindex_isbase = false;
    mutable bool qgraphicspathitem_removefromindex_isbase = false;
    mutable bool qgraphicspathitem_preparegeometrychange_isbase = false;

  public:
    VirtualQGraphicsPathItem() : QGraphicsPathItem() {};
    VirtualQGraphicsPathItem(const QPainterPath& path) : QGraphicsPathItem(path) {};
    VirtualQGraphicsPathItem(QGraphicsItem* parent) : QGraphicsPathItem(parent) {};
    VirtualQGraphicsPathItem(const QPainterPath& path, QGraphicsItem* parent) : QGraphicsPathItem(path, parent) {};

    // Callback setters
    inline void setQGraphicsPathItem_BoundingRect_Callback(QGraphicsPathItem_BoundingRect_Callback cb) { qgraphicspathitem_boundingrect_callback = cb; }
    inline void setQGraphicsPathItem_Shape_Callback(QGraphicsPathItem_Shape_Callback cb) { qgraphicspathitem_shape_callback = cb; }
    inline void setQGraphicsPathItem_Contains_Callback(QGraphicsPathItem_Contains_Callback cb) { qgraphicspathitem_contains_callback = cb; }
    inline void setQGraphicsPathItem_Paint_Callback(QGraphicsPathItem_Paint_Callback cb) { qgraphicspathitem_paint_callback = cb; }
    inline void setQGraphicsPathItem_IsObscuredBy_Callback(QGraphicsPathItem_IsObscuredBy_Callback cb) { qgraphicspathitem_isobscuredby_callback = cb; }
    inline void setQGraphicsPathItem_OpaqueArea_Callback(QGraphicsPathItem_OpaqueArea_Callback cb) { qgraphicspathitem_opaquearea_callback = cb; }
    inline void setQGraphicsPathItem_Type_Callback(QGraphicsPathItem_Type_Callback cb) { qgraphicspathitem_type_callback = cb; }
    inline void setQGraphicsPathItem_SupportsExtension_Callback(QGraphicsPathItem_SupportsExtension_Callback cb) { qgraphicspathitem_supportsextension_callback = cb; }
    inline void setQGraphicsPathItem_SetExtension_Callback(QGraphicsPathItem_SetExtension_Callback cb) { qgraphicspathitem_setextension_callback = cb; }
    inline void setQGraphicsPathItem_Extension_Callback(QGraphicsPathItem_Extension_Callback cb) { qgraphicspathitem_extension_callback = cb; }
    inline void setQGraphicsPathItem_Advance_Callback(QGraphicsPathItem_Advance_Callback cb) { qgraphicspathitem_advance_callback = cb; }
    inline void setQGraphicsPathItem_CollidesWithItem_Callback(QGraphicsPathItem_CollidesWithItem_Callback cb) { qgraphicspathitem_collideswithitem_callback = cb; }
    inline void setQGraphicsPathItem_CollidesWithPath_Callback(QGraphicsPathItem_CollidesWithPath_Callback cb) { qgraphicspathitem_collideswithpath_callback = cb; }
    inline void setQGraphicsPathItem_SceneEventFilter_Callback(QGraphicsPathItem_SceneEventFilter_Callback cb) { qgraphicspathitem_sceneeventfilter_callback = cb; }
    inline void setQGraphicsPathItem_SceneEvent_Callback(QGraphicsPathItem_SceneEvent_Callback cb) { qgraphicspathitem_sceneevent_callback = cb; }
    inline void setQGraphicsPathItem_ContextMenuEvent_Callback(QGraphicsPathItem_ContextMenuEvent_Callback cb) { qgraphicspathitem_contextmenuevent_callback = cb; }
    inline void setQGraphicsPathItem_DragEnterEvent_Callback(QGraphicsPathItem_DragEnterEvent_Callback cb) { qgraphicspathitem_dragenterevent_callback = cb; }
    inline void setQGraphicsPathItem_DragLeaveEvent_Callback(QGraphicsPathItem_DragLeaveEvent_Callback cb) { qgraphicspathitem_dragleaveevent_callback = cb; }
    inline void setQGraphicsPathItem_DragMoveEvent_Callback(QGraphicsPathItem_DragMoveEvent_Callback cb) { qgraphicspathitem_dragmoveevent_callback = cb; }
    inline void setQGraphicsPathItem_DropEvent_Callback(QGraphicsPathItem_DropEvent_Callback cb) { qgraphicspathitem_dropevent_callback = cb; }
    inline void setQGraphicsPathItem_FocusInEvent_Callback(QGraphicsPathItem_FocusInEvent_Callback cb) { qgraphicspathitem_focusinevent_callback = cb; }
    inline void setQGraphicsPathItem_FocusOutEvent_Callback(QGraphicsPathItem_FocusOutEvent_Callback cb) { qgraphicspathitem_focusoutevent_callback = cb; }
    inline void setQGraphicsPathItem_HoverEnterEvent_Callback(QGraphicsPathItem_HoverEnterEvent_Callback cb) { qgraphicspathitem_hoverenterevent_callback = cb; }
    inline void setQGraphicsPathItem_HoverMoveEvent_Callback(QGraphicsPathItem_HoverMoveEvent_Callback cb) { qgraphicspathitem_hovermoveevent_callback = cb; }
    inline void setQGraphicsPathItem_HoverLeaveEvent_Callback(QGraphicsPathItem_HoverLeaveEvent_Callback cb) { qgraphicspathitem_hoverleaveevent_callback = cb; }
    inline void setQGraphicsPathItem_KeyPressEvent_Callback(QGraphicsPathItem_KeyPressEvent_Callback cb) { qgraphicspathitem_keypressevent_callback = cb; }
    inline void setQGraphicsPathItem_KeyReleaseEvent_Callback(QGraphicsPathItem_KeyReleaseEvent_Callback cb) { qgraphicspathitem_keyreleaseevent_callback = cb; }
    inline void setQGraphicsPathItem_MousePressEvent_Callback(QGraphicsPathItem_MousePressEvent_Callback cb) { qgraphicspathitem_mousepressevent_callback = cb; }
    inline void setQGraphicsPathItem_MouseMoveEvent_Callback(QGraphicsPathItem_MouseMoveEvent_Callback cb) { qgraphicspathitem_mousemoveevent_callback = cb; }
    inline void setQGraphicsPathItem_MouseReleaseEvent_Callback(QGraphicsPathItem_MouseReleaseEvent_Callback cb) { qgraphicspathitem_mousereleaseevent_callback = cb; }
    inline void setQGraphicsPathItem_MouseDoubleClickEvent_Callback(QGraphicsPathItem_MouseDoubleClickEvent_Callback cb) { qgraphicspathitem_mousedoubleclickevent_callback = cb; }
    inline void setQGraphicsPathItem_WheelEvent_Callback(QGraphicsPathItem_WheelEvent_Callback cb) { qgraphicspathitem_wheelevent_callback = cb; }
    inline void setQGraphicsPathItem_InputMethodEvent_Callback(QGraphicsPathItem_InputMethodEvent_Callback cb) { qgraphicspathitem_inputmethodevent_callback = cb; }
    inline void setQGraphicsPathItem_InputMethodQuery_Callback(QGraphicsPathItem_InputMethodQuery_Callback cb) { qgraphicspathitem_inputmethodquery_callback = cb; }
    inline void setQGraphicsPathItem_ItemChange_Callback(QGraphicsPathItem_ItemChange_Callback cb) { qgraphicspathitem_itemchange_callback = cb; }
    inline void setQGraphicsPathItem_UpdateMicroFocus_Callback(QGraphicsPathItem_UpdateMicroFocus_Callback cb) { qgraphicspathitem_updatemicrofocus_callback = cb; }
    inline void setQGraphicsPathItem_AddToIndex_Callback(QGraphicsPathItem_AddToIndex_Callback cb) { qgraphicspathitem_addtoindex_callback = cb; }
    inline void setQGraphicsPathItem_RemoveFromIndex_Callback(QGraphicsPathItem_RemoveFromIndex_Callback cb) { qgraphicspathitem_removefromindex_callback = cb; }
    inline void setQGraphicsPathItem_PrepareGeometryChange_Callback(QGraphicsPathItem_PrepareGeometryChange_Callback cb) { qgraphicspathitem_preparegeometrychange_callback = cb; }

    // Base flag setters
    inline void setQGraphicsPathItem_BoundingRect_IsBase(bool value) const { qgraphicspathitem_boundingrect_isbase = value; }
    inline void setQGraphicsPathItem_Shape_IsBase(bool value) const { qgraphicspathitem_shape_isbase = value; }
    inline void setQGraphicsPathItem_Contains_IsBase(bool value) const { qgraphicspathitem_contains_isbase = value; }
    inline void setQGraphicsPathItem_Paint_IsBase(bool value) const { qgraphicspathitem_paint_isbase = value; }
    inline void setQGraphicsPathItem_IsObscuredBy_IsBase(bool value) const { qgraphicspathitem_isobscuredby_isbase = value; }
    inline void setQGraphicsPathItem_OpaqueArea_IsBase(bool value) const { qgraphicspathitem_opaquearea_isbase = value; }
    inline void setQGraphicsPathItem_Type_IsBase(bool value) const { qgraphicspathitem_type_isbase = value; }
    inline void setQGraphicsPathItem_SupportsExtension_IsBase(bool value) const { qgraphicspathitem_supportsextension_isbase = value; }
    inline void setQGraphicsPathItem_SetExtension_IsBase(bool value) const { qgraphicspathitem_setextension_isbase = value; }
    inline void setQGraphicsPathItem_Extension_IsBase(bool value) const { qgraphicspathitem_extension_isbase = value; }
    inline void setQGraphicsPathItem_Advance_IsBase(bool value) const { qgraphicspathitem_advance_isbase = value; }
    inline void setQGraphicsPathItem_CollidesWithItem_IsBase(bool value) const { qgraphicspathitem_collideswithitem_isbase = value; }
    inline void setQGraphicsPathItem_CollidesWithPath_IsBase(bool value) const { qgraphicspathitem_collideswithpath_isbase = value; }
    inline void setQGraphicsPathItem_SceneEventFilter_IsBase(bool value) const { qgraphicspathitem_sceneeventfilter_isbase = value; }
    inline void setQGraphicsPathItem_SceneEvent_IsBase(bool value) const { qgraphicspathitem_sceneevent_isbase = value; }
    inline void setQGraphicsPathItem_ContextMenuEvent_IsBase(bool value) const { qgraphicspathitem_contextmenuevent_isbase = value; }
    inline void setQGraphicsPathItem_DragEnterEvent_IsBase(bool value) const { qgraphicspathitem_dragenterevent_isbase = value; }
    inline void setQGraphicsPathItem_DragLeaveEvent_IsBase(bool value) const { qgraphicspathitem_dragleaveevent_isbase = value; }
    inline void setQGraphicsPathItem_DragMoveEvent_IsBase(bool value) const { qgraphicspathitem_dragmoveevent_isbase = value; }
    inline void setQGraphicsPathItem_DropEvent_IsBase(bool value) const { qgraphicspathitem_dropevent_isbase = value; }
    inline void setQGraphicsPathItem_FocusInEvent_IsBase(bool value) const { qgraphicspathitem_focusinevent_isbase = value; }
    inline void setQGraphicsPathItem_FocusOutEvent_IsBase(bool value) const { qgraphicspathitem_focusoutevent_isbase = value; }
    inline void setQGraphicsPathItem_HoverEnterEvent_IsBase(bool value) const { qgraphicspathitem_hoverenterevent_isbase = value; }
    inline void setQGraphicsPathItem_HoverMoveEvent_IsBase(bool value) const { qgraphicspathitem_hovermoveevent_isbase = value; }
    inline void setQGraphicsPathItem_HoverLeaveEvent_IsBase(bool value) const { qgraphicspathitem_hoverleaveevent_isbase = value; }
    inline void setQGraphicsPathItem_KeyPressEvent_IsBase(bool value) const { qgraphicspathitem_keypressevent_isbase = value; }
    inline void setQGraphicsPathItem_KeyReleaseEvent_IsBase(bool value) const { qgraphicspathitem_keyreleaseevent_isbase = value; }
    inline void setQGraphicsPathItem_MousePressEvent_IsBase(bool value) const { qgraphicspathitem_mousepressevent_isbase = value; }
    inline void setQGraphicsPathItem_MouseMoveEvent_IsBase(bool value) const { qgraphicspathitem_mousemoveevent_isbase = value; }
    inline void setQGraphicsPathItem_MouseReleaseEvent_IsBase(bool value) const { qgraphicspathitem_mousereleaseevent_isbase = value; }
    inline void setQGraphicsPathItem_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicspathitem_mousedoubleclickevent_isbase = value; }
    inline void setQGraphicsPathItem_WheelEvent_IsBase(bool value) const { qgraphicspathitem_wheelevent_isbase = value; }
    inline void setQGraphicsPathItem_InputMethodEvent_IsBase(bool value) const { qgraphicspathitem_inputmethodevent_isbase = value; }
    inline void setQGraphicsPathItem_InputMethodQuery_IsBase(bool value) const { qgraphicspathitem_inputmethodquery_isbase = value; }
    inline void setQGraphicsPathItem_ItemChange_IsBase(bool value) const { qgraphicspathitem_itemchange_isbase = value; }
    inline void setQGraphicsPathItem_UpdateMicroFocus_IsBase(bool value) const { qgraphicspathitem_updatemicrofocus_isbase = value; }
    inline void setQGraphicsPathItem_AddToIndex_IsBase(bool value) const { qgraphicspathitem_addtoindex_isbase = value; }
    inline void setQGraphicsPathItem_RemoveFromIndex_IsBase(bool value) const { qgraphicspathitem_removefromindex_isbase = value; }
    inline void setQGraphicsPathItem_PrepareGeometryChange_IsBase(bool value) const { qgraphicspathitem_preparegeometrychange_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicspathitem_boundingrect_isbase) {
            qgraphicspathitem_boundingrect_isbase = false;
            return QGraphicsPathItem::boundingRect();
        }
        auto boundingrect_cb = qgraphicspathitem_boundingrect_callback;
        if (boundingrect_cb) {
            QRectF* callback_ret = boundingrect_cb();
            return *callback_ret;
        }
        return QGraphicsPathItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicspathitem_shape_isbase) {
            qgraphicspathitem_shape_isbase = false;
            return QGraphicsPathItem::shape();
        }
        auto shape_cb = qgraphicspathitem_shape_callback;
        if (shape_cb) {
            QPainterPath* callback_ret = shape_cb();
            return *callback_ret;
        }
        return QGraphicsPathItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicspathitem_contains_isbase) {
            qgraphicspathitem_contains_isbase = false;
            return QGraphicsPathItem::contains(point);
        }
        auto contains_cb = qgraphicspathitem_contains_callback;
        if (contains_cb) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);

            bool callback_ret = contains_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPathItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicspathitem_paint_isbase) {
            qgraphicspathitem_paint_isbase = false;
            QGraphicsPathItem::paint(painter, option, widget);
            return;
        }
        auto paint_cb = qgraphicspathitem_paint_callback;
        if (paint_cb) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            paint_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsPathItem::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicspathitem_isobscuredby_isbase) {
            qgraphicspathitem_isobscuredby_isbase = false;
            return QGraphicsPathItem::isObscuredBy(item);
        }
        auto isobscuredby_cb = qgraphicspathitem_isobscuredby_callback;
        if (isobscuredby_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;

            bool callback_ret = isobscuredby_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPathItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicspathitem_opaquearea_isbase) {
            qgraphicspathitem_opaquearea_isbase = false;
            return QGraphicsPathItem::opaqueArea();
        }
        auto opaquearea_cb = qgraphicspathitem_opaquearea_callback;
        if (opaquearea_cb) {
            QPainterPath* callback_ret = opaquearea_cb();
            return *callback_ret;
        }
        return QGraphicsPathItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicspathitem_type_isbase) {
            qgraphicspathitem_type_isbase = false;
            return QGraphicsPathItem::type();
        }
        auto type_cb = qgraphicspathitem_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<int>(callback_ret);
        }
        return QGraphicsPathItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicspathitem_supportsextension_isbase) {
            qgraphicspathitem_supportsextension_isbase = false;
            return QGraphicsPathItem::supportsExtension(extension);
        }
        auto supportsextension_cb = qgraphicspathitem_supportsextension_callback;
        if (supportsextension_cb) {
            int cbval1 = static_cast<int>(extension);

            bool callback_ret = supportsextension_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPathItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicspathitem_setextension_isbase) {
            qgraphicspathitem_setextension_isbase = false;
            QGraphicsPathItem::setExtension(extension, variant);
            return;
        }
        auto setextension_cb = qgraphicspathitem_setextension_callback;
        if (setextension_cb) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);

            setextension_cb(this, cbval1, cbval2);
            return;
        }
        QGraphicsPathItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicspathitem_extension_isbase) {
            qgraphicspathitem_extension_isbase = false;
            return QGraphicsPathItem::extension(variant);
        }
        auto extension_cb = qgraphicspathitem_extension_callback;
        if (extension_cb) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);

            QVariant* callback_ret = extension_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsPathItem::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicspathitem_advance_isbase) {
            qgraphicspathitem_advance_isbase = false;
            QGraphicsPathItem::advance(phase);
            return;
        }
        auto advance_cb = qgraphicspathitem_advance_callback;
        if (advance_cb) {
            int cbval1 = phase;

            advance_cb(this, cbval1);
            return;
        }
        QGraphicsPathItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicspathitem_collideswithitem_isbase) {
            qgraphicspathitem_collideswithitem_isbase = false;
            return QGraphicsPathItem::collidesWithItem(other, mode);
        }
        auto collideswithitem_cb = qgraphicspathitem_collideswithitem_callback;
        if (collideswithitem_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithitem_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsPathItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicspathitem_collideswithpath_isbase) {
            qgraphicspathitem_collideswithpath_isbase = false;
            return QGraphicsPathItem::collidesWithPath(path, mode);
        }
        auto collideswithpath_cb = qgraphicspathitem_collideswithpath_callback;
        if (collideswithpath_cb) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithpath_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsPathItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicspathitem_sceneeventfilter_isbase) {
            qgraphicspathitem_sceneeventfilter_isbase = false;
            return QGraphicsPathItem::sceneEventFilter(watched, event);
        }
        auto sceneeventfilter_cb = qgraphicspathitem_sceneeventfilter_callback;
        if (sceneeventfilter_cb) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = sceneeventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsPathItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicspathitem_sceneevent_isbase) {
            qgraphicspathitem_sceneevent_isbase = false;
            return QGraphicsPathItem::sceneEvent(event);
        }
        auto sceneevent_cb = qgraphicspathitem_sceneevent_callback;
        if (sceneevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = sceneevent_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPathItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicspathitem_contextmenuevent_isbase) {
            qgraphicspathitem_contextmenuevent_isbase = false;
            QGraphicsPathItem::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qgraphicspathitem_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QGraphicsPathItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspathitem_dragenterevent_isbase) {
            qgraphicspathitem_dragenterevent_isbase = false;
            QGraphicsPathItem::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qgraphicspathitem_dragenterevent_callback;
        if (dragenterevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsPathItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspathitem_dragleaveevent_isbase) {
            qgraphicspathitem_dragleaveevent_isbase = false;
            QGraphicsPathItem::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qgraphicspathitem_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsPathItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspathitem_dragmoveevent_isbase) {
            qgraphicspathitem_dragmoveevent_isbase = false;
            QGraphicsPathItem::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qgraphicspathitem_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsPathItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspathitem_dropevent_isbase) {
            qgraphicspathitem_dropevent_isbase = false;
            QGraphicsPathItem::dropEvent(event);
            return;
        }
        auto dropevent_cb = qgraphicspathitem_dropevent_callback;
        if (dropevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QGraphicsPathItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicspathitem_focusinevent_isbase) {
            qgraphicspathitem_focusinevent_isbase = false;
            QGraphicsPathItem::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qgraphicspathitem_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QGraphicsPathItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicspathitem_focusoutevent_isbase) {
            qgraphicspathitem_focusoutevent_isbase = false;
            QGraphicsPathItem::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qgraphicspathitem_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QGraphicsPathItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicspathitem_hoverenterevent_isbase) {
            qgraphicspathitem_hoverenterevent_isbase = false;
            QGraphicsPathItem::hoverEnterEvent(event);
            return;
        }
        auto hoverenterevent_cb = qgraphicspathitem_hoverenterevent_callback;
        if (hoverenterevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsPathItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicspathitem_hovermoveevent_isbase) {
            qgraphicspathitem_hovermoveevent_isbase = false;
            QGraphicsPathItem::hoverMoveEvent(event);
            return;
        }
        auto hovermoveevent_cb = qgraphicspathitem_hovermoveevent_callback;
        if (hovermoveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hovermoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsPathItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicspathitem_hoverleaveevent_isbase) {
            qgraphicspathitem_hoverleaveevent_isbase = false;
            QGraphicsPathItem::hoverLeaveEvent(event);
            return;
        }
        auto hoverleaveevent_cb = qgraphicspathitem_hoverleaveevent_callback;
        if (hoverleaveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsPathItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicspathitem_keypressevent_isbase) {
            qgraphicspathitem_keypressevent_isbase = false;
            QGraphicsPathItem::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qgraphicspathitem_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QGraphicsPathItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicspathitem_keyreleaseevent_isbase) {
            qgraphicspathitem_keyreleaseevent_isbase = false;
            QGraphicsPathItem::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qgraphicspathitem_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsPathItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspathitem_mousepressevent_isbase) {
            qgraphicspathitem_mousepressevent_isbase = false;
            QGraphicsPathItem::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qgraphicspathitem_mousepressevent_callback;
        if (mousepressevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QGraphicsPathItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspathitem_mousemoveevent_isbase) {
            qgraphicspathitem_mousemoveevent_isbase = false;
            QGraphicsPathItem::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qgraphicspathitem_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsPathItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspathitem_mousereleaseevent_isbase) {
            qgraphicspathitem_mousereleaseevent_isbase = false;
            QGraphicsPathItem::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qgraphicspathitem_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsPathItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspathitem_mousedoubleclickevent_isbase) {
            qgraphicspathitem_mousedoubleclickevent_isbase = false;
            QGraphicsPathItem::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qgraphicspathitem_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QGraphicsPathItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicspathitem_wheelevent_isbase) {
            qgraphicspathitem_wheelevent_isbase = false;
            QGraphicsPathItem::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qgraphicspathitem_wheelevent_callback;
        if (wheelevent_cb) {
            QGraphicsSceneWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QGraphicsPathItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicspathitem_inputmethodevent_isbase) {
            qgraphicspathitem_inputmethodevent_isbase = false;
            QGraphicsPathItem::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = qgraphicspathitem_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QGraphicsPathItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicspathitem_inputmethodquery_isbase) {
            qgraphicspathitem_inputmethodquery_isbase = false;
            return QGraphicsPathItem::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qgraphicspathitem_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsPathItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicspathitem_itemchange_isbase) {
            qgraphicspathitem_itemchange_isbase = false;
            return QGraphicsPathItem::itemChange(change, value);
        }
        auto itemchange_cb = qgraphicspathitem_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            QVariant* callback_ret = itemchange_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QGraphicsPathItem::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qgraphicspathitem_updatemicrofocus_isbase) {
            qgraphicspathitem_updatemicrofocus_isbase = false;
            QGraphicsPathItem::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qgraphicspathitem_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QGraphicsPathItem::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qgraphicspathitem_addtoindex_isbase) {
            qgraphicspathitem_addtoindex_isbase = false;
            QGraphicsPathItem::addToIndex();
            return;
        }
        auto addtoindex_cb = qgraphicspathitem_addtoindex_callback;
        if (addtoindex_cb) {
            addtoindex_cb();
            return;
        }
        QGraphicsPathItem::addToIndex();
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qgraphicspathitem_removefromindex_isbase) {
            qgraphicspathitem_removefromindex_isbase = false;
            QGraphicsPathItem::removeFromIndex();
            return;
        }
        auto removefromindex_cb = qgraphicspathitem_removefromindex_callback;
        if (removefromindex_cb) {
            removefromindex_cb();
            return;
        }
        QGraphicsPathItem::removeFromIndex();
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qgraphicspathitem_preparegeometrychange_isbase) {
            qgraphicspathitem_preparegeometrychange_isbase = false;
            QGraphicsPathItem::prepareGeometryChange();
            return;
        }
        auto preparegeometrychange_cb = qgraphicspathitem_preparegeometrychange_callback;
        if (preparegeometrychange_cb) {
            preparegeometrychange_cb();
            return;
        }
        QGraphicsPathItem::prepareGeometryChange();
    }

    // Friend functions
    friend bool QGraphicsPathItem_SupportsExtension(const QGraphicsPathItem* self, int extension);
    friend bool QGraphicsPathItem_SuperSupportsExtension(const QGraphicsPathItem* self, int extension);
    friend void QGraphicsPathItem_SetExtension(QGraphicsPathItem* self, int extension, const QVariant* variant);
    friend void QGraphicsPathItem_SuperSetExtension(QGraphicsPathItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsPathItem_Extension(const QGraphicsPathItem* self, const QVariant* variant);
    friend QVariant* QGraphicsPathItem_SuperExtension(const QGraphicsPathItem* self, const QVariant* variant);
    friend bool QGraphicsPathItem_SceneEventFilter(QGraphicsPathItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsPathItem_SuperSceneEventFilter(QGraphicsPathItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsPathItem_SceneEvent(QGraphicsPathItem* self, QEvent* event);
    friend bool QGraphicsPathItem_SuperSceneEvent(QGraphicsPathItem* self, QEvent* event);
    friend void QGraphicsPathItem_ContextMenuEvent(QGraphicsPathItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsPathItem_SuperContextMenuEvent(QGraphicsPathItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsPathItem_DragEnterEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPathItem_SuperDragEnterEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPathItem_DragLeaveEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPathItem_SuperDragLeaveEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPathItem_DragMoveEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPathItem_SuperDragMoveEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPathItem_DropEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPathItem_SuperDropEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPathItem_FocusInEvent(QGraphicsPathItem* self, QFocusEvent* event);
    friend void QGraphicsPathItem_SuperFocusInEvent(QGraphicsPathItem* self, QFocusEvent* event);
    friend void QGraphicsPathItem_FocusOutEvent(QGraphicsPathItem* self, QFocusEvent* event);
    friend void QGraphicsPathItem_SuperFocusOutEvent(QGraphicsPathItem* self, QFocusEvent* event);
    friend void QGraphicsPathItem_HoverEnterEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPathItem_SuperHoverEnterEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPathItem_HoverMoveEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPathItem_SuperHoverMoveEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPathItem_HoverLeaveEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPathItem_SuperHoverLeaveEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPathItem_KeyPressEvent(QGraphicsPathItem* self, QKeyEvent* event);
    friend void QGraphicsPathItem_SuperKeyPressEvent(QGraphicsPathItem* self, QKeyEvent* event);
    friend void QGraphicsPathItem_KeyReleaseEvent(QGraphicsPathItem* self, QKeyEvent* event);
    friend void QGraphicsPathItem_SuperKeyReleaseEvent(QGraphicsPathItem* self, QKeyEvent* event);
    friend void QGraphicsPathItem_MousePressEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPathItem_SuperMousePressEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPathItem_MouseMoveEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPathItem_SuperMouseMoveEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPathItem_MouseReleaseEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPathItem_SuperMouseReleaseEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPathItem_MouseDoubleClickEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPathItem_SuperMouseDoubleClickEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPathItem_WheelEvent(QGraphicsPathItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsPathItem_SuperWheelEvent(QGraphicsPathItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsPathItem_InputMethodEvent(QGraphicsPathItem* self, QInputMethodEvent* event);
    friend void QGraphicsPathItem_SuperInputMethodEvent(QGraphicsPathItem* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsPathItem_InputMethodQuery(const QGraphicsPathItem* self, int query);
    friend QVariant* QGraphicsPathItem_SuperInputMethodQuery(const QGraphicsPathItem* self, int query);
    friend QVariant* QGraphicsPathItem_ItemChange(QGraphicsPathItem* self, int change, const QVariant* value);
    friend QVariant* QGraphicsPathItem_SuperItemChange(QGraphicsPathItem* self, int change, const QVariant* value);
    friend void QGraphicsPathItem_UpdateMicroFocus(QGraphicsPathItem* self);
    friend void QGraphicsPathItem_SuperUpdateMicroFocus(QGraphicsPathItem* self);
    friend void QGraphicsPathItem_AddToIndex(QGraphicsPathItem* self);
    friend void QGraphicsPathItem_SuperAddToIndex(QGraphicsPathItem* self);
    friend void QGraphicsPathItem_RemoveFromIndex(QGraphicsPathItem* self);
    friend void QGraphicsPathItem_SuperRemoveFromIndex(QGraphicsPathItem* self);
    friend void QGraphicsPathItem_PrepareGeometryChange(QGraphicsPathItem* self);
    friend void QGraphicsPathItem_SuperPrepareGeometryChange(QGraphicsPathItem* self);
};

// This class is a subclass of QGraphicsRectItem so that we can call protected methods
class VirtualQGraphicsRectItem final : public QGraphicsRectItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsRectItem = true;

    // Virtual class public types (including callbacks)
    using QGraphicsItem::Extension;
    using QGraphicsRectItem_BoundingRect_Callback = QRectF* (*)();
    using QGraphicsRectItem_Shape_Callback = QPainterPath* (*)();
    using QGraphicsRectItem_Contains_Callback = bool (*)(const QGraphicsRectItem*, QPointF*);
    using QGraphicsRectItem_Paint_Callback = void (*)(QGraphicsRectItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsRectItem_IsObscuredBy_Callback = bool (*)(const QGraphicsRectItem*, QGraphicsItem*);
    using QGraphicsRectItem_OpaqueArea_Callback = QPainterPath* (*)();
    using QGraphicsRectItem_Type_Callback = int (*)();
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
    using QGraphicsRectItem_UpdateMicroFocus_Callback = void (*)();
    using QGraphicsRectItem_AddToIndex_Callback = void (*)();
    using QGraphicsRectItem_RemoveFromIndex_Callback = void (*)();
    using QGraphicsRectItem_PrepareGeometryChange_Callback = void (*)();

  protected:
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
    QGraphicsRectItem_UpdateMicroFocus_Callback qgraphicsrectitem_updatemicrofocus_callback = nullptr;
    QGraphicsRectItem_AddToIndex_Callback qgraphicsrectitem_addtoindex_callback = nullptr;
    QGraphicsRectItem_RemoveFromIndex_Callback qgraphicsrectitem_removefromindex_callback = nullptr;
    QGraphicsRectItem_PrepareGeometryChange_Callback qgraphicsrectitem_preparegeometrychange_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsrectitem_boundingrect_isbase = false;
    mutable bool qgraphicsrectitem_shape_isbase = false;
    mutable bool qgraphicsrectitem_contains_isbase = false;
    mutable bool qgraphicsrectitem_paint_isbase = false;
    mutable bool qgraphicsrectitem_isobscuredby_isbase = false;
    mutable bool qgraphicsrectitem_opaquearea_isbase = false;
    mutable bool qgraphicsrectitem_type_isbase = false;
    mutable bool qgraphicsrectitem_supportsextension_isbase = false;
    mutable bool qgraphicsrectitem_setextension_isbase = false;
    mutable bool qgraphicsrectitem_extension_isbase = false;
    mutable bool qgraphicsrectitem_advance_isbase = false;
    mutable bool qgraphicsrectitem_collideswithitem_isbase = false;
    mutable bool qgraphicsrectitem_collideswithpath_isbase = false;
    mutable bool qgraphicsrectitem_sceneeventfilter_isbase = false;
    mutable bool qgraphicsrectitem_sceneevent_isbase = false;
    mutable bool qgraphicsrectitem_contextmenuevent_isbase = false;
    mutable bool qgraphicsrectitem_dragenterevent_isbase = false;
    mutable bool qgraphicsrectitem_dragleaveevent_isbase = false;
    mutable bool qgraphicsrectitem_dragmoveevent_isbase = false;
    mutable bool qgraphicsrectitem_dropevent_isbase = false;
    mutable bool qgraphicsrectitem_focusinevent_isbase = false;
    mutable bool qgraphicsrectitem_focusoutevent_isbase = false;
    mutable bool qgraphicsrectitem_hoverenterevent_isbase = false;
    mutable bool qgraphicsrectitem_hovermoveevent_isbase = false;
    mutable bool qgraphicsrectitem_hoverleaveevent_isbase = false;
    mutable bool qgraphicsrectitem_keypressevent_isbase = false;
    mutable bool qgraphicsrectitem_keyreleaseevent_isbase = false;
    mutable bool qgraphicsrectitem_mousepressevent_isbase = false;
    mutable bool qgraphicsrectitem_mousemoveevent_isbase = false;
    mutable bool qgraphicsrectitem_mousereleaseevent_isbase = false;
    mutable bool qgraphicsrectitem_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicsrectitem_wheelevent_isbase = false;
    mutable bool qgraphicsrectitem_inputmethodevent_isbase = false;
    mutable bool qgraphicsrectitem_inputmethodquery_isbase = false;
    mutable bool qgraphicsrectitem_itemchange_isbase = false;
    mutable bool qgraphicsrectitem_updatemicrofocus_isbase = false;
    mutable bool qgraphicsrectitem_addtoindex_isbase = false;
    mutable bool qgraphicsrectitem_removefromindex_isbase = false;
    mutable bool qgraphicsrectitem_preparegeometrychange_isbase = false;

  public:
    VirtualQGraphicsRectItem() : QGraphicsRectItem() {};
    VirtualQGraphicsRectItem(const QRectF& rect) : QGraphicsRectItem(rect) {};
    VirtualQGraphicsRectItem(qreal x, qreal y, qreal w, qreal h) : QGraphicsRectItem(x, y, w, h) {};
    VirtualQGraphicsRectItem(QGraphicsItem* parent) : QGraphicsRectItem(parent) {};
    VirtualQGraphicsRectItem(const QRectF& rect, QGraphicsItem* parent) : QGraphicsRectItem(rect, parent) {};
    VirtualQGraphicsRectItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem* parent) : QGraphicsRectItem(x, y, w, h, parent) {};

    // Callback setters
    inline void setQGraphicsRectItem_BoundingRect_Callback(QGraphicsRectItem_BoundingRect_Callback cb) { qgraphicsrectitem_boundingrect_callback = cb; }
    inline void setQGraphicsRectItem_Shape_Callback(QGraphicsRectItem_Shape_Callback cb) { qgraphicsrectitem_shape_callback = cb; }
    inline void setQGraphicsRectItem_Contains_Callback(QGraphicsRectItem_Contains_Callback cb) { qgraphicsrectitem_contains_callback = cb; }
    inline void setQGraphicsRectItem_Paint_Callback(QGraphicsRectItem_Paint_Callback cb) { qgraphicsrectitem_paint_callback = cb; }
    inline void setQGraphicsRectItem_IsObscuredBy_Callback(QGraphicsRectItem_IsObscuredBy_Callback cb) { qgraphicsrectitem_isobscuredby_callback = cb; }
    inline void setQGraphicsRectItem_OpaqueArea_Callback(QGraphicsRectItem_OpaqueArea_Callback cb) { qgraphicsrectitem_opaquearea_callback = cb; }
    inline void setQGraphicsRectItem_Type_Callback(QGraphicsRectItem_Type_Callback cb) { qgraphicsrectitem_type_callback = cb; }
    inline void setQGraphicsRectItem_SupportsExtension_Callback(QGraphicsRectItem_SupportsExtension_Callback cb) { qgraphicsrectitem_supportsextension_callback = cb; }
    inline void setQGraphicsRectItem_SetExtension_Callback(QGraphicsRectItem_SetExtension_Callback cb) { qgraphicsrectitem_setextension_callback = cb; }
    inline void setQGraphicsRectItem_Extension_Callback(QGraphicsRectItem_Extension_Callback cb) { qgraphicsrectitem_extension_callback = cb; }
    inline void setQGraphicsRectItem_Advance_Callback(QGraphicsRectItem_Advance_Callback cb) { qgraphicsrectitem_advance_callback = cb; }
    inline void setQGraphicsRectItem_CollidesWithItem_Callback(QGraphicsRectItem_CollidesWithItem_Callback cb) { qgraphicsrectitem_collideswithitem_callback = cb; }
    inline void setQGraphicsRectItem_CollidesWithPath_Callback(QGraphicsRectItem_CollidesWithPath_Callback cb) { qgraphicsrectitem_collideswithpath_callback = cb; }
    inline void setQGraphicsRectItem_SceneEventFilter_Callback(QGraphicsRectItem_SceneEventFilter_Callback cb) { qgraphicsrectitem_sceneeventfilter_callback = cb; }
    inline void setQGraphicsRectItem_SceneEvent_Callback(QGraphicsRectItem_SceneEvent_Callback cb) { qgraphicsrectitem_sceneevent_callback = cb; }
    inline void setQGraphicsRectItem_ContextMenuEvent_Callback(QGraphicsRectItem_ContextMenuEvent_Callback cb) { qgraphicsrectitem_contextmenuevent_callback = cb; }
    inline void setQGraphicsRectItem_DragEnterEvent_Callback(QGraphicsRectItem_DragEnterEvent_Callback cb) { qgraphicsrectitem_dragenterevent_callback = cb; }
    inline void setQGraphicsRectItem_DragLeaveEvent_Callback(QGraphicsRectItem_DragLeaveEvent_Callback cb) { qgraphicsrectitem_dragleaveevent_callback = cb; }
    inline void setQGraphicsRectItem_DragMoveEvent_Callback(QGraphicsRectItem_DragMoveEvent_Callback cb) { qgraphicsrectitem_dragmoveevent_callback = cb; }
    inline void setQGraphicsRectItem_DropEvent_Callback(QGraphicsRectItem_DropEvent_Callback cb) { qgraphicsrectitem_dropevent_callback = cb; }
    inline void setQGraphicsRectItem_FocusInEvent_Callback(QGraphicsRectItem_FocusInEvent_Callback cb) { qgraphicsrectitem_focusinevent_callback = cb; }
    inline void setQGraphicsRectItem_FocusOutEvent_Callback(QGraphicsRectItem_FocusOutEvent_Callback cb) { qgraphicsrectitem_focusoutevent_callback = cb; }
    inline void setQGraphicsRectItem_HoverEnterEvent_Callback(QGraphicsRectItem_HoverEnterEvent_Callback cb) { qgraphicsrectitem_hoverenterevent_callback = cb; }
    inline void setQGraphicsRectItem_HoverMoveEvent_Callback(QGraphicsRectItem_HoverMoveEvent_Callback cb) { qgraphicsrectitem_hovermoveevent_callback = cb; }
    inline void setQGraphicsRectItem_HoverLeaveEvent_Callback(QGraphicsRectItem_HoverLeaveEvent_Callback cb) { qgraphicsrectitem_hoverleaveevent_callback = cb; }
    inline void setQGraphicsRectItem_KeyPressEvent_Callback(QGraphicsRectItem_KeyPressEvent_Callback cb) { qgraphicsrectitem_keypressevent_callback = cb; }
    inline void setQGraphicsRectItem_KeyReleaseEvent_Callback(QGraphicsRectItem_KeyReleaseEvent_Callback cb) { qgraphicsrectitem_keyreleaseevent_callback = cb; }
    inline void setQGraphicsRectItem_MousePressEvent_Callback(QGraphicsRectItem_MousePressEvent_Callback cb) { qgraphicsrectitem_mousepressevent_callback = cb; }
    inline void setQGraphicsRectItem_MouseMoveEvent_Callback(QGraphicsRectItem_MouseMoveEvent_Callback cb) { qgraphicsrectitem_mousemoveevent_callback = cb; }
    inline void setQGraphicsRectItem_MouseReleaseEvent_Callback(QGraphicsRectItem_MouseReleaseEvent_Callback cb) { qgraphicsrectitem_mousereleaseevent_callback = cb; }
    inline void setQGraphicsRectItem_MouseDoubleClickEvent_Callback(QGraphicsRectItem_MouseDoubleClickEvent_Callback cb) { qgraphicsrectitem_mousedoubleclickevent_callback = cb; }
    inline void setQGraphicsRectItem_WheelEvent_Callback(QGraphicsRectItem_WheelEvent_Callback cb) { qgraphicsrectitem_wheelevent_callback = cb; }
    inline void setQGraphicsRectItem_InputMethodEvent_Callback(QGraphicsRectItem_InputMethodEvent_Callback cb) { qgraphicsrectitem_inputmethodevent_callback = cb; }
    inline void setQGraphicsRectItem_InputMethodQuery_Callback(QGraphicsRectItem_InputMethodQuery_Callback cb) { qgraphicsrectitem_inputmethodquery_callback = cb; }
    inline void setQGraphicsRectItem_ItemChange_Callback(QGraphicsRectItem_ItemChange_Callback cb) { qgraphicsrectitem_itemchange_callback = cb; }
    inline void setQGraphicsRectItem_UpdateMicroFocus_Callback(QGraphicsRectItem_UpdateMicroFocus_Callback cb) { qgraphicsrectitem_updatemicrofocus_callback = cb; }
    inline void setQGraphicsRectItem_AddToIndex_Callback(QGraphicsRectItem_AddToIndex_Callback cb) { qgraphicsrectitem_addtoindex_callback = cb; }
    inline void setQGraphicsRectItem_RemoveFromIndex_Callback(QGraphicsRectItem_RemoveFromIndex_Callback cb) { qgraphicsrectitem_removefromindex_callback = cb; }
    inline void setQGraphicsRectItem_PrepareGeometryChange_Callback(QGraphicsRectItem_PrepareGeometryChange_Callback cb) { qgraphicsrectitem_preparegeometrychange_callback = cb; }

    // Base flag setters
    inline void setQGraphicsRectItem_BoundingRect_IsBase(bool value) const { qgraphicsrectitem_boundingrect_isbase = value; }
    inline void setQGraphicsRectItem_Shape_IsBase(bool value) const { qgraphicsrectitem_shape_isbase = value; }
    inline void setQGraphicsRectItem_Contains_IsBase(bool value) const { qgraphicsrectitem_contains_isbase = value; }
    inline void setQGraphicsRectItem_Paint_IsBase(bool value) const { qgraphicsrectitem_paint_isbase = value; }
    inline void setQGraphicsRectItem_IsObscuredBy_IsBase(bool value) const { qgraphicsrectitem_isobscuredby_isbase = value; }
    inline void setQGraphicsRectItem_OpaqueArea_IsBase(bool value) const { qgraphicsrectitem_opaquearea_isbase = value; }
    inline void setQGraphicsRectItem_Type_IsBase(bool value) const { qgraphicsrectitem_type_isbase = value; }
    inline void setQGraphicsRectItem_SupportsExtension_IsBase(bool value) const { qgraphicsrectitem_supportsextension_isbase = value; }
    inline void setQGraphicsRectItem_SetExtension_IsBase(bool value) const { qgraphicsrectitem_setextension_isbase = value; }
    inline void setQGraphicsRectItem_Extension_IsBase(bool value) const { qgraphicsrectitem_extension_isbase = value; }
    inline void setQGraphicsRectItem_Advance_IsBase(bool value) const { qgraphicsrectitem_advance_isbase = value; }
    inline void setQGraphicsRectItem_CollidesWithItem_IsBase(bool value) const { qgraphicsrectitem_collideswithitem_isbase = value; }
    inline void setQGraphicsRectItem_CollidesWithPath_IsBase(bool value) const { qgraphicsrectitem_collideswithpath_isbase = value; }
    inline void setQGraphicsRectItem_SceneEventFilter_IsBase(bool value) const { qgraphicsrectitem_sceneeventfilter_isbase = value; }
    inline void setQGraphicsRectItem_SceneEvent_IsBase(bool value) const { qgraphicsrectitem_sceneevent_isbase = value; }
    inline void setQGraphicsRectItem_ContextMenuEvent_IsBase(bool value) const { qgraphicsrectitem_contextmenuevent_isbase = value; }
    inline void setQGraphicsRectItem_DragEnterEvent_IsBase(bool value) const { qgraphicsrectitem_dragenterevent_isbase = value; }
    inline void setQGraphicsRectItem_DragLeaveEvent_IsBase(bool value) const { qgraphicsrectitem_dragleaveevent_isbase = value; }
    inline void setQGraphicsRectItem_DragMoveEvent_IsBase(bool value) const { qgraphicsrectitem_dragmoveevent_isbase = value; }
    inline void setQGraphicsRectItem_DropEvent_IsBase(bool value) const { qgraphicsrectitem_dropevent_isbase = value; }
    inline void setQGraphicsRectItem_FocusInEvent_IsBase(bool value) const { qgraphicsrectitem_focusinevent_isbase = value; }
    inline void setQGraphicsRectItem_FocusOutEvent_IsBase(bool value) const { qgraphicsrectitem_focusoutevent_isbase = value; }
    inline void setQGraphicsRectItem_HoverEnterEvent_IsBase(bool value) const { qgraphicsrectitem_hoverenterevent_isbase = value; }
    inline void setQGraphicsRectItem_HoverMoveEvent_IsBase(bool value) const { qgraphicsrectitem_hovermoveevent_isbase = value; }
    inline void setQGraphicsRectItem_HoverLeaveEvent_IsBase(bool value) const { qgraphicsrectitem_hoverleaveevent_isbase = value; }
    inline void setQGraphicsRectItem_KeyPressEvent_IsBase(bool value) const { qgraphicsrectitem_keypressevent_isbase = value; }
    inline void setQGraphicsRectItem_KeyReleaseEvent_IsBase(bool value) const { qgraphicsrectitem_keyreleaseevent_isbase = value; }
    inline void setQGraphicsRectItem_MousePressEvent_IsBase(bool value) const { qgraphicsrectitem_mousepressevent_isbase = value; }
    inline void setQGraphicsRectItem_MouseMoveEvent_IsBase(bool value) const { qgraphicsrectitem_mousemoveevent_isbase = value; }
    inline void setQGraphicsRectItem_MouseReleaseEvent_IsBase(bool value) const { qgraphicsrectitem_mousereleaseevent_isbase = value; }
    inline void setQGraphicsRectItem_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicsrectitem_mousedoubleclickevent_isbase = value; }
    inline void setQGraphicsRectItem_WheelEvent_IsBase(bool value) const { qgraphicsrectitem_wheelevent_isbase = value; }
    inline void setQGraphicsRectItem_InputMethodEvent_IsBase(bool value) const { qgraphicsrectitem_inputmethodevent_isbase = value; }
    inline void setQGraphicsRectItem_InputMethodQuery_IsBase(bool value) const { qgraphicsrectitem_inputmethodquery_isbase = value; }
    inline void setQGraphicsRectItem_ItemChange_IsBase(bool value) const { qgraphicsrectitem_itemchange_isbase = value; }
    inline void setQGraphicsRectItem_UpdateMicroFocus_IsBase(bool value) const { qgraphicsrectitem_updatemicrofocus_isbase = value; }
    inline void setQGraphicsRectItem_AddToIndex_IsBase(bool value) const { qgraphicsrectitem_addtoindex_isbase = value; }
    inline void setQGraphicsRectItem_RemoveFromIndex_IsBase(bool value) const { qgraphicsrectitem_removefromindex_isbase = value; }
    inline void setQGraphicsRectItem_PrepareGeometryChange_IsBase(bool value) const { qgraphicsrectitem_preparegeometrychange_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicsrectitem_boundingrect_isbase) {
            qgraphicsrectitem_boundingrect_isbase = false;
            return QGraphicsRectItem::boundingRect();
        }
        auto boundingrect_cb = qgraphicsrectitem_boundingrect_callback;
        if (boundingrect_cb) {
            QRectF* callback_ret = boundingrect_cb();
            return *callback_ret;
        }
        return QGraphicsRectItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicsrectitem_shape_isbase) {
            qgraphicsrectitem_shape_isbase = false;
            return QGraphicsRectItem::shape();
        }
        auto shape_cb = qgraphicsrectitem_shape_callback;
        if (shape_cb) {
            QPainterPath* callback_ret = shape_cb();
            return *callback_ret;
        }
        return QGraphicsRectItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicsrectitem_contains_isbase) {
            qgraphicsrectitem_contains_isbase = false;
            return QGraphicsRectItem::contains(point);
        }
        auto contains_cb = qgraphicsrectitem_contains_callback;
        if (contains_cb) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);

            bool callback_ret = contains_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsRectItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicsrectitem_paint_isbase) {
            qgraphicsrectitem_paint_isbase = false;
            QGraphicsRectItem::paint(painter, option, widget);
            return;
        }
        auto paint_cb = qgraphicsrectitem_paint_callback;
        if (paint_cb) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            paint_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsRectItem::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicsrectitem_isobscuredby_isbase) {
            qgraphicsrectitem_isobscuredby_isbase = false;
            return QGraphicsRectItem::isObscuredBy(item);
        }
        auto isobscuredby_cb = qgraphicsrectitem_isobscuredby_callback;
        if (isobscuredby_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;

            bool callback_ret = isobscuredby_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsRectItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicsrectitem_opaquearea_isbase) {
            qgraphicsrectitem_opaquearea_isbase = false;
            return QGraphicsRectItem::opaqueArea();
        }
        auto opaquearea_cb = qgraphicsrectitem_opaquearea_callback;
        if (opaquearea_cb) {
            QPainterPath* callback_ret = opaquearea_cb();
            return *callback_ret;
        }
        return QGraphicsRectItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicsrectitem_type_isbase) {
            qgraphicsrectitem_type_isbase = false;
            return QGraphicsRectItem::type();
        }
        auto type_cb = qgraphicsrectitem_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<int>(callback_ret);
        }
        return QGraphicsRectItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicsrectitem_supportsextension_isbase) {
            qgraphicsrectitem_supportsextension_isbase = false;
            return QGraphicsRectItem::supportsExtension(extension);
        }
        auto supportsextension_cb = qgraphicsrectitem_supportsextension_callback;
        if (supportsextension_cb) {
            int cbval1 = static_cast<int>(extension);

            bool callback_ret = supportsextension_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsRectItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicsrectitem_setextension_isbase) {
            qgraphicsrectitem_setextension_isbase = false;
            QGraphicsRectItem::setExtension(extension, variant);
            return;
        }
        auto setextension_cb = qgraphicsrectitem_setextension_callback;
        if (setextension_cb) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);

            setextension_cb(this, cbval1, cbval2);
            return;
        }
        QGraphicsRectItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicsrectitem_extension_isbase) {
            qgraphicsrectitem_extension_isbase = false;
            return QGraphicsRectItem::extension(variant);
        }
        auto extension_cb = qgraphicsrectitem_extension_callback;
        if (extension_cb) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);

            QVariant* callback_ret = extension_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsRectItem::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicsrectitem_advance_isbase) {
            qgraphicsrectitem_advance_isbase = false;
            QGraphicsRectItem::advance(phase);
            return;
        }
        auto advance_cb = qgraphicsrectitem_advance_callback;
        if (advance_cb) {
            int cbval1 = phase;

            advance_cb(this, cbval1);
            return;
        }
        QGraphicsRectItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsrectitem_collideswithitem_isbase) {
            qgraphicsrectitem_collideswithitem_isbase = false;
            return QGraphicsRectItem::collidesWithItem(other, mode);
        }
        auto collideswithitem_cb = qgraphicsrectitem_collideswithitem_callback;
        if (collideswithitem_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithitem_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsRectItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsrectitem_collideswithpath_isbase) {
            qgraphicsrectitem_collideswithpath_isbase = false;
            return QGraphicsRectItem::collidesWithPath(path, mode);
        }
        auto collideswithpath_cb = qgraphicsrectitem_collideswithpath_callback;
        if (collideswithpath_cb) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithpath_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsRectItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicsrectitem_sceneeventfilter_isbase) {
            qgraphicsrectitem_sceneeventfilter_isbase = false;
            return QGraphicsRectItem::sceneEventFilter(watched, event);
        }
        auto sceneeventfilter_cb = qgraphicsrectitem_sceneeventfilter_callback;
        if (sceneeventfilter_cb) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = sceneeventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsRectItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicsrectitem_sceneevent_isbase) {
            qgraphicsrectitem_sceneevent_isbase = false;
            return QGraphicsRectItem::sceneEvent(event);
        }
        auto sceneevent_cb = qgraphicsrectitem_sceneevent_callback;
        if (sceneevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = sceneevent_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsRectItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicsrectitem_contextmenuevent_isbase) {
            qgraphicsrectitem_contextmenuevent_isbase = false;
            QGraphicsRectItem::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qgraphicsrectitem_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QGraphicsRectItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsrectitem_dragenterevent_isbase) {
            qgraphicsrectitem_dragenterevent_isbase = false;
            QGraphicsRectItem::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qgraphicsrectitem_dragenterevent_callback;
        if (dragenterevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsRectItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsrectitem_dragleaveevent_isbase) {
            qgraphicsrectitem_dragleaveevent_isbase = false;
            QGraphicsRectItem::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qgraphicsrectitem_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsRectItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsrectitem_dragmoveevent_isbase) {
            qgraphicsrectitem_dragmoveevent_isbase = false;
            QGraphicsRectItem::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qgraphicsrectitem_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsRectItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsrectitem_dropevent_isbase) {
            qgraphicsrectitem_dropevent_isbase = false;
            QGraphicsRectItem::dropEvent(event);
            return;
        }
        auto dropevent_cb = qgraphicsrectitem_dropevent_callback;
        if (dropevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QGraphicsRectItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicsrectitem_focusinevent_isbase) {
            qgraphicsrectitem_focusinevent_isbase = false;
            QGraphicsRectItem::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qgraphicsrectitem_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QGraphicsRectItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicsrectitem_focusoutevent_isbase) {
            qgraphicsrectitem_focusoutevent_isbase = false;
            QGraphicsRectItem::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qgraphicsrectitem_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QGraphicsRectItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsrectitem_hoverenterevent_isbase) {
            qgraphicsrectitem_hoverenterevent_isbase = false;
            QGraphicsRectItem::hoverEnterEvent(event);
            return;
        }
        auto hoverenterevent_cb = qgraphicsrectitem_hoverenterevent_callback;
        if (hoverenterevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsRectItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsrectitem_hovermoveevent_isbase) {
            qgraphicsrectitem_hovermoveevent_isbase = false;
            QGraphicsRectItem::hoverMoveEvent(event);
            return;
        }
        auto hovermoveevent_cb = qgraphicsrectitem_hovermoveevent_callback;
        if (hovermoveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hovermoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsRectItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsrectitem_hoverleaveevent_isbase) {
            qgraphicsrectitem_hoverleaveevent_isbase = false;
            QGraphicsRectItem::hoverLeaveEvent(event);
            return;
        }
        auto hoverleaveevent_cb = qgraphicsrectitem_hoverleaveevent_callback;
        if (hoverleaveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsRectItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicsrectitem_keypressevent_isbase) {
            qgraphicsrectitem_keypressevent_isbase = false;
            QGraphicsRectItem::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qgraphicsrectitem_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QGraphicsRectItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicsrectitem_keyreleaseevent_isbase) {
            qgraphicsrectitem_keyreleaseevent_isbase = false;
            QGraphicsRectItem::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qgraphicsrectitem_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsRectItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsrectitem_mousepressevent_isbase) {
            qgraphicsrectitem_mousepressevent_isbase = false;
            QGraphicsRectItem::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qgraphicsrectitem_mousepressevent_callback;
        if (mousepressevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QGraphicsRectItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsrectitem_mousemoveevent_isbase) {
            qgraphicsrectitem_mousemoveevent_isbase = false;
            QGraphicsRectItem::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qgraphicsrectitem_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsRectItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsrectitem_mousereleaseevent_isbase) {
            qgraphicsrectitem_mousereleaseevent_isbase = false;
            QGraphicsRectItem::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qgraphicsrectitem_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsRectItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsrectitem_mousedoubleclickevent_isbase) {
            qgraphicsrectitem_mousedoubleclickevent_isbase = false;
            QGraphicsRectItem::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qgraphicsrectitem_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QGraphicsRectItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicsrectitem_wheelevent_isbase) {
            qgraphicsrectitem_wheelevent_isbase = false;
            QGraphicsRectItem::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qgraphicsrectitem_wheelevent_callback;
        if (wheelevent_cb) {
            QGraphicsSceneWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QGraphicsRectItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicsrectitem_inputmethodevent_isbase) {
            qgraphicsrectitem_inputmethodevent_isbase = false;
            QGraphicsRectItem::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = qgraphicsrectitem_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QGraphicsRectItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicsrectitem_inputmethodquery_isbase) {
            qgraphicsrectitem_inputmethodquery_isbase = false;
            return QGraphicsRectItem::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qgraphicsrectitem_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsRectItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicsrectitem_itemchange_isbase) {
            qgraphicsrectitem_itemchange_isbase = false;
            return QGraphicsRectItem::itemChange(change, value);
        }
        auto itemchange_cb = qgraphicsrectitem_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            QVariant* callback_ret = itemchange_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QGraphicsRectItem::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qgraphicsrectitem_updatemicrofocus_isbase) {
            qgraphicsrectitem_updatemicrofocus_isbase = false;
            QGraphicsRectItem::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qgraphicsrectitem_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QGraphicsRectItem::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qgraphicsrectitem_addtoindex_isbase) {
            qgraphicsrectitem_addtoindex_isbase = false;
            QGraphicsRectItem::addToIndex();
            return;
        }
        auto addtoindex_cb = qgraphicsrectitem_addtoindex_callback;
        if (addtoindex_cb) {
            addtoindex_cb();
            return;
        }
        QGraphicsRectItem::addToIndex();
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qgraphicsrectitem_removefromindex_isbase) {
            qgraphicsrectitem_removefromindex_isbase = false;
            QGraphicsRectItem::removeFromIndex();
            return;
        }
        auto removefromindex_cb = qgraphicsrectitem_removefromindex_callback;
        if (removefromindex_cb) {
            removefromindex_cb();
            return;
        }
        QGraphicsRectItem::removeFromIndex();
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qgraphicsrectitem_preparegeometrychange_isbase) {
            qgraphicsrectitem_preparegeometrychange_isbase = false;
            QGraphicsRectItem::prepareGeometryChange();
            return;
        }
        auto preparegeometrychange_cb = qgraphicsrectitem_preparegeometrychange_callback;
        if (preparegeometrychange_cb) {
            preparegeometrychange_cb();
            return;
        }
        QGraphicsRectItem::prepareGeometryChange();
    }

    // Friend functions
    friend bool QGraphicsRectItem_SupportsExtension(const QGraphicsRectItem* self, int extension);
    friend bool QGraphicsRectItem_SuperSupportsExtension(const QGraphicsRectItem* self, int extension);
    friend void QGraphicsRectItem_SetExtension(QGraphicsRectItem* self, int extension, const QVariant* variant);
    friend void QGraphicsRectItem_SuperSetExtension(QGraphicsRectItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsRectItem_Extension(const QGraphicsRectItem* self, const QVariant* variant);
    friend QVariant* QGraphicsRectItem_SuperExtension(const QGraphicsRectItem* self, const QVariant* variant);
    friend bool QGraphicsRectItem_SceneEventFilter(QGraphicsRectItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsRectItem_SuperSceneEventFilter(QGraphicsRectItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsRectItem_SceneEvent(QGraphicsRectItem* self, QEvent* event);
    friend bool QGraphicsRectItem_SuperSceneEvent(QGraphicsRectItem* self, QEvent* event);
    friend void QGraphicsRectItem_ContextMenuEvent(QGraphicsRectItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsRectItem_SuperContextMenuEvent(QGraphicsRectItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsRectItem_DragEnterEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsRectItem_SuperDragEnterEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsRectItem_DragLeaveEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsRectItem_SuperDragLeaveEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsRectItem_DragMoveEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsRectItem_SuperDragMoveEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsRectItem_DropEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsRectItem_SuperDropEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsRectItem_FocusInEvent(QGraphicsRectItem* self, QFocusEvent* event);
    friend void QGraphicsRectItem_SuperFocusInEvent(QGraphicsRectItem* self, QFocusEvent* event);
    friend void QGraphicsRectItem_FocusOutEvent(QGraphicsRectItem* self, QFocusEvent* event);
    friend void QGraphicsRectItem_SuperFocusOutEvent(QGraphicsRectItem* self, QFocusEvent* event);
    friend void QGraphicsRectItem_HoverEnterEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsRectItem_SuperHoverEnterEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsRectItem_HoverMoveEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsRectItem_SuperHoverMoveEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsRectItem_HoverLeaveEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsRectItem_SuperHoverLeaveEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsRectItem_KeyPressEvent(QGraphicsRectItem* self, QKeyEvent* event);
    friend void QGraphicsRectItem_SuperKeyPressEvent(QGraphicsRectItem* self, QKeyEvent* event);
    friend void QGraphicsRectItem_KeyReleaseEvent(QGraphicsRectItem* self, QKeyEvent* event);
    friend void QGraphicsRectItem_SuperKeyReleaseEvent(QGraphicsRectItem* self, QKeyEvent* event);
    friend void QGraphicsRectItem_MousePressEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsRectItem_SuperMousePressEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsRectItem_MouseMoveEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsRectItem_SuperMouseMoveEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsRectItem_MouseReleaseEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsRectItem_SuperMouseReleaseEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsRectItem_MouseDoubleClickEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsRectItem_SuperMouseDoubleClickEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsRectItem_WheelEvent(QGraphicsRectItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsRectItem_SuperWheelEvent(QGraphicsRectItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsRectItem_InputMethodEvent(QGraphicsRectItem* self, QInputMethodEvent* event);
    friend void QGraphicsRectItem_SuperInputMethodEvent(QGraphicsRectItem* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsRectItem_InputMethodQuery(const QGraphicsRectItem* self, int query);
    friend QVariant* QGraphicsRectItem_SuperInputMethodQuery(const QGraphicsRectItem* self, int query);
    friend QVariant* QGraphicsRectItem_ItemChange(QGraphicsRectItem* self, int change, const QVariant* value);
    friend QVariant* QGraphicsRectItem_SuperItemChange(QGraphicsRectItem* self, int change, const QVariant* value);
    friend void QGraphicsRectItem_UpdateMicroFocus(QGraphicsRectItem* self);
    friend void QGraphicsRectItem_SuperUpdateMicroFocus(QGraphicsRectItem* self);
    friend void QGraphicsRectItem_AddToIndex(QGraphicsRectItem* self);
    friend void QGraphicsRectItem_SuperAddToIndex(QGraphicsRectItem* self);
    friend void QGraphicsRectItem_RemoveFromIndex(QGraphicsRectItem* self);
    friend void QGraphicsRectItem_SuperRemoveFromIndex(QGraphicsRectItem* self);
    friend void QGraphicsRectItem_PrepareGeometryChange(QGraphicsRectItem* self);
    friend void QGraphicsRectItem_SuperPrepareGeometryChange(QGraphicsRectItem* self);
};

// This class is a subclass of QGraphicsEllipseItem so that we can call protected methods
class VirtualQGraphicsEllipseItem final : public QGraphicsEllipseItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsEllipseItem = true;

    // Virtual class public types (including callbacks)
    using QGraphicsItem::Extension;
    using QGraphicsEllipseItem_BoundingRect_Callback = QRectF* (*)();
    using QGraphicsEllipseItem_Shape_Callback = QPainterPath* (*)();
    using QGraphicsEllipseItem_Contains_Callback = bool (*)(const QGraphicsEllipseItem*, QPointF*);
    using QGraphicsEllipseItem_Paint_Callback = void (*)(QGraphicsEllipseItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsEllipseItem_IsObscuredBy_Callback = bool (*)(const QGraphicsEllipseItem*, QGraphicsItem*);
    using QGraphicsEllipseItem_OpaqueArea_Callback = QPainterPath* (*)();
    using QGraphicsEllipseItem_Type_Callback = int (*)();
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
    using QGraphicsEllipseItem_UpdateMicroFocus_Callback = void (*)();
    using QGraphicsEllipseItem_AddToIndex_Callback = void (*)();
    using QGraphicsEllipseItem_RemoveFromIndex_Callback = void (*)();
    using QGraphicsEllipseItem_PrepareGeometryChange_Callback = void (*)();

  protected:
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
    QGraphicsEllipseItem_UpdateMicroFocus_Callback qgraphicsellipseitem_updatemicrofocus_callback = nullptr;
    QGraphicsEllipseItem_AddToIndex_Callback qgraphicsellipseitem_addtoindex_callback = nullptr;
    QGraphicsEllipseItem_RemoveFromIndex_Callback qgraphicsellipseitem_removefromindex_callback = nullptr;
    QGraphicsEllipseItem_PrepareGeometryChange_Callback qgraphicsellipseitem_preparegeometrychange_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsellipseitem_boundingrect_isbase = false;
    mutable bool qgraphicsellipseitem_shape_isbase = false;
    mutable bool qgraphicsellipseitem_contains_isbase = false;
    mutable bool qgraphicsellipseitem_paint_isbase = false;
    mutable bool qgraphicsellipseitem_isobscuredby_isbase = false;
    mutable bool qgraphicsellipseitem_opaquearea_isbase = false;
    mutable bool qgraphicsellipseitem_type_isbase = false;
    mutable bool qgraphicsellipseitem_supportsextension_isbase = false;
    mutable bool qgraphicsellipseitem_setextension_isbase = false;
    mutable bool qgraphicsellipseitem_extension_isbase = false;
    mutable bool qgraphicsellipseitem_advance_isbase = false;
    mutable bool qgraphicsellipseitem_collideswithitem_isbase = false;
    mutable bool qgraphicsellipseitem_collideswithpath_isbase = false;
    mutable bool qgraphicsellipseitem_sceneeventfilter_isbase = false;
    mutable bool qgraphicsellipseitem_sceneevent_isbase = false;
    mutable bool qgraphicsellipseitem_contextmenuevent_isbase = false;
    mutable bool qgraphicsellipseitem_dragenterevent_isbase = false;
    mutable bool qgraphicsellipseitem_dragleaveevent_isbase = false;
    mutable bool qgraphicsellipseitem_dragmoveevent_isbase = false;
    mutable bool qgraphicsellipseitem_dropevent_isbase = false;
    mutable bool qgraphicsellipseitem_focusinevent_isbase = false;
    mutable bool qgraphicsellipseitem_focusoutevent_isbase = false;
    mutable bool qgraphicsellipseitem_hoverenterevent_isbase = false;
    mutable bool qgraphicsellipseitem_hovermoveevent_isbase = false;
    mutable bool qgraphicsellipseitem_hoverleaveevent_isbase = false;
    mutable bool qgraphicsellipseitem_keypressevent_isbase = false;
    mutable bool qgraphicsellipseitem_keyreleaseevent_isbase = false;
    mutable bool qgraphicsellipseitem_mousepressevent_isbase = false;
    mutable bool qgraphicsellipseitem_mousemoveevent_isbase = false;
    mutable bool qgraphicsellipseitem_mousereleaseevent_isbase = false;
    mutable bool qgraphicsellipseitem_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicsellipseitem_wheelevent_isbase = false;
    mutable bool qgraphicsellipseitem_inputmethodevent_isbase = false;
    mutable bool qgraphicsellipseitem_inputmethodquery_isbase = false;
    mutable bool qgraphicsellipseitem_itemchange_isbase = false;
    mutable bool qgraphicsellipseitem_updatemicrofocus_isbase = false;
    mutable bool qgraphicsellipseitem_addtoindex_isbase = false;
    mutable bool qgraphicsellipseitem_removefromindex_isbase = false;
    mutable bool qgraphicsellipseitem_preparegeometrychange_isbase = false;

  public:
    VirtualQGraphicsEllipseItem() : QGraphicsEllipseItem() {};
    VirtualQGraphicsEllipseItem(const QRectF& rect) : QGraphicsEllipseItem(rect) {};
    VirtualQGraphicsEllipseItem(qreal x, qreal y, qreal w, qreal h) : QGraphicsEllipseItem(x, y, w, h) {};
    VirtualQGraphicsEllipseItem(QGraphicsItem* parent) : QGraphicsEllipseItem(parent) {};
    VirtualQGraphicsEllipseItem(const QRectF& rect, QGraphicsItem* parent) : QGraphicsEllipseItem(rect, parent) {};
    VirtualQGraphicsEllipseItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem* parent) : QGraphicsEllipseItem(x, y, w, h, parent) {};

    // Callback setters
    inline void setQGraphicsEllipseItem_BoundingRect_Callback(QGraphicsEllipseItem_BoundingRect_Callback cb) { qgraphicsellipseitem_boundingrect_callback = cb; }
    inline void setQGraphicsEllipseItem_Shape_Callback(QGraphicsEllipseItem_Shape_Callback cb) { qgraphicsellipseitem_shape_callback = cb; }
    inline void setQGraphicsEllipseItem_Contains_Callback(QGraphicsEllipseItem_Contains_Callback cb) { qgraphicsellipseitem_contains_callback = cb; }
    inline void setQGraphicsEllipseItem_Paint_Callback(QGraphicsEllipseItem_Paint_Callback cb) { qgraphicsellipseitem_paint_callback = cb; }
    inline void setQGraphicsEllipseItem_IsObscuredBy_Callback(QGraphicsEllipseItem_IsObscuredBy_Callback cb) { qgraphicsellipseitem_isobscuredby_callback = cb; }
    inline void setQGraphicsEllipseItem_OpaqueArea_Callback(QGraphicsEllipseItem_OpaqueArea_Callback cb) { qgraphicsellipseitem_opaquearea_callback = cb; }
    inline void setQGraphicsEllipseItem_Type_Callback(QGraphicsEllipseItem_Type_Callback cb) { qgraphicsellipseitem_type_callback = cb; }
    inline void setQGraphicsEllipseItem_SupportsExtension_Callback(QGraphicsEllipseItem_SupportsExtension_Callback cb) { qgraphicsellipseitem_supportsextension_callback = cb; }
    inline void setQGraphicsEllipseItem_SetExtension_Callback(QGraphicsEllipseItem_SetExtension_Callback cb) { qgraphicsellipseitem_setextension_callback = cb; }
    inline void setQGraphicsEllipseItem_Extension_Callback(QGraphicsEllipseItem_Extension_Callback cb) { qgraphicsellipseitem_extension_callback = cb; }
    inline void setQGraphicsEllipseItem_Advance_Callback(QGraphicsEllipseItem_Advance_Callback cb) { qgraphicsellipseitem_advance_callback = cb; }
    inline void setQGraphicsEllipseItem_CollidesWithItem_Callback(QGraphicsEllipseItem_CollidesWithItem_Callback cb) { qgraphicsellipseitem_collideswithitem_callback = cb; }
    inline void setQGraphicsEllipseItem_CollidesWithPath_Callback(QGraphicsEllipseItem_CollidesWithPath_Callback cb) { qgraphicsellipseitem_collideswithpath_callback = cb; }
    inline void setQGraphicsEllipseItem_SceneEventFilter_Callback(QGraphicsEllipseItem_SceneEventFilter_Callback cb) { qgraphicsellipseitem_sceneeventfilter_callback = cb; }
    inline void setQGraphicsEllipseItem_SceneEvent_Callback(QGraphicsEllipseItem_SceneEvent_Callback cb) { qgraphicsellipseitem_sceneevent_callback = cb; }
    inline void setQGraphicsEllipseItem_ContextMenuEvent_Callback(QGraphicsEllipseItem_ContextMenuEvent_Callback cb) { qgraphicsellipseitem_contextmenuevent_callback = cb; }
    inline void setQGraphicsEllipseItem_DragEnterEvent_Callback(QGraphicsEllipseItem_DragEnterEvent_Callback cb) { qgraphicsellipseitem_dragenterevent_callback = cb; }
    inline void setQGraphicsEllipseItem_DragLeaveEvent_Callback(QGraphicsEllipseItem_DragLeaveEvent_Callback cb) { qgraphicsellipseitem_dragleaveevent_callback = cb; }
    inline void setQGraphicsEllipseItem_DragMoveEvent_Callback(QGraphicsEllipseItem_DragMoveEvent_Callback cb) { qgraphicsellipseitem_dragmoveevent_callback = cb; }
    inline void setQGraphicsEllipseItem_DropEvent_Callback(QGraphicsEllipseItem_DropEvent_Callback cb) { qgraphicsellipseitem_dropevent_callback = cb; }
    inline void setQGraphicsEllipseItem_FocusInEvent_Callback(QGraphicsEllipseItem_FocusInEvent_Callback cb) { qgraphicsellipseitem_focusinevent_callback = cb; }
    inline void setQGraphicsEllipseItem_FocusOutEvent_Callback(QGraphicsEllipseItem_FocusOutEvent_Callback cb) { qgraphicsellipseitem_focusoutevent_callback = cb; }
    inline void setQGraphicsEllipseItem_HoverEnterEvent_Callback(QGraphicsEllipseItem_HoverEnterEvent_Callback cb) { qgraphicsellipseitem_hoverenterevent_callback = cb; }
    inline void setQGraphicsEllipseItem_HoverMoveEvent_Callback(QGraphicsEllipseItem_HoverMoveEvent_Callback cb) { qgraphicsellipseitem_hovermoveevent_callback = cb; }
    inline void setQGraphicsEllipseItem_HoverLeaveEvent_Callback(QGraphicsEllipseItem_HoverLeaveEvent_Callback cb) { qgraphicsellipseitem_hoverleaveevent_callback = cb; }
    inline void setQGraphicsEllipseItem_KeyPressEvent_Callback(QGraphicsEllipseItem_KeyPressEvent_Callback cb) { qgraphicsellipseitem_keypressevent_callback = cb; }
    inline void setQGraphicsEllipseItem_KeyReleaseEvent_Callback(QGraphicsEllipseItem_KeyReleaseEvent_Callback cb) { qgraphicsellipseitem_keyreleaseevent_callback = cb; }
    inline void setQGraphicsEllipseItem_MousePressEvent_Callback(QGraphicsEllipseItem_MousePressEvent_Callback cb) { qgraphicsellipseitem_mousepressevent_callback = cb; }
    inline void setQGraphicsEllipseItem_MouseMoveEvent_Callback(QGraphicsEllipseItem_MouseMoveEvent_Callback cb) { qgraphicsellipseitem_mousemoveevent_callback = cb; }
    inline void setQGraphicsEllipseItem_MouseReleaseEvent_Callback(QGraphicsEllipseItem_MouseReleaseEvent_Callback cb) { qgraphicsellipseitem_mousereleaseevent_callback = cb; }
    inline void setQGraphicsEllipseItem_MouseDoubleClickEvent_Callback(QGraphicsEllipseItem_MouseDoubleClickEvent_Callback cb) { qgraphicsellipseitem_mousedoubleclickevent_callback = cb; }
    inline void setQGraphicsEllipseItem_WheelEvent_Callback(QGraphicsEllipseItem_WheelEvent_Callback cb) { qgraphicsellipseitem_wheelevent_callback = cb; }
    inline void setQGraphicsEllipseItem_InputMethodEvent_Callback(QGraphicsEllipseItem_InputMethodEvent_Callback cb) { qgraphicsellipseitem_inputmethodevent_callback = cb; }
    inline void setQGraphicsEllipseItem_InputMethodQuery_Callback(QGraphicsEllipseItem_InputMethodQuery_Callback cb) { qgraphicsellipseitem_inputmethodquery_callback = cb; }
    inline void setQGraphicsEllipseItem_ItemChange_Callback(QGraphicsEllipseItem_ItemChange_Callback cb) { qgraphicsellipseitem_itemchange_callback = cb; }
    inline void setQGraphicsEllipseItem_UpdateMicroFocus_Callback(QGraphicsEllipseItem_UpdateMicroFocus_Callback cb) { qgraphicsellipseitem_updatemicrofocus_callback = cb; }
    inline void setQGraphicsEllipseItem_AddToIndex_Callback(QGraphicsEllipseItem_AddToIndex_Callback cb) { qgraphicsellipseitem_addtoindex_callback = cb; }
    inline void setQGraphicsEllipseItem_RemoveFromIndex_Callback(QGraphicsEllipseItem_RemoveFromIndex_Callback cb) { qgraphicsellipseitem_removefromindex_callback = cb; }
    inline void setQGraphicsEllipseItem_PrepareGeometryChange_Callback(QGraphicsEllipseItem_PrepareGeometryChange_Callback cb) { qgraphicsellipseitem_preparegeometrychange_callback = cb; }

    // Base flag setters
    inline void setQGraphicsEllipseItem_BoundingRect_IsBase(bool value) const { qgraphicsellipseitem_boundingrect_isbase = value; }
    inline void setQGraphicsEllipseItem_Shape_IsBase(bool value) const { qgraphicsellipseitem_shape_isbase = value; }
    inline void setQGraphicsEllipseItem_Contains_IsBase(bool value) const { qgraphicsellipseitem_contains_isbase = value; }
    inline void setQGraphicsEllipseItem_Paint_IsBase(bool value) const { qgraphicsellipseitem_paint_isbase = value; }
    inline void setQGraphicsEllipseItem_IsObscuredBy_IsBase(bool value) const { qgraphicsellipseitem_isobscuredby_isbase = value; }
    inline void setQGraphicsEllipseItem_OpaqueArea_IsBase(bool value) const { qgraphicsellipseitem_opaquearea_isbase = value; }
    inline void setQGraphicsEllipseItem_Type_IsBase(bool value) const { qgraphicsellipseitem_type_isbase = value; }
    inline void setQGraphicsEllipseItem_SupportsExtension_IsBase(bool value) const { qgraphicsellipseitem_supportsextension_isbase = value; }
    inline void setQGraphicsEllipseItem_SetExtension_IsBase(bool value) const { qgraphicsellipseitem_setextension_isbase = value; }
    inline void setQGraphicsEllipseItem_Extension_IsBase(bool value) const { qgraphicsellipseitem_extension_isbase = value; }
    inline void setQGraphicsEllipseItem_Advance_IsBase(bool value) const { qgraphicsellipseitem_advance_isbase = value; }
    inline void setQGraphicsEllipseItem_CollidesWithItem_IsBase(bool value) const { qgraphicsellipseitem_collideswithitem_isbase = value; }
    inline void setQGraphicsEllipseItem_CollidesWithPath_IsBase(bool value) const { qgraphicsellipseitem_collideswithpath_isbase = value; }
    inline void setQGraphicsEllipseItem_SceneEventFilter_IsBase(bool value) const { qgraphicsellipseitem_sceneeventfilter_isbase = value; }
    inline void setQGraphicsEllipseItem_SceneEvent_IsBase(bool value) const { qgraphicsellipseitem_sceneevent_isbase = value; }
    inline void setQGraphicsEllipseItem_ContextMenuEvent_IsBase(bool value) const { qgraphicsellipseitem_contextmenuevent_isbase = value; }
    inline void setQGraphicsEllipseItem_DragEnterEvent_IsBase(bool value) const { qgraphicsellipseitem_dragenterevent_isbase = value; }
    inline void setQGraphicsEllipseItem_DragLeaveEvent_IsBase(bool value) const { qgraphicsellipseitem_dragleaveevent_isbase = value; }
    inline void setQGraphicsEllipseItem_DragMoveEvent_IsBase(bool value) const { qgraphicsellipseitem_dragmoveevent_isbase = value; }
    inline void setQGraphicsEllipseItem_DropEvent_IsBase(bool value) const { qgraphicsellipseitem_dropevent_isbase = value; }
    inline void setQGraphicsEllipseItem_FocusInEvent_IsBase(bool value) const { qgraphicsellipseitem_focusinevent_isbase = value; }
    inline void setQGraphicsEllipseItem_FocusOutEvent_IsBase(bool value) const { qgraphicsellipseitem_focusoutevent_isbase = value; }
    inline void setQGraphicsEllipseItem_HoverEnterEvent_IsBase(bool value) const { qgraphicsellipseitem_hoverenterevent_isbase = value; }
    inline void setQGraphicsEllipseItem_HoverMoveEvent_IsBase(bool value) const { qgraphicsellipseitem_hovermoveevent_isbase = value; }
    inline void setQGraphicsEllipseItem_HoverLeaveEvent_IsBase(bool value) const { qgraphicsellipseitem_hoverleaveevent_isbase = value; }
    inline void setQGraphicsEllipseItem_KeyPressEvent_IsBase(bool value) const { qgraphicsellipseitem_keypressevent_isbase = value; }
    inline void setQGraphicsEllipseItem_KeyReleaseEvent_IsBase(bool value) const { qgraphicsellipseitem_keyreleaseevent_isbase = value; }
    inline void setQGraphicsEllipseItem_MousePressEvent_IsBase(bool value) const { qgraphicsellipseitem_mousepressevent_isbase = value; }
    inline void setQGraphicsEllipseItem_MouseMoveEvent_IsBase(bool value) const { qgraphicsellipseitem_mousemoveevent_isbase = value; }
    inline void setQGraphicsEllipseItem_MouseReleaseEvent_IsBase(bool value) const { qgraphicsellipseitem_mousereleaseevent_isbase = value; }
    inline void setQGraphicsEllipseItem_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicsellipseitem_mousedoubleclickevent_isbase = value; }
    inline void setQGraphicsEllipseItem_WheelEvent_IsBase(bool value) const { qgraphicsellipseitem_wheelevent_isbase = value; }
    inline void setQGraphicsEllipseItem_InputMethodEvent_IsBase(bool value) const { qgraphicsellipseitem_inputmethodevent_isbase = value; }
    inline void setQGraphicsEllipseItem_InputMethodQuery_IsBase(bool value) const { qgraphicsellipseitem_inputmethodquery_isbase = value; }
    inline void setQGraphicsEllipseItem_ItemChange_IsBase(bool value) const { qgraphicsellipseitem_itemchange_isbase = value; }
    inline void setQGraphicsEllipseItem_UpdateMicroFocus_IsBase(bool value) const { qgraphicsellipseitem_updatemicrofocus_isbase = value; }
    inline void setQGraphicsEllipseItem_AddToIndex_IsBase(bool value) const { qgraphicsellipseitem_addtoindex_isbase = value; }
    inline void setQGraphicsEllipseItem_RemoveFromIndex_IsBase(bool value) const { qgraphicsellipseitem_removefromindex_isbase = value; }
    inline void setQGraphicsEllipseItem_PrepareGeometryChange_IsBase(bool value) const { qgraphicsellipseitem_preparegeometrychange_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicsellipseitem_boundingrect_isbase) {
            qgraphicsellipseitem_boundingrect_isbase = false;
            return QGraphicsEllipseItem::boundingRect();
        }
        auto boundingrect_cb = qgraphicsellipseitem_boundingrect_callback;
        if (boundingrect_cb) {
            QRectF* callback_ret = boundingrect_cb();
            return *callback_ret;
        }
        return QGraphicsEllipseItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicsellipseitem_shape_isbase) {
            qgraphicsellipseitem_shape_isbase = false;
            return QGraphicsEllipseItem::shape();
        }
        auto shape_cb = qgraphicsellipseitem_shape_callback;
        if (shape_cb) {
            QPainterPath* callback_ret = shape_cb();
            return *callback_ret;
        }
        return QGraphicsEllipseItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicsellipseitem_contains_isbase) {
            qgraphicsellipseitem_contains_isbase = false;
            return QGraphicsEllipseItem::contains(point);
        }
        auto contains_cb = qgraphicsellipseitem_contains_callback;
        if (contains_cb) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);

            bool callback_ret = contains_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsEllipseItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicsellipseitem_paint_isbase) {
            qgraphicsellipseitem_paint_isbase = false;
            QGraphicsEllipseItem::paint(painter, option, widget);
            return;
        }
        auto paint_cb = qgraphicsellipseitem_paint_callback;
        if (paint_cb) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            paint_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsEllipseItem::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicsellipseitem_isobscuredby_isbase) {
            qgraphicsellipseitem_isobscuredby_isbase = false;
            return QGraphicsEllipseItem::isObscuredBy(item);
        }
        auto isobscuredby_cb = qgraphicsellipseitem_isobscuredby_callback;
        if (isobscuredby_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;

            bool callback_ret = isobscuredby_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsEllipseItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicsellipseitem_opaquearea_isbase) {
            qgraphicsellipseitem_opaquearea_isbase = false;
            return QGraphicsEllipseItem::opaqueArea();
        }
        auto opaquearea_cb = qgraphicsellipseitem_opaquearea_callback;
        if (opaquearea_cb) {
            QPainterPath* callback_ret = opaquearea_cb();
            return *callback_ret;
        }
        return QGraphicsEllipseItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicsellipseitem_type_isbase) {
            qgraphicsellipseitem_type_isbase = false;
            return QGraphicsEllipseItem::type();
        }
        auto type_cb = qgraphicsellipseitem_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<int>(callback_ret);
        }
        return QGraphicsEllipseItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicsellipseitem_supportsextension_isbase) {
            qgraphicsellipseitem_supportsextension_isbase = false;
            return QGraphicsEllipseItem::supportsExtension(extension);
        }
        auto supportsextension_cb = qgraphicsellipseitem_supportsextension_callback;
        if (supportsextension_cb) {
            int cbval1 = static_cast<int>(extension);

            bool callback_ret = supportsextension_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsEllipseItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicsellipseitem_setextension_isbase) {
            qgraphicsellipseitem_setextension_isbase = false;
            QGraphicsEllipseItem::setExtension(extension, variant);
            return;
        }
        auto setextension_cb = qgraphicsellipseitem_setextension_callback;
        if (setextension_cb) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);

            setextension_cb(this, cbval1, cbval2);
            return;
        }
        QGraphicsEllipseItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicsellipseitem_extension_isbase) {
            qgraphicsellipseitem_extension_isbase = false;
            return QGraphicsEllipseItem::extension(variant);
        }
        auto extension_cb = qgraphicsellipseitem_extension_callback;
        if (extension_cb) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);

            QVariant* callback_ret = extension_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsEllipseItem::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicsellipseitem_advance_isbase) {
            qgraphicsellipseitem_advance_isbase = false;
            QGraphicsEllipseItem::advance(phase);
            return;
        }
        auto advance_cb = qgraphicsellipseitem_advance_callback;
        if (advance_cb) {
            int cbval1 = phase;

            advance_cb(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsellipseitem_collideswithitem_isbase) {
            qgraphicsellipseitem_collideswithitem_isbase = false;
            return QGraphicsEllipseItem::collidesWithItem(other, mode);
        }
        auto collideswithitem_cb = qgraphicsellipseitem_collideswithitem_callback;
        if (collideswithitem_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithitem_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsEllipseItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsellipseitem_collideswithpath_isbase) {
            qgraphicsellipseitem_collideswithpath_isbase = false;
            return QGraphicsEllipseItem::collidesWithPath(path, mode);
        }
        auto collideswithpath_cb = qgraphicsellipseitem_collideswithpath_callback;
        if (collideswithpath_cb) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithpath_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsEllipseItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicsellipseitem_sceneeventfilter_isbase) {
            qgraphicsellipseitem_sceneeventfilter_isbase = false;
            return QGraphicsEllipseItem::sceneEventFilter(watched, event);
        }
        auto sceneeventfilter_cb = qgraphicsellipseitem_sceneeventfilter_callback;
        if (sceneeventfilter_cb) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = sceneeventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsEllipseItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicsellipseitem_sceneevent_isbase) {
            qgraphicsellipseitem_sceneevent_isbase = false;
            return QGraphicsEllipseItem::sceneEvent(event);
        }
        auto sceneevent_cb = qgraphicsellipseitem_sceneevent_callback;
        if (sceneevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = sceneevent_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsEllipseItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicsellipseitem_contextmenuevent_isbase) {
            qgraphicsellipseitem_contextmenuevent_isbase = false;
            QGraphicsEllipseItem::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qgraphicsellipseitem_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsellipseitem_dragenterevent_isbase) {
            qgraphicsellipseitem_dragenterevent_isbase = false;
            QGraphicsEllipseItem::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qgraphicsellipseitem_dragenterevent_callback;
        if (dragenterevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsellipseitem_dragleaveevent_isbase) {
            qgraphicsellipseitem_dragleaveevent_isbase = false;
            QGraphicsEllipseItem::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qgraphicsellipseitem_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsellipseitem_dragmoveevent_isbase) {
            qgraphicsellipseitem_dragmoveevent_isbase = false;
            QGraphicsEllipseItem::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qgraphicsellipseitem_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsellipseitem_dropevent_isbase) {
            qgraphicsellipseitem_dropevent_isbase = false;
            QGraphicsEllipseItem::dropEvent(event);
            return;
        }
        auto dropevent_cb = qgraphicsellipseitem_dropevent_callback;
        if (dropevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicsellipseitem_focusinevent_isbase) {
            qgraphicsellipseitem_focusinevent_isbase = false;
            QGraphicsEllipseItem::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qgraphicsellipseitem_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicsellipseitem_focusoutevent_isbase) {
            qgraphicsellipseitem_focusoutevent_isbase = false;
            QGraphicsEllipseItem::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qgraphicsellipseitem_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsellipseitem_hoverenterevent_isbase) {
            qgraphicsellipseitem_hoverenterevent_isbase = false;
            QGraphicsEllipseItem::hoverEnterEvent(event);
            return;
        }
        auto hoverenterevent_cb = qgraphicsellipseitem_hoverenterevent_callback;
        if (hoverenterevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsellipseitem_hovermoveevent_isbase) {
            qgraphicsellipseitem_hovermoveevent_isbase = false;
            QGraphicsEllipseItem::hoverMoveEvent(event);
            return;
        }
        auto hovermoveevent_cb = qgraphicsellipseitem_hovermoveevent_callback;
        if (hovermoveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hovermoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsellipseitem_hoverleaveevent_isbase) {
            qgraphicsellipseitem_hoverleaveevent_isbase = false;
            QGraphicsEllipseItem::hoverLeaveEvent(event);
            return;
        }
        auto hoverleaveevent_cb = qgraphicsellipseitem_hoverleaveevent_callback;
        if (hoverleaveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicsellipseitem_keypressevent_isbase) {
            qgraphicsellipseitem_keypressevent_isbase = false;
            QGraphicsEllipseItem::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qgraphicsellipseitem_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicsellipseitem_keyreleaseevent_isbase) {
            qgraphicsellipseitem_keyreleaseevent_isbase = false;
            QGraphicsEllipseItem::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qgraphicsellipseitem_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsellipseitem_mousepressevent_isbase) {
            qgraphicsellipseitem_mousepressevent_isbase = false;
            QGraphicsEllipseItem::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qgraphicsellipseitem_mousepressevent_callback;
        if (mousepressevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsellipseitem_mousemoveevent_isbase) {
            qgraphicsellipseitem_mousemoveevent_isbase = false;
            QGraphicsEllipseItem::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qgraphicsellipseitem_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsellipseitem_mousereleaseevent_isbase) {
            qgraphicsellipseitem_mousereleaseevent_isbase = false;
            QGraphicsEllipseItem::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qgraphicsellipseitem_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsellipseitem_mousedoubleclickevent_isbase) {
            qgraphicsellipseitem_mousedoubleclickevent_isbase = false;
            QGraphicsEllipseItem::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qgraphicsellipseitem_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicsellipseitem_wheelevent_isbase) {
            qgraphicsellipseitem_wheelevent_isbase = false;
            QGraphicsEllipseItem::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qgraphicsellipseitem_wheelevent_callback;
        if (wheelevent_cb) {
            QGraphicsSceneWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicsellipseitem_inputmethodevent_isbase) {
            qgraphicsellipseitem_inputmethodevent_isbase = false;
            QGraphicsEllipseItem::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = qgraphicsellipseitem_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QGraphicsEllipseItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicsellipseitem_inputmethodquery_isbase) {
            qgraphicsellipseitem_inputmethodquery_isbase = false;
            return QGraphicsEllipseItem::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qgraphicsellipseitem_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsEllipseItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicsellipseitem_itemchange_isbase) {
            qgraphicsellipseitem_itemchange_isbase = false;
            return QGraphicsEllipseItem::itemChange(change, value);
        }
        auto itemchange_cb = qgraphicsellipseitem_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            QVariant* callback_ret = itemchange_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QGraphicsEllipseItem::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qgraphicsellipseitem_updatemicrofocus_isbase) {
            qgraphicsellipseitem_updatemicrofocus_isbase = false;
            QGraphicsEllipseItem::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qgraphicsellipseitem_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QGraphicsEllipseItem::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qgraphicsellipseitem_addtoindex_isbase) {
            qgraphicsellipseitem_addtoindex_isbase = false;
            QGraphicsEllipseItem::addToIndex();
            return;
        }
        auto addtoindex_cb = qgraphicsellipseitem_addtoindex_callback;
        if (addtoindex_cb) {
            addtoindex_cb();
            return;
        }
        QGraphicsEllipseItem::addToIndex();
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qgraphicsellipseitem_removefromindex_isbase) {
            qgraphicsellipseitem_removefromindex_isbase = false;
            QGraphicsEllipseItem::removeFromIndex();
            return;
        }
        auto removefromindex_cb = qgraphicsellipseitem_removefromindex_callback;
        if (removefromindex_cb) {
            removefromindex_cb();
            return;
        }
        QGraphicsEllipseItem::removeFromIndex();
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qgraphicsellipseitem_preparegeometrychange_isbase) {
            qgraphicsellipseitem_preparegeometrychange_isbase = false;
            QGraphicsEllipseItem::prepareGeometryChange();
            return;
        }
        auto preparegeometrychange_cb = qgraphicsellipseitem_preparegeometrychange_callback;
        if (preparegeometrychange_cb) {
            preparegeometrychange_cb();
            return;
        }
        QGraphicsEllipseItem::prepareGeometryChange();
    }

    // Friend functions
    friend bool QGraphicsEllipseItem_SupportsExtension(const QGraphicsEllipseItem* self, int extension);
    friend bool QGraphicsEllipseItem_SuperSupportsExtension(const QGraphicsEllipseItem* self, int extension);
    friend void QGraphicsEllipseItem_SetExtension(QGraphicsEllipseItem* self, int extension, const QVariant* variant);
    friend void QGraphicsEllipseItem_SuperSetExtension(QGraphicsEllipseItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsEllipseItem_Extension(const QGraphicsEllipseItem* self, const QVariant* variant);
    friend QVariant* QGraphicsEllipseItem_SuperExtension(const QGraphicsEllipseItem* self, const QVariant* variant);
    friend bool QGraphicsEllipseItem_SceneEventFilter(QGraphicsEllipseItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsEllipseItem_SuperSceneEventFilter(QGraphicsEllipseItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsEllipseItem_SceneEvent(QGraphicsEllipseItem* self, QEvent* event);
    friend bool QGraphicsEllipseItem_SuperSceneEvent(QGraphicsEllipseItem* self, QEvent* event);
    friend void QGraphicsEllipseItem_ContextMenuEvent(QGraphicsEllipseItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsEllipseItem_SuperContextMenuEvent(QGraphicsEllipseItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsEllipseItem_DragEnterEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsEllipseItem_SuperDragEnterEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsEllipseItem_DragLeaveEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsEllipseItem_SuperDragLeaveEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsEllipseItem_DragMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsEllipseItem_SuperDragMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsEllipseItem_DropEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsEllipseItem_SuperDropEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsEllipseItem_FocusInEvent(QGraphicsEllipseItem* self, QFocusEvent* event);
    friend void QGraphicsEllipseItem_SuperFocusInEvent(QGraphicsEllipseItem* self, QFocusEvent* event);
    friend void QGraphicsEllipseItem_FocusOutEvent(QGraphicsEllipseItem* self, QFocusEvent* event);
    friend void QGraphicsEllipseItem_SuperFocusOutEvent(QGraphicsEllipseItem* self, QFocusEvent* event);
    friend void QGraphicsEllipseItem_HoverEnterEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsEllipseItem_SuperHoverEnterEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsEllipseItem_HoverMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsEllipseItem_SuperHoverMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsEllipseItem_HoverLeaveEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsEllipseItem_SuperHoverLeaveEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsEllipseItem_KeyPressEvent(QGraphicsEllipseItem* self, QKeyEvent* event);
    friend void QGraphicsEllipseItem_SuperKeyPressEvent(QGraphicsEllipseItem* self, QKeyEvent* event);
    friend void QGraphicsEllipseItem_KeyReleaseEvent(QGraphicsEllipseItem* self, QKeyEvent* event);
    friend void QGraphicsEllipseItem_SuperKeyReleaseEvent(QGraphicsEllipseItem* self, QKeyEvent* event);
    friend void QGraphicsEllipseItem_MousePressEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsEllipseItem_SuperMousePressEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsEllipseItem_MouseMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsEllipseItem_SuperMouseMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsEllipseItem_MouseReleaseEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsEllipseItem_SuperMouseReleaseEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsEllipseItem_MouseDoubleClickEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsEllipseItem_SuperMouseDoubleClickEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsEllipseItem_WheelEvent(QGraphicsEllipseItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsEllipseItem_SuperWheelEvent(QGraphicsEllipseItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsEllipseItem_InputMethodEvent(QGraphicsEllipseItem* self, QInputMethodEvent* event);
    friend void QGraphicsEllipseItem_SuperInputMethodEvent(QGraphicsEllipseItem* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsEllipseItem_InputMethodQuery(const QGraphicsEllipseItem* self, int query);
    friend QVariant* QGraphicsEllipseItem_SuperInputMethodQuery(const QGraphicsEllipseItem* self, int query);
    friend QVariant* QGraphicsEllipseItem_ItemChange(QGraphicsEllipseItem* self, int change, const QVariant* value);
    friend QVariant* QGraphicsEllipseItem_SuperItemChange(QGraphicsEllipseItem* self, int change, const QVariant* value);
    friend void QGraphicsEllipseItem_UpdateMicroFocus(QGraphicsEllipseItem* self);
    friend void QGraphicsEllipseItem_SuperUpdateMicroFocus(QGraphicsEllipseItem* self);
    friend void QGraphicsEllipseItem_AddToIndex(QGraphicsEllipseItem* self);
    friend void QGraphicsEllipseItem_SuperAddToIndex(QGraphicsEllipseItem* self);
    friend void QGraphicsEllipseItem_RemoveFromIndex(QGraphicsEllipseItem* self);
    friend void QGraphicsEllipseItem_SuperRemoveFromIndex(QGraphicsEllipseItem* self);
    friend void QGraphicsEllipseItem_PrepareGeometryChange(QGraphicsEllipseItem* self);
    friend void QGraphicsEllipseItem_SuperPrepareGeometryChange(QGraphicsEllipseItem* self);
};

// This class is a subclass of QGraphicsPolygonItem so that we can call protected methods
class VirtualQGraphicsPolygonItem final : public QGraphicsPolygonItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsPolygonItem = true;

    // Virtual class public types (including callbacks)
    using QGraphicsItem::Extension;
    using QGraphicsPolygonItem_BoundingRect_Callback = QRectF* (*)();
    using QGraphicsPolygonItem_Shape_Callback = QPainterPath* (*)();
    using QGraphicsPolygonItem_Contains_Callback = bool (*)(const QGraphicsPolygonItem*, QPointF*);
    using QGraphicsPolygonItem_Paint_Callback = void (*)(QGraphicsPolygonItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsPolygonItem_IsObscuredBy_Callback = bool (*)(const QGraphicsPolygonItem*, QGraphicsItem*);
    using QGraphicsPolygonItem_OpaqueArea_Callback = QPainterPath* (*)();
    using QGraphicsPolygonItem_Type_Callback = int (*)();
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
    using QGraphicsPolygonItem_UpdateMicroFocus_Callback = void (*)();
    using QGraphicsPolygonItem_AddToIndex_Callback = void (*)();
    using QGraphicsPolygonItem_RemoveFromIndex_Callback = void (*)();
    using QGraphicsPolygonItem_PrepareGeometryChange_Callback = void (*)();

  protected:
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
    QGraphicsPolygonItem_UpdateMicroFocus_Callback qgraphicspolygonitem_updatemicrofocus_callback = nullptr;
    QGraphicsPolygonItem_AddToIndex_Callback qgraphicspolygonitem_addtoindex_callback = nullptr;
    QGraphicsPolygonItem_RemoveFromIndex_Callback qgraphicspolygonitem_removefromindex_callback = nullptr;
    QGraphicsPolygonItem_PrepareGeometryChange_Callback qgraphicspolygonitem_preparegeometrychange_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicspolygonitem_boundingrect_isbase = false;
    mutable bool qgraphicspolygonitem_shape_isbase = false;
    mutable bool qgraphicspolygonitem_contains_isbase = false;
    mutable bool qgraphicspolygonitem_paint_isbase = false;
    mutable bool qgraphicspolygonitem_isobscuredby_isbase = false;
    mutable bool qgraphicspolygonitem_opaquearea_isbase = false;
    mutable bool qgraphicspolygonitem_type_isbase = false;
    mutable bool qgraphicspolygonitem_supportsextension_isbase = false;
    mutable bool qgraphicspolygonitem_setextension_isbase = false;
    mutable bool qgraphicspolygonitem_extension_isbase = false;
    mutable bool qgraphicspolygonitem_advance_isbase = false;
    mutable bool qgraphicspolygonitem_collideswithitem_isbase = false;
    mutable bool qgraphicspolygonitem_collideswithpath_isbase = false;
    mutable bool qgraphicspolygonitem_sceneeventfilter_isbase = false;
    mutable bool qgraphicspolygonitem_sceneevent_isbase = false;
    mutable bool qgraphicspolygonitem_contextmenuevent_isbase = false;
    mutable bool qgraphicspolygonitem_dragenterevent_isbase = false;
    mutable bool qgraphicspolygonitem_dragleaveevent_isbase = false;
    mutable bool qgraphicspolygonitem_dragmoveevent_isbase = false;
    mutable bool qgraphicspolygonitem_dropevent_isbase = false;
    mutable bool qgraphicspolygonitem_focusinevent_isbase = false;
    mutable bool qgraphicspolygonitem_focusoutevent_isbase = false;
    mutable bool qgraphicspolygonitem_hoverenterevent_isbase = false;
    mutable bool qgraphicspolygonitem_hovermoveevent_isbase = false;
    mutable bool qgraphicspolygonitem_hoverleaveevent_isbase = false;
    mutable bool qgraphicspolygonitem_keypressevent_isbase = false;
    mutable bool qgraphicspolygonitem_keyreleaseevent_isbase = false;
    mutable bool qgraphicspolygonitem_mousepressevent_isbase = false;
    mutable bool qgraphicspolygonitem_mousemoveevent_isbase = false;
    mutable bool qgraphicspolygonitem_mousereleaseevent_isbase = false;
    mutable bool qgraphicspolygonitem_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicspolygonitem_wheelevent_isbase = false;
    mutable bool qgraphicspolygonitem_inputmethodevent_isbase = false;
    mutable bool qgraphicspolygonitem_inputmethodquery_isbase = false;
    mutable bool qgraphicspolygonitem_itemchange_isbase = false;
    mutable bool qgraphicspolygonitem_updatemicrofocus_isbase = false;
    mutable bool qgraphicspolygonitem_addtoindex_isbase = false;
    mutable bool qgraphicspolygonitem_removefromindex_isbase = false;
    mutable bool qgraphicspolygonitem_preparegeometrychange_isbase = false;

  public:
    VirtualQGraphicsPolygonItem() : QGraphicsPolygonItem() {};
    VirtualQGraphicsPolygonItem(QGraphicsItem* parent) : QGraphicsPolygonItem(parent) {};

    // Callback setters
    inline void setQGraphicsPolygonItem_BoundingRect_Callback(QGraphicsPolygonItem_BoundingRect_Callback cb) { qgraphicspolygonitem_boundingrect_callback = cb; }
    inline void setQGraphicsPolygonItem_Shape_Callback(QGraphicsPolygonItem_Shape_Callback cb) { qgraphicspolygonitem_shape_callback = cb; }
    inline void setQGraphicsPolygonItem_Contains_Callback(QGraphicsPolygonItem_Contains_Callback cb) { qgraphicspolygonitem_contains_callback = cb; }
    inline void setQGraphicsPolygonItem_Paint_Callback(QGraphicsPolygonItem_Paint_Callback cb) { qgraphicspolygonitem_paint_callback = cb; }
    inline void setQGraphicsPolygonItem_IsObscuredBy_Callback(QGraphicsPolygonItem_IsObscuredBy_Callback cb) { qgraphicspolygonitem_isobscuredby_callback = cb; }
    inline void setQGraphicsPolygonItem_OpaqueArea_Callback(QGraphicsPolygonItem_OpaqueArea_Callback cb) { qgraphicspolygonitem_opaquearea_callback = cb; }
    inline void setQGraphicsPolygonItem_Type_Callback(QGraphicsPolygonItem_Type_Callback cb) { qgraphicspolygonitem_type_callback = cb; }
    inline void setQGraphicsPolygonItem_SupportsExtension_Callback(QGraphicsPolygonItem_SupportsExtension_Callback cb) { qgraphicspolygonitem_supportsextension_callback = cb; }
    inline void setQGraphicsPolygonItem_SetExtension_Callback(QGraphicsPolygonItem_SetExtension_Callback cb) { qgraphicspolygonitem_setextension_callback = cb; }
    inline void setQGraphicsPolygonItem_Extension_Callback(QGraphicsPolygonItem_Extension_Callback cb) { qgraphicspolygonitem_extension_callback = cb; }
    inline void setQGraphicsPolygonItem_Advance_Callback(QGraphicsPolygonItem_Advance_Callback cb) { qgraphicspolygonitem_advance_callback = cb; }
    inline void setQGraphicsPolygonItem_CollidesWithItem_Callback(QGraphicsPolygonItem_CollidesWithItem_Callback cb) { qgraphicspolygonitem_collideswithitem_callback = cb; }
    inline void setQGraphicsPolygonItem_CollidesWithPath_Callback(QGraphicsPolygonItem_CollidesWithPath_Callback cb) { qgraphicspolygonitem_collideswithpath_callback = cb; }
    inline void setQGraphicsPolygonItem_SceneEventFilter_Callback(QGraphicsPolygonItem_SceneEventFilter_Callback cb) { qgraphicspolygonitem_sceneeventfilter_callback = cb; }
    inline void setQGraphicsPolygonItem_SceneEvent_Callback(QGraphicsPolygonItem_SceneEvent_Callback cb) { qgraphicspolygonitem_sceneevent_callback = cb; }
    inline void setQGraphicsPolygonItem_ContextMenuEvent_Callback(QGraphicsPolygonItem_ContextMenuEvent_Callback cb) { qgraphicspolygonitem_contextmenuevent_callback = cb; }
    inline void setQGraphicsPolygonItem_DragEnterEvent_Callback(QGraphicsPolygonItem_DragEnterEvent_Callback cb) { qgraphicspolygonitem_dragenterevent_callback = cb; }
    inline void setQGraphicsPolygonItem_DragLeaveEvent_Callback(QGraphicsPolygonItem_DragLeaveEvent_Callback cb) { qgraphicspolygonitem_dragleaveevent_callback = cb; }
    inline void setQGraphicsPolygonItem_DragMoveEvent_Callback(QGraphicsPolygonItem_DragMoveEvent_Callback cb) { qgraphicspolygonitem_dragmoveevent_callback = cb; }
    inline void setQGraphicsPolygonItem_DropEvent_Callback(QGraphicsPolygonItem_DropEvent_Callback cb) { qgraphicspolygonitem_dropevent_callback = cb; }
    inline void setQGraphicsPolygonItem_FocusInEvent_Callback(QGraphicsPolygonItem_FocusInEvent_Callback cb) { qgraphicspolygonitem_focusinevent_callback = cb; }
    inline void setQGraphicsPolygonItem_FocusOutEvent_Callback(QGraphicsPolygonItem_FocusOutEvent_Callback cb) { qgraphicspolygonitem_focusoutevent_callback = cb; }
    inline void setQGraphicsPolygonItem_HoverEnterEvent_Callback(QGraphicsPolygonItem_HoverEnterEvent_Callback cb) { qgraphicspolygonitem_hoverenterevent_callback = cb; }
    inline void setQGraphicsPolygonItem_HoverMoveEvent_Callback(QGraphicsPolygonItem_HoverMoveEvent_Callback cb) { qgraphicspolygonitem_hovermoveevent_callback = cb; }
    inline void setQGraphicsPolygonItem_HoverLeaveEvent_Callback(QGraphicsPolygonItem_HoverLeaveEvent_Callback cb) { qgraphicspolygonitem_hoverleaveevent_callback = cb; }
    inline void setQGraphicsPolygonItem_KeyPressEvent_Callback(QGraphicsPolygonItem_KeyPressEvent_Callback cb) { qgraphicspolygonitem_keypressevent_callback = cb; }
    inline void setQGraphicsPolygonItem_KeyReleaseEvent_Callback(QGraphicsPolygonItem_KeyReleaseEvent_Callback cb) { qgraphicspolygonitem_keyreleaseevent_callback = cb; }
    inline void setQGraphicsPolygonItem_MousePressEvent_Callback(QGraphicsPolygonItem_MousePressEvent_Callback cb) { qgraphicspolygonitem_mousepressevent_callback = cb; }
    inline void setQGraphicsPolygonItem_MouseMoveEvent_Callback(QGraphicsPolygonItem_MouseMoveEvent_Callback cb) { qgraphicspolygonitem_mousemoveevent_callback = cb; }
    inline void setQGraphicsPolygonItem_MouseReleaseEvent_Callback(QGraphicsPolygonItem_MouseReleaseEvent_Callback cb) { qgraphicspolygonitem_mousereleaseevent_callback = cb; }
    inline void setQGraphicsPolygonItem_MouseDoubleClickEvent_Callback(QGraphicsPolygonItem_MouseDoubleClickEvent_Callback cb) { qgraphicspolygonitem_mousedoubleclickevent_callback = cb; }
    inline void setQGraphicsPolygonItem_WheelEvent_Callback(QGraphicsPolygonItem_WheelEvent_Callback cb) { qgraphicspolygonitem_wheelevent_callback = cb; }
    inline void setQGraphicsPolygonItem_InputMethodEvent_Callback(QGraphicsPolygonItem_InputMethodEvent_Callback cb) { qgraphicspolygonitem_inputmethodevent_callback = cb; }
    inline void setQGraphicsPolygonItem_InputMethodQuery_Callback(QGraphicsPolygonItem_InputMethodQuery_Callback cb) { qgraphicspolygonitem_inputmethodquery_callback = cb; }
    inline void setQGraphicsPolygonItem_ItemChange_Callback(QGraphicsPolygonItem_ItemChange_Callback cb) { qgraphicspolygonitem_itemchange_callback = cb; }
    inline void setQGraphicsPolygonItem_UpdateMicroFocus_Callback(QGraphicsPolygonItem_UpdateMicroFocus_Callback cb) { qgraphicspolygonitem_updatemicrofocus_callback = cb; }
    inline void setQGraphicsPolygonItem_AddToIndex_Callback(QGraphicsPolygonItem_AddToIndex_Callback cb) { qgraphicspolygonitem_addtoindex_callback = cb; }
    inline void setQGraphicsPolygonItem_RemoveFromIndex_Callback(QGraphicsPolygonItem_RemoveFromIndex_Callback cb) { qgraphicspolygonitem_removefromindex_callback = cb; }
    inline void setQGraphicsPolygonItem_PrepareGeometryChange_Callback(QGraphicsPolygonItem_PrepareGeometryChange_Callback cb) { qgraphicspolygonitem_preparegeometrychange_callback = cb; }

    // Base flag setters
    inline void setQGraphicsPolygonItem_BoundingRect_IsBase(bool value) const { qgraphicspolygonitem_boundingrect_isbase = value; }
    inline void setQGraphicsPolygonItem_Shape_IsBase(bool value) const { qgraphicspolygonitem_shape_isbase = value; }
    inline void setQGraphicsPolygonItem_Contains_IsBase(bool value) const { qgraphicspolygonitem_contains_isbase = value; }
    inline void setQGraphicsPolygonItem_Paint_IsBase(bool value) const { qgraphicspolygonitem_paint_isbase = value; }
    inline void setQGraphicsPolygonItem_IsObscuredBy_IsBase(bool value) const { qgraphicspolygonitem_isobscuredby_isbase = value; }
    inline void setQGraphicsPolygonItem_OpaqueArea_IsBase(bool value) const { qgraphicspolygonitem_opaquearea_isbase = value; }
    inline void setQGraphicsPolygonItem_Type_IsBase(bool value) const { qgraphicspolygonitem_type_isbase = value; }
    inline void setQGraphicsPolygonItem_SupportsExtension_IsBase(bool value) const { qgraphicspolygonitem_supportsextension_isbase = value; }
    inline void setQGraphicsPolygonItem_SetExtension_IsBase(bool value) const { qgraphicspolygonitem_setextension_isbase = value; }
    inline void setQGraphicsPolygonItem_Extension_IsBase(bool value) const { qgraphicspolygonitem_extension_isbase = value; }
    inline void setQGraphicsPolygonItem_Advance_IsBase(bool value) const { qgraphicspolygonitem_advance_isbase = value; }
    inline void setQGraphicsPolygonItem_CollidesWithItem_IsBase(bool value) const { qgraphicspolygonitem_collideswithitem_isbase = value; }
    inline void setQGraphicsPolygonItem_CollidesWithPath_IsBase(bool value) const { qgraphicspolygonitem_collideswithpath_isbase = value; }
    inline void setQGraphicsPolygonItem_SceneEventFilter_IsBase(bool value) const { qgraphicspolygonitem_sceneeventfilter_isbase = value; }
    inline void setQGraphicsPolygonItem_SceneEvent_IsBase(bool value) const { qgraphicspolygonitem_sceneevent_isbase = value; }
    inline void setQGraphicsPolygonItem_ContextMenuEvent_IsBase(bool value) const { qgraphicspolygonitem_contextmenuevent_isbase = value; }
    inline void setQGraphicsPolygonItem_DragEnterEvent_IsBase(bool value) const { qgraphicspolygonitem_dragenterevent_isbase = value; }
    inline void setQGraphicsPolygonItem_DragLeaveEvent_IsBase(bool value) const { qgraphicspolygonitem_dragleaveevent_isbase = value; }
    inline void setQGraphicsPolygonItem_DragMoveEvent_IsBase(bool value) const { qgraphicspolygonitem_dragmoveevent_isbase = value; }
    inline void setQGraphicsPolygonItem_DropEvent_IsBase(bool value) const { qgraphicspolygonitem_dropevent_isbase = value; }
    inline void setQGraphicsPolygonItem_FocusInEvent_IsBase(bool value) const { qgraphicspolygonitem_focusinevent_isbase = value; }
    inline void setQGraphicsPolygonItem_FocusOutEvent_IsBase(bool value) const { qgraphicspolygonitem_focusoutevent_isbase = value; }
    inline void setQGraphicsPolygonItem_HoverEnterEvent_IsBase(bool value) const { qgraphicspolygonitem_hoverenterevent_isbase = value; }
    inline void setQGraphicsPolygonItem_HoverMoveEvent_IsBase(bool value) const { qgraphicspolygonitem_hovermoveevent_isbase = value; }
    inline void setQGraphicsPolygonItem_HoverLeaveEvent_IsBase(bool value) const { qgraphicspolygonitem_hoverleaveevent_isbase = value; }
    inline void setQGraphicsPolygonItem_KeyPressEvent_IsBase(bool value) const { qgraphicspolygonitem_keypressevent_isbase = value; }
    inline void setQGraphicsPolygonItem_KeyReleaseEvent_IsBase(bool value) const { qgraphicspolygonitem_keyreleaseevent_isbase = value; }
    inline void setQGraphicsPolygonItem_MousePressEvent_IsBase(bool value) const { qgraphicspolygonitem_mousepressevent_isbase = value; }
    inline void setQGraphicsPolygonItem_MouseMoveEvent_IsBase(bool value) const { qgraphicspolygonitem_mousemoveevent_isbase = value; }
    inline void setQGraphicsPolygonItem_MouseReleaseEvent_IsBase(bool value) const { qgraphicspolygonitem_mousereleaseevent_isbase = value; }
    inline void setQGraphicsPolygonItem_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicspolygonitem_mousedoubleclickevent_isbase = value; }
    inline void setQGraphicsPolygonItem_WheelEvent_IsBase(bool value) const { qgraphicspolygonitem_wheelevent_isbase = value; }
    inline void setQGraphicsPolygonItem_InputMethodEvent_IsBase(bool value) const { qgraphicspolygonitem_inputmethodevent_isbase = value; }
    inline void setQGraphicsPolygonItem_InputMethodQuery_IsBase(bool value) const { qgraphicspolygonitem_inputmethodquery_isbase = value; }
    inline void setQGraphicsPolygonItem_ItemChange_IsBase(bool value) const { qgraphicspolygonitem_itemchange_isbase = value; }
    inline void setQGraphicsPolygonItem_UpdateMicroFocus_IsBase(bool value) const { qgraphicspolygonitem_updatemicrofocus_isbase = value; }
    inline void setQGraphicsPolygonItem_AddToIndex_IsBase(bool value) const { qgraphicspolygonitem_addtoindex_isbase = value; }
    inline void setQGraphicsPolygonItem_RemoveFromIndex_IsBase(bool value) const { qgraphicspolygonitem_removefromindex_isbase = value; }
    inline void setQGraphicsPolygonItem_PrepareGeometryChange_IsBase(bool value) const { qgraphicspolygonitem_preparegeometrychange_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicspolygonitem_boundingrect_isbase) {
            qgraphicspolygonitem_boundingrect_isbase = false;
            return QGraphicsPolygonItem::boundingRect();
        }
        auto boundingrect_cb = qgraphicspolygonitem_boundingrect_callback;
        if (boundingrect_cb) {
            QRectF* callback_ret = boundingrect_cb();
            return *callback_ret;
        }
        return QGraphicsPolygonItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicspolygonitem_shape_isbase) {
            qgraphicspolygonitem_shape_isbase = false;
            return QGraphicsPolygonItem::shape();
        }
        auto shape_cb = qgraphicspolygonitem_shape_callback;
        if (shape_cb) {
            QPainterPath* callback_ret = shape_cb();
            return *callback_ret;
        }
        return QGraphicsPolygonItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicspolygonitem_contains_isbase) {
            qgraphicspolygonitem_contains_isbase = false;
            return QGraphicsPolygonItem::contains(point);
        }
        auto contains_cb = qgraphicspolygonitem_contains_callback;
        if (contains_cb) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);

            bool callback_ret = contains_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPolygonItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicspolygonitem_paint_isbase) {
            qgraphicspolygonitem_paint_isbase = false;
            QGraphicsPolygonItem::paint(painter, option, widget);
            return;
        }
        auto paint_cb = qgraphicspolygonitem_paint_callback;
        if (paint_cb) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            paint_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsPolygonItem::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicspolygonitem_isobscuredby_isbase) {
            qgraphicspolygonitem_isobscuredby_isbase = false;
            return QGraphicsPolygonItem::isObscuredBy(item);
        }
        auto isobscuredby_cb = qgraphicspolygonitem_isobscuredby_callback;
        if (isobscuredby_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;

            bool callback_ret = isobscuredby_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPolygonItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicspolygonitem_opaquearea_isbase) {
            qgraphicspolygonitem_opaquearea_isbase = false;
            return QGraphicsPolygonItem::opaqueArea();
        }
        auto opaquearea_cb = qgraphicspolygonitem_opaquearea_callback;
        if (opaquearea_cb) {
            QPainterPath* callback_ret = opaquearea_cb();
            return *callback_ret;
        }
        return QGraphicsPolygonItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicspolygonitem_type_isbase) {
            qgraphicspolygonitem_type_isbase = false;
            return QGraphicsPolygonItem::type();
        }
        auto type_cb = qgraphicspolygonitem_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<int>(callback_ret);
        }
        return QGraphicsPolygonItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicspolygonitem_supportsextension_isbase) {
            qgraphicspolygonitem_supportsextension_isbase = false;
            return QGraphicsPolygonItem::supportsExtension(extension);
        }
        auto supportsextension_cb = qgraphicspolygonitem_supportsextension_callback;
        if (supportsextension_cb) {
            int cbval1 = static_cast<int>(extension);

            bool callback_ret = supportsextension_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPolygonItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicspolygonitem_setextension_isbase) {
            qgraphicspolygonitem_setextension_isbase = false;
            QGraphicsPolygonItem::setExtension(extension, variant);
            return;
        }
        auto setextension_cb = qgraphicspolygonitem_setextension_callback;
        if (setextension_cb) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);

            setextension_cb(this, cbval1, cbval2);
            return;
        }
        QGraphicsPolygonItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicspolygonitem_extension_isbase) {
            qgraphicspolygonitem_extension_isbase = false;
            return QGraphicsPolygonItem::extension(variant);
        }
        auto extension_cb = qgraphicspolygonitem_extension_callback;
        if (extension_cb) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);

            QVariant* callback_ret = extension_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsPolygonItem::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicspolygonitem_advance_isbase) {
            qgraphicspolygonitem_advance_isbase = false;
            QGraphicsPolygonItem::advance(phase);
            return;
        }
        auto advance_cb = qgraphicspolygonitem_advance_callback;
        if (advance_cb) {
            int cbval1 = phase;

            advance_cb(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicspolygonitem_collideswithitem_isbase) {
            qgraphicspolygonitem_collideswithitem_isbase = false;
            return QGraphicsPolygonItem::collidesWithItem(other, mode);
        }
        auto collideswithitem_cb = qgraphicspolygonitem_collideswithitem_callback;
        if (collideswithitem_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithitem_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsPolygonItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicspolygonitem_collideswithpath_isbase) {
            qgraphicspolygonitem_collideswithpath_isbase = false;
            return QGraphicsPolygonItem::collidesWithPath(path, mode);
        }
        auto collideswithpath_cb = qgraphicspolygonitem_collideswithpath_callback;
        if (collideswithpath_cb) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithpath_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsPolygonItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicspolygonitem_sceneeventfilter_isbase) {
            qgraphicspolygonitem_sceneeventfilter_isbase = false;
            return QGraphicsPolygonItem::sceneEventFilter(watched, event);
        }
        auto sceneeventfilter_cb = qgraphicspolygonitem_sceneeventfilter_callback;
        if (sceneeventfilter_cb) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = sceneeventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsPolygonItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicspolygonitem_sceneevent_isbase) {
            qgraphicspolygonitem_sceneevent_isbase = false;
            return QGraphicsPolygonItem::sceneEvent(event);
        }
        auto sceneevent_cb = qgraphicspolygonitem_sceneevent_callback;
        if (sceneevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = sceneevent_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPolygonItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicspolygonitem_contextmenuevent_isbase) {
            qgraphicspolygonitem_contextmenuevent_isbase = false;
            QGraphicsPolygonItem::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qgraphicspolygonitem_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspolygonitem_dragenterevent_isbase) {
            qgraphicspolygonitem_dragenterevent_isbase = false;
            QGraphicsPolygonItem::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qgraphicspolygonitem_dragenterevent_callback;
        if (dragenterevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspolygonitem_dragleaveevent_isbase) {
            qgraphicspolygonitem_dragleaveevent_isbase = false;
            QGraphicsPolygonItem::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qgraphicspolygonitem_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspolygonitem_dragmoveevent_isbase) {
            qgraphicspolygonitem_dragmoveevent_isbase = false;
            QGraphicsPolygonItem::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qgraphicspolygonitem_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspolygonitem_dropevent_isbase) {
            qgraphicspolygonitem_dropevent_isbase = false;
            QGraphicsPolygonItem::dropEvent(event);
            return;
        }
        auto dropevent_cb = qgraphicspolygonitem_dropevent_callback;
        if (dropevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicspolygonitem_focusinevent_isbase) {
            qgraphicspolygonitem_focusinevent_isbase = false;
            QGraphicsPolygonItem::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qgraphicspolygonitem_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicspolygonitem_focusoutevent_isbase) {
            qgraphicspolygonitem_focusoutevent_isbase = false;
            QGraphicsPolygonItem::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qgraphicspolygonitem_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicspolygonitem_hoverenterevent_isbase) {
            qgraphicspolygonitem_hoverenterevent_isbase = false;
            QGraphicsPolygonItem::hoverEnterEvent(event);
            return;
        }
        auto hoverenterevent_cb = qgraphicspolygonitem_hoverenterevent_callback;
        if (hoverenterevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicspolygonitem_hovermoveevent_isbase) {
            qgraphicspolygonitem_hovermoveevent_isbase = false;
            QGraphicsPolygonItem::hoverMoveEvent(event);
            return;
        }
        auto hovermoveevent_cb = qgraphicspolygonitem_hovermoveevent_callback;
        if (hovermoveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hovermoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicspolygonitem_hoverleaveevent_isbase) {
            qgraphicspolygonitem_hoverleaveevent_isbase = false;
            QGraphicsPolygonItem::hoverLeaveEvent(event);
            return;
        }
        auto hoverleaveevent_cb = qgraphicspolygonitem_hoverleaveevent_callback;
        if (hoverleaveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicspolygonitem_keypressevent_isbase) {
            qgraphicspolygonitem_keypressevent_isbase = false;
            QGraphicsPolygonItem::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qgraphicspolygonitem_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicspolygonitem_keyreleaseevent_isbase) {
            qgraphicspolygonitem_keyreleaseevent_isbase = false;
            QGraphicsPolygonItem::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qgraphicspolygonitem_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspolygonitem_mousepressevent_isbase) {
            qgraphicspolygonitem_mousepressevent_isbase = false;
            QGraphicsPolygonItem::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qgraphicspolygonitem_mousepressevent_callback;
        if (mousepressevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspolygonitem_mousemoveevent_isbase) {
            qgraphicspolygonitem_mousemoveevent_isbase = false;
            QGraphicsPolygonItem::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qgraphicspolygonitem_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspolygonitem_mousereleaseevent_isbase) {
            qgraphicspolygonitem_mousereleaseevent_isbase = false;
            QGraphicsPolygonItem::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qgraphicspolygonitem_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspolygonitem_mousedoubleclickevent_isbase) {
            qgraphicspolygonitem_mousedoubleclickevent_isbase = false;
            QGraphicsPolygonItem::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qgraphicspolygonitem_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicspolygonitem_wheelevent_isbase) {
            qgraphicspolygonitem_wheelevent_isbase = false;
            QGraphicsPolygonItem::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qgraphicspolygonitem_wheelevent_callback;
        if (wheelevent_cb) {
            QGraphicsSceneWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicspolygonitem_inputmethodevent_isbase) {
            qgraphicspolygonitem_inputmethodevent_isbase = false;
            QGraphicsPolygonItem::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = qgraphicspolygonitem_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QGraphicsPolygonItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicspolygonitem_inputmethodquery_isbase) {
            qgraphicspolygonitem_inputmethodquery_isbase = false;
            return QGraphicsPolygonItem::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qgraphicspolygonitem_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsPolygonItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicspolygonitem_itemchange_isbase) {
            qgraphicspolygonitem_itemchange_isbase = false;
            return QGraphicsPolygonItem::itemChange(change, value);
        }
        auto itemchange_cb = qgraphicspolygonitem_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            QVariant* callback_ret = itemchange_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QGraphicsPolygonItem::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qgraphicspolygonitem_updatemicrofocus_isbase) {
            qgraphicspolygonitem_updatemicrofocus_isbase = false;
            QGraphicsPolygonItem::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qgraphicspolygonitem_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QGraphicsPolygonItem::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qgraphicspolygonitem_addtoindex_isbase) {
            qgraphicspolygonitem_addtoindex_isbase = false;
            QGraphicsPolygonItem::addToIndex();
            return;
        }
        auto addtoindex_cb = qgraphicspolygonitem_addtoindex_callback;
        if (addtoindex_cb) {
            addtoindex_cb();
            return;
        }
        QGraphicsPolygonItem::addToIndex();
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qgraphicspolygonitem_removefromindex_isbase) {
            qgraphicspolygonitem_removefromindex_isbase = false;
            QGraphicsPolygonItem::removeFromIndex();
            return;
        }
        auto removefromindex_cb = qgraphicspolygonitem_removefromindex_callback;
        if (removefromindex_cb) {
            removefromindex_cb();
            return;
        }
        QGraphicsPolygonItem::removeFromIndex();
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qgraphicspolygonitem_preparegeometrychange_isbase) {
            qgraphicspolygonitem_preparegeometrychange_isbase = false;
            QGraphicsPolygonItem::prepareGeometryChange();
            return;
        }
        auto preparegeometrychange_cb = qgraphicspolygonitem_preparegeometrychange_callback;
        if (preparegeometrychange_cb) {
            preparegeometrychange_cb();
            return;
        }
        QGraphicsPolygonItem::prepareGeometryChange();
    }

    // Friend functions
    friend bool QGraphicsPolygonItem_SupportsExtension(const QGraphicsPolygonItem* self, int extension);
    friend bool QGraphicsPolygonItem_SuperSupportsExtension(const QGraphicsPolygonItem* self, int extension);
    friend void QGraphicsPolygonItem_SetExtension(QGraphicsPolygonItem* self, int extension, const QVariant* variant);
    friend void QGraphicsPolygonItem_SuperSetExtension(QGraphicsPolygonItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsPolygonItem_Extension(const QGraphicsPolygonItem* self, const QVariant* variant);
    friend QVariant* QGraphicsPolygonItem_SuperExtension(const QGraphicsPolygonItem* self, const QVariant* variant);
    friend bool QGraphicsPolygonItem_SceneEventFilter(QGraphicsPolygonItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsPolygonItem_SuperSceneEventFilter(QGraphicsPolygonItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsPolygonItem_SceneEvent(QGraphicsPolygonItem* self, QEvent* event);
    friend bool QGraphicsPolygonItem_SuperSceneEvent(QGraphicsPolygonItem* self, QEvent* event);
    friend void QGraphicsPolygonItem_ContextMenuEvent(QGraphicsPolygonItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsPolygonItem_SuperContextMenuEvent(QGraphicsPolygonItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsPolygonItem_DragEnterEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPolygonItem_SuperDragEnterEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPolygonItem_DragLeaveEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPolygonItem_SuperDragLeaveEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPolygonItem_DragMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPolygonItem_SuperDragMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPolygonItem_DropEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPolygonItem_SuperDropEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPolygonItem_FocusInEvent(QGraphicsPolygonItem* self, QFocusEvent* event);
    friend void QGraphicsPolygonItem_SuperFocusInEvent(QGraphicsPolygonItem* self, QFocusEvent* event);
    friend void QGraphicsPolygonItem_FocusOutEvent(QGraphicsPolygonItem* self, QFocusEvent* event);
    friend void QGraphicsPolygonItem_SuperFocusOutEvent(QGraphicsPolygonItem* self, QFocusEvent* event);
    friend void QGraphicsPolygonItem_HoverEnterEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPolygonItem_SuperHoverEnterEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPolygonItem_HoverMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPolygonItem_SuperHoverMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPolygonItem_HoverLeaveEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPolygonItem_SuperHoverLeaveEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPolygonItem_KeyPressEvent(QGraphicsPolygonItem* self, QKeyEvent* event);
    friend void QGraphicsPolygonItem_SuperKeyPressEvent(QGraphicsPolygonItem* self, QKeyEvent* event);
    friend void QGraphicsPolygonItem_KeyReleaseEvent(QGraphicsPolygonItem* self, QKeyEvent* event);
    friend void QGraphicsPolygonItem_SuperKeyReleaseEvent(QGraphicsPolygonItem* self, QKeyEvent* event);
    friend void QGraphicsPolygonItem_MousePressEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPolygonItem_SuperMousePressEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPolygonItem_MouseMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPolygonItem_SuperMouseMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPolygonItem_MouseReleaseEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPolygonItem_SuperMouseReleaseEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPolygonItem_MouseDoubleClickEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPolygonItem_SuperMouseDoubleClickEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPolygonItem_WheelEvent(QGraphicsPolygonItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsPolygonItem_SuperWheelEvent(QGraphicsPolygonItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsPolygonItem_InputMethodEvent(QGraphicsPolygonItem* self, QInputMethodEvent* event);
    friend void QGraphicsPolygonItem_SuperInputMethodEvent(QGraphicsPolygonItem* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsPolygonItem_InputMethodQuery(const QGraphicsPolygonItem* self, int query);
    friend QVariant* QGraphicsPolygonItem_SuperInputMethodQuery(const QGraphicsPolygonItem* self, int query);
    friend QVariant* QGraphicsPolygonItem_ItemChange(QGraphicsPolygonItem* self, int change, const QVariant* value);
    friend QVariant* QGraphicsPolygonItem_SuperItemChange(QGraphicsPolygonItem* self, int change, const QVariant* value);
    friend void QGraphicsPolygonItem_UpdateMicroFocus(QGraphicsPolygonItem* self);
    friend void QGraphicsPolygonItem_SuperUpdateMicroFocus(QGraphicsPolygonItem* self);
    friend void QGraphicsPolygonItem_AddToIndex(QGraphicsPolygonItem* self);
    friend void QGraphicsPolygonItem_SuperAddToIndex(QGraphicsPolygonItem* self);
    friend void QGraphicsPolygonItem_RemoveFromIndex(QGraphicsPolygonItem* self);
    friend void QGraphicsPolygonItem_SuperRemoveFromIndex(QGraphicsPolygonItem* self);
    friend void QGraphicsPolygonItem_PrepareGeometryChange(QGraphicsPolygonItem* self);
    friend void QGraphicsPolygonItem_SuperPrepareGeometryChange(QGraphicsPolygonItem* self);
};

// This class is a subclass of QGraphicsLineItem so that we can call protected methods
class VirtualQGraphicsLineItem final : public QGraphicsLineItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsLineItem = true;

    // Virtual class public types (including callbacks)
    using QGraphicsItem::Extension;
    using QGraphicsLineItem_BoundingRect_Callback = QRectF* (*)();
    using QGraphicsLineItem_Shape_Callback = QPainterPath* (*)();
    using QGraphicsLineItem_Contains_Callback = bool (*)(const QGraphicsLineItem*, QPointF*);
    using QGraphicsLineItem_Paint_Callback = void (*)(QGraphicsLineItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsLineItem_IsObscuredBy_Callback = bool (*)(const QGraphicsLineItem*, QGraphicsItem*);
    using QGraphicsLineItem_OpaqueArea_Callback = QPainterPath* (*)();
    using QGraphicsLineItem_Type_Callback = int (*)();
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
    using QGraphicsLineItem_UpdateMicroFocus_Callback = void (*)();
    using QGraphicsLineItem_AddToIndex_Callback = void (*)();
    using QGraphicsLineItem_RemoveFromIndex_Callback = void (*)();
    using QGraphicsLineItem_PrepareGeometryChange_Callback = void (*)();

  protected:
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
    QGraphicsLineItem_UpdateMicroFocus_Callback qgraphicslineitem_updatemicrofocus_callback = nullptr;
    QGraphicsLineItem_AddToIndex_Callback qgraphicslineitem_addtoindex_callback = nullptr;
    QGraphicsLineItem_RemoveFromIndex_Callback qgraphicslineitem_removefromindex_callback = nullptr;
    QGraphicsLineItem_PrepareGeometryChange_Callback qgraphicslineitem_preparegeometrychange_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicslineitem_boundingrect_isbase = false;
    mutable bool qgraphicslineitem_shape_isbase = false;
    mutable bool qgraphicslineitem_contains_isbase = false;
    mutable bool qgraphicslineitem_paint_isbase = false;
    mutable bool qgraphicslineitem_isobscuredby_isbase = false;
    mutable bool qgraphicslineitem_opaquearea_isbase = false;
    mutable bool qgraphicslineitem_type_isbase = false;
    mutable bool qgraphicslineitem_supportsextension_isbase = false;
    mutable bool qgraphicslineitem_setextension_isbase = false;
    mutable bool qgraphicslineitem_extension_isbase = false;
    mutable bool qgraphicslineitem_advance_isbase = false;
    mutable bool qgraphicslineitem_collideswithitem_isbase = false;
    mutable bool qgraphicslineitem_collideswithpath_isbase = false;
    mutable bool qgraphicslineitem_sceneeventfilter_isbase = false;
    mutable bool qgraphicslineitem_sceneevent_isbase = false;
    mutable bool qgraphicslineitem_contextmenuevent_isbase = false;
    mutable bool qgraphicslineitem_dragenterevent_isbase = false;
    mutable bool qgraphicslineitem_dragleaveevent_isbase = false;
    mutable bool qgraphicslineitem_dragmoveevent_isbase = false;
    mutable bool qgraphicslineitem_dropevent_isbase = false;
    mutable bool qgraphicslineitem_focusinevent_isbase = false;
    mutable bool qgraphicslineitem_focusoutevent_isbase = false;
    mutable bool qgraphicslineitem_hoverenterevent_isbase = false;
    mutable bool qgraphicslineitem_hovermoveevent_isbase = false;
    mutable bool qgraphicslineitem_hoverleaveevent_isbase = false;
    mutable bool qgraphicslineitem_keypressevent_isbase = false;
    mutable bool qgraphicslineitem_keyreleaseevent_isbase = false;
    mutable bool qgraphicslineitem_mousepressevent_isbase = false;
    mutable bool qgraphicslineitem_mousemoveevent_isbase = false;
    mutable bool qgraphicslineitem_mousereleaseevent_isbase = false;
    mutable bool qgraphicslineitem_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicslineitem_wheelevent_isbase = false;
    mutable bool qgraphicslineitem_inputmethodevent_isbase = false;
    mutable bool qgraphicslineitem_inputmethodquery_isbase = false;
    mutable bool qgraphicslineitem_itemchange_isbase = false;
    mutable bool qgraphicslineitem_updatemicrofocus_isbase = false;
    mutable bool qgraphicslineitem_addtoindex_isbase = false;
    mutable bool qgraphicslineitem_removefromindex_isbase = false;
    mutable bool qgraphicslineitem_preparegeometrychange_isbase = false;

  public:
    VirtualQGraphicsLineItem() : QGraphicsLineItem() {};
    VirtualQGraphicsLineItem(const QLineF& line) : QGraphicsLineItem(line) {};
    VirtualQGraphicsLineItem(qreal x1, qreal y1, qreal x2, qreal y2) : QGraphicsLineItem(x1, y1, x2, y2) {};
    VirtualQGraphicsLineItem(QGraphicsItem* parent) : QGraphicsLineItem(parent) {};
    VirtualQGraphicsLineItem(const QLineF& line, QGraphicsItem* parent) : QGraphicsLineItem(line, parent) {};
    VirtualQGraphicsLineItem(qreal x1, qreal y1, qreal x2, qreal y2, QGraphicsItem* parent) : QGraphicsLineItem(x1, y1, x2, y2, parent) {};

    // Callback setters
    inline void setQGraphicsLineItem_BoundingRect_Callback(QGraphicsLineItem_BoundingRect_Callback cb) { qgraphicslineitem_boundingrect_callback = cb; }
    inline void setQGraphicsLineItem_Shape_Callback(QGraphicsLineItem_Shape_Callback cb) { qgraphicslineitem_shape_callback = cb; }
    inline void setQGraphicsLineItem_Contains_Callback(QGraphicsLineItem_Contains_Callback cb) { qgraphicslineitem_contains_callback = cb; }
    inline void setQGraphicsLineItem_Paint_Callback(QGraphicsLineItem_Paint_Callback cb) { qgraphicslineitem_paint_callback = cb; }
    inline void setQGraphicsLineItem_IsObscuredBy_Callback(QGraphicsLineItem_IsObscuredBy_Callback cb) { qgraphicslineitem_isobscuredby_callback = cb; }
    inline void setQGraphicsLineItem_OpaqueArea_Callback(QGraphicsLineItem_OpaqueArea_Callback cb) { qgraphicslineitem_opaquearea_callback = cb; }
    inline void setQGraphicsLineItem_Type_Callback(QGraphicsLineItem_Type_Callback cb) { qgraphicslineitem_type_callback = cb; }
    inline void setQGraphicsLineItem_SupportsExtension_Callback(QGraphicsLineItem_SupportsExtension_Callback cb) { qgraphicslineitem_supportsextension_callback = cb; }
    inline void setQGraphicsLineItem_SetExtension_Callback(QGraphicsLineItem_SetExtension_Callback cb) { qgraphicslineitem_setextension_callback = cb; }
    inline void setQGraphicsLineItem_Extension_Callback(QGraphicsLineItem_Extension_Callback cb) { qgraphicslineitem_extension_callback = cb; }
    inline void setQGraphicsLineItem_Advance_Callback(QGraphicsLineItem_Advance_Callback cb) { qgraphicslineitem_advance_callback = cb; }
    inline void setQGraphicsLineItem_CollidesWithItem_Callback(QGraphicsLineItem_CollidesWithItem_Callback cb) { qgraphicslineitem_collideswithitem_callback = cb; }
    inline void setQGraphicsLineItem_CollidesWithPath_Callback(QGraphicsLineItem_CollidesWithPath_Callback cb) { qgraphicslineitem_collideswithpath_callback = cb; }
    inline void setQGraphicsLineItem_SceneEventFilter_Callback(QGraphicsLineItem_SceneEventFilter_Callback cb) { qgraphicslineitem_sceneeventfilter_callback = cb; }
    inline void setQGraphicsLineItem_SceneEvent_Callback(QGraphicsLineItem_SceneEvent_Callback cb) { qgraphicslineitem_sceneevent_callback = cb; }
    inline void setQGraphicsLineItem_ContextMenuEvent_Callback(QGraphicsLineItem_ContextMenuEvent_Callback cb) { qgraphicslineitem_contextmenuevent_callback = cb; }
    inline void setQGraphicsLineItem_DragEnterEvent_Callback(QGraphicsLineItem_DragEnterEvent_Callback cb) { qgraphicslineitem_dragenterevent_callback = cb; }
    inline void setQGraphicsLineItem_DragLeaveEvent_Callback(QGraphicsLineItem_DragLeaveEvent_Callback cb) { qgraphicslineitem_dragleaveevent_callback = cb; }
    inline void setQGraphicsLineItem_DragMoveEvent_Callback(QGraphicsLineItem_DragMoveEvent_Callback cb) { qgraphicslineitem_dragmoveevent_callback = cb; }
    inline void setQGraphicsLineItem_DropEvent_Callback(QGraphicsLineItem_DropEvent_Callback cb) { qgraphicslineitem_dropevent_callback = cb; }
    inline void setQGraphicsLineItem_FocusInEvent_Callback(QGraphicsLineItem_FocusInEvent_Callback cb) { qgraphicslineitem_focusinevent_callback = cb; }
    inline void setQGraphicsLineItem_FocusOutEvent_Callback(QGraphicsLineItem_FocusOutEvent_Callback cb) { qgraphicslineitem_focusoutevent_callback = cb; }
    inline void setQGraphicsLineItem_HoverEnterEvent_Callback(QGraphicsLineItem_HoverEnterEvent_Callback cb) { qgraphicslineitem_hoverenterevent_callback = cb; }
    inline void setQGraphicsLineItem_HoverMoveEvent_Callback(QGraphicsLineItem_HoverMoveEvent_Callback cb) { qgraphicslineitem_hovermoveevent_callback = cb; }
    inline void setQGraphicsLineItem_HoverLeaveEvent_Callback(QGraphicsLineItem_HoverLeaveEvent_Callback cb) { qgraphicslineitem_hoverleaveevent_callback = cb; }
    inline void setQGraphicsLineItem_KeyPressEvent_Callback(QGraphicsLineItem_KeyPressEvent_Callback cb) { qgraphicslineitem_keypressevent_callback = cb; }
    inline void setQGraphicsLineItem_KeyReleaseEvent_Callback(QGraphicsLineItem_KeyReleaseEvent_Callback cb) { qgraphicslineitem_keyreleaseevent_callback = cb; }
    inline void setQGraphicsLineItem_MousePressEvent_Callback(QGraphicsLineItem_MousePressEvent_Callback cb) { qgraphicslineitem_mousepressevent_callback = cb; }
    inline void setQGraphicsLineItem_MouseMoveEvent_Callback(QGraphicsLineItem_MouseMoveEvent_Callback cb) { qgraphicslineitem_mousemoveevent_callback = cb; }
    inline void setQGraphicsLineItem_MouseReleaseEvent_Callback(QGraphicsLineItem_MouseReleaseEvent_Callback cb) { qgraphicslineitem_mousereleaseevent_callback = cb; }
    inline void setQGraphicsLineItem_MouseDoubleClickEvent_Callback(QGraphicsLineItem_MouseDoubleClickEvent_Callback cb) { qgraphicslineitem_mousedoubleclickevent_callback = cb; }
    inline void setQGraphicsLineItem_WheelEvent_Callback(QGraphicsLineItem_WheelEvent_Callback cb) { qgraphicslineitem_wheelevent_callback = cb; }
    inline void setQGraphicsLineItem_InputMethodEvent_Callback(QGraphicsLineItem_InputMethodEvent_Callback cb) { qgraphicslineitem_inputmethodevent_callback = cb; }
    inline void setQGraphicsLineItem_InputMethodQuery_Callback(QGraphicsLineItem_InputMethodQuery_Callback cb) { qgraphicslineitem_inputmethodquery_callback = cb; }
    inline void setQGraphicsLineItem_ItemChange_Callback(QGraphicsLineItem_ItemChange_Callback cb) { qgraphicslineitem_itemchange_callback = cb; }
    inline void setQGraphicsLineItem_UpdateMicroFocus_Callback(QGraphicsLineItem_UpdateMicroFocus_Callback cb) { qgraphicslineitem_updatemicrofocus_callback = cb; }
    inline void setQGraphicsLineItem_AddToIndex_Callback(QGraphicsLineItem_AddToIndex_Callback cb) { qgraphicslineitem_addtoindex_callback = cb; }
    inline void setQGraphicsLineItem_RemoveFromIndex_Callback(QGraphicsLineItem_RemoveFromIndex_Callback cb) { qgraphicslineitem_removefromindex_callback = cb; }
    inline void setQGraphicsLineItem_PrepareGeometryChange_Callback(QGraphicsLineItem_PrepareGeometryChange_Callback cb) { qgraphicslineitem_preparegeometrychange_callback = cb; }

    // Base flag setters
    inline void setQGraphicsLineItem_BoundingRect_IsBase(bool value) const { qgraphicslineitem_boundingrect_isbase = value; }
    inline void setQGraphicsLineItem_Shape_IsBase(bool value) const { qgraphicslineitem_shape_isbase = value; }
    inline void setQGraphicsLineItem_Contains_IsBase(bool value) const { qgraphicslineitem_contains_isbase = value; }
    inline void setQGraphicsLineItem_Paint_IsBase(bool value) const { qgraphicslineitem_paint_isbase = value; }
    inline void setQGraphicsLineItem_IsObscuredBy_IsBase(bool value) const { qgraphicslineitem_isobscuredby_isbase = value; }
    inline void setQGraphicsLineItem_OpaqueArea_IsBase(bool value) const { qgraphicslineitem_opaquearea_isbase = value; }
    inline void setQGraphicsLineItem_Type_IsBase(bool value) const { qgraphicslineitem_type_isbase = value; }
    inline void setQGraphicsLineItem_SupportsExtension_IsBase(bool value) const { qgraphicslineitem_supportsextension_isbase = value; }
    inline void setQGraphicsLineItem_SetExtension_IsBase(bool value) const { qgraphicslineitem_setextension_isbase = value; }
    inline void setQGraphicsLineItem_Extension_IsBase(bool value) const { qgraphicslineitem_extension_isbase = value; }
    inline void setQGraphicsLineItem_Advance_IsBase(bool value) const { qgraphicslineitem_advance_isbase = value; }
    inline void setQGraphicsLineItem_CollidesWithItem_IsBase(bool value) const { qgraphicslineitem_collideswithitem_isbase = value; }
    inline void setQGraphicsLineItem_CollidesWithPath_IsBase(bool value) const { qgraphicslineitem_collideswithpath_isbase = value; }
    inline void setQGraphicsLineItem_SceneEventFilter_IsBase(bool value) const { qgraphicslineitem_sceneeventfilter_isbase = value; }
    inline void setQGraphicsLineItem_SceneEvent_IsBase(bool value) const { qgraphicslineitem_sceneevent_isbase = value; }
    inline void setQGraphicsLineItem_ContextMenuEvent_IsBase(bool value) const { qgraphicslineitem_contextmenuevent_isbase = value; }
    inline void setQGraphicsLineItem_DragEnterEvent_IsBase(bool value) const { qgraphicslineitem_dragenterevent_isbase = value; }
    inline void setQGraphicsLineItem_DragLeaveEvent_IsBase(bool value) const { qgraphicslineitem_dragleaveevent_isbase = value; }
    inline void setQGraphicsLineItem_DragMoveEvent_IsBase(bool value) const { qgraphicslineitem_dragmoveevent_isbase = value; }
    inline void setQGraphicsLineItem_DropEvent_IsBase(bool value) const { qgraphicslineitem_dropevent_isbase = value; }
    inline void setQGraphicsLineItem_FocusInEvent_IsBase(bool value) const { qgraphicslineitem_focusinevent_isbase = value; }
    inline void setQGraphicsLineItem_FocusOutEvent_IsBase(bool value) const { qgraphicslineitem_focusoutevent_isbase = value; }
    inline void setQGraphicsLineItem_HoverEnterEvent_IsBase(bool value) const { qgraphicslineitem_hoverenterevent_isbase = value; }
    inline void setQGraphicsLineItem_HoverMoveEvent_IsBase(bool value) const { qgraphicslineitem_hovermoveevent_isbase = value; }
    inline void setQGraphicsLineItem_HoverLeaveEvent_IsBase(bool value) const { qgraphicslineitem_hoverleaveevent_isbase = value; }
    inline void setQGraphicsLineItem_KeyPressEvent_IsBase(bool value) const { qgraphicslineitem_keypressevent_isbase = value; }
    inline void setQGraphicsLineItem_KeyReleaseEvent_IsBase(bool value) const { qgraphicslineitem_keyreleaseevent_isbase = value; }
    inline void setQGraphicsLineItem_MousePressEvent_IsBase(bool value) const { qgraphicslineitem_mousepressevent_isbase = value; }
    inline void setQGraphicsLineItem_MouseMoveEvent_IsBase(bool value) const { qgraphicslineitem_mousemoveevent_isbase = value; }
    inline void setQGraphicsLineItem_MouseReleaseEvent_IsBase(bool value) const { qgraphicslineitem_mousereleaseevent_isbase = value; }
    inline void setQGraphicsLineItem_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicslineitem_mousedoubleclickevent_isbase = value; }
    inline void setQGraphicsLineItem_WheelEvent_IsBase(bool value) const { qgraphicslineitem_wheelevent_isbase = value; }
    inline void setQGraphicsLineItem_InputMethodEvent_IsBase(bool value) const { qgraphicslineitem_inputmethodevent_isbase = value; }
    inline void setQGraphicsLineItem_InputMethodQuery_IsBase(bool value) const { qgraphicslineitem_inputmethodquery_isbase = value; }
    inline void setQGraphicsLineItem_ItemChange_IsBase(bool value) const { qgraphicslineitem_itemchange_isbase = value; }
    inline void setQGraphicsLineItem_UpdateMicroFocus_IsBase(bool value) const { qgraphicslineitem_updatemicrofocus_isbase = value; }
    inline void setQGraphicsLineItem_AddToIndex_IsBase(bool value) const { qgraphicslineitem_addtoindex_isbase = value; }
    inline void setQGraphicsLineItem_RemoveFromIndex_IsBase(bool value) const { qgraphicslineitem_removefromindex_isbase = value; }
    inline void setQGraphicsLineItem_PrepareGeometryChange_IsBase(bool value) const { qgraphicslineitem_preparegeometrychange_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicslineitem_boundingrect_isbase) {
            qgraphicslineitem_boundingrect_isbase = false;
            return QGraphicsLineItem::boundingRect();
        }
        auto boundingrect_cb = qgraphicslineitem_boundingrect_callback;
        if (boundingrect_cb) {
            QRectF* callback_ret = boundingrect_cb();
            return *callback_ret;
        }
        return QGraphicsLineItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicslineitem_shape_isbase) {
            qgraphicslineitem_shape_isbase = false;
            return QGraphicsLineItem::shape();
        }
        auto shape_cb = qgraphicslineitem_shape_callback;
        if (shape_cb) {
            QPainterPath* callback_ret = shape_cb();
            return *callback_ret;
        }
        return QGraphicsLineItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicslineitem_contains_isbase) {
            qgraphicslineitem_contains_isbase = false;
            return QGraphicsLineItem::contains(point);
        }
        auto contains_cb = qgraphicslineitem_contains_callback;
        if (contains_cb) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);

            bool callback_ret = contains_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsLineItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicslineitem_paint_isbase) {
            qgraphicslineitem_paint_isbase = false;
            QGraphicsLineItem::paint(painter, option, widget);
            return;
        }
        auto paint_cb = qgraphicslineitem_paint_callback;
        if (paint_cb) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            paint_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsLineItem::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicslineitem_isobscuredby_isbase) {
            qgraphicslineitem_isobscuredby_isbase = false;
            return QGraphicsLineItem::isObscuredBy(item);
        }
        auto isobscuredby_cb = qgraphicslineitem_isobscuredby_callback;
        if (isobscuredby_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;

            bool callback_ret = isobscuredby_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsLineItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicslineitem_opaquearea_isbase) {
            qgraphicslineitem_opaquearea_isbase = false;
            return QGraphicsLineItem::opaqueArea();
        }
        auto opaquearea_cb = qgraphicslineitem_opaquearea_callback;
        if (opaquearea_cb) {
            QPainterPath* callback_ret = opaquearea_cb();
            return *callback_ret;
        }
        return QGraphicsLineItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicslineitem_type_isbase) {
            qgraphicslineitem_type_isbase = false;
            return QGraphicsLineItem::type();
        }
        auto type_cb = qgraphicslineitem_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<int>(callback_ret);
        }
        return QGraphicsLineItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicslineitem_supportsextension_isbase) {
            qgraphicslineitem_supportsextension_isbase = false;
            return QGraphicsLineItem::supportsExtension(extension);
        }
        auto supportsextension_cb = qgraphicslineitem_supportsextension_callback;
        if (supportsextension_cb) {
            int cbval1 = static_cast<int>(extension);

            bool callback_ret = supportsextension_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsLineItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicslineitem_setextension_isbase) {
            qgraphicslineitem_setextension_isbase = false;
            QGraphicsLineItem::setExtension(extension, variant);
            return;
        }
        auto setextension_cb = qgraphicslineitem_setextension_callback;
        if (setextension_cb) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);

            setextension_cb(this, cbval1, cbval2);
            return;
        }
        QGraphicsLineItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicslineitem_extension_isbase) {
            qgraphicslineitem_extension_isbase = false;
            return QGraphicsLineItem::extension(variant);
        }
        auto extension_cb = qgraphicslineitem_extension_callback;
        if (extension_cb) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);

            QVariant* callback_ret = extension_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsLineItem::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicslineitem_advance_isbase) {
            qgraphicslineitem_advance_isbase = false;
            QGraphicsLineItem::advance(phase);
            return;
        }
        auto advance_cb = qgraphicslineitem_advance_callback;
        if (advance_cb) {
            int cbval1 = phase;

            advance_cb(this, cbval1);
            return;
        }
        QGraphicsLineItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicslineitem_collideswithitem_isbase) {
            qgraphicslineitem_collideswithitem_isbase = false;
            return QGraphicsLineItem::collidesWithItem(other, mode);
        }
        auto collideswithitem_cb = qgraphicslineitem_collideswithitem_callback;
        if (collideswithitem_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithitem_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsLineItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicslineitem_collideswithpath_isbase) {
            qgraphicslineitem_collideswithpath_isbase = false;
            return QGraphicsLineItem::collidesWithPath(path, mode);
        }
        auto collideswithpath_cb = qgraphicslineitem_collideswithpath_callback;
        if (collideswithpath_cb) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithpath_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsLineItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicslineitem_sceneeventfilter_isbase) {
            qgraphicslineitem_sceneeventfilter_isbase = false;
            return QGraphicsLineItem::sceneEventFilter(watched, event);
        }
        auto sceneeventfilter_cb = qgraphicslineitem_sceneeventfilter_callback;
        if (sceneeventfilter_cb) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = sceneeventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsLineItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicslineitem_sceneevent_isbase) {
            qgraphicslineitem_sceneevent_isbase = false;
            return QGraphicsLineItem::sceneEvent(event);
        }
        auto sceneevent_cb = qgraphicslineitem_sceneevent_callback;
        if (sceneevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = sceneevent_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsLineItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicslineitem_contextmenuevent_isbase) {
            qgraphicslineitem_contextmenuevent_isbase = false;
            QGraphicsLineItem::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qgraphicslineitem_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QGraphicsLineItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicslineitem_dragenterevent_isbase) {
            qgraphicslineitem_dragenterevent_isbase = false;
            QGraphicsLineItem::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qgraphicslineitem_dragenterevent_callback;
        if (dragenterevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsLineItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicslineitem_dragleaveevent_isbase) {
            qgraphicslineitem_dragleaveevent_isbase = false;
            QGraphicsLineItem::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qgraphicslineitem_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsLineItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicslineitem_dragmoveevent_isbase) {
            qgraphicslineitem_dragmoveevent_isbase = false;
            QGraphicsLineItem::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qgraphicslineitem_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsLineItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicslineitem_dropevent_isbase) {
            qgraphicslineitem_dropevent_isbase = false;
            QGraphicsLineItem::dropEvent(event);
            return;
        }
        auto dropevent_cb = qgraphicslineitem_dropevent_callback;
        if (dropevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QGraphicsLineItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicslineitem_focusinevent_isbase) {
            qgraphicslineitem_focusinevent_isbase = false;
            QGraphicsLineItem::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qgraphicslineitem_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QGraphicsLineItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicslineitem_focusoutevent_isbase) {
            qgraphicslineitem_focusoutevent_isbase = false;
            QGraphicsLineItem::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qgraphicslineitem_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QGraphicsLineItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicslineitem_hoverenterevent_isbase) {
            qgraphicslineitem_hoverenterevent_isbase = false;
            QGraphicsLineItem::hoverEnterEvent(event);
            return;
        }
        auto hoverenterevent_cb = qgraphicslineitem_hoverenterevent_callback;
        if (hoverenterevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsLineItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicslineitem_hovermoveevent_isbase) {
            qgraphicslineitem_hovermoveevent_isbase = false;
            QGraphicsLineItem::hoverMoveEvent(event);
            return;
        }
        auto hovermoveevent_cb = qgraphicslineitem_hovermoveevent_callback;
        if (hovermoveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hovermoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsLineItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicslineitem_hoverleaveevent_isbase) {
            qgraphicslineitem_hoverleaveevent_isbase = false;
            QGraphicsLineItem::hoverLeaveEvent(event);
            return;
        }
        auto hoverleaveevent_cb = qgraphicslineitem_hoverleaveevent_callback;
        if (hoverleaveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsLineItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicslineitem_keypressevent_isbase) {
            qgraphicslineitem_keypressevent_isbase = false;
            QGraphicsLineItem::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qgraphicslineitem_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QGraphicsLineItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicslineitem_keyreleaseevent_isbase) {
            qgraphicslineitem_keyreleaseevent_isbase = false;
            QGraphicsLineItem::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qgraphicslineitem_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsLineItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicslineitem_mousepressevent_isbase) {
            qgraphicslineitem_mousepressevent_isbase = false;
            QGraphicsLineItem::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qgraphicslineitem_mousepressevent_callback;
        if (mousepressevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QGraphicsLineItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicslineitem_mousemoveevent_isbase) {
            qgraphicslineitem_mousemoveevent_isbase = false;
            QGraphicsLineItem::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qgraphicslineitem_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsLineItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicslineitem_mousereleaseevent_isbase) {
            qgraphicslineitem_mousereleaseevent_isbase = false;
            QGraphicsLineItem::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qgraphicslineitem_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsLineItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicslineitem_mousedoubleclickevent_isbase) {
            qgraphicslineitem_mousedoubleclickevent_isbase = false;
            QGraphicsLineItem::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qgraphicslineitem_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QGraphicsLineItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicslineitem_wheelevent_isbase) {
            qgraphicslineitem_wheelevent_isbase = false;
            QGraphicsLineItem::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qgraphicslineitem_wheelevent_callback;
        if (wheelevent_cb) {
            QGraphicsSceneWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QGraphicsLineItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicslineitem_inputmethodevent_isbase) {
            qgraphicslineitem_inputmethodevent_isbase = false;
            QGraphicsLineItem::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = qgraphicslineitem_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QGraphicsLineItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicslineitem_inputmethodquery_isbase) {
            qgraphicslineitem_inputmethodquery_isbase = false;
            return QGraphicsLineItem::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qgraphicslineitem_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsLineItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicslineitem_itemchange_isbase) {
            qgraphicslineitem_itemchange_isbase = false;
            return QGraphicsLineItem::itemChange(change, value);
        }
        auto itemchange_cb = qgraphicslineitem_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            QVariant* callback_ret = itemchange_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QGraphicsLineItem::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qgraphicslineitem_updatemicrofocus_isbase) {
            qgraphicslineitem_updatemicrofocus_isbase = false;
            QGraphicsLineItem::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qgraphicslineitem_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QGraphicsLineItem::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qgraphicslineitem_addtoindex_isbase) {
            qgraphicslineitem_addtoindex_isbase = false;
            QGraphicsLineItem::addToIndex();
            return;
        }
        auto addtoindex_cb = qgraphicslineitem_addtoindex_callback;
        if (addtoindex_cb) {
            addtoindex_cb();
            return;
        }
        QGraphicsLineItem::addToIndex();
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qgraphicslineitem_removefromindex_isbase) {
            qgraphicslineitem_removefromindex_isbase = false;
            QGraphicsLineItem::removeFromIndex();
            return;
        }
        auto removefromindex_cb = qgraphicslineitem_removefromindex_callback;
        if (removefromindex_cb) {
            removefromindex_cb();
            return;
        }
        QGraphicsLineItem::removeFromIndex();
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qgraphicslineitem_preparegeometrychange_isbase) {
            qgraphicslineitem_preparegeometrychange_isbase = false;
            QGraphicsLineItem::prepareGeometryChange();
            return;
        }
        auto preparegeometrychange_cb = qgraphicslineitem_preparegeometrychange_callback;
        if (preparegeometrychange_cb) {
            preparegeometrychange_cb();
            return;
        }
        QGraphicsLineItem::prepareGeometryChange();
    }

    // Friend functions
    friend bool QGraphicsLineItem_SupportsExtension(const QGraphicsLineItem* self, int extension);
    friend bool QGraphicsLineItem_SuperSupportsExtension(const QGraphicsLineItem* self, int extension);
    friend void QGraphicsLineItem_SetExtension(QGraphicsLineItem* self, int extension, const QVariant* variant);
    friend void QGraphicsLineItem_SuperSetExtension(QGraphicsLineItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsLineItem_Extension(const QGraphicsLineItem* self, const QVariant* variant);
    friend QVariant* QGraphicsLineItem_SuperExtension(const QGraphicsLineItem* self, const QVariant* variant);
    friend bool QGraphicsLineItem_SceneEventFilter(QGraphicsLineItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsLineItem_SuperSceneEventFilter(QGraphicsLineItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsLineItem_SceneEvent(QGraphicsLineItem* self, QEvent* event);
    friend bool QGraphicsLineItem_SuperSceneEvent(QGraphicsLineItem* self, QEvent* event);
    friend void QGraphicsLineItem_ContextMenuEvent(QGraphicsLineItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsLineItem_SuperContextMenuEvent(QGraphicsLineItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsLineItem_DragEnterEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsLineItem_SuperDragEnterEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsLineItem_DragLeaveEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsLineItem_SuperDragLeaveEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsLineItem_DragMoveEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsLineItem_SuperDragMoveEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsLineItem_DropEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsLineItem_SuperDropEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsLineItem_FocusInEvent(QGraphicsLineItem* self, QFocusEvent* event);
    friend void QGraphicsLineItem_SuperFocusInEvent(QGraphicsLineItem* self, QFocusEvent* event);
    friend void QGraphicsLineItem_FocusOutEvent(QGraphicsLineItem* self, QFocusEvent* event);
    friend void QGraphicsLineItem_SuperFocusOutEvent(QGraphicsLineItem* self, QFocusEvent* event);
    friend void QGraphicsLineItem_HoverEnterEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsLineItem_SuperHoverEnterEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsLineItem_HoverMoveEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsLineItem_SuperHoverMoveEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsLineItem_HoverLeaveEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsLineItem_SuperHoverLeaveEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsLineItem_KeyPressEvent(QGraphicsLineItem* self, QKeyEvent* event);
    friend void QGraphicsLineItem_SuperKeyPressEvent(QGraphicsLineItem* self, QKeyEvent* event);
    friend void QGraphicsLineItem_KeyReleaseEvent(QGraphicsLineItem* self, QKeyEvent* event);
    friend void QGraphicsLineItem_SuperKeyReleaseEvent(QGraphicsLineItem* self, QKeyEvent* event);
    friend void QGraphicsLineItem_MousePressEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsLineItem_SuperMousePressEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsLineItem_MouseMoveEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsLineItem_SuperMouseMoveEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsLineItem_MouseReleaseEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsLineItem_SuperMouseReleaseEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsLineItem_MouseDoubleClickEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsLineItem_SuperMouseDoubleClickEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsLineItem_WheelEvent(QGraphicsLineItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsLineItem_SuperWheelEvent(QGraphicsLineItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsLineItem_InputMethodEvent(QGraphicsLineItem* self, QInputMethodEvent* event);
    friend void QGraphicsLineItem_SuperInputMethodEvent(QGraphicsLineItem* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsLineItem_InputMethodQuery(const QGraphicsLineItem* self, int query);
    friend QVariant* QGraphicsLineItem_SuperInputMethodQuery(const QGraphicsLineItem* self, int query);
    friend QVariant* QGraphicsLineItem_ItemChange(QGraphicsLineItem* self, int change, const QVariant* value);
    friend QVariant* QGraphicsLineItem_SuperItemChange(QGraphicsLineItem* self, int change, const QVariant* value);
    friend void QGraphicsLineItem_UpdateMicroFocus(QGraphicsLineItem* self);
    friend void QGraphicsLineItem_SuperUpdateMicroFocus(QGraphicsLineItem* self);
    friend void QGraphicsLineItem_AddToIndex(QGraphicsLineItem* self);
    friend void QGraphicsLineItem_SuperAddToIndex(QGraphicsLineItem* self);
    friend void QGraphicsLineItem_RemoveFromIndex(QGraphicsLineItem* self);
    friend void QGraphicsLineItem_SuperRemoveFromIndex(QGraphicsLineItem* self);
    friend void QGraphicsLineItem_PrepareGeometryChange(QGraphicsLineItem* self);
    friend void QGraphicsLineItem_SuperPrepareGeometryChange(QGraphicsLineItem* self);
};

// This class is a subclass of QGraphicsPixmapItem so that we can call protected methods
class VirtualQGraphicsPixmapItem final : public QGraphicsPixmapItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsPixmapItem = true;

    // Virtual class public types (including callbacks)
    using QGraphicsItem::Extension;
    using QGraphicsPixmapItem_BoundingRect_Callback = QRectF* (*)();
    using QGraphicsPixmapItem_Shape_Callback = QPainterPath* (*)();
    using QGraphicsPixmapItem_Contains_Callback = bool (*)(const QGraphicsPixmapItem*, QPointF*);
    using QGraphicsPixmapItem_Paint_Callback = void (*)(QGraphicsPixmapItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsPixmapItem_IsObscuredBy_Callback = bool (*)(const QGraphicsPixmapItem*, QGraphicsItem*);
    using QGraphicsPixmapItem_OpaqueArea_Callback = QPainterPath* (*)();
    using QGraphicsPixmapItem_Type_Callback = int (*)();
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
    using QGraphicsPixmapItem_UpdateMicroFocus_Callback = void (*)();
    using QGraphicsPixmapItem_AddToIndex_Callback = void (*)();
    using QGraphicsPixmapItem_RemoveFromIndex_Callback = void (*)();
    using QGraphicsPixmapItem_PrepareGeometryChange_Callback = void (*)();

  protected:
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
    QGraphicsPixmapItem_UpdateMicroFocus_Callback qgraphicspixmapitem_updatemicrofocus_callback = nullptr;
    QGraphicsPixmapItem_AddToIndex_Callback qgraphicspixmapitem_addtoindex_callback = nullptr;
    QGraphicsPixmapItem_RemoveFromIndex_Callback qgraphicspixmapitem_removefromindex_callback = nullptr;
    QGraphicsPixmapItem_PrepareGeometryChange_Callback qgraphicspixmapitem_preparegeometrychange_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicspixmapitem_boundingrect_isbase = false;
    mutable bool qgraphicspixmapitem_shape_isbase = false;
    mutable bool qgraphicspixmapitem_contains_isbase = false;
    mutable bool qgraphicspixmapitem_paint_isbase = false;
    mutable bool qgraphicspixmapitem_isobscuredby_isbase = false;
    mutable bool qgraphicspixmapitem_opaquearea_isbase = false;
    mutable bool qgraphicspixmapitem_type_isbase = false;
    mutable bool qgraphicspixmapitem_supportsextension_isbase = false;
    mutable bool qgraphicspixmapitem_setextension_isbase = false;
    mutable bool qgraphicspixmapitem_extension_isbase = false;
    mutable bool qgraphicspixmapitem_advance_isbase = false;
    mutable bool qgraphicspixmapitem_collideswithitem_isbase = false;
    mutable bool qgraphicspixmapitem_collideswithpath_isbase = false;
    mutable bool qgraphicspixmapitem_sceneeventfilter_isbase = false;
    mutable bool qgraphicspixmapitem_sceneevent_isbase = false;
    mutable bool qgraphicspixmapitem_contextmenuevent_isbase = false;
    mutable bool qgraphicspixmapitem_dragenterevent_isbase = false;
    mutable bool qgraphicspixmapitem_dragleaveevent_isbase = false;
    mutable bool qgraphicspixmapitem_dragmoveevent_isbase = false;
    mutable bool qgraphicspixmapitem_dropevent_isbase = false;
    mutable bool qgraphicspixmapitem_focusinevent_isbase = false;
    mutable bool qgraphicspixmapitem_focusoutevent_isbase = false;
    mutable bool qgraphicspixmapitem_hoverenterevent_isbase = false;
    mutable bool qgraphicspixmapitem_hovermoveevent_isbase = false;
    mutable bool qgraphicspixmapitem_hoverleaveevent_isbase = false;
    mutable bool qgraphicspixmapitem_keypressevent_isbase = false;
    mutable bool qgraphicspixmapitem_keyreleaseevent_isbase = false;
    mutable bool qgraphicspixmapitem_mousepressevent_isbase = false;
    mutable bool qgraphicspixmapitem_mousemoveevent_isbase = false;
    mutable bool qgraphicspixmapitem_mousereleaseevent_isbase = false;
    mutable bool qgraphicspixmapitem_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicspixmapitem_wheelevent_isbase = false;
    mutable bool qgraphicspixmapitem_inputmethodevent_isbase = false;
    mutable bool qgraphicspixmapitem_inputmethodquery_isbase = false;
    mutable bool qgraphicspixmapitem_itemchange_isbase = false;
    mutable bool qgraphicspixmapitem_updatemicrofocus_isbase = false;
    mutable bool qgraphicspixmapitem_addtoindex_isbase = false;
    mutable bool qgraphicspixmapitem_removefromindex_isbase = false;
    mutable bool qgraphicspixmapitem_preparegeometrychange_isbase = false;

  public:
    VirtualQGraphicsPixmapItem() : QGraphicsPixmapItem() {};
    VirtualQGraphicsPixmapItem(const QPixmap& pixmap) : QGraphicsPixmapItem(pixmap) {};
    VirtualQGraphicsPixmapItem(QGraphicsItem* parent) : QGraphicsPixmapItem(parent) {};
    VirtualQGraphicsPixmapItem(const QPixmap& pixmap, QGraphicsItem* parent) : QGraphicsPixmapItem(pixmap, parent) {};

    // Callback setters
    inline void setQGraphicsPixmapItem_BoundingRect_Callback(QGraphicsPixmapItem_BoundingRect_Callback cb) { qgraphicspixmapitem_boundingrect_callback = cb; }
    inline void setQGraphicsPixmapItem_Shape_Callback(QGraphicsPixmapItem_Shape_Callback cb) { qgraphicspixmapitem_shape_callback = cb; }
    inline void setQGraphicsPixmapItem_Contains_Callback(QGraphicsPixmapItem_Contains_Callback cb) { qgraphicspixmapitem_contains_callback = cb; }
    inline void setQGraphicsPixmapItem_Paint_Callback(QGraphicsPixmapItem_Paint_Callback cb) { qgraphicspixmapitem_paint_callback = cb; }
    inline void setQGraphicsPixmapItem_IsObscuredBy_Callback(QGraphicsPixmapItem_IsObscuredBy_Callback cb) { qgraphicspixmapitem_isobscuredby_callback = cb; }
    inline void setQGraphicsPixmapItem_OpaqueArea_Callback(QGraphicsPixmapItem_OpaqueArea_Callback cb) { qgraphicspixmapitem_opaquearea_callback = cb; }
    inline void setQGraphicsPixmapItem_Type_Callback(QGraphicsPixmapItem_Type_Callback cb) { qgraphicspixmapitem_type_callback = cb; }
    inline void setQGraphicsPixmapItem_SupportsExtension_Callback(QGraphicsPixmapItem_SupportsExtension_Callback cb) { qgraphicspixmapitem_supportsextension_callback = cb; }
    inline void setQGraphicsPixmapItem_SetExtension_Callback(QGraphicsPixmapItem_SetExtension_Callback cb) { qgraphicspixmapitem_setextension_callback = cb; }
    inline void setQGraphicsPixmapItem_Extension_Callback(QGraphicsPixmapItem_Extension_Callback cb) { qgraphicspixmapitem_extension_callback = cb; }
    inline void setQGraphicsPixmapItem_Advance_Callback(QGraphicsPixmapItem_Advance_Callback cb) { qgraphicspixmapitem_advance_callback = cb; }
    inline void setQGraphicsPixmapItem_CollidesWithItem_Callback(QGraphicsPixmapItem_CollidesWithItem_Callback cb) { qgraphicspixmapitem_collideswithitem_callback = cb; }
    inline void setQGraphicsPixmapItem_CollidesWithPath_Callback(QGraphicsPixmapItem_CollidesWithPath_Callback cb) { qgraphicspixmapitem_collideswithpath_callback = cb; }
    inline void setQGraphicsPixmapItem_SceneEventFilter_Callback(QGraphicsPixmapItem_SceneEventFilter_Callback cb) { qgraphicspixmapitem_sceneeventfilter_callback = cb; }
    inline void setQGraphicsPixmapItem_SceneEvent_Callback(QGraphicsPixmapItem_SceneEvent_Callback cb) { qgraphicspixmapitem_sceneevent_callback = cb; }
    inline void setQGraphicsPixmapItem_ContextMenuEvent_Callback(QGraphicsPixmapItem_ContextMenuEvent_Callback cb) { qgraphicspixmapitem_contextmenuevent_callback = cb; }
    inline void setQGraphicsPixmapItem_DragEnterEvent_Callback(QGraphicsPixmapItem_DragEnterEvent_Callback cb) { qgraphicspixmapitem_dragenterevent_callback = cb; }
    inline void setQGraphicsPixmapItem_DragLeaveEvent_Callback(QGraphicsPixmapItem_DragLeaveEvent_Callback cb) { qgraphicspixmapitem_dragleaveevent_callback = cb; }
    inline void setQGraphicsPixmapItem_DragMoveEvent_Callback(QGraphicsPixmapItem_DragMoveEvent_Callback cb) { qgraphicspixmapitem_dragmoveevent_callback = cb; }
    inline void setQGraphicsPixmapItem_DropEvent_Callback(QGraphicsPixmapItem_DropEvent_Callback cb) { qgraphicspixmapitem_dropevent_callback = cb; }
    inline void setQGraphicsPixmapItem_FocusInEvent_Callback(QGraphicsPixmapItem_FocusInEvent_Callback cb) { qgraphicspixmapitem_focusinevent_callback = cb; }
    inline void setQGraphicsPixmapItem_FocusOutEvent_Callback(QGraphicsPixmapItem_FocusOutEvent_Callback cb) { qgraphicspixmapitem_focusoutevent_callback = cb; }
    inline void setQGraphicsPixmapItem_HoverEnterEvent_Callback(QGraphicsPixmapItem_HoverEnterEvent_Callback cb) { qgraphicspixmapitem_hoverenterevent_callback = cb; }
    inline void setQGraphicsPixmapItem_HoverMoveEvent_Callback(QGraphicsPixmapItem_HoverMoveEvent_Callback cb) { qgraphicspixmapitem_hovermoveevent_callback = cb; }
    inline void setQGraphicsPixmapItem_HoverLeaveEvent_Callback(QGraphicsPixmapItem_HoverLeaveEvent_Callback cb) { qgraphicspixmapitem_hoverleaveevent_callback = cb; }
    inline void setQGraphicsPixmapItem_KeyPressEvent_Callback(QGraphicsPixmapItem_KeyPressEvent_Callback cb) { qgraphicspixmapitem_keypressevent_callback = cb; }
    inline void setQGraphicsPixmapItem_KeyReleaseEvent_Callback(QGraphicsPixmapItem_KeyReleaseEvent_Callback cb) { qgraphicspixmapitem_keyreleaseevent_callback = cb; }
    inline void setQGraphicsPixmapItem_MousePressEvent_Callback(QGraphicsPixmapItem_MousePressEvent_Callback cb) { qgraphicspixmapitem_mousepressevent_callback = cb; }
    inline void setQGraphicsPixmapItem_MouseMoveEvent_Callback(QGraphicsPixmapItem_MouseMoveEvent_Callback cb) { qgraphicspixmapitem_mousemoveevent_callback = cb; }
    inline void setQGraphicsPixmapItem_MouseReleaseEvent_Callback(QGraphicsPixmapItem_MouseReleaseEvent_Callback cb) { qgraphicspixmapitem_mousereleaseevent_callback = cb; }
    inline void setQGraphicsPixmapItem_MouseDoubleClickEvent_Callback(QGraphicsPixmapItem_MouseDoubleClickEvent_Callback cb) { qgraphicspixmapitem_mousedoubleclickevent_callback = cb; }
    inline void setQGraphicsPixmapItem_WheelEvent_Callback(QGraphicsPixmapItem_WheelEvent_Callback cb) { qgraphicspixmapitem_wheelevent_callback = cb; }
    inline void setQGraphicsPixmapItem_InputMethodEvent_Callback(QGraphicsPixmapItem_InputMethodEvent_Callback cb) { qgraphicspixmapitem_inputmethodevent_callback = cb; }
    inline void setQGraphicsPixmapItem_InputMethodQuery_Callback(QGraphicsPixmapItem_InputMethodQuery_Callback cb) { qgraphicspixmapitem_inputmethodquery_callback = cb; }
    inline void setQGraphicsPixmapItem_ItemChange_Callback(QGraphicsPixmapItem_ItemChange_Callback cb) { qgraphicspixmapitem_itemchange_callback = cb; }
    inline void setQGraphicsPixmapItem_UpdateMicroFocus_Callback(QGraphicsPixmapItem_UpdateMicroFocus_Callback cb) { qgraphicspixmapitem_updatemicrofocus_callback = cb; }
    inline void setQGraphicsPixmapItem_AddToIndex_Callback(QGraphicsPixmapItem_AddToIndex_Callback cb) { qgraphicspixmapitem_addtoindex_callback = cb; }
    inline void setQGraphicsPixmapItem_RemoveFromIndex_Callback(QGraphicsPixmapItem_RemoveFromIndex_Callback cb) { qgraphicspixmapitem_removefromindex_callback = cb; }
    inline void setQGraphicsPixmapItem_PrepareGeometryChange_Callback(QGraphicsPixmapItem_PrepareGeometryChange_Callback cb) { qgraphicspixmapitem_preparegeometrychange_callback = cb; }

    // Base flag setters
    inline void setQGraphicsPixmapItem_BoundingRect_IsBase(bool value) const { qgraphicspixmapitem_boundingrect_isbase = value; }
    inline void setQGraphicsPixmapItem_Shape_IsBase(bool value) const { qgraphicspixmapitem_shape_isbase = value; }
    inline void setQGraphicsPixmapItem_Contains_IsBase(bool value) const { qgraphicspixmapitem_contains_isbase = value; }
    inline void setQGraphicsPixmapItem_Paint_IsBase(bool value) const { qgraphicspixmapitem_paint_isbase = value; }
    inline void setQGraphicsPixmapItem_IsObscuredBy_IsBase(bool value) const { qgraphicspixmapitem_isobscuredby_isbase = value; }
    inline void setQGraphicsPixmapItem_OpaqueArea_IsBase(bool value) const { qgraphicspixmapitem_opaquearea_isbase = value; }
    inline void setQGraphicsPixmapItem_Type_IsBase(bool value) const { qgraphicspixmapitem_type_isbase = value; }
    inline void setQGraphicsPixmapItem_SupportsExtension_IsBase(bool value) const { qgraphicspixmapitem_supportsextension_isbase = value; }
    inline void setQGraphicsPixmapItem_SetExtension_IsBase(bool value) const { qgraphicspixmapitem_setextension_isbase = value; }
    inline void setQGraphicsPixmapItem_Extension_IsBase(bool value) const { qgraphicspixmapitem_extension_isbase = value; }
    inline void setQGraphicsPixmapItem_Advance_IsBase(bool value) const { qgraphicspixmapitem_advance_isbase = value; }
    inline void setQGraphicsPixmapItem_CollidesWithItem_IsBase(bool value) const { qgraphicspixmapitem_collideswithitem_isbase = value; }
    inline void setQGraphicsPixmapItem_CollidesWithPath_IsBase(bool value) const { qgraphicspixmapitem_collideswithpath_isbase = value; }
    inline void setQGraphicsPixmapItem_SceneEventFilter_IsBase(bool value) const { qgraphicspixmapitem_sceneeventfilter_isbase = value; }
    inline void setQGraphicsPixmapItem_SceneEvent_IsBase(bool value) const { qgraphicspixmapitem_sceneevent_isbase = value; }
    inline void setQGraphicsPixmapItem_ContextMenuEvent_IsBase(bool value) const { qgraphicspixmapitem_contextmenuevent_isbase = value; }
    inline void setQGraphicsPixmapItem_DragEnterEvent_IsBase(bool value) const { qgraphicspixmapitem_dragenterevent_isbase = value; }
    inline void setQGraphicsPixmapItem_DragLeaveEvent_IsBase(bool value) const { qgraphicspixmapitem_dragleaveevent_isbase = value; }
    inline void setQGraphicsPixmapItem_DragMoveEvent_IsBase(bool value) const { qgraphicspixmapitem_dragmoveevent_isbase = value; }
    inline void setQGraphicsPixmapItem_DropEvent_IsBase(bool value) const { qgraphicspixmapitem_dropevent_isbase = value; }
    inline void setQGraphicsPixmapItem_FocusInEvent_IsBase(bool value) const { qgraphicspixmapitem_focusinevent_isbase = value; }
    inline void setQGraphicsPixmapItem_FocusOutEvent_IsBase(bool value) const { qgraphicspixmapitem_focusoutevent_isbase = value; }
    inline void setQGraphicsPixmapItem_HoverEnterEvent_IsBase(bool value) const { qgraphicspixmapitem_hoverenterevent_isbase = value; }
    inline void setQGraphicsPixmapItem_HoverMoveEvent_IsBase(bool value) const { qgraphicspixmapitem_hovermoveevent_isbase = value; }
    inline void setQGraphicsPixmapItem_HoverLeaveEvent_IsBase(bool value) const { qgraphicspixmapitem_hoverleaveevent_isbase = value; }
    inline void setQGraphicsPixmapItem_KeyPressEvent_IsBase(bool value) const { qgraphicspixmapitem_keypressevent_isbase = value; }
    inline void setQGraphicsPixmapItem_KeyReleaseEvent_IsBase(bool value) const { qgraphicspixmapitem_keyreleaseevent_isbase = value; }
    inline void setQGraphicsPixmapItem_MousePressEvent_IsBase(bool value) const { qgraphicspixmapitem_mousepressevent_isbase = value; }
    inline void setQGraphicsPixmapItem_MouseMoveEvent_IsBase(bool value) const { qgraphicspixmapitem_mousemoveevent_isbase = value; }
    inline void setQGraphicsPixmapItem_MouseReleaseEvent_IsBase(bool value) const { qgraphicspixmapitem_mousereleaseevent_isbase = value; }
    inline void setQGraphicsPixmapItem_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicspixmapitem_mousedoubleclickevent_isbase = value; }
    inline void setQGraphicsPixmapItem_WheelEvent_IsBase(bool value) const { qgraphicspixmapitem_wheelevent_isbase = value; }
    inline void setQGraphicsPixmapItem_InputMethodEvent_IsBase(bool value) const { qgraphicspixmapitem_inputmethodevent_isbase = value; }
    inline void setQGraphicsPixmapItem_InputMethodQuery_IsBase(bool value) const { qgraphicspixmapitem_inputmethodquery_isbase = value; }
    inline void setQGraphicsPixmapItem_ItemChange_IsBase(bool value) const { qgraphicspixmapitem_itemchange_isbase = value; }
    inline void setQGraphicsPixmapItem_UpdateMicroFocus_IsBase(bool value) const { qgraphicspixmapitem_updatemicrofocus_isbase = value; }
    inline void setQGraphicsPixmapItem_AddToIndex_IsBase(bool value) const { qgraphicspixmapitem_addtoindex_isbase = value; }
    inline void setQGraphicsPixmapItem_RemoveFromIndex_IsBase(bool value) const { qgraphicspixmapitem_removefromindex_isbase = value; }
    inline void setQGraphicsPixmapItem_PrepareGeometryChange_IsBase(bool value) const { qgraphicspixmapitem_preparegeometrychange_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicspixmapitem_boundingrect_isbase) {
            qgraphicspixmapitem_boundingrect_isbase = false;
            return QGraphicsPixmapItem::boundingRect();
        }
        auto boundingrect_cb = qgraphicspixmapitem_boundingrect_callback;
        if (boundingrect_cb) {
            QRectF* callback_ret = boundingrect_cb();
            return *callback_ret;
        }
        return QGraphicsPixmapItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicspixmapitem_shape_isbase) {
            qgraphicspixmapitem_shape_isbase = false;
            return QGraphicsPixmapItem::shape();
        }
        auto shape_cb = qgraphicspixmapitem_shape_callback;
        if (shape_cb) {
            QPainterPath* callback_ret = shape_cb();
            return *callback_ret;
        }
        return QGraphicsPixmapItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicspixmapitem_contains_isbase) {
            qgraphicspixmapitem_contains_isbase = false;
            return QGraphicsPixmapItem::contains(point);
        }
        auto contains_cb = qgraphicspixmapitem_contains_callback;
        if (contains_cb) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);

            bool callback_ret = contains_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPixmapItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicspixmapitem_paint_isbase) {
            qgraphicspixmapitem_paint_isbase = false;
            QGraphicsPixmapItem::paint(painter, option, widget);
            return;
        }
        auto paint_cb = qgraphicspixmapitem_paint_callback;
        if (paint_cb) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            paint_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsPixmapItem::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicspixmapitem_isobscuredby_isbase) {
            qgraphicspixmapitem_isobscuredby_isbase = false;
            return QGraphicsPixmapItem::isObscuredBy(item);
        }
        auto isobscuredby_cb = qgraphicspixmapitem_isobscuredby_callback;
        if (isobscuredby_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;

            bool callback_ret = isobscuredby_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPixmapItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicspixmapitem_opaquearea_isbase) {
            qgraphicspixmapitem_opaquearea_isbase = false;
            return QGraphicsPixmapItem::opaqueArea();
        }
        auto opaquearea_cb = qgraphicspixmapitem_opaquearea_callback;
        if (opaquearea_cb) {
            QPainterPath* callback_ret = opaquearea_cb();
            return *callback_ret;
        }
        return QGraphicsPixmapItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicspixmapitem_type_isbase) {
            qgraphicspixmapitem_type_isbase = false;
            return QGraphicsPixmapItem::type();
        }
        auto type_cb = qgraphicspixmapitem_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<int>(callback_ret);
        }
        return QGraphicsPixmapItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicspixmapitem_supportsextension_isbase) {
            qgraphicspixmapitem_supportsextension_isbase = false;
            return QGraphicsPixmapItem::supportsExtension(extension);
        }
        auto supportsextension_cb = qgraphicspixmapitem_supportsextension_callback;
        if (supportsextension_cb) {
            int cbval1 = static_cast<int>(extension);

            bool callback_ret = supportsextension_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPixmapItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicspixmapitem_setextension_isbase) {
            qgraphicspixmapitem_setextension_isbase = false;
            QGraphicsPixmapItem::setExtension(extension, variant);
            return;
        }
        auto setextension_cb = qgraphicspixmapitem_setextension_callback;
        if (setextension_cb) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);

            setextension_cb(this, cbval1, cbval2);
            return;
        }
        QGraphicsPixmapItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicspixmapitem_extension_isbase) {
            qgraphicspixmapitem_extension_isbase = false;
            return QGraphicsPixmapItem::extension(variant);
        }
        auto extension_cb = qgraphicspixmapitem_extension_callback;
        if (extension_cb) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);

            QVariant* callback_ret = extension_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsPixmapItem::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicspixmapitem_advance_isbase) {
            qgraphicspixmapitem_advance_isbase = false;
            QGraphicsPixmapItem::advance(phase);
            return;
        }
        auto advance_cb = qgraphicspixmapitem_advance_callback;
        if (advance_cb) {
            int cbval1 = phase;

            advance_cb(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicspixmapitem_collideswithitem_isbase) {
            qgraphicspixmapitem_collideswithitem_isbase = false;
            return QGraphicsPixmapItem::collidesWithItem(other, mode);
        }
        auto collideswithitem_cb = qgraphicspixmapitem_collideswithitem_callback;
        if (collideswithitem_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithitem_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsPixmapItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicspixmapitem_collideswithpath_isbase) {
            qgraphicspixmapitem_collideswithpath_isbase = false;
            return QGraphicsPixmapItem::collidesWithPath(path, mode);
        }
        auto collideswithpath_cb = qgraphicspixmapitem_collideswithpath_callback;
        if (collideswithpath_cb) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithpath_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsPixmapItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicspixmapitem_sceneeventfilter_isbase) {
            qgraphicspixmapitem_sceneeventfilter_isbase = false;
            return QGraphicsPixmapItem::sceneEventFilter(watched, event);
        }
        auto sceneeventfilter_cb = qgraphicspixmapitem_sceneeventfilter_callback;
        if (sceneeventfilter_cb) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = sceneeventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsPixmapItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicspixmapitem_sceneevent_isbase) {
            qgraphicspixmapitem_sceneevent_isbase = false;
            return QGraphicsPixmapItem::sceneEvent(event);
        }
        auto sceneevent_cb = qgraphicspixmapitem_sceneevent_callback;
        if (sceneevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = sceneevent_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsPixmapItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicspixmapitem_contextmenuevent_isbase) {
            qgraphicspixmapitem_contextmenuevent_isbase = false;
            QGraphicsPixmapItem::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qgraphicspixmapitem_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspixmapitem_dragenterevent_isbase) {
            qgraphicspixmapitem_dragenterevent_isbase = false;
            QGraphicsPixmapItem::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qgraphicspixmapitem_dragenterevent_callback;
        if (dragenterevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspixmapitem_dragleaveevent_isbase) {
            qgraphicspixmapitem_dragleaveevent_isbase = false;
            QGraphicsPixmapItem::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qgraphicspixmapitem_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspixmapitem_dragmoveevent_isbase) {
            qgraphicspixmapitem_dragmoveevent_isbase = false;
            QGraphicsPixmapItem::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qgraphicspixmapitem_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicspixmapitem_dropevent_isbase) {
            qgraphicspixmapitem_dropevent_isbase = false;
            QGraphicsPixmapItem::dropEvent(event);
            return;
        }
        auto dropevent_cb = qgraphicspixmapitem_dropevent_callback;
        if (dropevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicspixmapitem_focusinevent_isbase) {
            qgraphicspixmapitem_focusinevent_isbase = false;
            QGraphicsPixmapItem::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qgraphicspixmapitem_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicspixmapitem_focusoutevent_isbase) {
            qgraphicspixmapitem_focusoutevent_isbase = false;
            QGraphicsPixmapItem::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qgraphicspixmapitem_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicspixmapitem_hoverenterevent_isbase) {
            qgraphicspixmapitem_hoverenterevent_isbase = false;
            QGraphicsPixmapItem::hoverEnterEvent(event);
            return;
        }
        auto hoverenterevent_cb = qgraphicspixmapitem_hoverenterevent_callback;
        if (hoverenterevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicspixmapitem_hovermoveevent_isbase) {
            qgraphicspixmapitem_hovermoveevent_isbase = false;
            QGraphicsPixmapItem::hoverMoveEvent(event);
            return;
        }
        auto hovermoveevent_cb = qgraphicspixmapitem_hovermoveevent_callback;
        if (hovermoveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hovermoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicspixmapitem_hoverleaveevent_isbase) {
            qgraphicspixmapitem_hoverleaveevent_isbase = false;
            QGraphicsPixmapItem::hoverLeaveEvent(event);
            return;
        }
        auto hoverleaveevent_cb = qgraphicspixmapitem_hoverleaveevent_callback;
        if (hoverleaveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicspixmapitem_keypressevent_isbase) {
            qgraphicspixmapitem_keypressevent_isbase = false;
            QGraphicsPixmapItem::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qgraphicspixmapitem_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicspixmapitem_keyreleaseevent_isbase) {
            qgraphicspixmapitem_keyreleaseevent_isbase = false;
            QGraphicsPixmapItem::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qgraphicspixmapitem_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspixmapitem_mousepressevent_isbase) {
            qgraphicspixmapitem_mousepressevent_isbase = false;
            QGraphicsPixmapItem::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qgraphicspixmapitem_mousepressevent_callback;
        if (mousepressevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspixmapitem_mousemoveevent_isbase) {
            qgraphicspixmapitem_mousemoveevent_isbase = false;
            QGraphicsPixmapItem::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qgraphicspixmapitem_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspixmapitem_mousereleaseevent_isbase) {
            qgraphicspixmapitem_mousereleaseevent_isbase = false;
            QGraphicsPixmapItem::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qgraphicspixmapitem_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicspixmapitem_mousedoubleclickevent_isbase) {
            qgraphicspixmapitem_mousedoubleclickevent_isbase = false;
            QGraphicsPixmapItem::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qgraphicspixmapitem_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicspixmapitem_wheelevent_isbase) {
            qgraphicspixmapitem_wheelevent_isbase = false;
            QGraphicsPixmapItem::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qgraphicspixmapitem_wheelevent_callback;
        if (wheelevent_cb) {
            QGraphicsSceneWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicspixmapitem_inputmethodevent_isbase) {
            qgraphicspixmapitem_inputmethodevent_isbase = false;
            QGraphicsPixmapItem::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = qgraphicspixmapitem_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QGraphicsPixmapItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicspixmapitem_inputmethodquery_isbase) {
            qgraphicspixmapitem_inputmethodquery_isbase = false;
            return QGraphicsPixmapItem::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qgraphicspixmapitem_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsPixmapItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicspixmapitem_itemchange_isbase) {
            qgraphicspixmapitem_itemchange_isbase = false;
            return QGraphicsPixmapItem::itemChange(change, value);
        }
        auto itemchange_cb = qgraphicspixmapitem_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            QVariant* callback_ret = itemchange_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QGraphicsPixmapItem::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qgraphicspixmapitem_updatemicrofocus_isbase) {
            qgraphicspixmapitem_updatemicrofocus_isbase = false;
            QGraphicsPixmapItem::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qgraphicspixmapitem_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QGraphicsPixmapItem::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qgraphicspixmapitem_addtoindex_isbase) {
            qgraphicspixmapitem_addtoindex_isbase = false;
            QGraphicsPixmapItem::addToIndex();
            return;
        }
        auto addtoindex_cb = qgraphicspixmapitem_addtoindex_callback;
        if (addtoindex_cb) {
            addtoindex_cb();
            return;
        }
        QGraphicsPixmapItem::addToIndex();
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qgraphicspixmapitem_removefromindex_isbase) {
            qgraphicspixmapitem_removefromindex_isbase = false;
            QGraphicsPixmapItem::removeFromIndex();
            return;
        }
        auto removefromindex_cb = qgraphicspixmapitem_removefromindex_callback;
        if (removefromindex_cb) {
            removefromindex_cb();
            return;
        }
        QGraphicsPixmapItem::removeFromIndex();
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qgraphicspixmapitem_preparegeometrychange_isbase) {
            qgraphicspixmapitem_preparegeometrychange_isbase = false;
            QGraphicsPixmapItem::prepareGeometryChange();
            return;
        }
        auto preparegeometrychange_cb = qgraphicspixmapitem_preparegeometrychange_callback;
        if (preparegeometrychange_cb) {
            preparegeometrychange_cb();
            return;
        }
        QGraphicsPixmapItem::prepareGeometryChange();
    }

    // Friend functions
    friend bool QGraphicsPixmapItem_SupportsExtension(const QGraphicsPixmapItem* self, int extension);
    friend bool QGraphicsPixmapItem_SuperSupportsExtension(const QGraphicsPixmapItem* self, int extension);
    friend void QGraphicsPixmapItem_SetExtension(QGraphicsPixmapItem* self, int extension, const QVariant* variant);
    friend void QGraphicsPixmapItem_SuperSetExtension(QGraphicsPixmapItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsPixmapItem_Extension(const QGraphicsPixmapItem* self, const QVariant* variant);
    friend QVariant* QGraphicsPixmapItem_SuperExtension(const QGraphicsPixmapItem* self, const QVariant* variant);
    friend bool QGraphicsPixmapItem_SceneEventFilter(QGraphicsPixmapItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsPixmapItem_SuperSceneEventFilter(QGraphicsPixmapItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsPixmapItem_SceneEvent(QGraphicsPixmapItem* self, QEvent* event);
    friend bool QGraphicsPixmapItem_SuperSceneEvent(QGraphicsPixmapItem* self, QEvent* event);
    friend void QGraphicsPixmapItem_ContextMenuEvent(QGraphicsPixmapItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsPixmapItem_SuperContextMenuEvent(QGraphicsPixmapItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsPixmapItem_DragEnterEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPixmapItem_SuperDragEnterEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPixmapItem_DragLeaveEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPixmapItem_SuperDragLeaveEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPixmapItem_DragMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPixmapItem_SuperDragMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPixmapItem_DropEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPixmapItem_SuperDropEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsPixmapItem_FocusInEvent(QGraphicsPixmapItem* self, QFocusEvent* event);
    friend void QGraphicsPixmapItem_SuperFocusInEvent(QGraphicsPixmapItem* self, QFocusEvent* event);
    friend void QGraphicsPixmapItem_FocusOutEvent(QGraphicsPixmapItem* self, QFocusEvent* event);
    friend void QGraphicsPixmapItem_SuperFocusOutEvent(QGraphicsPixmapItem* self, QFocusEvent* event);
    friend void QGraphicsPixmapItem_HoverEnterEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPixmapItem_SuperHoverEnterEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPixmapItem_HoverMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPixmapItem_SuperHoverMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPixmapItem_HoverLeaveEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPixmapItem_SuperHoverLeaveEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsPixmapItem_KeyPressEvent(QGraphicsPixmapItem* self, QKeyEvent* event);
    friend void QGraphicsPixmapItem_SuperKeyPressEvent(QGraphicsPixmapItem* self, QKeyEvent* event);
    friend void QGraphicsPixmapItem_KeyReleaseEvent(QGraphicsPixmapItem* self, QKeyEvent* event);
    friend void QGraphicsPixmapItem_SuperKeyReleaseEvent(QGraphicsPixmapItem* self, QKeyEvent* event);
    friend void QGraphicsPixmapItem_MousePressEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPixmapItem_SuperMousePressEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPixmapItem_MouseMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPixmapItem_SuperMouseMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPixmapItem_MouseReleaseEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPixmapItem_SuperMouseReleaseEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPixmapItem_MouseDoubleClickEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPixmapItem_SuperMouseDoubleClickEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsPixmapItem_WheelEvent(QGraphicsPixmapItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsPixmapItem_SuperWheelEvent(QGraphicsPixmapItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsPixmapItem_InputMethodEvent(QGraphicsPixmapItem* self, QInputMethodEvent* event);
    friend void QGraphicsPixmapItem_SuperInputMethodEvent(QGraphicsPixmapItem* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsPixmapItem_InputMethodQuery(const QGraphicsPixmapItem* self, int query);
    friend QVariant* QGraphicsPixmapItem_SuperInputMethodQuery(const QGraphicsPixmapItem* self, int query);
    friend QVariant* QGraphicsPixmapItem_ItemChange(QGraphicsPixmapItem* self, int change, const QVariant* value);
    friend QVariant* QGraphicsPixmapItem_SuperItemChange(QGraphicsPixmapItem* self, int change, const QVariant* value);
    friend void QGraphicsPixmapItem_UpdateMicroFocus(QGraphicsPixmapItem* self);
    friend void QGraphicsPixmapItem_SuperUpdateMicroFocus(QGraphicsPixmapItem* self);
    friend void QGraphicsPixmapItem_AddToIndex(QGraphicsPixmapItem* self);
    friend void QGraphicsPixmapItem_SuperAddToIndex(QGraphicsPixmapItem* self);
    friend void QGraphicsPixmapItem_RemoveFromIndex(QGraphicsPixmapItem* self);
    friend void QGraphicsPixmapItem_SuperRemoveFromIndex(QGraphicsPixmapItem* self);
    friend void QGraphicsPixmapItem_PrepareGeometryChange(QGraphicsPixmapItem* self);
    friend void QGraphicsPixmapItem_SuperPrepareGeometryChange(QGraphicsPixmapItem* self);
};

// This class is a subclass of QGraphicsTextItem so that we can call protected methods
class VirtualQGraphicsTextItem final : public QGraphicsTextItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsTextItem = true;

    // Virtual class public types (including callbacks)
    using QGraphicsItem::Extension;
    using QGraphicsTextItem_MetaObject_Callback = QMetaObject* (*)();
    using QGraphicsTextItem_Metacast_Callback = void* (*)(QGraphicsTextItem*, const char*);
    using QGraphicsTextItem_Metacall_Callback = int (*)(QGraphicsTextItem*, int, int, void**);
    using QGraphicsTextItem_BoundingRect_Callback = QRectF* (*)();
    using QGraphicsTextItem_Shape_Callback = QPainterPath* (*)();
    using QGraphicsTextItem_Contains_Callback = bool (*)(const QGraphicsTextItem*, QPointF*);
    using QGraphicsTextItem_Paint_Callback = void (*)(QGraphicsTextItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsTextItem_IsObscuredBy_Callback = bool (*)(const QGraphicsTextItem*, QGraphicsItem*);
    using QGraphicsTextItem_OpaqueArea_Callback = QPainterPath* (*)();
    using QGraphicsTextItem_Type_Callback = int (*)();
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
    using QGraphicsTextItem_UpdateMicroFocus_Callback = void (*)();
    using QGraphicsTextItem_Sender_Callback = QObject* (*)();
    using QGraphicsTextItem_SenderSignalIndex_Callback = int (*)();
    using QGraphicsTextItem_Receivers_Callback = int (*)(const QGraphicsTextItem*, const char*);
    using QGraphicsTextItem_IsSignalConnected_Callback = bool (*)(const QGraphicsTextItem*, QMetaMethod*);
    using QGraphicsTextItem_AddToIndex_Callback = void (*)();
    using QGraphicsTextItem_RemoveFromIndex_Callback = void (*)();
    using QGraphicsTextItem_PrepareGeometryChange_Callback = void (*)();

  protected:
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
    QGraphicsTextItem_UpdateMicroFocus_Callback qgraphicstextitem_updatemicrofocus_callback = nullptr;
    QGraphicsTextItem_Sender_Callback qgraphicstextitem_sender_callback = nullptr;
    QGraphicsTextItem_SenderSignalIndex_Callback qgraphicstextitem_sendersignalindex_callback = nullptr;
    QGraphicsTextItem_Receivers_Callback qgraphicstextitem_receivers_callback = nullptr;
    QGraphicsTextItem_IsSignalConnected_Callback qgraphicstextitem_issignalconnected_callback = nullptr;
    QGraphicsTextItem_AddToIndex_Callback qgraphicstextitem_addtoindex_callback = nullptr;
    QGraphicsTextItem_RemoveFromIndex_Callback qgraphicstextitem_removefromindex_callback = nullptr;
    QGraphicsTextItem_PrepareGeometryChange_Callback qgraphicstextitem_preparegeometrychange_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicstextitem_metaobject_isbase = false;
    mutable bool qgraphicstextitem_metacast_isbase = false;
    mutable bool qgraphicstextitem_metacall_isbase = false;
    mutable bool qgraphicstextitem_boundingrect_isbase = false;
    mutable bool qgraphicstextitem_shape_isbase = false;
    mutable bool qgraphicstextitem_contains_isbase = false;
    mutable bool qgraphicstextitem_paint_isbase = false;
    mutable bool qgraphicstextitem_isobscuredby_isbase = false;
    mutable bool qgraphicstextitem_opaquearea_isbase = false;
    mutable bool qgraphicstextitem_type_isbase = false;
    mutable bool qgraphicstextitem_sceneevent_isbase = false;
    mutable bool qgraphicstextitem_mousepressevent_isbase = false;
    mutable bool qgraphicstextitem_mousemoveevent_isbase = false;
    mutable bool qgraphicstextitem_mousereleaseevent_isbase = false;
    mutable bool qgraphicstextitem_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicstextitem_contextmenuevent_isbase = false;
    mutable bool qgraphicstextitem_keypressevent_isbase = false;
    mutable bool qgraphicstextitem_keyreleaseevent_isbase = false;
    mutable bool qgraphicstextitem_focusinevent_isbase = false;
    mutable bool qgraphicstextitem_focusoutevent_isbase = false;
    mutable bool qgraphicstextitem_dragenterevent_isbase = false;
    mutable bool qgraphicstextitem_dragleaveevent_isbase = false;
    mutable bool qgraphicstextitem_dragmoveevent_isbase = false;
    mutable bool qgraphicstextitem_dropevent_isbase = false;
    mutable bool qgraphicstextitem_inputmethodevent_isbase = false;
    mutable bool qgraphicstextitem_hoverenterevent_isbase = false;
    mutable bool qgraphicstextitem_hovermoveevent_isbase = false;
    mutable bool qgraphicstextitem_hoverleaveevent_isbase = false;
    mutable bool qgraphicstextitem_inputmethodquery_isbase = false;
    mutable bool qgraphicstextitem_supportsextension_isbase = false;
    mutable bool qgraphicstextitem_setextension_isbase = false;
    mutable bool qgraphicstextitem_extension_isbase = false;
    mutable bool qgraphicstextitem_event_isbase = false;
    mutable bool qgraphicstextitem_eventfilter_isbase = false;
    mutable bool qgraphicstextitem_timerevent_isbase = false;
    mutable bool qgraphicstextitem_childevent_isbase = false;
    mutable bool qgraphicstextitem_customevent_isbase = false;
    mutable bool qgraphicstextitem_connectnotify_isbase = false;
    mutable bool qgraphicstextitem_disconnectnotify_isbase = false;
    mutable bool qgraphicstextitem_advance_isbase = false;
    mutable bool qgraphicstextitem_collideswithitem_isbase = false;
    mutable bool qgraphicstextitem_collideswithpath_isbase = false;
    mutable bool qgraphicstextitem_sceneeventfilter_isbase = false;
    mutable bool qgraphicstextitem_wheelevent_isbase = false;
    mutable bool qgraphicstextitem_itemchange_isbase = false;
    mutable bool qgraphicstextitem_updatemicrofocus_isbase = false;
    mutable bool qgraphicstextitem_sender_isbase = false;
    mutable bool qgraphicstextitem_sendersignalindex_isbase = false;
    mutable bool qgraphicstextitem_receivers_isbase = false;
    mutable bool qgraphicstextitem_issignalconnected_isbase = false;
    mutable bool qgraphicstextitem_addtoindex_isbase = false;
    mutable bool qgraphicstextitem_removefromindex_isbase = false;
    mutable bool qgraphicstextitem_preparegeometrychange_isbase = false;

  public:
    VirtualQGraphicsTextItem() : QGraphicsTextItem() {};
    VirtualQGraphicsTextItem(const QString& text) : QGraphicsTextItem(text) {};
    VirtualQGraphicsTextItem(QGraphicsItem* parent) : QGraphicsTextItem(parent) {};
    VirtualQGraphicsTextItem(const QString& text, QGraphicsItem* parent) : QGraphicsTextItem(text, parent) {};

    // Callback setters
    inline void setQGraphicsTextItem_MetaObject_Callback(QGraphicsTextItem_MetaObject_Callback cb) { qgraphicstextitem_metaobject_callback = cb; }
    inline void setQGraphicsTextItem_Metacast_Callback(QGraphicsTextItem_Metacast_Callback cb) { qgraphicstextitem_metacast_callback = cb; }
    inline void setQGraphicsTextItem_Metacall_Callback(QGraphicsTextItem_Metacall_Callback cb) { qgraphicstextitem_metacall_callback = cb; }
    inline void setQGraphicsTextItem_BoundingRect_Callback(QGraphicsTextItem_BoundingRect_Callback cb) { qgraphicstextitem_boundingrect_callback = cb; }
    inline void setQGraphicsTextItem_Shape_Callback(QGraphicsTextItem_Shape_Callback cb) { qgraphicstextitem_shape_callback = cb; }
    inline void setQGraphicsTextItem_Contains_Callback(QGraphicsTextItem_Contains_Callback cb) { qgraphicstextitem_contains_callback = cb; }
    inline void setQGraphicsTextItem_Paint_Callback(QGraphicsTextItem_Paint_Callback cb) { qgraphicstextitem_paint_callback = cb; }
    inline void setQGraphicsTextItem_IsObscuredBy_Callback(QGraphicsTextItem_IsObscuredBy_Callback cb) { qgraphicstextitem_isobscuredby_callback = cb; }
    inline void setQGraphicsTextItem_OpaqueArea_Callback(QGraphicsTextItem_OpaqueArea_Callback cb) { qgraphicstextitem_opaquearea_callback = cb; }
    inline void setQGraphicsTextItem_Type_Callback(QGraphicsTextItem_Type_Callback cb) { qgraphicstextitem_type_callback = cb; }
    inline void setQGraphicsTextItem_SceneEvent_Callback(QGraphicsTextItem_SceneEvent_Callback cb) { qgraphicstextitem_sceneevent_callback = cb; }
    inline void setQGraphicsTextItem_MousePressEvent_Callback(QGraphicsTextItem_MousePressEvent_Callback cb) { qgraphicstextitem_mousepressevent_callback = cb; }
    inline void setQGraphicsTextItem_MouseMoveEvent_Callback(QGraphicsTextItem_MouseMoveEvent_Callback cb) { qgraphicstextitem_mousemoveevent_callback = cb; }
    inline void setQGraphicsTextItem_MouseReleaseEvent_Callback(QGraphicsTextItem_MouseReleaseEvent_Callback cb) { qgraphicstextitem_mousereleaseevent_callback = cb; }
    inline void setQGraphicsTextItem_MouseDoubleClickEvent_Callback(QGraphicsTextItem_MouseDoubleClickEvent_Callback cb) { qgraphicstextitem_mousedoubleclickevent_callback = cb; }
    inline void setQGraphicsTextItem_ContextMenuEvent_Callback(QGraphicsTextItem_ContextMenuEvent_Callback cb) { qgraphicstextitem_contextmenuevent_callback = cb; }
    inline void setQGraphicsTextItem_KeyPressEvent_Callback(QGraphicsTextItem_KeyPressEvent_Callback cb) { qgraphicstextitem_keypressevent_callback = cb; }
    inline void setQGraphicsTextItem_KeyReleaseEvent_Callback(QGraphicsTextItem_KeyReleaseEvent_Callback cb) { qgraphicstextitem_keyreleaseevent_callback = cb; }
    inline void setQGraphicsTextItem_FocusInEvent_Callback(QGraphicsTextItem_FocusInEvent_Callback cb) { qgraphicstextitem_focusinevent_callback = cb; }
    inline void setQGraphicsTextItem_FocusOutEvent_Callback(QGraphicsTextItem_FocusOutEvent_Callback cb) { qgraphicstextitem_focusoutevent_callback = cb; }
    inline void setQGraphicsTextItem_DragEnterEvent_Callback(QGraphicsTextItem_DragEnterEvent_Callback cb) { qgraphicstextitem_dragenterevent_callback = cb; }
    inline void setQGraphicsTextItem_DragLeaveEvent_Callback(QGraphicsTextItem_DragLeaveEvent_Callback cb) { qgraphicstextitem_dragleaveevent_callback = cb; }
    inline void setQGraphicsTextItem_DragMoveEvent_Callback(QGraphicsTextItem_DragMoveEvent_Callback cb) { qgraphicstextitem_dragmoveevent_callback = cb; }
    inline void setQGraphicsTextItem_DropEvent_Callback(QGraphicsTextItem_DropEvent_Callback cb) { qgraphicstextitem_dropevent_callback = cb; }
    inline void setQGraphicsTextItem_InputMethodEvent_Callback(QGraphicsTextItem_InputMethodEvent_Callback cb) { qgraphicstextitem_inputmethodevent_callback = cb; }
    inline void setQGraphicsTextItem_HoverEnterEvent_Callback(QGraphicsTextItem_HoverEnterEvent_Callback cb) { qgraphicstextitem_hoverenterevent_callback = cb; }
    inline void setQGraphicsTextItem_HoverMoveEvent_Callback(QGraphicsTextItem_HoverMoveEvent_Callback cb) { qgraphicstextitem_hovermoveevent_callback = cb; }
    inline void setQGraphicsTextItem_HoverLeaveEvent_Callback(QGraphicsTextItem_HoverLeaveEvent_Callback cb) { qgraphicstextitem_hoverleaveevent_callback = cb; }
    inline void setQGraphicsTextItem_InputMethodQuery_Callback(QGraphicsTextItem_InputMethodQuery_Callback cb) { qgraphicstextitem_inputmethodquery_callback = cb; }
    inline void setQGraphicsTextItem_SupportsExtension_Callback(QGraphicsTextItem_SupportsExtension_Callback cb) { qgraphicstextitem_supportsextension_callback = cb; }
    inline void setQGraphicsTextItem_SetExtension_Callback(QGraphicsTextItem_SetExtension_Callback cb) { qgraphicstextitem_setextension_callback = cb; }
    inline void setQGraphicsTextItem_Extension_Callback(QGraphicsTextItem_Extension_Callback cb) { qgraphicstextitem_extension_callback = cb; }
    inline void setQGraphicsTextItem_Event_Callback(QGraphicsTextItem_Event_Callback cb) { qgraphicstextitem_event_callback = cb; }
    inline void setQGraphicsTextItem_EventFilter_Callback(QGraphicsTextItem_EventFilter_Callback cb) { qgraphicstextitem_eventfilter_callback = cb; }
    inline void setQGraphicsTextItem_TimerEvent_Callback(QGraphicsTextItem_TimerEvent_Callback cb) { qgraphicstextitem_timerevent_callback = cb; }
    inline void setQGraphicsTextItem_ChildEvent_Callback(QGraphicsTextItem_ChildEvent_Callback cb) { qgraphicstextitem_childevent_callback = cb; }
    inline void setQGraphicsTextItem_CustomEvent_Callback(QGraphicsTextItem_CustomEvent_Callback cb) { qgraphicstextitem_customevent_callback = cb; }
    inline void setQGraphicsTextItem_ConnectNotify_Callback(QGraphicsTextItem_ConnectNotify_Callback cb) { qgraphicstextitem_connectnotify_callback = cb; }
    inline void setQGraphicsTextItem_DisconnectNotify_Callback(QGraphicsTextItem_DisconnectNotify_Callback cb) { qgraphicstextitem_disconnectnotify_callback = cb; }
    inline void setQGraphicsTextItem_Advance_Callback(QGraphicsTextItem_Advance_Callback cb) { qgraphicstextitem_advance_callback = cb; }
    inline void setQGraphicsTextItem_CollidesWithItem_Callback(QGraphicsTextItem_CollidesWithItem_Callback cb) { qgraphicstextitem_collideswithitem_callback = cb; }
    inline void setQGraphicsTextItem_CollidesWithPath_Callback(QGraphicsTextItem_CollidesWithPath_Callback cb) { qgraphicstextitem_collideswithpath_callback = cb; }
    inline void setQGraphicsTextItem_SceneEventFilter_Callback(QGraphicsTextItem_SceneEventFilter_Callback cb) { qgraphicstextitem_sceneeventfilter_callback = cb; }
    inline void setQGraphicsTextItem_WheelEvent_Callback(QGraphicsTextItem_WheelEvent_Callback cb) { qgraphicstextitem_wheelevent_callback = cb; }
    inline void setQGraphicsTextItem_ItemChange_Callback(QGraphicsTextItem_ItemChange_Callback cb) { qgraphicstextitem_itemchange_callback = cb; }
    inline void setQGraphicsTextItem_UpdateMicroFocus_Callback(QGraphicsTextItem_UpdateMicroFocus_Callback cb) { qgraphicstextitem_updatemicrofocus_callback = cb; }
    inline void setQGraphicsTextItem_Sender_Callback(QGraphicsTextItem_Sender_Callback cb) { qgraphicstextitem_sender_callback = cb; }
    inline void setQGraphicsTextItem_SenderSignalIndex_Callback(QGraphicsTextItem_SenderSignalIndex_Callback cb) { qgraphicstextitem_sendersignalindex_callback = cb; }
    inline void setQGraphicsTextItem_Receivers_Callback(QGraphicsTextItem_Receivers_Callback cb) { qgraphicstextitem_receivers_callback = cb; }
    inline void setQGraphicsTextItem_IsSignalConnected_Callback(QGraphicsTextItem_IsSignalConnected_Callback cb) { qgraphicstextitem_issignalconnected_callback = cb; }
    inline void setQGraphicsTextItem_AddToIndex_Callback(QGraphicsTextItem_AddToIndex_Callback cb) { qgraphicstextitem_addtoindex_callback = cb; }
    inline void setQGraphicsTextItem_RemoveFromIndex_Callback(QGraphicsTextItem_RemoveFromIndex_Callback cb) { qgraphicstextitem_removefromindex_callback = cb; }
    inline void setQGraphicsTextItem_PrepareGeometryChange_Callback(QGraphicsTextItem_PrepareGeometryChange_Callback cb) { qgraphicstextitem_preparegeometrychange_callback = cb; }

    // Base flag setters
    inline void setQGraphicsTextItem_MetaObject_IsBase(bool value) const { qgraphicstextitem_metaobject_isbase = value; }
    inline void setQGraphicsTextItem_Metacast_IsBase(bool value) const { qgraphicstextitem_metacast_isbase = value; }
    inline void setQGraphicsTextItem_Metacall_IsBase(bool value) const { qgraphicstextitem_metacall_isbase = value; }
    inline void setQGraphicsTextItem_BoundingRect_IsBase(bool value) const { qgraphicstextitem_boundingrect_isbase = value; }
    inline void setQGraphicsTextItem_Shape_IsBase(bool value) const { qgraphicstextitem_shape_isbase = value; }
    inline void setQGraphicsTextItem_Contains_IsBase(bool value) const { qgraphicstextitem_contains_isbase = value; }
    inline void setQGraphicsTextItem_Paint_IsBase(bool value) const { qgraphicstextitem_paint_isbase = value; }
    inline void setQGraphicsTextItem_IsObscuredBy_IsBase(bool value) const { qgraphicstextitem_isobscuredby_isbase = value; }
    inline void setQGraphicsTextItem_OpaqueArea_IsBase(bool value) const { qgraphicstextitem_opaquearea_isbase = value; }
    inline void setQGraphicsTextItem_Type_IsBase(bool value) const { qgraphicstextitem_type_isbase = value; }
    inline void setQGraphicsTextItem_SceneEvent_IsBase(bool value) const { qgraphicstextitem_sceneevent_isbase = value; }
    inline void setQGraphicsTextItem_MousePressEvent_IsBase(bool value) const { qgraphicstextitem_mousepressevent_isbase = value; }
    inline void setQGraphicsTextItem_MouseMoveEvent_IsBase(bool value) const { qgraphicstextitem_mousemoveevent_isbase = value; }
    inline void setQGraphicsTextItem_MouseReleaseEvent_IsBase(bool value) const { qgraphicstextitem_mousereleaseevent_isbase = value; }
    inline void setQGraphicsTextItem_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicstextitem_mousedoubleclickevent_isbase = value; }
    inline void setQGraphicsTextItem_ContextMenuEvent_IsBase(bool value) const { qgraphicstextitem_contextmenuevent_isbase = value; }
    inline void setQGraphicsTextItem_KeyPressEvent_IsBase(bool value) const { qgraphicstextitem_keypressevent_isbase = value; }
    inline void setQGraphicsTextItem_KeyReleaseEvent_IsBase(bool value) const { qgraphicstextitem_keyreleaseevent_isbase = value; }
    inline void setQGraphicsTextItem_FocusInEvent_IsBase(bool value) const { qgraphicstextitem_focusinevent_isbase = value; }
    inline void setQGraphicsTextItem_FocusOutEvent_IsBase(bool value) const { qgraphicstextitem_focusoutevent_isbase = value; }
    inline void setQGraphicsTextItem_DragEnterEvent_IsBase(bool value) const { qgraphicstextitem_dragenterevent_isbase = value; }
    inline void setQGraphicsTextItem_DragLeaveEvent_IsBase(bool value) const { qgraphicstextitem_dragleaveevent_isbase = value; }
    inline void setQGraphicsTextItem_DragMoveEvent_IsBase(bool value) const { qgraphicstextitem_dragmoveevent_isbase = value; }
    inline void setQGraphicsTextItem_DropEvent_IsBase(bool value) const { qgraphicstextitem_dropevent_isbase = value; }
    inline void setQGraphicsTextItem_InputMethodEvent_IsBase(bool value) const { qgraphicstextitem_inputmethodevent_isbase = value; }
    inline void setQGraphicsTextItem_HoverEnterEvent_IsBase(bool value) const { qgraphicstextitem_hoverenterevent_isbase = value; }
    inline void setQGraphicsTextItem_HoverMoveEvent_IsBase(bool value) const { qgraphicstextitem_hovermoveevent_isbase = value; }
    inline void setQGraphicsTextItem_HoverLeaveEvent_IsBase(bool value) const { qgraphicstextitem_hoverleaveevent_isbase = value; }
    inline void setQGraphicsTextItem_InputMethodQuery_IsBase(bool value) const { qgraphicstextitem_inputmethodquery_isbase = value; }
    inline void setQGraphicsTextItem_SupportsExtension_IsBase(bool value) const { qgraphicstextitem_supportsextension_isbase = value; }
    inline void setQGraphicsTextItem_SetExtension_IsBase(bool value) const { qgraphicstextitem_setextension_isbase = value; }
    inline void setQGraphicsTextItem_Extension_IsBase(bool value) const { qgraphicstextitem_extension_isbase = value; }
    inline void setQGraphicsTextItem_Event_IsBase(bool value) const { qgraphicstextitem_event_isbase = value; }
    inline void setQGraphicsTextItem_EventFilter_IsBase(bool value) const { qgraphicstextitem_eventfilter_isbase = value; }
    inline void setQGraphicsTextItem_TimerEvent_IsBase(bool value) const { qgraphicstextitem_timerevent_isbase = value; }
    inline void setQGraphicsTextItem_ChildEvent_IsBase(bool value) const { qgraphicstextitem_childevent_isbase = value; }
    inline void setQGraphicsTextItem_CustomEvent_IsBase(bool value) const { qgraphicstextitem_customevent_isbase = value; }
    inline void setQGraphicsTextItem_ConnectNotify_IsBase(bool value) const { qgraphicstextitem_connectnotify_isbase = value; }
    inline void setQGraphicsTextItem_DisconnectNotify_IsBase(bool value) const { qgraphicstextitem_disconnectnotify_isbase = value; }
    inline void setQGraphicsTextItem_Advance_IsBase(bool value) const { qgraphicstextitem_advance_isbase = value; }
    inline void setQGraphicsTextItem_CollidesWithItem_IsBase(bool value) const { qgraphicstextitem_collideswithitem_isbase = value; }
    inline void setQGraphicsTextItem_CollidesWithPath_IsBase(bool value) const { qgraphicstextitem_collideswithpath_isbase = value; }
    inline void setQGraphicsTextItem_SceneEventFilter_IsBase(bool value) const { qgraphicstextitem_sceneeventfilter_isbase = value; }
    inline void setQGraphicsTextItem_WheelEvent_IsBase(bool value) const { qgraphicstextitem_wheelevent_isbase = value; }
    inline void setQGraphicsTextItem_ItemChange_IsBase(bool value) const { qgraphicstextitem_itemchange_isbase = value; }
    inline void setQGraphicsTextItem_UpdateMicroFocus_IsBase(bool value) const { qgraphicstextitem_updatemicrofocus_isbase = value; }
    inline void setQGraphicsTextItem_Sender_IsBase(bool value) const { qgraphicstextitem_sender_isbase = value; }
    inline void setQGraphicsTextItem_SenderSignalIndex_IsBase(bool value) const { qgraphicstextitem_sendersignalindex_isbase = value; }
    inline void setQGraphicsTextItem_Receivers_IsBase(bool value) const { qgraphicstextitem_receivers_isbase = value; }
    inline void setQGraphicsTextItem_IsSignalConnected_IsBase(bool value) const { qgraphicstextitem_issignalconnected_isbase = value; }
    inline void setQGraphicsTextItem_AddToIndex_IsBase(bool value) const { qgraphicstextitem_addtoindex_isbase = value; }
    inline void setQGraphicsTextItem_RemoveFromIndex_IsBase(bool value) const { qgraphicstextitem_removefromindex_isbase = value; }
    inline void setQGraphicsTextItem_PrepareGeometryChange_IsBase(bool value) const { qgraphicstextitem_preparegeometrychange_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicstextitem_metaobject_isbase) {
            qgraphicstextitem_metaobject_isbase = false;
            return QGraphicsTextItem::metaObject();
        }
        auto metaobject_cb = qgraphicstextitem_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QGraphicsTextItem::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicstextitem_metacast_isbase) {
            qgraphicstextitem_metacast_isbase = false;
            return QGraphicsTextItem::qt_metacast(param1);
        }
        auto metacast_cb = qgraphicstextitem_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsTextItem::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicstextitem_metacall_isbase) {
            qgraphicstextitem_metacall_isbase = false;
            return QGraphicsTextItem::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qgraphicstextitem_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsTextItem::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicstextitem_boundingrect_isbase) {
            qgraphicstextitem_boundingrect_isbase = false;
            return QGraphicsTextItem::boundingRect();
        }
        auto boundingrect_cb = qgraphicstextitem_boundingrect_callback;
        if (boundingrect_cb) {
            QRectF* callback_ret = boundingrect_cb();
            return *callback_ret;
        }
        return QGraphicsTextItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicstextitem_shape_isbase) {
            qgraphicstextitem_shape_isbase = false;
            return QGraphicsTextItem::shape();
        }
        auto shape_cb = qgraphicstextitem_shape_callback;
        if (shape_cb) {
            QPainterPath* callback_ret = shape_cb();
            return *callback_ret;
        }
        return QGraphicsTextItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicstextitem_contains_isbase) {
            qgraphicstextitem_contains_isbase = false;
            return QGraphicsTextItem::contains(point);
        }
        auto contains_cb = qgraphicstextitem_contains_callback;
        if (contains_cb) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);

            bool callback_ret = contains_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsTextItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicstextitem_paint_isbase) {
            qgraphicstextitem_paint_isbase = false;
            QGraphicsTextItem::paint(painter, option, widget);
            return;
        }
        auto paint_cb = qgraphicstextitem_paint_callback;
        if (paint_cb) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            paint_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsTextItem::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicstextitem_isobscuredby_isbase) {
            qgraphicstextitem_isobscuredby_isbase = false;
            return QGraphicsTextItem::isObscuredBy(item);
        }
        auto isobscuredby_cb = qgraphicstextitem_isobscuredby_callback;
        if (isobscuredby_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;

            bool callback_ret = isobscuredby_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsTextItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicstextitem_opaquearea_isbase) {
            qgraphicstextitem_opaquearea_isbase = false;
            return QGraphicsTextItem::opaqueArea();
        }
        auto opaquearea_cb = qgraphicstextitem_opaquearea_callback;
        if (opaquearea_cb) {
            QPainterPath* callback_ret = opaquearea_cb();
            return *callback_ret;
        }
        return QGraphicsTextItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicstextitem_type_isbase) {
            qgraphicstextitem_type_isbase = false;
            return QGraphicsTextItem::type();
        }
        auto type_cb = qgraphicstextitem_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<int>(callback_ret);
        }
        return QGraphicsTextItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicstextitem_sceneevent_isbase) {
            qgraphicstextitem_sceneevent_isbase = false;
            return QGraphicsTextItem::sceneEvent(event);
        }
        auto sceneevent_cb = qgraphicstextitem_sceneevent_callback;
        if (sceneevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = sceneevent_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsTextItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicstextitem_mousepressevent_isbase) {
            qgraphicstextitem_mousepressevent_isbase = false;
            QGraphicsTextItem::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qgraphicstextitem_mousepressevent_callback;
        if (mousepressevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicstextitem_mousemoveevent_isbase) {
            qgraphicstextitem_mousemoveevent_isbase = false;
            QGraphicsTextItem::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qgraphicstextitem_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicstextitem_mousereleaseevent_isbase) {
            qgraphicstextitem_mousereleaseevent_isbase = false;
            QGraphicsTextItem::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qgraphicstextitem_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicstextitem_mousedoubleclickevent_isbase) {
            qgraphicstextitem_mousedoubleclickevent_isbase = false;
            QGraphicsTextItem::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qgraphicstextitem_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicstextitem_contextmenuevent_isbase) {
            qgraphicstextitem_contextmenuevent_isbase = false;
            QGraphicsTextItem::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qgraphicstextitem_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicstextitem_keypressevent_isbase) {
            qgraphicstextitem_keypressevent_isbase = false;
            QGraphicsTextItem::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qgraphicstextitem_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicstextitem_keyreleaseevent_isbase) {
            qgraphicstextitem_keyreleaseevent_isbase = false;
            QGraphicsTextItem::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qgraphicstextitem_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicstextitem_focusinevent_isbase) {
            qgraphicstextitem_focusinevent_isbase = false;
            QGraphicsTextItem::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qgraphicstextitem_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicstextitem_focusoutevent_isbase) {
            qgraphicstextitem_focusoutevent_isbase = false;
            QGraphicsTextItem::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qgraphicstextitem_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicstextitem_dragenterevent_isbase) {
            qgraphicstextitem_dragenterevent_isbase = false;
            QGraphicsTextItem::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qgraphicstextitem_dragenterevent_callback;
        if (dragenterevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicstextitem_dragleaveevent_isbase) {
            qgraphicstextitem_dragleaveevent_isbase = false;
            QGraphicsTextItem::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qgraphicstextitem_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicstextitem_dragmoveevent_isbase) {
            qgraphicstextitem_dragmoveevent_isbase = false;
            QGraphicsTextItem::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qgraphicstextitem_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicstextitem_dropevent_isbase) {
            qgraphicstextitem_dropevent_isbase = false;
            QGraphicsTextItem::dropEvent(event);
            return;
        }
        auto dropevent_cb = qgraphicstextitem_dropevent_callback;
        if (dropevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicstextitem_inputmethodevent_isbase) {
            qgraphicstextitem_inputmethodevent_isbase = false;
            QGraphicsTextItem::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = qgraphicstextitem_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicstextitem_hoverenterevent_isbase) {
            qgraphicstextitem_hoverenterevent_isbase = false;
            QGraphicsTextItem::hoverEnterEvent(event);
            return;
        }
        auto hoverenterevent_cb = qgraphicstextitem_hoverenterevent_callback;
        if (hoverenterevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicstextitem_hovermoveevent_isbase) {
            qgraphicstextitem_hovermoveevent_isbase = false;
            QGraphicsTextItem::hoverMoveEvent(event);
            return;
        }
        auto hovermoveevent_cb = qgraphicstextitem_hovermoveevent_callback;
        if (hovermoveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hovermoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicstextitem_hoverleaveevent_isbase) {
            qgraphicstextitem_hoverleaveevent_isbase = false;
            QGraphicsTextItem::hoverLeaveEvent(event);
            return;
        }
        auto hoverleaveevent_cb = qgraphicstextitem_hoverleaveevent_callback;
        if (hoverleaveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicstextitem_inputmethodquery_isbase) {
            qgraphicstextitem_inputmethodquery_isbase = false;
            return QGraphicsTextItem::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qgraphicstextitem_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsTextItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicstextitem_supportsextension_isbase) {
            qgraphicstextitem_supportsextension_isbase = false;
            return QGraphicsTextItem::supportsExtension(extension);
        }
        auto supportsextension_cb = qgraphicstextitem_supportsextension_callback;
        if (supportsextension_cb) {
            int cbval1 = static_cast<int>(extension);

            bool callback_ret = supportsextension_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsTextItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicstextitem_setextension_isbase) {
            qgraphicstextitem_setextension_isbase = false;
            QGraphicsTextItem::setExtension(extension, variant);
            return;
        }
        auto setextension_cb = qgraphicstextitem_setextension_callback;
        if (setextension_cb) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);

            setextension_cb(this, cbval1, cbval2);
            return;
        }
        QGraphicsTextItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicstextitem_extension_isbase) {
            qgraphicstextitem_extension_isbase = false;
            return QGraphicsTextItem::extension(variant);
        }
        auto extension_cb = qgraphicstextitem_extension_callback;
        if (extension_cb) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);

            QVariant* callback_ret = extension_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsTextItem::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* ev) override {
        if (qgraphicstextitem_event_isbase) {
            qgraphicstextitem_event_isbase = false;
            return QGraphicsTextItem::event(ev);
        }
        auto event_cb = qgraphicstextitem_event_callback;
        if (event_cb) {
            QEvent* cbval1 = ev;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsTextItem::event(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicstextitem_eventfilter_isbase) {
            qgraphicstextitem_eventfilter_isbase = false;
            return QGraphicsTextItem::eventFilter(watched, event);
        }
        auto eventfilter_cb = qgraphicstextitem_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsTextItem::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicstextitem_timerevent_isbase) {
            qgraphicstextitem_timerevent_isbase = false;
            QGraphicsTextItem::timerEvent(event);
            return;
        }
        auto timerevent_cb = qgraphicstextitem_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicstextitem_childevent_isbase) {
            qgraphicstextitem_childevent_isbase = false;
            QGraphicsTextItem::childEvent(event);
            return;
        }
        auto childevent_cb = qgraphicstextitem_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicstextitem_customevent_isbase) {
            qgraphicstextitem_customevent_isbase = false;
            QGraphicsTextItem::customEvent(event);
            return;
        }
        auto customevent_cb = qgraphicstextitem_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicstextitem_connectnotify_isbase) {
            qgraphicstextitem_connectnotify_isbase = false;
            QGraphicsTextItem::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qgraphicstextitem_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicstextitem_disconnectnotify_isbase) {
            qgraphicstextitem_disconnectnotify_isbase = false;
            QGraphicsTextItem::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qgraphicstextitem_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicstextitem_advance_isbase) {
            qgraphicstextitem_advance_isbase = false;
            QGraphicsTextItem::advance(phase);
            return;
        }
        auto advance_cb = qgraphicstextitem_advance_callback;
        if (advance_cb) {
            int cbval1 = phase;

            advance_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicstextitem_collideswithitem_isbase) {
            qgraphicstextitem_collideswithitem_isbase = false;
            return QGraphicsTextItem::collidesWithItem(other, mode);
        }
        auto collideswithitem_cb = qgraphicstextitem_collideswithitem_callback;
        if (collideswithitem_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithitem_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsTextItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicstextitem_collideswithpath_isbase) {
            qgraphicstextitem_collideswithpath_isbase = false;
            return QGraphicsTextItem::collidesWithPath(path, mode);
        }
        auto collideswithpath_cb = qgraphicstextitem_collideswithpath_callback;
        if (collideswithpath_cb) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithpath_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsTextItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicstextitem_sceneeventfilter_isbase) {
            qgraphicstextitem_sceneeventfilter_isbase = false;
            return QGraphicsTextItem::sceneEventFilter(watched, event);
        }
        auto sceneeventfilter_cb = qgraphicstextitem_sceneeventfilter_callback;
        if (sceneeventfilter_cb) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = sceneeventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsTextItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicstextitem_wheelevent_isbase) {
            qgraphicstextitem_wheelevent_isbase = false;
            QGraphicsTextItem::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qgraphicstextitem_wheelevent_callback;
        if (wheelevent_cb) {
            QGraphicsSceneWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QGraphicsTextItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicstextitem_itemchange_isbase) {
            qgraphicstextitem_itemchange_isbase = false;
            return QGraphicsTextItem::itemChange(change, value);
        }
        auto itemchange_cb = qgraphicstextitem_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            QVariant* callback_ret = itemchange_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QGraphicsTextItem::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qgraphicstextitem_updatemicrofocus_isbase) {
            qgraphicstextitem_updatemicrofocus_isbase = false;
            QGraphicsTextItem::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qgraphicstextitem_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QGraphicsTextItem::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicstextitem_sender_isbase) {
            qgraphicstextitem_sender_isbase = false;
            return QGraphicsTextItem::sender();
        }
        auto sender_cb = qgraphicstextitem_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QGraphicsTextItem::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicstextitem_sendersignalindex_isbase) {
            qgraphicstextitem_sendersignalindex_isbase = false;
            return QGraphicsTextItem::senderSignalIndex();
        }
        auto sendersignalindex_cb = qgraphicstextitem_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QGraphicsTextItem::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicstextitem_receivers_isbase) {
            qgraphicstextitem_receivers_isbase = false;
            return QGraphicsTextItem::receivers(signal);
        }
        auto receivers_cb = qgraphicstextitem_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsTextItem::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicstextitem_issignalconnected_isbase) {
            qgraphicstextitem_issignalconnected_isbase = false;
            return QGraphicsTextItem::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qgraphicstextitem_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsTextItem::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qgraphicstextitem_addtoindex_isbase) {
            qgraphicstextitem_addtoindex_isbase = false;
            QGraphicsTextItem::addToIndex();
            return;
        }
        auto addtoindex_cb = qgraphicstextitem_addtoindex_callback;
        if (addtoindex_cb) {
            addtoindex_cb();
            return;
        }
        QGraphicsTextItem::addToIndex();
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qgraphicstextitem_removefromindex_isbase) {
            qgraphicstextitem_removefromindex_isbase = false;
            QGraphicsTextItem::removeFromIndex();
            return;
        }
        auto removefromindex_cb = qgraphicstextitem_removefromindex_callback;
        if (removefromindex_cb) {
            removefromindex_cb();
            return;
        }
        QGraphicsTextItem::removeFromIndex();
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qgraphicstextitem_preparegeometrychange_isbase) {
            qgraphicstextitem_preparegeometrychange_isbase = false;
            QGraphicsTextItem::prepareGeometryChange();
            return;
        }
        auto preparegeometrychange_cb = qgraphicstextitem_preparegeometrychange_callback;
        if (preparegeometrychange_cb) {
            preparegeometrychange_cb();
            return;
        }
        QGraphicsTextItem::prepareGeometryChange();
    }

    // Friend functions
    friend bool QGraphicsTextItem_SceneEvent(QGraphicsTextItem* self, QEvent* event);
    friend bool QGraphicsTextItem_SuperSceneEvent(QGraphicsTextItem* self, QEvent* event);
    friend void QGraphicsTextItem_MousePressEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsTextItem_SuperMousePressEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsTextItem_MouseMoveEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsTextItem_SuperMouseMoveEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsTextItem_MouseReleaseEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsTextItem_SuperMouseReleaseEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsTextItem_MouseDoubleClickEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsTextItem_SuperMouseDoubleClickEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsTextItem_ContextMenuEvent(QGraphicsTextItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsTextItem_SuperContextMenuEvent(QGraphicsTextItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsTextItem_KeyPressEvent(QGraphicsTextItem* self, QKeyEvent* event);
    friend void QGraphicsTextItem_SuperKeyPressEvent(QGraphicsTextItem* self, QKeyEvent* event);
    friend void QGraphicsTextItem_KeyReleaseEvent(QGraphicsTextItem* self, QKeyEvent* event);
    friend void QGraphicsTextItem_SuperKeyReleaseEvent(QGraphicsTextItem* self, QKeyEvent* event);
    friend void QGraphicsTextItem_FocusInEvent(QGraphicsTextItem* self, QFocusEvent* event);
    friend void QGraphicsTextItem_SuperFocusInEvent(QGraphicsTextItem* self, QFocusEvent* event);
    friend void QGraphicsTextItem_FocusOutEvent(QGraphicsTextItem* self, QFocusEvent* event);
    friend void QGraphicsTextItem_SuperFocusOutEvent(QGraphicsTextItem* self, QFocusEvent* event);
    friend void QGraphicsTextItem_DragEnterEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsTextItem_SuperDragEnterEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsTextItem_DragLeaveEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsTextItem_SuperDragLeaveEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsTextItem_DragMoveEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsTextItem_SuperDragMoveEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsTextItem_DropEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsTextItem_SuperDropEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsTextItem_InputMethodEvent(QGraphicsTextItem* self, QInputMethodEvent* event);
    friend void QGraphicsTextItem_SuperInputMethodEvent(QGraphicsTextItem* self, QInputMethodEvent* event);
    friend void QGraphicsTextItem_HoverEnterEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsTextItem_SuperHoverEnterEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsTextItem_HoverMoveEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsTextItem_SuperHoverMoveEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsTextItem_HoverLeaveEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsTextItem_SuperHoverLeaveEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event);
    friend QVariant* QGraphicsTextItem_InputMethodQuery(const QGraphicsTextItem* self, int query);
    friend QVariant* QGraphicsTextItem_SuperInputMethodQuery(const QGraphicsTextItem* self, int query);
    friend bool QGraphicsTextItem_SupportsExtension(const QGraphicsTextItem* self, int extension);
    friend bool QGraphicsTextItem_SuperSupportsExtension(const QGraphicsTextItem* self, int extension);
    friend void QGraphicsTextItem_SetExtension(QGraphicsTextItem* self, int extension, const QVariant* variant);
    friend void QGraphicsTextItem_SuperSetExtension(QGraphicsTextItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsTextItem_Extension(const QGraphicsTextItem* self, const QVariant* variant);
    friend QVariant* QGraphicsTextItem_SuperExtension(const QGraphicsTextItem* self, const QVariant* variant);
    friend bool QGraphicsTextItem_Event(QGraphicsTextItem* self, QEvent* ev);
    friend bool QGraphicsTextItem_SuperEvent(QGraphicsTextItem* self, QEvent* ev);
    friend void QGraphicsTextItem_TimerEvent(QGraphicsTextItem* self, QTimerEvent* event);
    friend void QGraphicsTextItem_SuperTimerEvent(QGraphicsTextItem* self, QTimerEvent* event);
    friend void QGraphicsTextItem_ChildEvent(QGraphicsTextItem* self, QChildEvent* event);
    friend void QGraphicsTextItem_SuperChildEvent(QGraphicsTextItem* self, QChildEvent* event);
    friend void QGraphicsTextItem_CustomEvent(QGraphicsTextItem* self, QEvent* event);
    friend void QGraphicsTextItem_SuperCustomEvent(QGraphicsTextItem* self, QEvent* event);
    friend void QGraphicsTextItem_ConnectNotify(QGraphicsTextItem* self, const QMetaMethod* signal);
    friend void QGraphicsTextItem_SuperConnectNotify(QGraphicsTextItem* self, const QMetaMethod* signal);
    friend void QGraphicsTextItem_DisconnectNotify(QGraphicsTextItem* self, const QMetaMethod* signal);
    friend void QGraphicsTextItem_SuperDisconnectNotify(QGraphicsTextItem* self, const QMetaMethod* signal);
    friend bool QGraphicsTextItem_SceneEventFilter(QGraphicsTextItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsTextItem_SuperSceneEventFilter(QGraphicsTextItem* self, QGraphicsItem* watched, QEvent* event);
    friend void QGraphicsTextItem_WheelEvent(QGraphicsTextItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsTextItem_SuperWheelEvent(QGraphicsTextItem* self, QGraphicsSceneWheelEvent* event);
    friend QVariant* QGraphicsTextItem_ItemChange(QGraphicsTextItem* self, int change, const QVariant* value);
    friend QVariant* QGraphicsTextItem_SuperItemChange(QGraphicsTextItem* self, int change, const QVariant* value);
    friend void QGraphicsTextItem_UpdateMicroFocus(QGraphicsTextItem* self);
    friend void QGraphicsTextItem_SuperUpdateMicroFocus(QGraphicsTextItem* self);
    friend QObject* QGraphicsTextItem_Sender(const QGraphicsTextItem* self);
    friend QObject* QGraphicsTextItem_SuperSender(const QGraphicsTextItem* self);
    friend int QGraphicsTextItem_SenderSignalIndex(const QGraphicsTextItem* self);
    friend int QGraphicsTextItem_SuperSenderSignalIndex(const QGraphicsTextItem* self);
    friend int QGraphicsTextItem_Receivers(const QGraphicsTextItem* self, const char* signal);
    friend int QGraphicsTextItem_SuperReceivers(const QGraphicsTextItem* self, const char* signal);
    friend bool QGraphicsTextItem_IsSignalConnected(const QGraphicsTextItem* self, const QMetaMethod* signal);
    friend bool QGraphicsTextItem_SuperIsSignalConnected(const QGraphicsTextItem* self, const QMetaMethod* signal);
    friend void QGraphicsTextItem_AddToIndex(QGraphicsTextItem* self);
    friend void QGraphicsTextItem_SuperAddToIndex(QGraphicsTextItem* self);
    friend void QGraphicsTextItem_RemoveFromIndex(QGraphicsTextItem* self);
    friend void QGraphicsTextItem_SuperRemoveFromIndex(QGraphicsTextItem* self);
    friend void QGraphicsTextItem_PrepareGeometryChange(QGraphicsTextItem* self);
    friend void QGraphicsTextItem_SuperPrepareGeometryChange(QGraphicsTextItem* self);
};

// This class is a subclass of QGraphicsSimpleTextItem so that we can call protected methods
class VirtualQGraphicsSimpleTextItem final : public QGraphicsSimpleTextItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsSimpleTextItem = true;

    // Virtual class public types (including callbacks)
    using QGraphicsItem::Extension;
    using QGraphicsSimpleTextItem_BoundingRect_Callback = QRectF* (*)();
    using QGraphicsSimpleTextItem_Shape_Callback = QPainterPath* (*)();
    using QGraphicsSimpleTextItem_Contains_Callback = bool (*)(const QGraphicsSimpleTextItem*, QPointF*);
    using QGraphicsSimpleTextItem_Paint_Callback = void (*)(QGraphicsSimpleTextItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsSimpleTextItem_IsObscuredBy_Callback = bool (*)(const QGraphicsSimpleTextItem*, QGraphicsItem*);
    using QGraphicsSimpleTextItem_OpaqueArea_Callback = QPainterPath* (*)();
    using QGraphicsSimpleTextItem_Type_Callback = int (*)();
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
    using QGraphicsSimpleTextItem_UpdateMicroFocus_Callback = void (*)();
    using QGraphicsSimpleTextItem_AddToIndex_Callback = void (*)();
    using QGraphicsSimpleTextItem_RemoveFromIndex_Callback = void (*)();
    using QGraphicsSimpleTextItem_PrepareGeometryChange_Callback = void (*)();

  protected:
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
    QGraphicsSimpleTextItem_UpdateMicroFocus_Callback qgraphicssimpletextitem_updatemicrofocus_callback = nullptr;
    QGraphicsSimpleTextItem_AddToIndex_Callback qgraphicssimpletextitem_addtoindex_callback = nullptr;
    QGraphicsSimpleTextItem_RemoveFromIndex_Callback qgraphicssimpletextitem_removefromindex_callback = nullptr;
    QGraphicsSimpleTextItem_PrepareGeometryChange_Callback qgraphicssimpletextitem_preparegeometrychange_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicssimpletextitem_boundingrect_isbase = false;
    mutable bool qgraphicssimpletextitem_shape_isbase = false;
    mutable bool qgraphicssimpletextitem_contains_isbase = false;
    mutable bool qgraphicssimpletextitem_paint_isbase = false;
    mutable bool qgraphicssimpletextitem_isobscuredby_isbase = false;
    mutable bool qgraphicssimpletextitem_opaquearea_isbase = false;
    mutable bool qgraphicssimpletextitem_type_isbase = false;
    mutable bool qgraphicssimpletextitem_supportsextension_isbase = false;
    mutable bool qgraphicssimpletextitem_setextension_isbase = false;
    mutable bool qgraphicssimpletextitem_extension_isbase = false;
    mutable bool qgraphicssimpletextitem_advance_isbase = false;
    mutable bool qgraphicssimpletextitem_collideswithitem_isbase = false;
    mutable bool qgraphicssimpletextitem_collideswithpath_isbase = false;
    mutable bool qgraphicssimpletextitem_sceneeventfilter_isbase = false;
    mutable bool qgraphicssimpletextitem_sceneevent_isbase = false;
    mutable bool qgraphicssimpletextitem_contextmenuevent_isbase = false;
    mutable bool qgraphicssimpletextitem_dragenterevent_isbase = false;
    mutable bool qgraphicssimpletextitem_dragleaveevent_isbase = false;
    mutable bool qgraphicssimpletextitem_dragmoveevent_isbase = false;
    mutable bool qgraphicssimpletextitem_dropevent_isbase = false;
    mutable bool qgraphicssimpletextitem_focusinevent_isbase = false;
    mutable bool qgraphicssimpletextitem_focusoutevent_isbase = false;
    mutable bool qgraphicssimpletextitem_hoverenterevent_isbase = false;
    mutable bool qgraphicssimpletextitem_hovermoveevent_isbase = false;
    mutable bool qgraphicssimpletextitem_hoverleaveevent_isbase = false;
    mutable bool qgraphicssimpletextitem_keypressevent_isbase = false;
    mutable bool qgraphicssimpletextitem_keyreleaseevent_isbase = false;
    mutable bool qgraphicssimpletextitem_mousepressevent_isbase = false;
    mutable bool qgraphicssimpletextitem_mousemoveevent_isbase = false;
    mutable bool qgraphicssimpletextitem_mousereleaseevent_isbase = false;
    mutable bool qgraphicssimpletextitem_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicssimpletextitem_wheelevent_isbase = false;
    mutable bool qgraphicssimpletextitem_inputmethodevent_isbase = false;
    mutable bool qgraphicssimpletextitem_inputmethodquery_isbase = false;
    mutable bool qgraphicssimpletextitem_itemchange_isbase = false;
    mutable bool qgraphicssimpletextitem_updatemicrofocus_isbase = false;
    mutable bool qgraphicssimpletextitem_addtoindex_isbase = false;
    mutable bool qgraphicssimpletextitem_removefromindex_isbase = false;
    mutable bool qgraphicssimpletextitem_preparegeometrychange_isbase = false;

  public:
    VirtualQGraphicsSimpleTextItem() : QGraphicsSimpleTextItem() {};
    VirtualQGraphicsSimpleTextItem(const QString& text) : QGraphicsSimpleTextItem(text) {};
    VirtualQGraphicsSimpleTextItem(QGraphicsItem* parent) : QGraphicsSimpleTextItem(parent) {};
    VirtualQGraphicsSimpleTextItem(const QString& text, QGraphicsItem* parent) : QGraphicsSimpleTextItem(text, parent) {};

    // Callback setters
    inline void setQGraphicsSimpleTextItem_BoundingRect_Callback(QGraphicsSimpleTextItem_BoundingRect_Callback cb) { qgraphicssimpletextitem_boundingrect_callback = cb; }
    inline void setQGraphicsSimpleTextItem_Shape_Callback(QGraphicsSimpleTextItem_Shape_Callback cb) { qgraphicssimpletextitem_shape_callback = cb; }
    inline void setQGraphicsSimpleTextItem_Contains_Callback(QGraphicsSimpleTextItem_Contains_Callback cb) { qgraphicssimpletextitem_contains_callback = cb; }
    inline void setQGraphicsSimpleTextItem_Paint_Callback(QGraphicsSimpleTextItem_Paint_Callback cb) { qgraphicssimpletextitem_paint_callback = cb; }
    inline void setQGraphicsSimpleTextItem_IsObscuredBy_Callback(QGraphicsSimpleTextItem_IsObscuredBy_Callback cb) { qgraphicssimpletextitem_isobscuredby_callback = cb; }
    inline void setQGraphicsSimpleTextItem_OpaqueArea_Callback(QGraphicsSimpleTextItem_OpaqueArea_Callback cb) { qgraphicssimpletextitem_opaquearea_callback = cb; }
    inline void setQGraphicsSimpleTextItem_Type_Callback(QGraphicsSimpleTextItem_Type_Callback cb) { qgraphicssimpletextitem_type_callback = cb; }
    inline void setQGraphicsSimpleTextItem_SupportsExtension_Callback(QGraphicsSimpleTextItem_SupportsExtension_Callback cb) { qgraphicssimpletextitem_supportsextension_callback = cb; }
    inline void setQGraphicsSimpleTextItem_SetExtension_Callback(QGraphicsSimpleTextItem_SetExtension_Callback cb) { qgraphicssimpletextitem_setextension_callback = cb; }
    inline void setQGraphicsSimpleTextItem_Extension_Callback(QGraphicsSimpleTextItem_Extension_Callback cb) { qgraphicssimpletextitem_extension_callback = cb; }
    inline void setQGraphicsSimpleTextItem_Advance_Callback(QGraphicsSimpleTextItem_Advance_Callback cb) { qgraphicssimpletextitem_advance_callback = cb; }
    inline void setQGraphicsSimpleTextItem_CollidesWithItem_Callback(QGraphicsSimpleTextItem_CollidesWithItem_Callback cb) { qgraphicssimpletextitem_collideswithitem_callback = cb; }
    inline void setQGraphicsSimpleTextItem_CollidesWithPath_Callback(QGraphicsSimpleTextItem_CollidesWithPath_Callback cb) { qgraphicssimpletextitem_collideswithpath_callback = cb; }
    inline void setQGraphicsSimpleTextItem_SceneEventFilter_Callback(QGraphicsSimpleTextItem_SceneEventFilter_Callback cb) { qgraphicssimpletextitem_sceneeventfilter_callback = cb; }
    inline void setQGraphicsSimpleTextItem_SceneEvent_Callback(QGraphicsSimpleTextItem_SceneEvent_Callback cb) { qgraphicssimpletextitem_sceneevent_callback = cb; }
    inline void setQGraphicsSimpleTextItem_ContextMenuEvent_Callback(QGraphicsSimpleTextItem_ContextMenuEvent_Callback cb) { qgraphicssimpletextitem_contextmenuevent_callback = cb; }
    inline void setQGraphicsSimpleTextItem_DragEnterEvent_Callback(QGraphicsSimpleTextItem_DragEnterEvent_Callback cb) { qgraphicssimpletextitem_dragenterevent_callback = cb; }
    inline void setQGraphicsSimpleTextItem_DragLeaveEvent_Callback(QGraphicsSimpleTextItem_DragLeaveEvent_Callback cb) { qgraphicssimpletextitem_dragleaveevent_callback = cb; }
    inline void setQGraphicsSimpleTextItem_DragMoveEvent_Callback(QGraphicsSimpleTextItem_DragMoveEvent_Callback cb) { qgraphicssimpletextitem_dragmoveevent_callback = cb; }
    inline void setQGraphicsSimpleTextItem_DropEvent_Callback(QGraphicsSimpleTextItem_DropEvent_Callback cb) { qgraphicssimpletextitem_dropevent_callback = cb; }
    inline void setQGraphicsSimpleTextItem_FocusInEvent_Callback(QGraphicsSimpleTextItem_FocusInEvent_Callback cb) { qgraphicssimpletextitem_focusinevent_callback = cb; }
    inline void setQGraphicsSimpleTextItem_FocusOutEvent_Callback(QGraphicsSimpleTextItem_FocusOutEvent_Callback cb) { qgraphicssimpletextitem_focusoutevent_callback = cb; }
    inline void setQGraphicsSimpleTextItem_HoverEnterEvent_Callback(QGraphicsSimpleTextItem_HoverEnterEvent_Callback cb) { qgraphicssimpletextitem_hoverenterevent_callback = cb; }
    inline void setQGraphicsSimpleTextItem_HoverMoveEvent_Callback(QGraphicsSimpleTextItem_HoverMoveEvent_Callback cb) { qgraphicssimpletextitem_hovermoveevent_callback = cb; }
    inline void setQGraphicsSimpleTextItem_HoverLeaveEvent_Callback(QGraphicsSimpleTextItem_HoverLeaveEvent_Callback cb) { qgraphicssimpletextitem_hoverleaveevent_callback = cb; }
    inline void setQGraphicsSimpleTextItem_KeyPressEvent_Callback(QGraphicsSimpleTextItem_KeyPressEvent_Callback cb) { qgraphicssimpletextitem_keypressevent_callback = cb; }
    inline void setQGraphicsSimpleTextItem_KeyReleaseEvent_Callback(QGraphicsSimpleTextItem_KeyReleaseEvent_Callback cb) { qgraphicssimpletextitem_keyreleaseevent_callback = cb; }
    inline void setQGraphicsSimpleTextItem_MousePressEvent_Callback(QGraphicsSimpleTextItem_MousePressEvent_Callback cb) { qgraphicssimpletextitem_mousepressevent_callback = cb; }
    inline void setQGraphicsSimpleTextItem_MouseMoveEvent_Callback(QGraphicsSimpleTextItem_MouseMoveEvent_Callback cb) { qgraphicssimpletextitem_mousemoveevent_callback = cb; }
    inline void setQGraphicsSimpleTextItem_MouseReleaseEvent_Callback(QGraphicsSimpleTextItem_MouseReleaseEvent_Callback cb) { qgraphicssimpletextitem_mousereleaseevent_callback = cb; }
    inline void setQGraphicsSimpleTextItem_MouseDoubleClickEvent_Callback(QGraphicsSimpleTextItem_MouseDoubleClickEvent_Callback cb) { qgraphicssimpletextitem_mousedoubleclickevent_callback = cb; }
    inline void setQGraphicsSimpleTextItem_WheelEvent_Callback(QGraphicsSimpleTextItem_WheelEvent_Callback cb) { qgraphicssimpletextitem_wheelevent_callback = cb; }
    inline void setQGraphicsSimpleTextItem_InputMethodEvent_Callback(QGraphicsSimpleTextItem_InputMethodEvent_Callback cb) { qgraphicssimpletextitem_inputmethodevent_callback = cb; }
    inline void setQGraphicsSimpleTextItem_InputMethodQuery_Callback(QGraphicsSimpleTextItem_InputMethodQuery_Callback cb) { qgraphicssimpletextitem_inputmethodquery_callback = cb; }
    inline void setQGraphicsSimpleTextItem_ItemChange_Callback(QGraphicsSimpleTextItem_ItemChange_Callback cb) { qgraphicssimpletextitem_itemchange_callback = cb; }
    inline void setQGraphicsSimpleTextItem_UpdateMicroFocus_Callback(QGraphicsSimpleTextItem_UpdateMicroFocus_Callback cb) { qgraphicssimpletextitem_updatemicrofocus_callback = cb; }
    inline void setQGraphicsSimpleTextItem_AddToIndex_Callback(QGraphicsSimpleTextItem_AddToIndex_Callback cb) { qgraphicssimpletextitem_addtoindex_callback = cb; }
    inline void setQGraphicsSimpleTextItem_RemoveFromIndex_Callback(QGraphicsSimpleTextItem_RemoveFromIndex_Callback cb) { qgraphicssimpletextitem_removefromindex_callback = cb; }
    inline void setQGraphicsSimpleTextItem_PrepareGeometryChange_Callback(QGraphicsSimpleTextItem_PrepareGeometryChange_Callback cb) { qgraphicssimpletextitem_preparegeometrychange_callback = cb; }

    // Base flag setters
    inline void setQGraphicsSimpleTextItem_BoundingRect_IsBase(bool value) const { qgraphicssimpletextitem_boundingrect_isbase = value; }
    inline void setQGraphicsSimpleTextItem_Shape_IsBase(bool value) const { qgraphicssimpletextitem_shape_isbase = value; }
    inline void setQGraphicsSimpleTextItem_Contains_IsBase(bool value) const { qgraphicssimpletextitem_contains_isbase = value; }
    inline void setQGraphicsSimpleTextItem_Paint_IsBase(bool value) const { qgraphicssimpletextitem_paint_isbase = value; }
    inline void setQGraphicsSimpleTextItem_IsObscuredBy_IsBase(bool value) const { qgraphicssimpletextitem_isobscuredby_isbase = value; }
    inline void setQGraphicsSimpleTextItem_OpaqueArea_IsBase(bool value) const { qgraphicssimpletextitem_opaquearea_isbase = value; }
    inline void setQGraphicsSimpleTextItem_Type_IsBase(bool value) const { qgraphicssimpletextitem_type_isbase = value; }
    inline void setQGraphicsSimpleTextItem_SupportsExtension_IsBase(bool value) const { qgraphicssimpletextitem_supportsextension_isbase = value; }
    inline void setQGraphicsSimpleTextItem_SetExtension_IsBase(bool value) const { qgraphicssimpletextitem_setextension_isbase = value; }
    inline void setQGraphicsSimpleTextItem_Extension_IsBase(bool value) const { qgraphicssimpletextitem_extension_isbase = value; }
    inline void setQGraphicsSimpleTextItem_Advance_IsBase(bool value) const { qgraphicssimpletextitem_advance_isbase = value; }
    inline void setQGraphicsSimpleTextItem_CollidesWithItem_IsBase(bool value) const { qgraphicssimpletextitem_collideswithitem_isbase = value; }
    inline void setQGraphicsSimpleTextItem_CollidesWithPath_IsBase(bool value) const { qgraphicssimpletextitem_collideswithpath_isbase = value; }
    inline void setQGraphicsSimpleTextItem_SceneEventFilter_IsBase(bool value) const { qgraphicssimpletextitem_sceneeventfilter_isbase = value; }
    inline void setQGraphicsSimpleTextItem_SceneEvent_IsBase(bool value) const { qgraphicssimpletextitem_sceneevent_isbase = value; }
    inline void setQGraphicsSimpleTextItem_ContextMenuEvent_IsBase(bool value) const { qgraphicssimpletextitem_contextmenuevent_isbase = value; }
    inline void setQGraphicsSimpleTextItem_DragEnterEvent_IsBase(bool value) const { qgraphicssimpletextitem_dragenterevent_isbase = value; }
    inline void setQGraphicsSimpleTextItem_DragLeaveEvent_IsBase(bool value) const { qgraphicssimpletextitem_dragleaveevent_isbase = value; }
    inline void setQGraphicsSimpleTextItem_DragMoveEvent_IsBase(bool value) const { qgraphicssimpletextitem_dragmoveevent_isbase = value; }
    inline void setQGraphicsSimpleTextItem_DropEvent_IsBase(bool value) const { qgraphicssimpletextitem_dropevent_isbase = value; }
    inline void setQGraphicsSimpleTextItem_FocusInEvent_IsBase(bool value) const { qgraphicssimpletextitem_focusinevent_isbase = value; }
    inline void setQGraphicsSimpleTextItem_FocusOutEvent_IsBase(bool value) const { qgraphicssimpletextitem_focusoutevent_isbase = value; }
    inline void setQGraphicsSimpleTextItem_HoverEnterEvent_IsBase(bool value) const { qgraphicssimpletextitem_hoverenterevent_isbase = value; }
    inline void setQGraphicsSimpleTextItem_HoverMoveEvent_IsBase(bool value) const { qgraphicssimpletextitem_hovermoveevent_isbase = value; }
    inline void setQGraphicsSimpleTextItem_HoverLeaveEvent_IsBase(bool value) const { qgraphicssimpletextitem_hoverleaveevent_isbase = value; }
    inline void setQGraphicsSimpleTextItem_KeyPressEvent_IsBase(bool value) const { qgraphicssimpletextitem_keypressevent_isbase = value; }
    inline void setQGraphicsSimpleTextItem_KeyReleaseEvent_IsBase(bool value) const { qgraphicssimpletextitem_keyreleaseevent_isbase = value; }
    inline void setQGraphicsSimpleTextItem_MousePressEvent_IsBase(bool value) const { qgraphicssimpletextitem_mousepressevent_isbase = value; }
    inline void setQGraphicsSimpleTextItem_MouseMoveEvent_IsBase(bool value) const { qgraphicssimpletextitem_mousemoveevent_isbase = value; }
    inline void setQGraphicsSimpleTextItem_MouseReleaseEvent_IsBase(bool value) const { qgraphicssimpletextitem_mousereleaseevent_isbase = value; }
    inline void setQGraphicsSimpleTextItem_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicssimpletextitem_mousedoubleclickevent_isbase = value; }
    inline void setQGraphicsSimpleTextItem_WheelEvent_IsBase(bool value) const { qgraphicssimpletextitem_wheelevent_isbase = value; }
    inline void setQGraphicsSimpleTextItem_InputMethodEvent_IsBase(bool value) const { qgraphicssimpletextitem_inputmethodevent_isbase = value; }
    inline void setQGraphicsSimpleTextItem_InputMethodQuery_IsBase(bool value) const { qgraphicssimpletextitem_inputmethodquery_isbase = value; }
    inline void setQGraphicsSimpleTextItem_ItemChange_IsBase(bool value) const { qgraphicssimpletextitem_itemchange_isbase = value; }
    inline void setQGraphicsSimpleTextItem_UpdateMicroFocus_IsBase(bool value) const { qgraphicssimpletextitem_updatemicrofocus_isbase = value; }
    inline void setQGraphicsSimpleTextItem_AddToIndex_IsBase(bool value) const { qgraphicssimpletextitem_addtoindex_isbase = value; }
    inline void setQGraphicsSimpleTextItem_RemoveFromIndex_IsBase(bool value) const { qgraphicssimpletextitem_removefromindex_isbase = value; }
    inline void setQGraphicsSimpleTextItem_PrepareGeometryChange_IsBase(bool value) const { qgraphicssimpletextitem_preparegeometrychange_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicssimpletextitem_boundingrect_isbase) {
            qgraphicssimpletextitem_boundingrect_isbase = false;
            return QGraphicsSimpleTextItem::boundingRect();
        }
        auto boundingrect_cb = qgraphicssimpletextitem_boundingrect_callback;
        if (boundingrect_cb) {
            QRectF* callback_ret = boundingrect_cb();
            return *callback_ret;
        }
        return QGraphicsSimpleTextItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicssimpletextitem_shape_isbase) {
            qgraphicssimpletextitem_shape_isbase = false;
            return QGraphicsSimpleTextItem::shape();
        }
        auto shape_cb = qgraphicssimpletextitem_shape_callback;
        if (shape_cb) {
            QPainterPath* callback_ret = shape_cb();
            return *callback_ret;
        }
        return QGraphicsSimpleTextItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicssimpletextitem_contains_isbase) {
            qgraphicssimpletextitem_contains_isbase = false;
            return QGraphicsSimpleTextItem::contains(point);
        }
        auto contains_cb = qgraphicssimpletextitem_contains_callback;
        if (contains_cb) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);

            bool callback_ret = contains_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsSimpleTextItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicssimpletextitem_paint_isbase) {
            qgraphicssimpletextitem_paint_isbase = false;
            QGraphicsSimpleTextItem::paint(painter, option, widget);
            return;
        }
        auto paint_cb = qgraphicssimpletextitem_paint_callback;
        if (paint_cb) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            paint_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsSimpleTextItem::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicssimpletextitem_isobscuredby_isbase) {
            qgraphicssimpletextitem_isobscuredby_isbase = false;
            return QGraphicsSimpleTextItem::isObscuredBy(item);
        }
        auto isobscuredby_cb = qgraphicssimpletextitem_isobscuredby_callback;
        if (isobscuredby_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;

            bool callback_ret = isobscuredby_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsSimpleTextItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicssimpletextitem_opaquearea_isbase) {
            qgraphicssimpletextitem_opaquearea_isbase = false;
            return QGraphicsSimpleTextItem::opaqueArea();
        }
        auto opaquearea_cb = qgraphicssimpletextitem_opaquearea_callback;
        if (opaquearea_cb) {
            QPainterPath* callback_ret = opaquearea_cb();
            return *callback_ret;
        }
        return QGraphicsSimpleTextItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicssimpletextitem_type_isbase) {
            qgraphicssimpletextitem_type_isbase = false;
            return QGraphicsSimpleTextItem::type();
        }
        auto type_cb = qgraphicssimpletextitem_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<int>(callback_ret);
        }
        return QGraphicsSimpleTextItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicssimpletextitem_supportsextension_isbase) {
            qgraphicssimpletextitem_supportsextension_isbase = false;
            return QGraphicsSimpleTextItem::supportsExtension(extension);
        }
        auto supportsextension_cb = qgraphicssimpletextitem_supportsextension_callback;
        if (supportsextension_cb) {
            int cbval1 = static_cast<int>(extension);

            bool callback_ret = supportsextension_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsSimpleTextItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicssimpletextitem_setextension_isbase) {
            qgraphicssimpletextitem_setextension_isbase = false;
            QGraphicsSimpleTextItem::setExtension(extension, variant);
            return;
        }
        auto setextension_cb = qgraphicssimpletextitem_setextension_callback;
        if (setextension_cb) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);

            setextension_cb(this, cbval1, cbval2);
            return;
        }
        QGraphicsSimpleTextItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicssimpletextitem_extension_isbase) {
            qgraphicssimpletextitem_extension_isbase = false;
            return QGraphicsSimpleTextItem::extension(variant);
        }
        auto extension_cb = qgraphicssimpletextitem_extension_callback;
        if (extension_cb) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);

            QVariant* callback_ret = extension_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsSimpleTextItem::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicssimpletextitem_advance_isbase) {
            qgraphicssimpletextitem_advance_isbase = false;
            QGraphicsSimpleTextItem::advance(phase);
            return;
        }
        auto advance_cb = qgraphicssimpletextitem_advance_callback;
        if (advance_cb) {
            int cbval1 = phase;

            advance_cb(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicssimpletextitem_collideswithitem_isbase) {
            qgraphicssimpletextitem_collideswithitem_isbase = false;
            return QGraphicsSimpleTextItem::collidesWithItem(other, mode);
        }
        auto collideswithitem_cb = qgraphicssimpletextitem_collideswithitem_callback;
        if (collideswithitem_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithitem_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsSimpleTextItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicssimpletextitem_collideswithpath_isbase) {
            qgraphicssimpletextitem_collideswithpath_isbase = false;
            return QGraphicsSimpleTextItem::collidesWithPath(path, mode);
        }
        auto collideswithpath_cb = qgraphicssimpletextitem_collideswithpath_callback;
        if (collideswithpath_cb) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithpath_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsSimpleTextItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicssimpletextitem_sceneeventfilter_isbase) {
            qgraphicssimpletextitem_sceneeventfilter_isbase = false;
            return QGraphicsSimpleTextItem::sceneEventFilter(watched, event);
        }
        auto sceneeventfilter_cb = qgraphicssimpletextitem_sceneeventfilter_callback;
        if (sceneeventfilter_cb) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = sceneeventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsSimpleTextItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicssimpletextitem_sceneevent_isbase) {
            qgraphicssimpletextitem_sceneevent_isbase = false;
            return QGraphicsSimpleTextItem::sceneEvent(event);
        }
        auto sceneevent_cb = qgraphicssimpletextitem_sceneevent_callback;
        if (sceneevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = sceneevent_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsSimpleTextItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicssimpletextitem_contextmenuevent_isbase) {
            qgraphicssimpletextitem_contextmenuevent_isbase = false;
            QGraphicsSimpleTextItem::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qgraphicssimpletextitem_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicssimpletextitem_dragenterevent_isbase) {
            qgraphicssimpletextitem_dragenterevent_isbase = false;
            QGraphicsSimpleTextItem::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qgraphicssimpletextitem_dragenterevent_callback;
        if (dragenterevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicssimpletextitem_dragleaveevent_isbase) {
            qgraphicssimpletextitem_dragleaveevent_isbase = false;
            QGraphicsSimpleTextItem::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qgraphicssimpletextitem_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicssimpletextitem_dragmoveevent_isbase) {
            qgraphicssimpletextitem_dragmoveevent_isbase = false;
            QGraphicsSimpleTextItem::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qgraphicssimpletextitem_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicssimpletextitem_dropevent_isbase) {
            qgraphicssimpletextitem_dropevent_isbase = false;
            QGraphicsSimpleTextItem::dropEvent(event);
            return;
        }
        auto dropevent_cb = qgraphicssimpletextitem_dropevent_callback;
        if (dropevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicssimpletextitem_focusinevent_isbase) {
            qgraphicssimpletextitem_focusinevent_isbase = false;
            QGraphicsSimpleTextItem::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qgraphicssimpletextitem_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicssimpletextitem_focusoutevent_isbase) {
            qgraphicssimpletextitem_focusoutevent_isbase = false;
            QGraphicsSimpleTextItem::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qgraphicssimpletextitem_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicssimpletextitem_hoverenterevent_isbase) {
            qgraphicssimpletextitem_hoverenterevent_isbase = false;
            QGraphicsSimpleTextItem::hoverEnterEvent(event);
            return;
        }
        auto hoverenterevent_cb = qgraphicssimpletextitem_hoverenterevent_callback;
        if (hoverenterevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicssimpletextitem_hovermoveevent_isbase) {
            qgraphicssimpletextitem_hovermoveevent_isbase = false;
            QGraphicsSimpleTextItem::hoverMoveEvent(event);
            return;
        }
        auto hovermoveevent_cb = qgraphicssimpletextitem_hovermoveevent_callback;
        if (hovermoveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hovermoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicssimpletextitem_hoverleaveevent_isbase) {
            qgraphicssimpletextitem_hoverleaveevent_isbase = false;
            QGraphicsSimpleTextItem::hoverLeaveEvent(event);
            return;
        }
        auto hoverleaveevent_cb = qgraphicssimpletextitem_hoverleaveevent_callback;
        if (hoverleaveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicssimpletextitem_keypressevent_isbase) {
            qgraphicssimpletextitem_keypressevent_isbase = false;
            QGraphicsSimpleTextItem::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qgraphicssimpletextitem_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicssimpletextitem_keyreleaseevent_isbase) {
            qgraphicssimpletextitem_keyreleaseevent_isbase = false;
            QGraphicsSimpleTextItem::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qgraphicssimpletextitem_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicssimpletextitem_mousepressevent_isbase) {
            qgraphicssimpletextitem_mousepressevent_isbase = false;
            QGraphicsSimpleTextItem::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qgraphicssimpletextitem_mousepressevent_callback;
        if (mousepressevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicssimpletextitem_mousemoveevent_isbase) {
            qgraphicssimpletextitem_mousemoveevent_isbase = false;
            QGraphicsSimpleTextItem::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qgraphicssimpletextitem_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicssimpletextitem_mousereleaseevent_isbase) {
            qgraphicssimpletextitem_mousereleaseevent_isbase = false;
            QGraphicsSimpleTextItem::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qgraphicssimpletextitem_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicssimpletextitem_mousedoubleclickevent_isbase) {
            qgraphicssimpletextitem_mousedoubleclickevent_isbase = false;
            QGraphicsSimpleTextItem::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qgraphicssimpletextitem_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicssimpletextitem_wheelevent_isbase) {
            qgraphicssimpletextitem_wheelevent_isbase = false;
            QGraphicsSimpleTextItem::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qgraphicssimpletextitem_wheelevent_callback;
        if (wheelevent_cb) {
            QGraphicsSceneWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicssimpletextitem_inputmethodevent_isbase) {
            qgraphicssimpletextitem_inputmethodevent_isbase = false;
            QGraphicsSimpleTextItem::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = qgraphicssimpletextitem_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QGraphicsSimpleTextItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicssimpletextitem_inputmethodquery_isbase) {
            qgraphicssimpletextitem_inputmethodquery_isbase = false;
            return QGraphicsSimpleTextItem::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qgraphicssimpletextitem_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsSimpleTextItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicssimpletextitem_itemchange_isbase) {
            qgraphicssimpletextitem_itemchange_isbase = false;
            return QGraphicsSimpleTextItem::itemChange(change, value);
        }
        auto itemchange_cb = qgraphicssimpletextitem_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            QVariant* callback_ret = itemchange_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QGraphicsSimpleTextItem::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qgraphicssimpletextitem_updatemicrofocus_isbase) {
            qgraphicssimpletextitem_updatemicrofocus_isbase = false;
            QGraphicsSimpleTextItem::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qgraphicssimpletextitem_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QGraphicsSimpleTextItem::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qgraphicssimpletextitem_addtoindex_isbase) {
            qgraphicssimpletextitem_addtoindex_isbase = false;
            QGraphicsSimpleTextItem::addToIndex();
            return;
        }
        auto addtoindex_cb = qgraphicssimpletextitem_addtoindex_callback;
        if (addtoindex_cb) {
            addtoindex_cb();
            return;
        }
        QGraphicsSimpleTextItem::addToIndex();
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qgraphicssimpletextitem_removefromindex_isbase) {
            qgraphicssimpletextitem_removefromindex_isbase = false;
            QGraphicsSimpleTextItem::removeFromIndex();
            return;
        }
        auto removefromindex_cb = qgraphicssimpletextitem_removefromindex_callback;
        if (removefromindex_cb) {
            removefromindex_cb();
            return;
        }
        QGraphicsSimpleTextItem::removeFromIndex();
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qgraphicssimpletextitem_preparegeometrychange_isbase) {
            qgraphicssimpletextitem_preparegeometrychange_isbase = false;
            QGraphicsSimpleTextItem::prepareGeometryChange();
            return;
        }
        auto preparegeometrychange_cb = qgraphicssimpletextitem_preparegeometrychange_callback;
        if (preparegeometrychange_cb) {
            preparegeometrychange_cb();
            return;
        }
        QGraphicsSimpleTextItem::prepareGeometryChange();
    }

    // Friend functions
    friend bool QGraphicsSimpleTextItem_SupportsExtension(const QGraphicsSimpleTextItem* self, int extension);
    friend bool QGraphicsSimpleTextItem_SuperSupportsExtension(const QGraphicsSimpleTextItem* self, int extension);
    friend void QGraphicsSimpleTextItem_SetExtension(QGraphicsSimpleTextItem* self, int extension, const QVariant* variant);
    friend void QGraphicsSimpleTextItem_SuperSetExtension(QGraphicsSimpleTextItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsSimpleTextItem_Extension(const QGraphicsSimpleTextItem* self, const QVariant* variant);
    friend QVariant* QGraphicsSimpleTextItem_SuperExtension(const QGraphicsSimpleTextItem* self, const QVariant* variant);
    friend bool QGraphicsSimpleTextItem_SceneEventFilter(QGraphicsSimpleTextItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsSimpleTextItem_SuperSceneEventFilter(QGraphicsSimpleTextItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsSimpleTextItem_SceneEvent(QGraphicsSimpleTextItem* self, QEvent* event);
    friend bool QGraphicsSimpleTextItem_SuperSceneEvent(QGraphicsSimpleTextItem* self, QEvent* event);
    friend void QGraphicsSimpleTextItem_ContextMenuEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsSimpleTextItem_SuperContextMenuEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsSimpleTextItem_DragEnterEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSimpleTextItem_SuperDragEnterEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSimpleTextItem_DragLeaveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSimpleTextItem_SuperDragLeaveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSimpleTextItem_DragMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSimpleTextItem_SuperDragMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSimpleTextItem_DropEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSimpleTextItem_SuperDropEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSimpleTextItem_FocusInEvent(QGraphicsSimpleTextItem* self, QFocusEvent* event);
    friend void QGraphicsSimpleTextItem_SuperFocusInEvent(QGraphicsSimpleTextItem* self, QFocusEvent* event);
    friend void QGraphicsSimpleTextItem_FocusOutEvent(QGraphicsSimpleTextItem* self, QFocusEvent* event);
    friend void QGraphicsSimpleTextItem_SuperFocusOutEvent(QGraphicsSimpleTextItem* self, QFocusEvent* event);
    friend void QGraphicsSimpleTextItem_HoverEnterEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsSimpleTextItem_SuperHoverEnterEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsSimpleTextItem_HoverMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsSimpleTextItem_SuperHoverMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsSimpleTextItem_HoverLeaveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsSimpleTextItem_SuperHoverLeaveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsSimpleTextItem_KeyPressEvent(QGraphicsSimpleTextItem* self, QKeyEvent* event);
    friend void QGraphicsSimpleTextItem_SuperKeyPressEvent(QGraphicsSimpleTextItem* self, QKeyEvent* event);
    friend void QGraphicsSimpleTextItem_KeyReleaseEvent(QGraphicsSimpleTextItem* self, QKeyEvent* event);
    friend void QGraphicsSimpleTextItem_SuperKeyReleaseEvent(QGraphicsSimpleTextItem* self, QKeyEvent* event);
    friend void QGraphicsSimpleTextItem_MousePressEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSimpleTextItem_SuperMousePressEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSimpleTextItem_MouseMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSimpleTextItem_SuperMouseMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSimpleTextItem_MouseReleaseEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSimpleTextItem_SuperMouseReleaseEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSimpleTextItem_MouseDoubleClickEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSimpleTextItem_SuperMouseDoubleClickEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSimpleTextItem_WheelEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsSimpleTextItem_SuperWheelEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsSimpleTextItem_InputMethodEvent(QGraphicsSimpleTextItem* self, QInputMethodEvent* event);
    friend void QGraphicsSimpleTextItem_SuperInputMethodEvent(QGraphicsSimpleTextItem* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsSimpleTextItem_InputMethodQuery(const QGraphicsSimpleTextItem* self, int query);
    friend QVariant* QGraphicsSimpleTextItem_SuperInputMethodQuery(const QGraphicsSimpleTextItem* self, int query);
    friend QVariant* QGraphicsSimpleTextItem_ItemChange(QGraphicsSimpleTextItem* self, int change, const QVariant* value);
    friend QVariant* QGraphicsSimpleTextItem_SuperItemChange(QGraphicsSimpleTextItem* self, int change, const QVariant* value);
    friend void QGraphicsSimpleTextItem_UpdateMicroFocus(QGraphicsSimpleTextItem* self);
    friend void QGraphicsSimpleTextItem_SuperUpdateMicroFocus(QGraphicsSimpleTextItem* self);
    friend void QGraphicsSimpleTextItem_AddToIndex(QGraphicsSimpleTextItem* self);
    friend void QGraphicsSimpleTextItem_SuperAddToIndex(QGraphicsSimpleTextItem* self);
    friend void QGraphicsSimpleTextItem_RemoveFromIndex(QGraphicsSimpleTextItem* self);
    friend void QGraphicsSimpleTextItem_SuperRemoveFromIndex(QGraphicsSimpleTextItem* self);
    friend void QGraphicsSimpleTextItem_PrepareGeometryChange(QGraphicsSimpleTextItem* self);
    friend void QGraphicsSimpleTextItem_SuperPrepareGeometryChange(QGraphicsSimpleTextItem* self);
};

// This class is a subclass of QGraphicsItemGroup so that we can call protected methods
class VirtualQGraphicsItemGroup final : public QGraphicsItemGroup {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsItemGroup = true;

    // Virtual class public types (including callbacks)
    using QGraphicsItem::Extension;
    using QGraphicsItemGroup_BoundingRect_Callback = QRectF* (*)();
    using QGraphicsItemGroup_Paint_Callback = void (*)(QGraphicsItemGroup*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsItemGroup_IsObscuredBy_Callback = bool (*)(const QGraphicsItemGroup*, QGraphicsItem*);
    using QGraphicsItemGroup_OpaqueArea_Callback = QPainterPath* (*)();
    using QGraphicsItemGroup_Type_Callback = int (*)();
    using QGraphicsItemGroup_Advance_Callback = void (*)(QGraphicsItemGroup*, int);
    using QGraphicsItemGroup_Shape_Callback = QPainterPath* (*)();
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
    using QGraphicsItemGroup_UpdateMicroFocus_Callback = void (*)();
    using QGraphicsItemGroup_AddToIndex_Callback = void (*)();
    using QGraphicsItemGroup_RemoveFromIndex_Callback = void (*)();
    using QGraphicsItemGroup_PrepareGeometryChange_Callback = void (*)();

  protected:
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
    QGraphicsItemGroup_UpdateMicroFocus_Callback qgraphicsitemgroup_updatemicrofocus_callback = nullptr;
    QGraphicsItemGroup_AddToIndex_Callback qgraphicsitemgroup_addtoindex_callback = nullptr;
    QGraphicsItemGroup_RemoveFromIndex_Callback qgraphicsitemgroup_removefromindex_callback = nullptr;
    QGraphicsItemGroup_PrepareGeometryChange_Callback qgraphicsitemgroup_preparegeometrychange_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsitemgroup_boundingrect_isbase = false;
    mutable bool qgraphicsitemgroup_paint_isbase = false;
    mutable bool qgraphicsitemgroup_isobscuredby_isbase = false;
    mutable bool qgraphicsitemgroup_opaquearea_isbase = false;
    mutable bool qgraphicsitemgroup_type_isbase = false;
    mutable bool qgraphicsitemgroup_advance_isbase = false;
    mutable bool qgraphicsitemgroup_shape_isbase = false;
    mutable bool qgraphicsitemgroup_contains_isbase = false;
    mutable bool qgraphicsitemgroup_collideswithitem_isbase = false;
    mutable bool qgraphicsitemgroup_collideswithpath_isbase = false;
    mutable bool qgraphicsitemgroup_sceneeventfilter_isbase = false;
    mutable bool qgraphicsitemgroup_sceneevent_isbase = false;
    mutable bool qgraphicsitemgroup_contextmenuevent_isbase = false;
    mutable bool qgraphicsitemgroup_dragenterevent_isbase = false;
    mutable bool qgraphicsitemgroup_dragleaveevent_isbase = false;
    mutable bool qgraphicsitemgroup_dragmoveevent_isbase = false;
    mutable bool qgraphicsitemgroup_dropevent_isbase = false;
    mutable bool qgraphicsitemgroup_focusinevent_isbase = false;
    mutable bool qgraphicsitemgroup_focusoutevent_isbase = false;
    mutable bool qgraphicsitemgroup_hoverenterevent_isbase = false;
    mutable bool qgraphicsitemgroup_hovermoveevent_isbase = false;
    mutable bool qgraphicsitemgroup_hoverleaveevent_isbase = false;
    mutable bool qgraphicsitemgroup_keypressevent_isbase = false;
    mutable bool qgraphicsitemgroup_keyreleaseevent_isbase = false;
    mutable bool qgraphicsitemgroup_mousepressevent_isbase = false;
    mutable bool qgraphicsitemgroup_mousemoveevent_isbase = false;
    mutable bool qgraphicsitemgroup_mousereleaseevent_isbase = false;
    mutable bool qgraphicsitemgroup_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicsitemgroup_wheelevent_isbase = false;
    mutable bool qgraphicsitemgroup_inputmethodevent_isbase = false;
    mutable bool qgraphicsitemgroup_inputmethodquery_isbase = false;
    mutable bool qgraphicsitemgroup_itemchange_isbase = false;
    mutable bool qgraphicsitemgroup_supportsextension_isbase = false;
    mutable bool qgraphicsitemgroup_setextension_isbase = false;
    mutable bool qgraphicsitemgroup_extension_isbase = false;
    mutable bool qgraphicsitemgroup_updatemicrofocus_isbase = false;
    mutable bool qgraphicsitemgroup_addtoindex_isbase = false;
    mutable bool qgraphicsitemgroup_removefromindex_isbase = false;
    mutable bool qgraphicsitemgroup_preparegeometrychange_isbase = false;

  public:
    VirtualQGraphicsItemGroup() : QGraphicsItemGroup() {};
    VirtualQGraphicsItemGroup(QGraphicsItem* parent) : QGraphicsItemGroup(parent) {};

    // Callback setters
    inline void setQGraphicsItemGroup_BoundingRect_Callback(QGraphicsItemGroup_BoundingRect_Callback cb) { qgraphicsitemgroup_boundingrect_callback = cb; }
    inline void setQGraphicsItemGroup_Paint_Callback(QGraphicsItemGroup_Paint_Callback cb) { qgraphicsitemgroup_paint_callback = cb; }
    inline void setQGraphicsItemGroup_IsObscuredBy_Callback(QGraphicsItemGroup_IsObscuredBy_Callback cb) { qgraphicsitemgroup_isobscuredby_callback = cb; }
    inline void setQGraphicsItemGroup_OpaqueArea_Callback(QGraphicsItemGroup_OpaqueArea_Callback cb) { qgraphicsitemgroup_opaquearea_callback = cb; }
    inline void setQGraphicsItemGroup_Type_Callback(QGraphicsItemGroup_Type_Callback cb) { qgraphicsitemgroup_type_callback = cb; }
    inline void setQGraphicsItemGroup_Advance_Callback(QGraphicsItemGroup_Advance_Callback cb) { qgraphicsitemgroup_advance_callback = cb; }
    inline void setQGraphicsItemGroup_Shape_Callback(QGraphicsItemGroup_Shape_Callback cb) { qgraphicsitemgroup_shape_callback = cb; }
    inline void setQGraphicsItemGroup_Contains_Callback(QGraphicsItemGroup_Contains_Callback cb) { qgraphicsitemgroup_contains_callback = cb; }
    inline void setQGraphicsItemGroup_CollidesWithItem_Callback(QGraphicsItemGroup_CollidesWithItem_Callback cb) { qgraphicsitemgroup_collideswithitem_callback = cb; }
    inline void setQGraphicsItemGroup_CollidesWithPath_Callback(QGraphicsItemGroup_CollidesWithPath_Callback cb) { qgraphicsitemgroup_collideswithpath_callback = cb; }
    inline void setQGraphicsItemGroup_SceneEventFilter_Callback(QGraphicsItemGroup_SceneEventFilter_Callback cb) { qgraphicsitemgroup_sceneeventfilter_callback = cb; }
    inline void setQGraphicsItemGroup_SceneEvent_Callback(QGraphicsItemGroup_SceneEvent_Callback cb) { qgraphicsitemgroup_sceneevent_callback = cb; }
    inline void setQGraphicsItemGroup_ContextMenuEvent_Callback(QGraphicsItemGroup_ContextMenuEvent_Callback cb) { qgraphicsitemgroup_contextmenuevent_callback = cb; }
    inline void setQGraphicsItemGroup_DragEnterEvent_Callback(QGraphicsItemGroup_DragEnterEvent_Callback cb) { qgraphicsitemgroup_dragenterevent_callback = cb; }
    inline void setQGraphicsItemGroup_DragLeaveEvent_Callback(QGraphicsItemGroup_DragLeaveEvent_Callback cb) { qgraphicsitemgroup_dragleaveevent_callback = cb; }
    inline void setQGraphicsItemGroup_DragMoveEvent_Callback(QGraphicsItemGroup_DragMoveEvent_Callback cb) { qgraphicsitemgroup_dragmoveevent_callback = cb; }
    inline void setQGraphicsItemGroup_DropEvent_Callback(QGraphicsItemGroup_DropEvent_Callback cb) { qgraphicsitemgroup_dropevent_callback = cb; }
    inline void setQGraphicsItemGroup_FocusInEvent_Callback(QGraphicsItemGroup_FocusInEvent_Callback cb) { qgraphicsitemgroup_focusinevent_callback = cb; }
    inline void setQGraphicsItemGroup_FocusOutEvent_Callback(QGraphicsItemGroup_FocusOutEvent_Callback cb) { qgraphicsitemgroup_focusoutevent_callback = cb; }
    inline void setQGraphicsItemGroup_HoverEnterEvent_Callback(QGraphicsItemGroup_HoverEnterEvent_Callback cb) { qgraphicsitemgroup_hoverenterevent_callback = cb; }
    inline void setQGraphicsItemGroup_HoverMoveEvent_Callback(QGraphicsItemGroup_HoverMoveEvent_Callback cb) { qgraphicsitemgroup_hovermoveevent_callback = cb; }
    inline void setQGraphicsItemGroup_HoverLeaveEvent_Callback(QGraphicsItemGroup_HoverLeaveEvent_Callback cb) { qgraphicsitemgroup_hoverleaveevent_callback = cb; }
    inline void setQGraphicsItemGroup_KeyPressEvent_Callback(QGraphicsItemGroup_KeyPressEvent_Callback cb) { qgraphicsitemgroup_keypressevent_callback = cb; }
    inline void setQGraphicsItemGroup_KeyReleaseEvent_Callback(QGraphicsItemGroup_KeyReleaseEvent_Callback cb) { qgraphicsitemgroup_keyreleaseevent_callback = cb; }
    inline void setQGraphicsItemGroup_MousePressEvent_Callback(QGraphicsItemGroup_MousePressEvent_Callback cb) { qgraphicsitemgroup_mousepressevent_callback = cb; }
    inline void setQGraphicsItemGroup_MouseMoveEvent_Callback(QGraphicsItemGroup_MouseMoveEvent_Callback cb) { qgraphicsitemgroup_mousemoveevent_callback = cb; }
    inline void setQGraphicsItemGroup_MouseReleaseEvent_Callback(QGraphicsItemGroup_MouseReleaseEvent_Callback cb) { qgraphicsitemgroup_mousereleaseevent_callback = cb; }
    inline void setQGraphicsItemGroup_MouseDoubleClickEvent_Callback(QGraphicsItemGroup_MouseDoubleClickEvent_Callback cb) { qgraphicsitemgroup_mousedoubleclickevent_callback = cb; }
    inline void setQGraphicsItemGroup_WheelEvent_Callback(QGraphicsItemGroup_WheelEvent_Callback cb) { qgraphicsitemgroup_wheelevent_callback = cb; }
    inline void setQGraphicsItemGroup_InputMethodEvent_Callback(QGraphicsItemGroup_InputMethodEvent_Callback cb) { qgraphicsitemgroup_inputmethodevent_callback = cb; }
    inline void setQGraphicsItemGroup_InputMethodQuery_Callback(QGraphicsItemGroup_InputMethodQuery_Callback cb) { qgraphicsitemgroup_inputmethodquery_callback = cb; }
    inline void setQGraphicsItemGroup_ItemChange_Callback(QGraphicsItemGroup_ItemChange_Callback cb) { qgraphicsitemgroup_itemchange_callback = cb; }
    inline void setQGraphicsItemGroup_SupportsExtension_Callback(QGraphicsItemGroup_SupportsExtension_Callback cb) { qgraphicsitemgroup_supportsextension_callback = cb; }
    inline void setQGraphicsItemGroup_SetExtension_Callback(QGraphicsItemGroup_SetExtension_Callback cb) { qgraphicsitemgroup_setextension_callback = cb; }
    inline void setQGraphicsItemGroup_Extension_Callback(QGraphicsItemGroup_Extension_Callback cb) { qgraphicsitemgroup_extension_callback = cb; }
    inline void setQGraphicsItemGroup_UpdateMicroFocus_Callback(QGraphicsItemGroup_UpdateMicroFocus_Callback cb) { qgraphicsitemgroup_updatemicrofocus_callback = cb; }
    inline void setQGraphicsItemGroup_AddToIndex_Callback(QGraphicsItemGroup_AddToIndex_Callback cb) { qgraphicsitemgroup_addtoindex_callback = cb; }
    inline void setQGraphicsItemGroup_RemoveFromIndex_Callback(QGraphicsItemGroup_RemoveFromIndex_Callback cb) { qgraphicsitemgroup_removefromindex_callback = cb; }
    inline void setQGraphicsItemGroup_PrepareGeometryChange_Callback(QGraphicsItemGroup_PrepareGeometryChange_Callback cb) { qgraphicsitemgroup_preparegeometrychange_callback = cb; }

    // Base flag setters
    inline void setQGraphicsItemGroup_BoundingRect_IsBase(bool value) const { qgraphicsitemgroup_boundingrect_isbase = value; }
    inline void setQGraphicsItemGroup_Paint_IsBase(bool value) const { qgraphicsitemgroup_paint_isbase = value; }
    inline void setQGraphicsItemGroup_IsObscuredBy_IsBase(bool value) const { qgraphicsitemgroup_isobscuredby_isbase = value; }
    inline void setQGraphicsItemGroup_OpaqueArea_IsBase(bool value) const { qgraphicsitemgroup_opaquearea_isbase = value; }
    inline void setQGraphicsItemGroup_Type_IsBase(bool value) const { qgraphicsitemgroup_type_isbase = value; }
    inline void setQGraphicsItemGroup_Advance_IsBase(bool value) const { qgraphicsitemgroup_advance_isbase = value; }
    inline void setQGraphicsItemGroup_Shape_IsBase(bool value) const { qgraphicsitemgroup_shape_isbase = value; }
    inline void setQGraphicsItemGroup_Contains_IsBase(bool value) const { qgraphicsitemgroup_contains_isbase = value; }
    inline void setQGraphicsItemGroup_CollidesWithItem_IsBase(bool value) const { qgraphicsitemgroup_collideswithitem_isbase = value; }
    inline void setQGraphicsItemGroup_CollidesWithPath_IsBase(bool value) const { qgraphicsitemgroup_collideswithpath_isbase = value; }
    inline void setQGraphicsItemGroup_SceneEventFilter_IsBase(bool value) const { qgraphicsitemgroup_sceneeventfilter_isbase = value; }
    inline void setQGraphicsItemGroup_SceneEvent_IsBase(bool value) const { qgraphicsitemgroup_sceneevent_isbase = value; }
    inline void setQGraphicsItemGroup_ContextMenuEvent_IsBase(bool value) const { qgraphicsitemgroup_contextmenuevent_isbase = value; }
    inline void setQGraphicsItemGroup_DragEnterEvent_IsBase(bool value) const { qgraphicsitemgroup_dragenterevent_isbase = value; }
    inline void setQGraphicsItemGroup_DragLeaveEvent_IsBase(bool value) const { qgraphicsitemgroup_dragleaveevent_isbase = value; }
    inline void setQGraphicsItemGroup_DragMoveEvent_IsBase(bool value) const { qgraphicsitemgroup_dragmoveevent_isbase = value; }
    inline void setQGraphicsItemGroup_DropEvent_IsBase(bool value) const { qgraphicsitemgroup_dropevent_isbase = value; }
    inline void setQGraphicsItemGroup_FocusInEvent_IsBase(bool value) const { qgraphicsitemgroup_focusinevent_isbase = value; }
    inline void setQGraphicsItemGroup_FocusOutEvent_IsBase(bool value) const { qgraphicsitemgroup_focusoutevent_isbase = value; }
    inline void setQGraphicsItemGroup_HoverEnterEvent_IsBase(bool value) const { qgraphicsitemgroup_hoverenterevent_isbase = value; }
    inline void setQGraphicsItemGroup_HoverMoveEvent_IsBase(bool value) const { qgraphicsitemgroup_hovermoveevent_isbase = value; }
    inline void setQGraphicsItemGroup_HoverLeaveEvent_IsBase(bool value) const { qgraphicsitemgroup_hoverleaveevent_isbase = value; }
    inline void setQGraphicsItemGroup_KeyPressEvent_IsBase(bool value) const { qgraphicsitemgroup_keypressevent_isbase = value; }
    inline void setQGraphicsItemGroup_KeyReleaseEvent_IsBase(bool value) const { qgraphicsitemgroup_keyreleaseevent_isbase = value; }
    inline void setQGraphicsItemGroup_MousePressEvent_IsBase(bool value) const { qgraphicsitemgroup_mousepressevent_isbase = value; }
    inline void setQGraphicsItemGroup_MouseMoveEvent_IsBase(bool value) const { qgraphicsitemgroup_mousemoveevent_isbase = value; }
    inline void setQGraphicsItemGroup_MouseReleaseEvent_IsBase(bool value) const { qgraphicsitemgroup_mousereleaseevent_isbase = value; }
    inline void setQGraphicsItemGroup_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicsitemgroup_mousedoubleclickevent_isbase = value; }
    inline void setQGraphicsItemGroup_WheelEvent_IsBase(bool value) const { qgraphicsitemgroup_wheelevent_isbase = value; }
    inline void setQGraphicsItemGroup_InputMethodEvent_IsBase(bool value) const { qgraphicsitemgroup_inputmethodevent_isbase = value; }
    inline void setQGraphicsItemGroup_InputMethodQuery_IsBase(bool value) const { qgraphicsitemgroup_inputmethodquery_isbase = value; }
    inline void setQGraphicsItemGroup_ItemChange_IsBase(bool value) const { qgraphicsitemgroup_itemchange_isbase = value; }
    inline void setQGraphicsItemGroup_SupportsExtension_IsBase(bool value) const { qgraphicsitemgroup_supportsextension_isbase = value; }
    inline void setQGraphicsItemGroup_SetExtension_IsBase(bool value) const { qgraphicsitemgroup_setextension_isbase = value; }
    inline void setQGraphicsItemGroup_Extension_IsBase(bool value) const { qgraphicsitemgroup_extension_isbase = value; }
    inline void setQGraphicsItemGroup_UpdateMicroFocus_IsBase(bool value) const { qgraphicsitemgroup_updatemicrofocus_isbase = value; }
    inline void setQGraphicsItemGroup_AddToIndex_IsBase(bool value) const { qgraphicsitemgroup_addtoindex_isbase = value; }
    inline void setQGraphicsItemGroup_RemoveFromIndex_IsBase(bool value) const { qgraphicsitemgroup_removefromindex_isbase = value; }
    inline void setQGraphicsItemGroup_PrepareGeometryChange_IsBase(bool value) const { qgraphicsitemgroup_preparegeometrychange_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicsitemgroup_boundingrect_isbase) {
            qgraphicsitemgroup_boundingrect_isbase = false;
            return QGraphicsItemGroup::boundingRect();
        }
        auto boundingrect_cb = qgraphicsitemgroup_boundingrect_callback;
        if (boundingrect_cb) {
            QRectF* callback_ret = boundingrect_cb();
            return *callback_ret;
        }
        return QGraphicsItemGroup::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicsitemgroup_paint_isbase) {
            qgraphicsitemgroup_paint_isbase = false;
            QGraphicsItemGroup::paint(painter, option, widget);
            return;
        }
        auto paint_cb = qgraphicsitemgroup_paint_callback;
        if (paint_cb) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            paint_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsItemGroup::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicsitemgroup_isobscuredby_isbase) {
            qgraphicsitemgroup_isobscuredby_isbase = false;
            return QGraphicsItemGroup::isObscuredBy(item);
        }
        auto isobscuredby_cb = qgraphicsitemgroup_isobscuredby_callback;
        if (isobscuredby_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;

            bool callback_ret = isobscuredby_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsItemGroup::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicsitemgroup_opaquearea_isbase) {
            qgraphicsitemgroup_opaquearea_isbase = false;
            return QGraphicsItemGroup::opaqueArea();
        }
        auto opaquearea_cb = qgraphicsitemgroup_opaquearea_callback;
        if (opaquearea_cb) {
            QPainterPath* callback_ret = opaquearea_cb();
            return *callback_ret;
        }
        return QGraphicsItemGroup::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicsitemgroup_type_isbase) {
            qgraphicsitemgroup_type_isbase = false;
            return QGraphicsItemGroup::type();
        }
        auto type_cb = qgraphicsitemgroup_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<int>(callback_ret);
        }
        return QGraphicsItemGroup::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicsitemgroup_advance_isbase) {
            qgraphicsitemgroup_advance_isbase = false;
            QGraphicsItemGroup::advance(phase);
            return;
        }
        auto advance_cb = qgraphicsitemgroup_advance_callback;
        if (advance_cb) {
            int cbval1 = phase;

            advance_cb(this, cbval1);
            return;
        }
        QGraphicsItemGroup::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicsitemgroup_shape_isbase) {
            qgraphicsitemgroup_shape_isbase = false;
            return QGraphicsItemGroup::shape();
        }
        auto shape_cb = qgraphicsitemgroup_shape_callback;
        if (shape_cb) {
            QPainterPath* callback_ret = shape_cb();
            return *callback_ret;
        }
        return QGraphicsItemGroup::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicsitemgroup_contains_isbase) {
            qgraphicsitemgroup_contains_isbase = false;
            return QGraphicsItemGroup::contains(point);
        }
        auto contains_cb = qgraphicsitemgroup_contains_callback;
        if (contains_cb) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);

            bool callback_ret = contains_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsItemGroup::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsitemgroup_collideswithitem_isbase) {
            qgraphicsitemgroup_collideswithitem_isbase = false;
            return QGraphicsItemGroup::collidesWithItem(other, mode);
        }
        auto collideswithitem_cb = qgraphicsitemgroup_collideswithitem_callback;
        if (collideswithitem_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithitem_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsItemGroup::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsitemgroup_collideswithpath_isbase) {
            qgraphicsitemgroup_collideswithpath_isbase = false;
            return QGraphicsItemGroup::collidesWithPath(path, mode);
        }
        auto collideswithpath_cb = qgraphicsitemgroup_collideswithpath_callback;
        if (collideswithpath_cb) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithpath_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsItemGroup::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicsitemgroup_sceneeventfilter_isbase) {
            qgraphicsitemgroup_sceneeventfilter_isbase = false;
            return QGraphicsItemGroup::sceneEventFilter(watched, event);
        }
        auto sceneeventfilter_cb = qgraphicsitemgroup_sceneeventfilter_callback;
        if (sceneeventfilter_cb) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = sceneeventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsItemGroup::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicsitemgroup_sceneevent_isbase) {
            qgraphicsitemgroup_sceneevent_isbase = false;
            return QGraphicsItemGroup::sceneEvent(event);
        }
        auto sceneevent_cb = qgraphicsitemgroup_sceneevent_callback;
        if (sceneevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = sceneevent_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsItemGroup::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicsitemgroup_contextmenuevent_isbase) {
            qgraphicsitemgroup_contextmenuevent_isbase = false;
            QGraphicsItemGroup::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qgraphicsitemgroup_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QGraphicsItemGroup::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsitemgroup_dragenterevent_isbase) {
            qgraphicsitemgroup_dragenterevent_isbase = false;
            QGraphicsItemGroup::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qgraphicsitemgroup_dragenterevent_callback;
        if (dragenterevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsItemGroup::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsitemgroup_dragleaveevent_isbase) {
            qgraphicsitemgroup_dragleaveevent_isbase = false;
            QGraphicsItemGroup::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qgraphicsitemgroup_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsItemGroup::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsitemgroup_dragmoveevent_isbase) {
            qgraphicsitemgroup_dragmoveevent_isbase = false;
            QGraphicsItemGroup::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qgraphicsitemgroup_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsItemGroup::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsitemgroup_dropevent_isbase) {
            qgraphicsitemgroup_dropevent_isbase = false;
            QGraphicsItemGroup::dropEvent(event);
            return;
        }
        auto dropevent_cb = qgraphicsitemgroup_dropevent_callback;
        if (dropevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QGraphicsItemGroup::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicsitemgroup_focusinevent_isbase) {
            qgraphicsitemgroup_focusinevent_isbase = false;
            QGraphicsItemGroup::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qgraphicsitemgroup_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QGraphicsItemGroup::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicsitemgroup_focusoutevent_isbase) {
            qgraphicsitemgroup_focusoutevent_isbase = false;
            QGraphicsItemGroup::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qgraphicsitemgroup_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QGraphicsItemGroup::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsitemgroup_hoverenterevent_isbase) {
            qgraphicsitemgroup_hoverenterevent_isbase = false;
            QGraphicsItemGroup::hoverEnterEvent(event);
            return;
        }
        auto hoverenterevent_cb = qgraphicsitemgroup_hoverenterevent_callback;
        if (hoverenterevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsItemGroup::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsitemgroup_hovermoveevent_isbase) {
            qgraphicsitemgroup_hovermoveevent_isbase = false;
            QGraphicsItemGroup::hoverMoveEvent(event);
            return;
        }
        auto hovermoveevent_cb = qgraphicsitemgroup_hovermoveevent_callback;
        if (hovermoveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hovermoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsItemGroup::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsitemgroup_hoverleaveevent_isbase) {
            qgraphicsitemgroup_hoverleaveevent_isbase = false;
            QGraphicsItemGroup::hoverLeaveEvent(event);
            return;
        }
        auto hoverleaveevent_cb = qgraphicsitemgroup_hoverleaveevent_callback;
        if (hoverleaveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsItemGroup::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicsitemgroup_keypressevent_isbase) {
            qgraphicsitemgroup_keypressevent_isbase = false;
            QGraphicsItemGroup::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qgraphicsitemgroup_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QGraphicsItemGroup::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicsitemgroup_keyreleaseevent_isbase) {
            qgraphicsitemgroup_keyreleaseevent_isbase = false;
            QGraphicsItemGroup::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qgraphicsitemgroup_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsItemGroup::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsitemgroup_mousepressevent_isbase) {
            qgraphicsitemgroup_mousepressevent_isbase = false;
            QGraphicsItemGroup::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qgraphicsitemgroup_mousepressevent_callback;
        if (mousepressevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QGraphicsItemGroup::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsitemgroup_mousemoveevent_isbase) {
            qgraphicsitemgroup_mousemoveevent_isbase = false;
            QGraphicsItemGroup::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qgraphicsitemgroup_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsItemGroup::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsitemgroup_mousereleaseevent_isbase) {
            qgraphicsitemgroup_mousereleaseevent_isbase = false;
            QGraphicsItemGroup::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qgraphicsitemgroup_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsItemGroup::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsitemgroup_mousedoubleclickevent_isbase) {
            qgraphicsitemgroup_mousedoubleclickevent_isbase = false;
            QGraphicsItemGroup::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qgraphicsitemgroup_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QGraphicsItemGroup::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicsitemgroup_wheelevent_isbase) {
            qgraphicsitemgroup_wheelevent_isbase = false;
            QGraphicsItemGroup::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qgraphicsitemgroup_wheelevent_callback;
        if (wheelevent_cb) {
            QGraphicsSceneWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QGraphicsItemGroup::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicsitemgroup_inputmethodevent_isbase) {
            qgraphicsitemgroup_inputmethodevent_isbase = false;
            QGraphicsItemGroup::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = qgraphicsitemgroup_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QGraphicsItemGroup::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicsitemgroup_inputmethodquery_isbase) {
            qgraphicsitemgroup_inputmethodquery_isbase = false;
            return QGraphicsItemGroup::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qgraphicsitemgroup_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsItemGroup::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicsitemgroup_itemchange_isbase) {
            qgraphicsitemgroup_itemchange_isbase = false;
            return QGraphicsItemGroup::itemChange(change, value);
        }
        auto itemchange_cb = qgraphicsitemgroup_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            QVariant* callback_ret = itemchange_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QGraphicsItemGroup::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicsitemgroup_supportsextension_isbase) {
            qgraphicsitemgroup_supportsextension_isbase = false;
            return QGraphicsItemGroup::supportsExtension(extension);
        }
        auto supportsextension_cb = qgraphicsitemgroup_supportsextension_callback;
        if (supportsextension_cb) {
            int cbval1 = static_cast<int>(extension);

            bool callback_ret = supportsextension_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsItemGroup::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicsitemgroup_setextension_isbase) {
            qgraphicsitemgroup_setextension_isbase = false;
            QGraphicsItemGroup::setExtension(extension, variant);
            return;
        }
        auto setextension_cb = qgraphicsitemgroup_setextension_callback;
        if (setextension_cb) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);

            setextension_cb(this, cbval1, cbval2);
            return;
        }
        QGraphicsItemGroup::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicsitemgroup_extension_isbase) {
            qgraphicsitemgroup_extension_isbase = false;
            return QGraphicsItemGroup::extension(variant);
        }
        auto extension_cb = qgraphicsitemgroup_extension_callback;
        if (extension_cb) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);

            QVariant* callback_ret = extension_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsItemGroup::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qgraphicsitemgroup_updatemicrofocus_isbase) {
            qgraphicsitemgroup_updatemicrofocus_isbase = false;
            QGraphicsItemGroup::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qgraphicsitemgroup_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QGraphicsItemGroup::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qgraphicsitemgroup_addtoindex_isbase) {
            qgraphicsitemgroup_addtoindex_isbase = false;
            QGraphicsItemGroup::addToIndex();
            return;
        }
        auto addtoindex_cb = qgraphicsitemgroup_addtoindex_callback;
        if (addtoindex_cb) {
            addtoindex_cb();
            return;
        }
        QGraphicsItemGroup::addToIndex();
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qgraphicsitemgroup_removefromindex_isbase) {
            qgraphicsitemgroup_removefromindex_isbase = false;
            QGraphicsItemGroup::removeFromIndex();
            return;
        }
        auto removefromindex_cb = qgraphicsitemgroup_removefromindex_callback;
        if (removefromindex_cb) {
            removefromindex_cb();
            return;
        }
        QGraphicsItemGroup::removeFromIndex();
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qgraphicsitemgroup_preparegeometrychange_isbase) {
            qgraphicsitemgroup_preparegeometrychange_isbase = false;
            QGraphicsItemGroup::prepareGeometryChange();
            return;
        }
        auto preparegeometrychange_cb = qgraphicsitemgroup_preparegeometrychange_callback;
        if (preparegeometrychange_cb) {
            preparegeometrychange_cb();
            return;
        }
        QGraphicsItemGroup::prepareGeometryChange();
    }

    // Friend functions
    friend bool QGraphicsItemGroup_SceneEventFilter(QGraphicsItemGroup* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsItemGroup_SuperSceneEventFilter(QGraphicsItemGroup* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsItemGroup_SceneEvent(QGraphicsItemGroup* self, QEvent* event);
    friend bool QGraphicsItemGroup_SuperSceneEvent(QGraphicsItemGroup* self, QEvent* event);
    friend void QGraphicsItemGroup_ContextMenuEvent(QGraphicsItemGroup* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsItemGroup_SuperContextMenuEvent(QGraphicsItemGroup* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsItemGroup_DragEnterEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItemGroup_SuperDragEnterEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItemGroup_DragLeaveEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItemGroup_SuperDragLeaveEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItemGroup_DragMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItemGroup_SuperDragMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItemGroup_DropEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItemGroup_SuperDropEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsItemGroup_FocusInEvent(QGraphicsItemGroup* self, QFocusEvent* event);
    friend void QGraphicsItemGroup_SuperFocusInEvent(QGraphicsItemGroup* self, QFocusEvent* event);
    friend void QGraphicsItemGroup_FocusOutEvent(QGraphicsItemGroup* self, QFocusEvent* event);
    friend void QGraphicsItemGroup_SuperFocusOutEvent(QGraphicsItemGroup* self, QFocusEvent* event);
    friend void QGraphicsItemGroup_HoverEnterEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsItemGroup_SuperHoverEnterEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsItemGroup_HoverMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsItemGroup_SuperHoverMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsItemGroup_HoverLeaveEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsItemGroup_SuperHoverLeaveEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsItemGroup_KeyPressEvent(QGraphicsItemGroup* self, QKeyEvent* event);
    friend void QGraphicsItemGroup_SuperKeyPressEvent(QGraphicsItemGroup* self, QKeyEvent* event);
    friend void QGraphicsItemGroup_KeyReleaseEvent(QGraphicsItemGroup* self, QKeyEvent* event);
    friend void QGraphicsItemGroup_SuperKeyReleaseEvent(QGraphicsItemGroup* self, QKeyEvent* event);
    friend void QGraphicsItemGroup_MousePressEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItemGroup_SuperMousePressEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItemGroup_MouseMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItemGroup_SuperMouseMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItemGroup_MouseReleaseEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItemGroup_SuperMouseReleaseEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItemGroup_MouseDoubleClickEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItemGroup_SuperMouseDoubleClickEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsItemGroup_WheelEvent(QGraphicsItemGroup* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsItemGroup_SuperWheelEvent(QGraphicsItemGroup* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsItemGroup_InputMethodEvent(QGraphicsItemGroup* self, QInputMethodEvent* event);
    friend void QGraphicsItemGroup_SuperInputMethodEvent(QGraphicsItemGroup* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsItemGroup_InputMethodQuery(const QGraphicsItemGroup* self, int query);
    friend QVariant* QGraphicsItemGroup_SuperInputMethodQuery(const QGraphicsItemGroup* self, int query);
    friend QVariant* QGraphicsItemGroup_ItemChange(QGraphicsItemGroup* self, int change, const QVariant* value);
    friend QVariant* QGraphicsItemGroup_SuperItemChange(QGraphicsItemGroup* self, int change, const QVariant* value);
    friend bool QGraphicsItemGroup_SupportsExtension(const QGraphicsItemGroup* self, int extension);
    friend bool QGraphicsItemGroup_SuperSupportsExtension(const QGraphicsItemGroup* self, int extension);
    friend void QGraphicsItemGroup_SetExtension(QGraphicsItemGroup* self, int extension, const QVariant* variant);
    friend void QGraphicsItemGroup_SuperSetExtension(QGraphicsItemGroup* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsItemGroup_Extension(const QGraphicsItemGroup* self, const QVariant* variant);
    friend QVariant* QGraphicsItemGroup_SuperExtension(const QGraphicsItemGroup* self, const QVariant* variant);
    friend void QGraphicsItemGroup_UpdateMicroFocus(QGraphicsItemGroup* self);
    friend void QGraphicsItemGroup_SuperUpdateMicroFocus(QGraphicsItemGroup* self);
    friend void QGraphicsItemGroup_AddToIndex(QGraphicsItemGroup* self);
    friend void QGraphicsItemGroup_SuperAddToIndex(QGraphicsItemGroup* self);
    friend void QGraphicsItemGroup_RemoveFromIndex(QGraphicsItemGroup* self);
    friend void QGraphicsItemGroup_SuperRemoveFromIndex(QGraphicsItemGroup* self);
    friend void QGraphicsItemGroup_PrepareGeometryChange(QGraphicsItemGroup* self);
    friend void QGraphicsItemGroup_SuperPrepareGeometryChange(QGraphicsItemGroup* self);
};

#endif
