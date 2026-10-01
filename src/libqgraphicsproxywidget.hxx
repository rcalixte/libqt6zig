#pragma once
#ifndef LIBQGRAPHICSPROXYWIDGET_HXX
#define LIBQGRAPHICSPROXYWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsProxyWidget
class VirtualQGraphicsProxyWidget final : public QGraphicsProxyWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsItem::Extension;
    using QGraphicsProxyWidget_MetaObject_Callback = QMetaObject* (*)(const QGraphicsProxyWidget*);
    using QGraphicsProxyWidget_Metacast_Callback = void* (*)(QGraphicsProxyWidget*, const char*);
    using QGraphicsProxyWidget_Metacall_Callback = int (*)(QGraphicsProxyWidget*, int, int, void**);
    using QGraphicsProxyWidget_SetGeometry_Callback = void (*)(QGraphicsProxyWidget*, QRectF*);
    using QGraphicsProxyWidget_Paint_Callback = void (*)(QGraphicsProxyWidget*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsProxyWidget_Type_Callback = int (*)(const QGraphicsProxyWidget*);
    using QGraphicsProxyWidget_ItemChange_Callback = QVariant* (*)(QGraphicsProxyWidget*, int, QVariant*);
    using QGraphicsProxyWidget_Event_Callback = bool (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_EventFilter_Callback = bool (*)(QGraphicsProxyWidget*, QObject*, QEvent*);
    using QGraphicsProxyWidget_ShowEvent_Callback = void (*)(QGraphicsProxyWidget*, QShowEvent*);
    using QGraphicsProxyWidget_HideEvent_Callback = void (*)(QGraphicsProxyWidget*, QHideEvent*);
    using QGraphicsProxyWidget_ContextMenuEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsProxyWidget_DragEnterEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*);
    using QGraphicsProxyWidget_DragLeaveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*);
    using QGraphicsProxyWidget_DragMoveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*);
    using QGraphicsProxyWidget_DropEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*);
    using QGraphicsProxyWidget_HoverEnterEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*);
    using QGraphicsProxyWidget_HoverLeaveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*);
    using QGraphicsProxyWidget_HoverMoveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*);
    using QGraphicsProxyWidget_GrabMouseEvent_Callback = void (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_UngrabMouseEvent_Callback = void (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_MouseMoveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*);
    using QGraphicsProxyWidget_MousePressEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*);
    using QGraphicsProxyWidget_MouseReleaseEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*);
    using QGraphicsProxyWidget_MouseDoubleClickEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*);
    using QGraphicsProxyWidget_WheelEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneWheelEvent*);
    using QGraphicsProxyWidget_KeyPressEvent_Callback = void (*)(QGraphicsProxyWidget*, QKeyEvent*);
    using QGraphicsProxyWidget_KeyReleaseEvent_Callback = void (*)(QGraphicsProxyWidget*, QKeyEvent*);
    using QGraphicsProxyWidget_FocusInEvent_Callback = void (*)(QGraphicsProxyWidget*, QFocusEvent*);
    using QGraphicsProxyWidget_FocusOutEvent_Callback = void (*)(QGraphicsProxyWidget*, QFocusEvent*);
    using QGraphicsProxyWidget_FocusNextPrevChild_Callback = bool (*)(QGraphicsProxyWidget*, bool);
    using QGraphicsProxyWidget_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsProxyWidget*, int);
    using QGraphicsProxyWidget_InputMethodEvent_Callback = void (*)(QGraphicsProxyWidget*, QInputMethodEvent*);
    using QGraphicsProxyWidget_SizeHint_Callback = QSizeF* (*)(const QGraphicsProxyWidget*, int, QSizeF*);
    using QGraphicsProxyWidget_ResizeEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneResizeEvent*);
    using QGraphicsProxyWidget_GetContentsMargins_Callback = void (*)(const QGraphicsProxyWidget*, double*, double*, double*, double*);
    using QGraphicsProxyWidget_PaintWindowFrame_Callback = void (*)(QGraphicsProxyWidget*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsProxyWidget_BoundingRect_Callback = QRectF* (*)(const QGraphicsProxyWidget*);
    using QGraphicsProxyWidget_Shape_Callback = QPainterPath* (*)(const QGraphicsProxyWidget*);
    using QGraphicsProxyWidget_InitStyleOption_Callback = void (*)(const QGraphicsProxyWidget*, QStyleOption*);
    using QGraphicsProxyWidget_UpdateGeometry_Callback = void (*)(QGraphicsProxyWidget*);
    using QGraphicsProxyWidget_PropertyChange_Callback = QVariant* (*)(QGraphicsProxyWidget*, const char*, QVariant*);
    using QGraphicsProxyWidget_SceneEvent_Callback = bool (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_WindowFrameEvent_Callback = bool (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_WindowFrameSectionAt_Callback = int (*)(const QGraphicsProxyWidget*, QPointF*);
    using QGraphicsProxyWidget_ChangeEvent_Callback = void (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_CloseEvent_Callback = void (*)(QGraphicsProxyWidget*, QCloseEvent*);
    using QGraphicsProxyWidget_MoveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneMoveEvent*);
    using QGraphicsProxyWidget_PolishEvent_Callback = void (*)(QGraphicsProxyWidget*);
    using QGraphicsProxyWidget_GrabKeyboardEvent_Callback = void (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_UngrabKeyboardEvent_Callback = void (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_TimerEvent_Callback = void (*)(QGraphicsProxyWidget*, QTimerEvent*);
    using QGraphicsProxyWidget_ChildEvent_Callback = void (*)(QGraphicsProxyWidget*, QChildEvent*);
    using QGraphicsProxyWidget_CustomEvent_Callback = void (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_ConnectNotify_Callback = void (*)(QGraphicsProxyWidget*, QMetaMethod*);
    using QGraphicsProxyWidget_DisconnectNotify_Callback = void (*)(QGraphicsProxyWidget*, QMetaMethod*);
    using QGraphicsProxyWidget_Advance_Callback = void (*)(QGraphicsProxyWidget*, int);
    using QGraphicsProxyWidget_Contains_Callback = bool (*)(const QGraphicsProxyWidget*, QPointF*);
    using QGraphicsProxyWidget_CollidesWithItem_Callback = bool (*)(const QGraphicsProxyWidget*, QGraphicsItem*, int);
    using QGraphicsProxyWidget_CollidesWithPath_Callback = bool (*)(const QGraphicsProxyWidget*, QPainterPath*, int);
    using QGraphicsProxyWidget_IsObscuredBy_Callback = bool (*)(const QGraphicsProxyWidget*, QGraphicsItem*);
    using QGraphicsProxyWidget_OpaqueArea_Callback = QPainterPath* (*)(const QGraphicsProxyWidget*);
    using QGraphicsProxyWidget_SceneEventFilter_Callback = bool (*)(QGraphicsProxyWidget*, QGraphicsItem*, QEvent*);
    using QGraphicsProxyWidget_SupportsExtension_Callback = bool (*)(const QGraphicsProxyWidget*, int);
    using QGraphicsProxyWidget_SetExtension_Callback = void (*)(QGraphicsProxyWidget*, int, QVariant*);
    using QGraphicsProxyWidget_Extension_Callback = QVariant* (*)(const QGraphicsProxyWidget*, QVariant*);
    using QGraphicsProxyWidget_IsEmpty_Callback = bool (*)(const QGraphicsProxyWidget*);
    using QGraphicsProxyWidget::addToIndex;
    using QGraphicsProxyWidget::isSignalConnected;
    using QGraphicsProxyWidget::newProxyWidget;
    using QGraphicsProxyWidget::prepareGeometryChange;
    using QGraphicsProxyWidget::receivers;
    using QGraphicsProxyWidget::removeFromIndex;
    using QGraphicsProxyWidget::sender;
    using QGraphicsProxyWidget::senderSignalIndex;
    using QGraphicsProxyWidget::setGraphicsItem;
    using QGraphicsProxyWidget::setOwnedByLayout;
    using QGraphicsProxyWidget::updateMicroFocus;

    // Instance callback storage
    QGraphicsProxyWidget_MetaObject_Callback qgraphicsproxywidget_metaobject_callback = nullptr;
    QGraphicsProxyWidget_Metacast_Callback qgraphicsproxywidget_metacast_callback = nullptr;
    QGraphicsProxyWidget_Metacall_Callback qgraphicsproxywidget_metacall_callback = nullptr;
    QGraphicsProxyWidget_SetGeometry_Callback qgraphicsproxywidget_setgeometry_callback = nullptr;
    QGraphicsProxyWidget_Paint_Callback qgraphicsproxywidget_paint_callback = nullptr;
    QGraphicsProxyWidget_Type_Callback qgraphicsproxywidget_type_callback = nullptr;
    QGraphicsProxyWidget_ItemChange_Callback qgraphicsproxywidget_itemchange_callback = nullptr;
    QGraphicsProxyWidget_Event_Callback qgraphicsproxywidget_event_callback = nullptr;
    QGraphicsProxyWidget_EventFilter_Callback qgraphicsproxywidget_eventfilter_callback = nullptr;
    QGraphicsProxyWidget_ShowEvent_Callback qgraphicsproxywidget_showevent_callback = nullptr;
    QGraphicsProxyWidget_HideEvent_Callback qgraphicsproxywidget_hideevent_callback = nullptr;
    QGraphicsProxyWidget_ContextMenuEvent_Callback qgraphicsproxywidget_contextmenuevent_callback = nullptr;
    QGraphicsProxyWidget_DragEnterEvent_Callback qgraphicsproxywidget_dragenterevent_callback = nullptr;
    QGraphicsProxyWidget_DragLeaveEvent_Callback qgraphicsproxywidget_dragleaveevent_callback = nullptr;
    QGraphicsProxyWidget_DragMoveEvent_Callback qgraphicsproxywidget_dragmoveevent_callback = nullptr;
    QGraphicsProxyWidget_DropEvent_Callback qgraphicsproxywidget_dropevent_callback = nullptr;
    QGraphicsProxyWidget_HoverEnterEvent_Callback qgraphicsproxywidget_hoverenterevent_callback = nullptr;
    QGraphicsProxyWidget_HoverLeaveEvent_Callback qgraphicsproxywidget_hoverleaveevent_callback = nullptr;
    QGraphicsProxyWidget_HoverMoveEvent_Callback qgraphicsproxywidget_hovermoveevent_callback = nullptr;
    QGraphicsProxyWidget_GrabMouseEvent_Callback qgraphicsproxywidget_grabmouseevent_callback = nullptr;
    QGraphicsProxyWidget_UngrabMouseEvent_Callback qgraphicsproxywidget_ungrabmouseevent_callback = nullptr;
    QGraphicsProxyWidget_MouseMoveEvent_Callback qgraphicsproxywidget_mousemoveevent_callback = nullptr;
    QGraphicsProxyWidget_MousePressEvent_Callback qgraphicsproxywidget_mousepressevent_callback = nullptr;
    QGraphicsProxyWidget_MouseReleaseEvent_Callback qgraphicsproxywidget_mousereleaseevent_callback = nullptr;
    QGraphicsProxyWidget_MouseDoubleClickEvent_Callback qgraphicsproxywidget_mousedoubleclickevent_callback = nullptr;
    QGraphicsProxyWidget_WheelEvent_Callback qgraphicsproxywidget_wheelevent_callback = nullptr;
    QGraphicsProxyWidget_KeyPressEvent_Callback qgraphicsproxywidget_keypressevent_callback = nullptr;
    QGraphicsProxyWidget_KeyReleaseEvent_Callback qgraphicsproxywidget_keyreleaseevent_callback = nullptr;
    QGraphicsProxyWidget_FocusInEvent_Callback qgraphicsproxywidget_focusinevent_callback = nullptr;
    QGraphicsProxyWidget_FocusOutEvent_Callback qgraphicsproxywidget_focusoutevent_callback = nullptr;
    QGraphicsProxyWidget_FocusNextPrevChild_Callback qgraphicsproxywidget_focusnextprevchild_callback = nullptr;
    QGraphicsProxyWidget_InputMethodQuery_Callback qgraphicsproxywidget_inputmethodquery_callback = nullptr;
    QGraphicsProxyWidget_InputMethodEvent_Callback qgraphicsproxywidget_inputmethodevent_callback = nullptr;
    QGraphicsProxyWidget_SizeHint_Callback qgraphicsproxywidget_sizehint_callback = nullptr;
    QGraphicsProxyWidget_ResizeEvent_Callback qgraphicsproxywidget_resizeevent_callback = nullptr;
    QGraphicsProxyWidget_GetContentsMargins_Callback qgraphicsproxywidget_getcontentsmargins_callback = nullptr;
    QGraphicsProxyWidget_PaintWindowFrame_Callback qgraphicsproxywidget_paintwindowframe_callback = nullptr;
    QGraphicsProxyWidget_BoundingRect_Callback qgraphicsproxywidget_boundingrect_callback = nullptr;
    QGraphicsProxyWidget_Shape_Callback qgraphicsproxywidget_shape_callback = nullptr;
    QGraphicsProxyWidget_InitStyleOption_Callback qgraphicsproxywidget_initstyleoption_callback = nullptr;
    QGraphicsProxyWidget_UpdateGeometry_Callback qgraphicsproxywidget_updategeometry_callback = nullptr;
    QGraphicsProxyWidget_PropertyChange_Callback qgraphicsproxywidget_propertychange_callback = nullptr;
    QGraphicsProxyWidget_SceneEvent_Callback qgraphicsproxywidget_sceneevent_callback = nullptr;
    QGraphicsProxyWidget_WindowFrameEvent_Callback qgraphicsproxywidget_windowframeevent_callback = nullptr;
    QGraphicsProxyWidget_WindowFrameSectionAt_Callback qgraphicsproxywidget_windowframesectionat_callback = nullptr;
    QGraphicsProxyWidget_ChangeEvent_Callback qgraphicsproxywidget_changeevent_callback = nullptr;
    QGraphicsProxyWidget_CloseEvent_Callback qgraphicsproxywidget_closeevent_callback = nullptr;
    QGraphicsProxyWidget_MoveEvent_Callback qgraphicsproxywidget_moveevent_callback = nullptr;
    QGraphicsProxyWidget_PolishEvent_Callback qgraphicsproxywidget_polishevent_callback = nullptr;
    QGraphicsProxyWidget_GrabKeyboardEvent_Callback qgraphicsproxywidget_grabkeyboardevent_callback = nullptr;
    QGraphicsProxyWidget_UngrabKeyboardEvent_Callback qgraphicsproxywidget_ungrabkeyboardevent_callback = nullptr;
    QGraphicsProxyWidget_TimerEvent_Callback qgraphicsproxywidget_timerevent_callback = nullptr;
    QGraphicsProxyWidget_ChildEvent_Callback qgraphicsproxywidget_childevent_callback = nullptr;
    QGraphicsProxyWidget_CustomEvent_Callback qgraphicsproxywidget_customevent_callback = nullptr;
    QGraphicsProxyWidget_ConnectNotify_Callback qgraphicsproxywidget_connectnotify_callback = nullptr;
    QGraphicsProxyWidget_DisconnectNotify_Callback qgraphicsproxywidget_disconnectnotify_callback = nullptr;
    QGraphicsProxyWidget_Advance_Callback qgraphicsproxywidget_advance_callback = nullptr;
    QGraphicsProxyWidget_Contains_Callback qgraphicsproxywidget_contains_callback = nullptr;
    QGraphicsProxyWidget_CollidesWithItem_Callback qgraphicsproxywidget_collideswithitem_callback = nullptr;
    QGraphicsProxyWidget_CollidesWithPath_Callback qgraphicsproxywidget_collideswithpath_callback = nullptr;
    QGraphicsProxyWidget_IsObscuredBy_Callback qgraphicsproxywidget_isobscuredby_callback = nullptr;
    QGraphicsProxyWidget_OpaqueArea_Callback qgraphicsproxywidget_opaquearea_callback = nullptr;
    QGraphicsProxyWidget_SceneEventFilter_Callback qgraphicsproxywidget_sceneeventfilter_callback = nullptr;
    QGraphicsProxyWidget_SupportsExtension_Callback qgraphicsproxywidget_supportsextension_callback = nullptr;
    QGraphicsProxyWidget_SetExtension_Callback qgraphicsproxywidget_setextension_callback = nullptr;
    QGraphicsProxyWidget_Extension_Callback qgraphicsproxywidget_extension_callback = nullptr;
    QGraphicsProxyWidget_IsEmpty_Callback qgraphicsproxywidget_isempty_callback = nullptr;

    // Access struct
    struct Base : QGraphicsProxyWidget {
        using QGraphicsProxyWidget::changeEvent;
        using QGraphicsProxyWidget::childEvent;
        using QGraphicsProxyWidget::closeEvent;
        using QGraphicsProxyWidget::connectNotify;
        using QGraphicsProxyWidget::contextMenuEvent;
        using QGraphicsProxyWidget::customEvent;
        using QGraphicsProxyWidget::disconnectNotify;
        using QGraphicsProxyWidget::dragEnterEvent;
        using QGraphicsProxyWidget::dragLeaveEvent;
        using QGraphicsProxyWidget::dragMoveEvent;
        using QGraphicsProxyWidget::dropEvent;
        using QGraphicsProxyWidget::event;
        using QGraphicsProxyWidget::eventFilter;
        using QGraphicsProxyWidget::extension;
        using QGraphicsProxyWidget::focusInEvent;
        using QGraphicsProxyWidget::focusNextPrevChild;
        using QGraphicsProxyWidget::focusOutEvent;
        using QGraphicsProxyWidget::grabKeyboardEvent;
        using QGraphicsProxyWidget::grabMouseEvent;
        using QGraphicsProxyWidget::hideEvent;
        using QGraphicsProxyWidget::hoverEnterEvent;
        using QGraphicsProxyWidget::hoverLeaveEvent;
        using QGraphicsProxyWidget::hoverMoveEvent;
        using QGraphicsProxyWidget::initStyleOption;
        using QGraphicsProxyWidget::inputMethodEvent;
        using QGraphicsProxyWidget::inputMethodQuery;
        using QGraphicsProxyWidget::itemChange;
        using QGraphicsProxyWidget::keyPressEvent;
        using QGraphicsProxyWidget::keyReleaseEvent;
        using QGraphicsProxyWidget::mouseDoubleClickEvent;
        using QGraphicsProxyWidget::mouseMoveEvent;
        using QGraphicsProxyWidget::mousePressEvent;
        using QGraphicsProxyWidget::mouseReleaseEvent;
        using QGraphicsProxyWidget::moveEvent;
        using QGraphicsProxyWidget::polishEvent;
        using QGraphicsProxyWidget::propertyChange;
        using QGraphicsProxyWidget::resizeEvent;
        using QGraphicsProxyWidget::sceneEvent;
        using QGraphicsProxyWidget::sceneEventFilter;
        using QGraphicsProxyWidget::setExtension;
        using QGraphicsProxyWidget::showEvent;
        using QGraphicsProxyWidget::sizeHint;
        using QGraphicsProxyWidget::supportsExtension;
        using QGraphicsProxyWidget::timerEvent;
        using QGraphicsProxyWidget::ungrabKeyboardEvent;
        using QGraphicsProxyWidget::ungrabMouseEvent;
        using QGraphicsProxyWidget::updateGeometry;
        using QGraphicsProxyWidget::wheelEvent;
        using QGraphicsProxyWidget::windowFrameEvent;
        using QGraphicsProxyWidget::windowFrameSectionAt;
    };

    VirtualQGraphicsProxyWidget() : QGraphicsProxyWidget() {};
    VirtualQGraphicsProxyWidget(QGraphicsItem* parent) : QGraphicsProxyWidget(parent) {};
    VirtualQGraphicsProxyWidget(QGraphicsItem* parent, Qt::WindowFlags wFlags) : QGraphicsProxyWidget(parent, wFlags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicsproxywidget_metaobject_callback) {
            QMetaObject* callback_ret = qgraphicsproxywidget_metaobject_callback(this);
            return callback_ret;
        }
        return QGraphicsProxyWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicsproxywidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgraphicsproxywidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsProxyWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsproxywidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgraphicsproxywidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsProxyWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qgraphicsproxywidget_setgeometry_callback) {
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&rect_ret);
            qgraphicsproxywidget_setgeometry_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::setGeometry(rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicsproxywidget_paint_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qgraphicsproxywidget_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsProxyWidget::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicsproxywidget_type_callback) {
            int callback_ret = qgraphicsproxywidget_type_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsProxyWidget::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicsproxywidget_itemchange_callback) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            QVariant* callback_ret = qgraphicsproxywidget_itemchange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsProxyWidget::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsproxywidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicsproxywidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsProxyWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qgraphicsproxywidget_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicsproxywidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsProxyWidget::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qgraphicsproxywidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            qgraphicsproxywidget_showevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qgraphicsproxywidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qgraphicsproxywidget_hideevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicsproxywidget_contextmenuevent_callback) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;
            qgraphicsproxywidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsproxywidget_dragenterevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsproxywidget_dragenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsproxywidget_dragleaveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsproxywidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsproxywidget_dragmoveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsproxywidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsproxywidget_dropevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsproxywidget_dropevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsproxywidget_hoverenterevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsproxywidget_hoverenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsproxywidget_hoverleaveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsproxywidget_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsproxywidget_hovermoveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicsproxywidget_hovermoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabMouseEvent(QEvent* event) override {
        if (qgraphicsproxywidget_grabmouseevent_callback) {
            QEvent* cbval1 = event;
            qgraphicsproxywidget_grabmouseevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::grabMouseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabMouseEvent(QEvent* event) override {
        if (qgraphicsproxywidget_ungrabmouseevent_callback) {
            QEvent* cbval1 = event;
            qgraphicsproxywidget_ungrabmouseevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::ungrabMouseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsproxywidget_mousemoveevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsproxywidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsproxywidget_mousepressevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsproxywidget_mousepressevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsproxywidget_mousereleaseevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsproxywidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsproxywidget_mousedoubleclickevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsproxywidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicsproxywidget_wheelevent_callback) {
            QGraphicsSceneWheelEvent* cbval1 = event;
            qgraphicsproxywidget_wheelevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicsproxywidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicsproxywidget_keypressevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicsproxywidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicsproxywidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicsproxywidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicsproxywidget_focusinevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicsproxywidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicsproxywidget_focusoutevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qgraphicsproxywidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qgraphicsproxywidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsProxyWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicsproxywidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qgraphicsproxywidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsProxyWidget::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicsproxywidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qgraphicsproxywidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        if (qgraphicsproxywidget_sizehint_callback) {
            int cbval1 = static_cast<int>(which);
            const QSizeF& constraint_ret = constraint;
            // Cast returned reference into pointer
            QSizeF* cbval2 = const_cast<QSizeF*>(&constraint_ret);
            QSizeF* callback_ret = qgraphicsproxywidget_sizehint_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsProxyWidget::sizeHint(which, constraint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
        if (qgraphicsproxywidget_resizeevent_callback) {
            QGraphicsSceneResizeEvent* cbval1 = event;
            qgraphicsproxywidget_resizeevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qgraphicsproxywidget_getcontentsmargins_callback) {
            double* cbval1 = static_cast<double*>(left);
            double* cbval2 = static_cast<double*>(top);
            double* cbval3 = static_cast<double*>(right);
            double* cbval4 = static_cast<double*>(bottom);
            qgraphicsproxywidget_getcontentsmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QGraphicsProxyWidget::getContentsMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicsproxywidget_paintwindowframe_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qgraphicsproxywidget_paintwindowframe_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsProxyWidget::paintWindowFrame(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicsproxywidget_boundingrect_callback) {
            QRectF* callback_ret = qgraphicsproxywidget_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsProxyWidget::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicsproxywidget_shape_callback) {
            QPainterPath* callback_ret = qgraphicsproxywidget_shape_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsProxyWidget::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOption* option) const override {
        if (qgraphicsproxywidget_initstyleoption_callback) {
            QStyleOption* cbval1 = option;
            qgraphicsproxywidget_initstyleoption_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qgraphicsproxywidget_updategeometry_callback) {
            qgraphicsproxywidget_updategeometry_callback(this);
            return;
        }
        QGraphicsProxyWidget::updateGeometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
        if (qgraphicsproxywidget_propertychange_callback) {
            const auto propertyName_ret = propertyName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray propertyName_b = propertyName_ret.toUtf8();
            auto propertyName_str_len = propertyName_b.length();
            const char* propertyName_str = static_cast<const char*>(malloc(propertyName_str_len + 1));
            memcpy((void*)propertyName_str, propertyName_b.data(), propertyName_str_len);
            ((char*)propertyName_str)[propertyName_str_len] = '\0';
            const char* cbval1 = propertyName_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            QVariant* callback_ret = qgraphicsproxywidget_propertychange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(propertyName_str);
            return callback_ret_Value;
        }
        return QGraphicsProxyWidget::propertyChange(propertyName, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicsproxywidget_sceneevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicsproxywidget_sceneevent_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsProxyWidget::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool windowFrameEvent(QEvent* e) override {
        if (qgraphicsproxywidget_windowframeevent_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qgraphicsproxywidget_windowframeevent_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsProxyWidget::windowFrameEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
        if (qgraphicsproxywidget_windowframesectionat_callback) {
            const QPointF& pos_ret = pos;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&pos_ret);
            int callback_ret = qgraphicsproxywidget_windowframesectionat_callback(this, cbval1);
            return static_cast<Qt::WindowFrameSection>(callback_ret);
        }
        return QGraphicsProxyWidget::windowFrameSectionAt(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qgraphicsproxywidget_changeevent_callback) {
            QEvent* cbval1 = event;
            qgraphicsproxywidget_changeevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qgraphicsproxywidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qgraphicsproxywidget_closeevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
        if (qgraphicsproxywidget_moveevent_callback) {
            QGraphicsSceneMoveEvent* cbval1 = event;
            qgraphicsproxywidget_moveevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void polishEvent() override {
        if (qgraphicsproxywidget_polishevent_callback) {
            qgraphicsproxywidget_polishevent_callback(this);
            return;
        }
        QGraphicsProxyWidget::polishEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabKeyboardEvent(QEvent* event) override {
        if (qgraphicsproxywidget_grabkeyboardevent_callback) {
            QEvent* cbval1 = event;
            qgraphicsproxywidget_grabkeyboardevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::grabKeyboardEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabKeyboardEvent(QEvent* event) override {
        if (qgraphicsproxywidget_ungrabkeyboardevent_callback) {
            QEvent* cbval1 = event;
            qgraphicsproxywidget_ungrabkeyboardevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::ungrabKeyboardEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsproxywidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgraphicsproxywidget_timerevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsproxywidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgraphicsproxywidget_childevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsproxywidget_customevent_callback) {
            QEvent* cbval1 = event;
            qgraphicsproxywidget_customevent_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsproxywidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsproxywidget_connectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsproxywidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsproxywidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicsproxywidget_advance_callback) {
            int cbval1 = phase;
            qgraphicsproxywidget_advance_callback(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicsproxywidget_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qgraphicsproxywidget_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsProxyWidget::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsproxywidget_collideswithitem_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicsproxywidget_collideswithitem_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsProxyWidget::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsproxywidget_collideswithpath_callback) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicsproxywidget_collideswithpath_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsProxyWidget::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicsproxywidget_isobscuredby_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;
            bool callback_ret = qgraphicsproxywidget_isobscuredby_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsProxyWidget::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicsproxywidget_opaquearea_callback) {
            QPainterPath* callback_ret = qgraphicsproxywidget_opaquearea_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsProxyWidget::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicsproxywidget_sceneeventfilter_callback) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicsproxywidget_sceneeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsProxyWidget::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicsproxywidget_supportsextension_callback) {
            int cbval1 = static_cast<int>(extension);
            bool callback_ret = qgraphicsproxywidget_supportsextension_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsProxyWidget::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicsproxywidget_setextension_callback) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);
            qgraphicsproxywidget_setextension_callback(this, cbval1, cbval2);
            return;
        }
        QGraphicsProxyWidget::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicsproxywidget_extension_callback) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);
            QVariant* callback_ret = qgraphicsproxywidget_extension_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsProxyWidget::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgraphicsproxywidget_isempty_callback) {
            bool callback_ret = qgraphicsproxywidget_isempty_callback(this);
            return callback_ret;
        }
        return QGraphicsProxyWidget::isEmpty();
    }

    // Friend functions
    friend QVariant* QGraphicsProxyWidget_SuperItemChange(QGraphicsProxyWidget* self, int change, const QVariant* value);
    friend bool QGraphicsProxyWidget_SuperEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend bool QGraphicsProxyWidget_SuperEventFilter(QGraphicsProxyWidget* self, QObject* object, QEvent* event);
    friend void QGraphicsProxyWidget_SuperShowEvent(QGraphicsProxyWidget* self, QShowEvent* event);
    friend void QGraphicsProxyWidget_SuperHideEvent(QGraphicsProxyWidget* self, QHideEvent* event);
    friend void QGraphicsProxyWidget_SuperContextMenuEvent(QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsProxyWidget_SuperDragEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsProxyWidget_SuperDragLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsProxyWidget_SuperDragMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsProxyWidget_SuperDropEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsProxyWidget_SuperHoverEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsProxyWidget_SuperHoverLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsProxyWidget_SuperHoverMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsProxyWidget_SuperGrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_SuperUngrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_SuperMouseMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsProxyWidget_SuperMousePressEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsProxyWidget_SuperMouseReleaseEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsProxyWidget_SuperMouseDoubleClickEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsProxyWidget_SuperWheelEvent(QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsProxyWidget_SuperKeyPressEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
    friend void QGraphicsProxyWidget_SuperKeyReleaseEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
    friend void QGraphicsProxyWidget_SuperFocusInEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
    friend void QGraphicsProxyWidget_SuperFocusOutEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
    friend bool QGraphicsProxyWidget_SuperFocusNextPrevChild(QGraphicsProxyWidget* self, bool next);
    friend QVariant* QGraphicsProxyWidget_SuperInputMethodQuery(const QGraphicsProxyWidget* self, int query);
    friend void QGraphicsProxyWidget_SuperInputMethodEvent(QGraphicsProxyWidget* self, QInputMethodEvent* event);
    friend QSizeF* QGraphicsProxyWidget_SuperSizeHint(const QGraphicsProxyWidget* self, int which, const QSizeF* constraint);
    friend void QGraphicsProxyWidget_SuperResizeEvent(QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event);
    friend void QGraphicsProxyWidget_SuperInitStyleOption(const QGraphicsProxyWidget* self, QStyleOption* option);
    friend void QGraphicsProxyWidget_SuperUpdateGeometry(QGraphicsProxyWidget* self);
    friend QVariant* QGraphicsProxyWidget_SuperPropertyChange(QGraphicsProxyWidget* self, const libqt_string propertyName, const QVariant* value);
    friend bool QGraphicsProxyWidget_SuperSceneEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend bool QGraphicsProxyWidget_SuperWindowFrameEvent(QGraphicsProxyWidget* self, QEvent* e);
    friend int QGraphicsProxyWidget_SuperWindowFrameSectionAt(const QGraphicsProxyWidget* self, const QPointF* pos);
    friend void QGraphicsProxyWidget_SuperChangeEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_SuperCloseEvent(QGraphicsProxyWidget* self, QCloseEvent* event);
    friend void QGraphicsProxyWidget_SuperMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMoveEvent* event);
    friend void QGraphicsProxyWidget_SuperPolishEvent(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_SuperGrabKeyboardEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_SuperUngrabKeyboardEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_SuperTimerEvent(QGraphicsProxyWidget* self, QTimerEvent* event);
    friend void QGraphicsProxyWidget_SuperChildEvent(QGraphicsProxyWidget* self, QChildEvent* event);
    friend void QGraphicsProxyWidget_SuperCustomEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_SuperConnectNotify(QGraphicsProxyWidget* self, const QMetaMethod* signal);
    friend void QGraphicsProxyWidget_SuperDisconnectNotify(QGraphicsProxyWidget* self, const QMetaMethod* signal);
    friend bool QGraphicsProxyWidget_SuperSceneEventFilter(QGraphicsProxyWidget* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsProxyWidget_SuperSupportsExtension(const QGraphicsProxyWidget* self, int extension);
    friend void QGraphicsProxyWidget_SuperSetExtension(QGraphicsProxyWidget* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsProxyWidget_SuperExtension(const QGraphicsProxyWidget* self, const QVariant* variant);
};

#endif
