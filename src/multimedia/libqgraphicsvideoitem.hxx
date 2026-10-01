#pragma once
#ifndef MULTIMEDIA_LIBQGRAPHICSVIDEOITEM_HXX
#define MULTIMEDIA_LIBQGRAPHICSVIDEOITEM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGraphicsVideoItem
class VirtualQGraphicsVideoItem final : public QGraphicsVideoItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsItem::Extension;
    using QGraphicsVideoItem_MetaObject_Callback = QMetaObject* (*)(const QGraphicsVideoItem*);
    using QGraphicsVideoItem_Metacast_Callback = void* (*)(QGraphicsVideoItem*, const char*);
    using QGraphicsVideoItem_Metacall_Callback = int (*)(QGraphicsVideoItem*, int, int, void**);
    using QGraphicsVideoItem_BoundingRect_Callback = QRectF* (*)(const QGraphicsVideoItem*);
    using QGraphicsVideoItem_Paint_Callback = void (*)(QGraphicsVideoItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsVideoItem_Type_Callback = int (*)(const QGraphicsVideoItem*);
    using QGraphicsVideoItem_TimerEvent_Callback = void (*)(QGraphicsVideoItem*, QTimerEvent*);
    using QGraphicsVideoItem_ItemChange_Callback = QVariant* (*)(QGraphicsVideoItem*, int, QVariant*);
    using QGraphicsVideoItem_Event_Callback = bool (*)(QGraphicsVideoItem*, QEvent*);
    using QGraphicsVideoItem_EventFilter_Callback = bool (*)(QGraphicsVideoItem*, QObject*, QEvent*);
    using QGraphicsVideoItem_ChildEvent_Callback = void (*)(QGraphicsVideoItem*, QChildEvent*);
    using QGraphicsVideoItem_CustomEvent_Callback = void (*)(QGraphicsVideoItem*, QEvent*);
    using QGraphicsVideoItem_ConnectNotify_Callback = void (*)(QGraphicsVideoItem*, QMetaMethod*);
    using QGraphicsVideoItem_DisconnectNotify_Callback = void (*)(QGraphicsVideoItem*, QMetaMethod*);
    using QGraphicsVideoItem_Advance_Callback = void (*)(QGraphicsVideoItem*, int);
    using QGraphicsVideoItem_Shape_Callback = QPainterPath* (*)(const QGraphicsVideoItem*);
    using QGraphicsVideoItem_Contains_Callback = bool (*)(const QGraphicsVideoItem*, QPointF*);
    using QGraphicsVideoItem_CollidesWithItem_Callback = bool (*)(const QGraphicsVideoItem*, QGraphicsItem*, int);
    using QGraphicsVideoItem_CollidesWithPath_Callback = bool (*)(const QGraphicsVideoItem*, QPainterPath*, int);
    using QGraphicsVideoItem_IsObscuredBy_Callback = bool (*)(const QGraphicsVideoItem*, QGraphicsItem*);
    using QGraphicsVideoItem_OpaqueArea_Callback = QPainterPath* (*)(const QGraphicsVideoItem*);
    using QGraphicsVideoItem_SceneEventFilter_Callback = bool (*)(QGraphicsVideoItem*, QGraphicsItem*, QEvent*);
    using QGraphicsVideoItem_SceneEvent_Callback = bool (*)(QGraphicsVideoItem*, QEvent*);
    using QGraphicsVideoItem_ContextMenuEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsVideoItem_DragEnterEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsVideoItem_DragLeaveEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsVideoItem_DragMoveEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsVideoItem_DropEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsVideoItem_FocusInEvent_Callback = void (*)(QGraphicsVideoItem*, QFocusEvent*);
    using QGraphicsVideoItem_FocusOutEvent_Callback = void (*)(QGraphicsVideoItem*, QFocusEvent*);
    using QGraphicsVideoItem_HoverEnterEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsVideoItem_HoverMoveEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsVideoItem_HoverLeaveEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsVideoItem_KeyPressEvent_Callback = void (*)(QGraphicsVideoItem*, QKeyEvent*);
    using QGraphicsVideoItem_KeyReleaseEvent_Callback = void (*)(QGraphicsVideoItem*, QKeyEvent*);
    using QGraphicsVideoItem_MousePressEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsVideoItem_MouseMoveEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsVideoItem_MouseReleaseEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsVideoItem_MouseDoubleClickEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsVideoItem_WheelEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneWheelEvent*);
    using QGraphicsVideoItem_InputMethodEvent_Callback = void (*)(QGraphicsVideoItem*, QInputMethodEvent*);
    using QGraphicsVideoItem_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsVideoItem*, int);
    using QGraphicsVideoItem_SupportsExtension_Callback = bool (*)(const QGraphicsVideoItem*, int);
    using QGraphicsVideoItem_SetExtension_Callback = void (*)(QGraphicsVideoItem*, int, QVariant*);
    using QGraphicsVideoItem_Extension_Callback = QVariant* (*)(const QGraphicsVideoItem*, QVariant*);
    using QGraphicsVideoItem::addToIndex;
    using QGraphicsVideoItem::isSignalConnected;
    using QGraphicsVideoItem::prepareGeometryChange;
    using QGraphicsVideoItem::receivers;
    using QGraphicsVideoItem::removeFromIndex;
    using QGraphicsVideoItem::sender;
    using QGraphicsVideoItem::senderSignalIndex;
    using QGraphicsVideoItem::updateMicroFocus;

    // Instance callback storage
    QGraphicsVideoItem_MetaObject_Callback qgraphicsvideoitem_metaobject_callback = nullptr;
    QGraphicsVideoItem_Metacast_Callback qgraphicsvideoitem_metacast_callback = nullptr;
    QGraphicsVideoItem_Metacall_Callback qgraphicsvideoitem_metacall_callback = nullptr;
    QGraphicsVideoItem_BoundingRect_Callback qgraphicsvideoitem_boundingrect_callback = nullptr;
    QGraphicsVideoItem_Paint_Callback qgraphicsvideoitem_paint_callback = nullptr;
    QGraphicsVideoItem_Type_Callback qgraphicsvideoitem_type_callback = nullptr;
    QGraphicsVideoItem_TimerEvent_Callback qgraphicsvideoitem_timerevent_callback = nullptr;
    QGraphicsVideoItem_ItemChange_Callback qgraphicsvideoitem_itemchange_callback = nullptr;
    QGraphicsVideoItem_Event_Callback qgraphicsvideoitem_event_callback = nullptr;
    QGraphicsVideoItem_EventFilter_Callback qgraphicsvideoitem_eventfilter_callback = nullptr;
    QGraphicsVideoItem_ChildEvent_Callback qgraphicsvideoitem_childevent_callback = nullptr;
    QGraphicsVideoItem_CustomEvent_Callback qgraphicsvideoitem_customevent_callback = nullptr;
    QGraphicsVideoItem_ConnectNotify_Callback qgraphicsvideoitem_connectnotify_callback = nullptr;
    QGraphicsVideoItem_DisconnectNotify_Callback qgraphicsvideoitem_disconnectnotify_callback = nullptr;
    QGraphicsVideoItem_Advance_Callback qgraphicsvideoitem_advance_callback = nullptr;
    QGraphicsVideoItem_Shape_Callback qgraphicsvideoitem_shape_callback = nullptr;
    QGraphicsVideoItem_Contains_Callback qgraphicsvideoitem_contains_callback = nullptr;
    QGraphicsVideoItem_CollidesWithItem_Callback qgraphicsvideoitem_collideswithitem_callback = nullptr;
    QGraphicsVideoItem_CollidesWithPath_Callback qgraphicsvideoitem_collideswithpath_callback = nullptr;
    QGraphicsVideoItem_IsObscuredBy_Callback qgraphicsvideoitem_isobscuredby_callback = nullptr;
    QGraphicsVideoItem_OpaqueArea_Callback qgraphicsvideoitem_opaquearea_callback = nullptr;
    QGraphicsVideoItem_SceneEventFilter_Callback qgraphicsvideoitem_sceneeventfilter_callback = nullptr;
    QGraphicsVideoItem_SceneEvent_Callback qgraphicsvideoitem_sceneevent_callback = nullptr;
    QGraphicsVideoItem_ContextMenuEvent_Callback qgraphicsvideoitem_contextmenuevent_callback = nullptr;
    QGraphicsVideoItem_DragEnterEvent_Callback qgraphicsvideoitem_dragenterevent_callback = nullptr;
    QGraphicsVideoItem_DragLeaveEvent_Callback qgraphicsvideoitem_dragleaveevent_callback = nullptr;
    QGraphicsVideoItem_DragMoveEvent_Callback qgraphicsvideoitem_dragmoveevent_callback = nullptr;
    QGraphicsVideoItem_DropEvent_Callback qgraphicsvideoitem_dropevent_callback = nullptr;
    QGraphicsVideoItem_FocusInEvent_Callback qgraphicsvideoitem_focusinevent_callback = nullptr;
    QGraphicsVideoItem_FocusOutEvent_Callback qgraphicsvideoitem_focusoutevent_callback = nullptr;
    QGraphicsVideoItem_HoverEnterEvent_Callback qgraphicsvideoitem_hoverenterevent_callback = nullptr;
    QGraphicsVideoItem_HoverMoveEvent_Callback qgraphicsvideoitem_hovermoveevent_callback = nullptr;
    QGraphicsVideoItem_HoverLeaveEvent_Callback qgraphicsvideoitem_hoverleaveevent_callback = nullptr;
    QGraphicsVideoItem_KeyPressEvent_Callback qgraphicsvideoitem_keypressevent_callback = nullptr;
    QGraphicsVideoItem_KeyReleaseEvent_Callback qgraphicsvideoitem_keyreleaseevent_callback = nullptr;
    QGraphicsVideoItem_MousePressEvent_Callback qgraphicsvideoitem_mousepressevent_callback = nullptr;
    QGraphicsVideoItem_MouseMoveEvent_Callback qgraphicsvideoitem_mousemoveevent_callback = nullptr;
    QGraphicsVideoItem_MouseReleaseEvent_Callback qgraphicsvideoitem_mousereleaseevent_callback = nullptr;
    QGraphicsVideoItem_MouseDoubleClickEvent_Callback qgraphicsvideoitem_mousedoubleclickevent_callback = nullptr;
    QGraphicsVideoItem_WheelEvent_Callback qgraphicsvideoitem_wheelevent_callback = nullptr;
    QGraphicsVideoItem_InputMethodEvent_Callback qgraphicsvideoitem_inputmethodevent_callback = nullptr;
    QGraphicsVideoItem_InputMethodQuery_Callback qgraphicsvideoitem_inputmethodquery_callback = nullptr;
    QGraphicsVideoItem_SupportsExtension_Callback qgraphicsvideoitem_supportsextension_callback = nullptr;
    QGraphicsVideoItem_SetExtension_Callback qgraphicsvideoitem_setextension_callback = nullptr;
    QGraphicsVideoItem_Extension_Callback qgraphicsvideoitem_extension_callback = nullptr;

    // Access struct
    struct Base : QGraphicsVideoItem {
        using QGraphicsVideoItem::childEvent;
        using QGraphicsVideoItem::connectNotify;
        using QGraphicsVideoItem::contextMenuEvent;
        using QGraphicsVideoItem::customEvent;
        using QGraphicsVideoItem::disconnectNotify;
        using QGraphicsVideoItem::dragEnterEvent;
        using QGraphicsVideoItem::dragLeaveEvent;
        using QGraphicsVideoItem::dragMoveEvent;
        using QGraphicsVideoItem::dropEvent;
        using QGraphicsVideoItem::event;
        using QGraphicsVideoItem::extension;
        using QGraphicsVideoItem::focusInEvent;
        using QGraphicsVideoItem::focusOutEvent;
        using QGraphicsVideoItem::hoverEnterEvent;
        using QGraphicsVideoItem::hoverLeaveEvent;
        using QGraphicsVideoItem::hoverMoveEvent;
        using QGraphicsVideoItem::inputMethodEvent;
        using QGraphicsVideoItem::inputMethodQuery;
        using QGraphicsVideoItem::itemChange;
        using QGraphicsVideoItem::keyPressEvent;
        using QGraphicsVideoItem::keyReleaseEvent;
        using QGraphicsVideoItem::mouseDoubleClickEvent;
        using QGraphicsVideoItem::mouseMoveEvent;
        using QGraphicsVideoItem::mousePressEvent;
        using QGraphicsVideoItem::mouseReleaseEvent;
        using QGraphicsVideoItem::sceneEvent;
        using QGraphicsVideoItem::sceneEventFilter;
        using QGraphicsVideoItem::setExtension;
        using QGraphicsVideoItem::supportsExtension;
        using QGraphicsVideoItem::timerEvent;
        using QGraphicsVideoItem::wheelEvent;
    };

    VirtualQGraphicsVideoItem() : QGraphicsVideoItem() {};
    VirtualQGraphicsVideoItem(QGraphicsItem* parent) : QGraphicsVideoItem(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicsvideoitem_metaobject_callback) {
            QMetaObject* callback_ret = qgraphicsvideoitem_metaobject_callback(this);
            return callback_ret;
        }
        return QGraphicsVideoItem::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicsvideoitem_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgraphicsvideoitem_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsVideoItem::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsvideoitem_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgraphicsvideoitem_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsVideoItem::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicsvideoitem_boundingrect_callback) {
            QRectF* callback_ret = qgraphicsvideoitem_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsVideoItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicsvideoitem_paint_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qgraphicsvideoitem_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsVideoItem::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicsvideoitem_type_callback) {
            int callback_ret = qgraphicsvideoitem_type_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsVideoItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsvideoitem_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgraphicsvideoitem_timerevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicsvideoitem_itemchange_callback) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            QVariant* callback_ret = qgraphicsvideoitem_itemchange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsVideoItem::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* ev) override {
        if (qgraphicsvideoitem_event_callback) {
            QEvent* cbval1 = ev;
            bool callback_ret = qgraphicsvideoitem_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsVideoItem::event(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicsvideoitem_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicsvideoitem_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsVideoItem::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsvideoitem_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgraphicsvideoitem_childevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsvideoitem_customevent_callback) {
            QEvent* cbval1 = event;
            qgraphicsvideoitem_customevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsvideoitem_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsvideoitem_connectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsvideoitem_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsvideoitem_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicsvideoitem_advance_callback) {
            int cbval1 = phase;
            qgraphicsvideoitem_advance_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicsvideoitem_shape_callback) {
            QPainterPath* callback_ret = qgraphicsvideoitem_shape_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsVideoItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicsvideoitem_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qgraphicsvideoitem_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsVideoItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsvideoitem_collideswithitem_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicsvideoitem_collideswithitem_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsVideoItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsvideoitem_collideswithpath_callback) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicsvideoitem_collideswithpath_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsVideoItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicsvideoitem_isobscuredby_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;
            bool callback_ret = qgraphicsvideoitem_isobscuredby_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsVideoItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicsvideoitem_opaquearea_callback) {
            QPainterPath* callback_ret = qgraphicsvideoitem_opaquearea_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsVideoItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicsvideoitem_sceneeventfilter_callback) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicsvideoitem_sceneeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsVideoItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicsvideoitem_sceneevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicsvideoitem_sceneevent_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsVideoItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicsvideoitem_contextmenuevent_callback) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;
            qgraphicsvideoitem_contextmenuevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsvideoitem_dragenterevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsvideoitem_dragenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsvideoitem_dragleaveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsvideoitem_dragleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsvideoitem_dragmoveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsvideoitem_dragmoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsvideoitem_dropevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsvideoitem_dropevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicsvideoitem_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicsvideoitem_focusinevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicsvideoitem_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicsvideoitem_focusoutevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsvideoitem_hoverenterevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsvideoitem_hoverenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsvideoitem_hovermoveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsvideoitem_hovermoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsvideoitem_hoverleaveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsvideoitem_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicsvideoitem_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicsvideoitem_keypressevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicsvideoitem_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicsvideoitem_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsvideoitem_mousepressevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsvideoitem_mousepressevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsvideoitem_mousemoveevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsvideoitem_mousemoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsvideoitem_mousereleaseevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsvideoitem_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsvideoitem_mousedoubleclickevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsvideoitem_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicsvideoitem_wheelevent_callback) {
            QGraphicsSceneWheelEvent* cbval1 = event;
            qgraphicsvideoitem_wheelevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicsvideoitem_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qgraphicsvideoitem_inputmethodevent_callback(this, cbval1);
            return;
        }
        QGraphicsVideoItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicsvideoitem_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qgraphicsvideoitem_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsVideoItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicsvideoitem_supportsextension_callback) {
            int cbval1 = static_cast<int>(extension);
            bool callback_ret = qgraphicsvideoitem_supportsextension_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsVideoItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicsvideoitem_setextension_callback) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);
            qgraphicsvideoitem_setextension_callback(this, cbval1, cbval2);
            return;
        }
        QGraphicsVideoItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicsvideoitem_extension_callback) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);
            QVariant* callback_ret = qgraphicsvideoitem_extension_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsVideoItem::extension(variant);
    }

    // Friend functions
    friend void QGraphicsVideoItem_SuperTimerEvent(QGraphicsVideoItem* self, QTimerEvent* event);
    friend QVariant* QGraphicsVideoItem_SuperItemChange(QGraphicsVideoItem* self, int change, const QVariant* value);
    friend bool QGraphicsVideoItem_SuperEvent(QGraphicsVideoItem* self, QEvent* ev);
    friend void QGraphicsVideoItem_SuperChildEvent(QGraphicsVideoItem* self, QChildEvent* event);
    friend void QGraphicsVideoItem_SuperCustomEvent(QGraphicsVideoItem* self, QEvent* event);
    friend void QGraphicsVideoItem_SuperConnectNotify(QGraphicsVideoItem* self, const QMetaMethod* signal);
    friend void QGraphicsVideoItem_SuperDisconnectNotify(QGraphicsVideoItem* self, const QMetaMethod* signal);
    friend bool QGraphicsVideoItem_SuperSceneEventFilter(QGraphicsVideoItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsVideoItem_SuperSceneEvent(QGraphicsVideoItem* self, QEvent* event);
    friend void QGraphicsVideoItem_SuperContextMenuEvent(QGraphicsVideoItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsVideoItem_SuperDragEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsVideoItem_SuperDragLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsVideoItem_SuperDragMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsVideoItem_SuperDropEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsVideoItem_SuperFocusInEvent(QGraphicsVideoItem* self, QFocusEvent* event);
    friend void QGraphicsVideoItem_SuperFocusOutEvent(QGraphicsVideoItem* self, QFocusEvent* event);
    friend void QGraphicsVideoItem_SuperHoverEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsVideoItem_SuperHoverMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsVideoItem_SuperHoverLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsVideoItem_SuperKeyPressEvent(QGraphicsVideoItem* self, QKeyEvent* event);
    friend void QGraphicsVideoItem_SuperKeyReleaseEvent(QGraphicsVideoItem* self, QKeyEvent* event);
    friend void QGraphicsVideoItem_SuperMousePressEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsVideoItem_SuperMouseMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsVideoItem_SuperMouseReleaseEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsVideoItem_SuperMouseDoubleClickEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsVideoItem_SuperWheelEvent(QGraphicsVideoItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsVideoItem_SuperInputMethodEvent(QGraphicsVideoItem* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsVideoItem_SuperInputMethodQuery(const QGraphicsVideoItem* self, int query);
    friend bool QGraphicsVideoItem_SuperSupportsExtension(const QGraphicsVideoItem* self, int extension);
    friend void QGraphicsVideoItem_SuperSetExtension(QGraphicsVideoItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsVideoItem_SuperExtension(const QGraphicsVideoItem* self, const QVariant* variant);
};

#endif
