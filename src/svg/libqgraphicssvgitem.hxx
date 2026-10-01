#pragma once
#ifndef SVG_LIBQGRAPHICSSVGITEM_HXX
#define SVG_LIBQGRAPHICSSVGITEM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGraphicsSvgItem
class VirtualQGraphicsSvgItem final : public QGraphicsSvgItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsItem::Extension;
    using QGraphicsSvgItem_MetaObject_Callback = QMetaObject* (*)(const QGraphicsSvgItem*);
    using QGraphicsSvgItem_Metacast_Callback = void* (*)(QGraphicsSvgItem*, const char*);
    using QGraphicsSvgItem_Metacall_Callback = int (*)(QGraphicsSvgItem*, int, int, void**);
    using QGraphicsSvgItem_BoundingRect_Callback = QRectF* (*)(const QGraphicsSvgItem*);
    using QGraphicsSvgItem_Paint_Callback = void (*)(QGraphicsSvgItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsSvgItem_Type_Callback = int (*)(const QGraphicsSvgItem*);
    using QGraphicsSvgItem_Event_Callback = bool (*)(QGraphicsSvgItem*, QEvent*);
    using QGraphicsSvgItem_EventFilter_Callback = bool (*)(QGraphicsSvgItem*, QObject*, QEvent*);
    using QGraphicsSvgItem_TimerEvent_Callback = void (*)(QGraphicsSvgItem*, QTimerEvent*);
    using QGraphicsSvgItem_ChildEvent_Callback = void (*)(QGraphicsSvgItem*, QChildEvent*);
    using QGraphicsSvgItem_CustomEvent_Callback = void (*)(QGraphicsSvgItem*, QEvent*);
    using QGraphicsSvgItem_ConnectNotify_Callback = void (*)(QGraphicsSvgItem*, QMetaMethod*);
    using QGraphicsSvgItem_DisconnectNotify_Callback = void (*)(QGraphicsSvgItem*, QMetaMethod*);
    using QGraphicsSvgItem_Advance_Callback = void (*)(QGraphicsSvgItem*, int);
    using QGraphicsSvgItem_Shape_Callback = QPainterPath* (*)(const QGraphicsSvgItem*);
    using QGraphicsSvgItem_Contains_Callback = bool (*)(const QGraphicsSvgItem*, QPointF*);
    using QGraphicsSvgItem_CollidesWithItem_Callback = bool (*)(const QGraphicsSvgItem*, QGraphicsItem*, int);
    using QGraphicsSvgItem_CollidesWithPath_Callback = bool (*)(const QGraphicsSvgItem*, QPainterPath*, int);
    using QGraphicsSvgItem_IsObscuredBy_Callback = bool (*)(const QGraphicsSvgItem*, QGraphicsItem*);
    using QGraphicsSvgItem_OpaqueArea_Callback = QPainterPath* (*)(const QGraphicsSvgItem*);
    using QGraphicsSvgItem_SceneEventFilter_Callback = bool (*)(QGraphicsSvgItem*, QGraphicsItem*, QEvent*);
    using QGraphicsSvgItem_SceneEvent_Callback = bool (*)(QGraphicsSvgItem*, QEvent*);
    using QGraphicsSvgItem_ContextMenuEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsSvgItem_DragEnterEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsSvgItem_DragLeaveEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsSvgItem_DragMoveEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsSvgItem_DropEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsSvgItem_FocusInEvent_Callback = void (*)(QGraphicsSvgItem*, QFocusEvent*);
    using QGraphicsSvgItem_FocusOutEvent_Callback = void (*)(QGraphicsSvgItem*, QFocusEvent*);
    using QGraphicsSvgItem_HoverEnterEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsSvgItem_HoverMoveEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsSvgItem_HoverLeaveEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsSvgItem_KeyPressEvent_Callback = void (*)(QGraphicsSvgItem*, QKeyEvent*);
    using QGraphicsSvgItem_KeyReleaseEvent_Callback = void (*)(QGraphicsSvgItem*, QKeyEvent*);
    using QGraphicsSvgItem_MousePressEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsSvgItem_MouseMoveEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsSvgItem_MouseReleaseEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsSvgItem_MouseDoubleClickEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsSvgItem_WheelEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneWheelEvent*);
    using QGraphicsSvgItem_InputMethodEvent_Callback = void (*)(QGraphicsSvgItem*, QInputMethodEvent*);
    using QGraphicsSvgItem_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsSvgItem*, int);
    using QGraphicsSvgItem_ItemChange_Callback = QVariant* (*)(QGraphicsSvgItem*, int, QVariant*);
    using QGraphicsSvgItem_SupportsExtension_Callback = bool (*)(const QGraphicsSvgItem*, int);
    using QGraphicsSvgItem_SetExtension_Callback = void (*)(QGraphicsSvgItem*, int, QVariant*);
    using QGraphicsSvgItem_Extension_Callback = QVariant* (*)(const QGraphicsSvgItem*, QVariant*);
    using QGraphicsSvgItem::addToIndex;
    using QGraphicsSvgItem::isSignalConnected;
    using QGraphicsSvgItem::prepareGeometryChange;
    using QGraphicsSvgItem::receivers;
    using QGraphicsSvgItem::removeFromIndex;
    using QGraphicsSvgItem::sender;
    using QGraphicsSvgItem::senderSignalIndex;
    using QGraphicsSvgItem::updateMicroFocus;

    // Instance callback storage
    QGraphicsSvgItem_MetaObject_Callback qgraphicssvgitem_metaobject_callback = nullptr;
    QGraphicsSvgItem_Metacast_Callback qgraphicssvgitem_metacast_callback = nullptr;
    QGraphicsSvgItem_Metacall_Callback qgraphicssvgitem_metacall_callback = nullptr;
    QGraphicsSvgItem_BoundingRect_Callback qgraphicssvgitem_boundingrect_callback = nullptr;
    QGraphicsSvgItem_Paint_Callback qgraphicssvgitem_paint_callback = nullptr;
    QGraphicsSvgItem_Type_Callback qgraphicssvgitem_type_callback = nullptr;
    QGraphicsSvgItem_Event_Callback qgraphicssvgitem_event_callback = nullptr;
    QGraphicsSvgItem_EventFilter_Callback qgraphicssvgitem_eventfilter_callback = nullptr;
    QGraphicsSvgItem_TimerEvent_Callback qgraphicssvgitem_timerevent_callback = nullptr;
    QGraphicsSvgItem_ChildEvent_Callback qgraphicssvgitem_childevent_callback = nullptr;
    QGraphicsSvgItem_CustomEvent_Callback qgraphicssvgitem_customevent_callback = nullptr;
    QGraphicsSvgItem_ConnectNotify_Callback qgraphicssvgitem_connectnotify_callback = nullptr;
    QGraphicsSvgItem_DisconnectNotify_Callback qgraphicssvgitem_disconnectnotify_callback = nullptr;
    QGraphicsSvgItem_Advance_Callback qgraphicssvgitem_advance_callback = nullptr;
    QGraphicsSvgItem_Shape_Callback qgraphicssvgitem_shape_callback = nullptr;
    QGraphicsSvgItem_Contains_Callback qgraphicssvgitem_contains_callback = nullptr;
    QGraphicsSvgItem_CollidesWithItem_Callback qgraphicssvgitem_collideswithitem_callback = nullptr;
    QGraphicsSvgItem_CollidesWithPath_Callback qgraphicssvgitem_collideswithpath_callback = nullptr;
    QGraphicsSvgItem_IsObscuredBy_Callback qgraphicssvgitem_isobscuredby_callback = nullptr;
    QGraphicsSvgItem_OpaqueArea_Callback qgraphicssvgitem_opaquearea_callback = nullptr;
    QGraphicsSvgItem_SceneEventFilter_Callback qgraphicssvgitem_sceneeventfilter_callback = nullptr;
    QGraphicsSvgItem_SceneEvent_Callback qgraphicssvgitem_sceneevent_callback = nullptr;
    QGraphicsSvgItem_ContextMenuEvent_Callback qgraphicssvgitem_contextmenuevent_callback = nullptr;
    QGraphicsSvgItem_DragEnterEvent_Callback qgraphicssvgitem_dragenterevent_callback = nullptr;
    QGraphicsSvgItem_DragLeaveEvent_Callback qgraphicssvgitem_dragleaveevent_callback = nullptr;
    QGraphicsSvgItem_DragMoveEvent_Callback qgraphicssvgitem_dragmoveevent_callback = nullptr;
    QGraphicsSvgItem_DropEvent_Callback qgraphicssvgitem_dropevent_callback = nullptr;
    QGraphicsSvgItem_FocusInEvent_Callback qgraphicssvgitem_focusinevent_callback = nullptr;
    QGraphicsSvgItem_FocusOutEvent_Callback qgraphicssvgitem_focusoutevent_callback = nullptr;
    QGraphicsSvgItem_HoverEnterEvent_Callback qgraphicssvgitem_hoverenterevent_callback = nullptr;
    QGraphicsSvgItem_HoverMoveEvent_Callback qgraphicssvgitem_hovermoveevent_callback = nullptr;
    QGraphicsSvgItem_HoverLeaveEvent_Callback qgraphicssvgitem_hoverleaveevent_callback = nullptr;
    QGraphicsSvgItem_KeyPressEvent_Callback qgraphicssvgitem_keypressevent_callback = nullptr;
    QGraphicsSvgItem_KeyReleaseEvent_Callback qgraphicssvgitem_keyreleaseevent_callback = nullptr;
    QGraphicsSvgItem_MousePressEvent_Callback qgraphicssvgitem_mousepressevent_callback = nullptr;
    QGraphicsSvgItem_MouseMoveEvent_Callback qgraphicssvgitem_mousemoveevent_callback = nullptr;
    QGraphicsSvgItem_MouseReleaseEvent_Callback qgraphicssvgitem_mousereleaseevent_callback = nullptr;
    QGraphicsSvgItem_MouseDoubleClickEvent_Callback qgraphicssvgitem_mousedoubleclickevent_callback = nullptr;
    QGraphicsSvgItem_WheelEvent_Callback qgraphicssvgitem_wheelevent_callback = nullptr;
    QGraphicsSvgItem_InputMethodEvent_Callback qgraphicssvgitem_inputmethodevent_callback = nullptr;
    QGraphicsSvgItem_InputMethodQuery_Callback qgraphicssvgitem_inputmethodquery_callback = nullptr;
    QGraphicsSvgItem_ItemChange_Callback qgraphicssvgitem_itemchange_callback = nullptr;
    QGraphicsSvgItem_SupportsExtension_Callback qgraphicssvgitem_supportsextension_callback = nullptr;
    QGraphicsSvgItem_SetExtension_Callback qgraphicssvgitem_setextension_callback = nullptr;
    QGraphicsSvgItem_Extension_Callback qgraphicssvgitem_extension_callback = nullptr;

    // Access struct
    struct Base : QGraphicsSvgItem {
        using QGraphicsSvgItem::childEvent;
        using QGraphicsSvgItem::connectNotify;
        using QGraphicsSvgItem::contextMenuEvent;
        using QGraphicsSvgItem::customEvent;
        using QGraphicsSvgItem::disconnectNotify;
        using QGraphicsSvgItem::dragEnterEvent;
        using QGraphicsSvgItem::dragLeaveEvent;
        using QGraphicsSvgItem::dragMoveEvent;
        using QGraphicsSvgItem::dropEvent;
        using QGraphicsSvgItem::event;
        using QGraphicsSvgItem::extension;
        using QGraphicsSvgItem::focusInEvent;
        using QGraphicsSvgItem::focusOutEvent;
        using QGraphicsSvgItem::hoverEnterEvent;
        using QGraphicsSvgItem::hoverLeaveEvent;
        using QGraphicsSvgItem::hoverMoveEvent;
        using QGraphicsSvgItem::inputMethodEvent;
        using QGraphicsSvgItem::inputMethodQuery;
        using QGraphicsSvgItem::itemChange;
        using QGraphicsSvgItem::keyPressEvent;
        using QGraphicsSvgItem::keyReleaseEvent;
        using QGraphicsSvgItem::mouseDoubleClickEvent;
        using QGraphicsSvgItem::mouseMoveEvent;
        using QGraphicsSvgItem::mousePressEvent;
        using QGraphicsSvgItem::mouseReleaseEvent;
        using QGraphicsSvgItem::sceneEvent;
        using QGraphicsSvgItem::sceneEventFilter;
        using QGraphicsSvgItem::setExtension;
        using QGraphicsSvgItem::supportsExtension;
        using QGraphicsSvgItem::timerEvent;
        using QGraphicsSvgItem::wheelEvent;
    };

    VirtualQGraphicsSvgItem() : QGraphicsSvgItem() {};
    VirtualQGraphicsSvgItem(const QString& fileName) : QGraphicsSvgItem(fileName) {};
    VirtualQGraphicsSvgItem(QGraphicsItem* parentItem) : QGraphicsSvgItem(parentItem) {};
    VirtualQGraphicsSvgItem(const QString& fileName, QGraphicsItem* parentItem) : QGraphicsSvgItem(fileName, parentItem) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicssvgitem_metaobject_callback) {
            QMetaObject* callback_ret = qgraphicssvgitem_metaobject_callback(this);
            return callback_ret;
        }
        return QGraphicsSvgItem::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicssvgitem_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgraphicssvgitem_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsSvgItem::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicssvgitem_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgraphicssvgitem_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsSvgItem::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicssvgitem_boundingrect_callback) {
            QRectF* callback_ret = qgraphicssvgitem_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsSvgItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicssvgitem_paint_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qgraphicssvgitem_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsSvgItem::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicssvgitem_type_callback) {
            int callback_ret = qgraphicssvgitem_type_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsSvgItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* ev) override {
        if (qgraphicssvgitem_event_callback) {
            QEvent* cbval1 = ev;
            bool callback_ret = qgraphicssvgitem_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsSvgItem::event(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicssvgitem_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicssvgitem_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsSvgItem::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicssvgitem_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgraphicssvgitem_timerevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicssvgitem_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgraphicssvgitem_childevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicssvgitem_customevent_callback) {
            QEvent* cbval1 = event;
            qgraphicssvgitem_customevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicssvgitem_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicssvgitem_connectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicssvgitem_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicssvgitem_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicssvgitem_advance_callback) {
            int cbval1 = phase;
            qgraphicssvgitem_advance_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicssvgitem_shape_callback) {
            QPainterPath* callback_ret = qgraphicssvgitem_shape_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsSvgItem::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicssvgitem_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qgraphicssvgitem_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsSvgItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicssvgitem_collideswithitem_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicssvgitem_collideswithitem_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsSvgItem::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicssvgitem_collideswithpath_callback) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicssvgitem_collideswithpath_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsSvgItem::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicssvgitem_isobscuredby_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;
            bool callback_ret = qgraphicssvgitem_isobscuredby_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsSvgItem::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicssvgitem_opaquearea_callback) {
            QPainterPath* callback_ret = qgraphicssvgitem_opaquearea_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsSvgItem::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicssvgitem_sceneeventfilter_callback) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicssvgitem_sceneeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsSvgItem::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicssvgitem_sceneevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicssvgitem_sceneevent_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsSvgItem::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicssvgitem_contextmenuevent_callback) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;
            qgraphicssvgitem_contextmenuevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicssvgitem_dragenterevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicssvgitem_dragenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicssvgitem_dragleaveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicssvgitem_dragleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicssvgitem_dragmoveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicssvgitem_dragmoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicssvgitem_dropevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicssvgitem_dropevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicssvgitem_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicssvgitem_focusinevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicssvgitem_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicssvgitem_focusoutevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicssvgitem_hoverenterevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicssvgitem_hoverenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicssvgitem_hovermoveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicssvgitem_hovermoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicssvgitem_hoverleaveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicssvgitem_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicssvgitem_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicssvgitem_keypressevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicssvgitem_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicssvgitem_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicssvgitem_mousepressevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicssvgitem_mousepressevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicssvgitem_mousemoveevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicssvgitem_mousemoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicssvgitem_mousereleaseevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicssvgitem_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicssvgitem_mousedoubleclickevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicssvgitem_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicssvgitem_wheelevent_callback) {
            QGraphicsSceneWheelEvent* cbval1 = event;
            qgraphicssvgitem_wheelevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicssvgitem_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qgraphicssvgitem_inputmethodevent_callback(this, cbval1);
            return;
        }
        QGraphicsSvgItem::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicssvgitem_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qgraphicssvgitem_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsSvgItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicssvgitem_itemchange_callback) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            QVariant* callback_ret = qgraphicssvgitem_itemchange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsSvgItem::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicssvgitem_supportsextension_callback) {
            int cbval1 = static_cast<int>(extension);
            bool callback_ret = qgraphicssvgitem_supportsextension_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsSvgItem::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicssvgitem_setextension_callback) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);
            qgraphicssvgitem_setextension_callback(this, cbval1, cbval2);
            return;
        }
        QGraphicsSvgItem::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicssvgitem_extension_callback) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);
            QVariant* callback_ret = qgraphicssvgitem_extension_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsSvgItem::extension(variant);
    }

    // Friend functions
    friend bool QGraphicsSvgItem_SuperEvent(QGraphicsSvgItem* self, QEvent* ev);
    friend void QGraphicsSvgItem_SuperTimerEvent(QGraphicsSvgItem* self, QTimerEvent* event);
    friend void QGraphicsSvgItem_SuperChildEvent(QGraphicsSvgItem* self, QChildEvent* event);
    friend void QGraphicsSvgItem_SuperCustomEvent(QGraphicsSvgItem* self, QEvent* event);
    friend void QGraphicsSvgItem_SuperConnectNotify(QGraphicsSvgItem* self, const QMetaMethod* signal);
    friend void QGraphicsSvgItem_SuperDisconnectNotify(QGraphicsSvgItem* self, const QMetaMethod* signal);
    friend bool QGraphicsSvgItem_SuperSceneEventFilter(QGraphicsSvgItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsSvgItem_SuperSceneEvent(QGraphicsSvgItem* self, QEvent* event);
    friend void QGraphicsSvgItem_SuperContextMenuEvent(QGraphicsSvgItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsSvgItem_SuperDragEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSvgItem_SuperDragLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSvgItem_SuperDragMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSvgItem_SuperDropEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSvgItem_SuperFocusInEvent(QGraphicsSvgItem* self, QFocusEvent* event);
    friend void QGraphicsSvgItem_SuperFocusOutEvent(QGraphicsSvgItem* self, QFocusEvent* event);
    friend void QGraphicsSvgItem_SuperHoverEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsSvgItem_SuperHoverMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsSvgItem_SuperHoverLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsSvgItem_SuperKeyPressEvent(QGraphicsSvgItem* self, QKeyEvent* event);
    friend void QGraphicsSvgItem_SuperKeyReleaseEvent(QGraphicsSvgItem* self, QKeyEvent* event);
    friend void QGraphicsSvgItem_SuperMousePressEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSvgItem_SuperMouseMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSvgItem_SuperMouseReleaseEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSvgItem_SuperMouseDoubleClickEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSvgItem_SuperWheelEvent(QGraphicsSvgItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsSvgItem_SuperInputMethodEvent(QGraphicsSvgItem* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsSvgItem_SuperInputMethodQuery(const QGraphicsSvgItem* self, int query);
    friend QVariant* QGraphicsSvgItem_SuperItemChange(QGraphicsSvgItem* self, int change, const QVariant* value);
    friend bool QGraphicsSvgItem_SuperSupportsExtension(const QGraphicsSvgItem* self, int extension);
    friend void QGraphicsSvgItem_SuperSetExtension(QGraphicsSvgItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsSvgItem_SuperExtension(const QGraphicsSvgItem* self, const QVariant* variant);
};

#endif
