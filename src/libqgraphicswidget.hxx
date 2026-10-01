#pragma once
#ifndef LIBQGRAPHICSWIDGET_HXX
#define LIBQGRAPHICSWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsWidget
class VirtualQGraphicsWidget final : public QGraphicsWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsItem::Extension;
    using QGraphicsWidget_MetaObject_Callback = QMetaObject* (*)(const QGraphicsWidget*);
    using QGraphicsWidget_Metacast_Callback = void* (*)(QGraphicsWidget*, const char*);
    using QGraphicsWidget_Metacall_Callback = int (*)(QGraphicsWidget*, int, int, void**);
    using QGraphicsWidget_SetGeometry_Callback = void (*)(QGraphicsWidget*, QRectF*);
    using QGraphicsWidget_GetContentsMargins_Callback = void (*)(const QGraphicsWidget*, double*, double*, double*, double*);
    using QGraphicsWidget_Type_Callback = int (*)(const QGraphicsWidget*);
    using QGraphicsWidget_Paint_Callback = void (*)(QGraphicsWidget*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsWidget_PaintWindowFrame_Callback = void (*)(QGraphicsWidget*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsWidget_BoundingRect_Callback = QRectF* (*)(const QGraphicsWidget*);
    using QGraphicsWidget_Shape_Callback = QPainterPath* (*)(const QGraphicsWidget*);
    using QGraphicsWidget_InitStyleOption_Callback = void (*)(const QGraphicsWidget*, QStyleOption*);
    using QGraphicsWidget_SizeHint_Callback = QSizeF* (*)(const QGraphicsWidget*, int, QSizeF*);
    using QGraphicsWidget_UpdateGeometry_Callback = void (*)(QGraphicsWidget*);
    using QGraphicsWidget_ItemChange_Callback = QVariant* (*)(QGraphicsWidget*, int, QVariant*);
    using QGraphicsWidget_PropertyChange_Callback = QVariant* (*)(QGraphicsWidget*, const char*, QVariant*);
    using QGraphicsWidget_SceneEvent_Callback = bool (*)(QGraphicsWidget*, QEvent*);
    using QGraphicsWidget_WindowFrameEvent_Callback = bool (*)(QGraphicsWidget*, QEvent*);
    using QGraphicsWidget_WindowFrameSectionAt_Callback = int (*)(const QGraphicsWidget*, QPointF*);
    using QGraphicsWidget_Event_Callback = bool (*)(QGraphicsWidget*, QEvent*);
    using QGraphicsWidget_ChangeEvent_Callback = void (*)(QGraphicsWidget*, QEvent*);
    using QGraphicsWidget_CloseEvent_Callback = void (*)(QGraphicsWidget*, QCloseEvent*);
    using QGraphicsWidget_FocusInEvent_Callback = void (*)(QGraphicsWidget*, QFocusEvent*);
    using QGraphicsWidget_FocusNextPrevChild_Callback = bool (*)(QGraphicsWidget*, bool);
    using QGraphicsWidget_FocusOutEvent_Callback = void (*)(QGraphicsWidget*, QFocusEvent*);
    using QGraphicsWidget_HideEvent_Callback = void (*)(QGraphicsWidget*, QHideEvent*);
    using QGraphicsWidget_MoveEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneMoveEvent*);
    using QGraphicsWidget_PolishEvent_Callback = void (*)(QGraphicsWidget*);
    using QGraphicsWidget_ResizeEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneResizeEvent*);
    using QGraphicsWidget_ShowEvent_Callback = void (*)(QGraphicsWidget*, QShowEvent*);
    using QGraphicsWidget_HoverMoveEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneHoverEvent*);
    using QGraphicsWidget_HoverLeaveEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneHoverEvent*);
    using QGraphicsWidget_GrabMouseEvent_Callback = void (*)(QGraphicsWidget*, QEvent*);
    using QGraphicsWidget_UngrabMouseEvent_Callback = void (*)(QGraphicsWidget*, QEvent*);
    using QGraphicsWidget_GrabKeyboardEvent_Callback = void (*)(QGraphicsWidget*, QEvent*);
    using QGraphicsWidget_UngrabKeyboardEvent_Callback = void (*)(QGraphicsWidget*, QEvent*);
    using QGraphicsWidget_EventFilter_Callback = bool (*)(QGraphicsWidget*, QObject*, QEvent*);
    using QGraphicsWidget_TimerEvent_Callback = void (*)(QGraphicsWidget*, QTimerEvent*);
    using QGraphicsWidget_ChildEvent_Callback = void (*)(QGraphicsWidget*, QChildEvent*);
    using QGraphicsWidget_CustomEvent_Callback = void (*)(QGraphicsWidget*, QEvent*);
    using QGraphicsWidget_ConnectNotify_Callback = void (*)(QGraphicsWidget*, QMetaMethod*);
    using QGraphicsWidget_DisconnectNotify_Callback = void (*)(QGraphicsWidget*, QMetaMethod*);
    using QGraphicsWidget_Advance_Callback = void (*)(QGraphicsWidget*, int);
    using QGraphicsWidget_Contains_Callback = bool (*)(const QGraphicsWidget*, QPointF*);
    using QGraphicsWidget_CollidesWithItem_Callback = bool (*)(const QGraphicsWidget*, QGraphicsItem*, int);
    using QGraphicsWidget_CollidesWithPath_Callback = bool (*)(const QGraphicsWidget*, QPainterPath*, int);
    using QGraphicsWidget_IsObscuredBy_Callback = bool (*)(const QGraphicsWidget*, QGraphicsItem*);
    using QGraphicsWidget_OpaqueArea_Callback = QPainterPath* (*)(const QGraphicsWidget*);
    using QGraphicsWidget_SceneEventFilter_Callback = bool (*)(QGraphicsWidget*, QGraphicsItem*, QEvent*);
    using QGraphicsWidget_ContextMenuEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsWidget_DragEnterEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneDragDropEvent*);
    using QGraphicsWidget_DragLeaveEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneDragDropEvent*);
    using QGraphicsWidget_DragMoveEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneDragDropEvent*);
    using QGraphicsWidget_DropEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneDragDropEvent*);
    using QGraphicsWidget_HoverEnterEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneHoverEvent*);
    using QGraphicsWidget_KeyPressEvent_Callback = void (*)(QGraphicsWidget*, QKeyEvent*);
    using QGraphicsWidget_KeyReleaseEvent_Callback = void (*)(QGraphicsWidget*, QKeyEvent*);
    using QGraphicsWidget_MousePressEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneMouseEvent*);
    using QGraphicsWidget_MouseMoveEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneMouseEvent*);
    using QGraphicsWidget_MouseReleaseEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneMouseEvent*);
    using QGraphicsWidget_MouseDoubleClickEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneMouseEvent*);
    using QGraphicsWidget_WheelEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneWheelEvent*);
    using QGraphicsWidget_InputMethodEvent_Callback = void (*)(QGraphicsWidget*, QInputMethodEvent*);
    using QGraphicsWidget_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsWidget*, int);
    using QGraphicsWidget_SupportsExtension_Callback = bool (*)(const QGraphicsWidget*, int);
    using QGraphicsWidget_SetExtension_Callback = void (*)(QGraphicsWidget*, int, QVariant*);
    using QGraphicsWidget_Extension_Callback = QVariant* (*)(const QGraphicsWidget*, QVariant*);
    using QGraphicsWidget_IsEmpty_Callback = bool (*)(const QGraphicsWidget*);
    using QGraphicsWidget::addToIndex;
    using QGraphicsWidget::isSignalConnected;
    using QGraphicsWidget::prepareGeometryChange;
    using QGraphicsWidget::receivers;
    using QGraphicsWidget::removeFromIndex;
    using QGraphicsWidget::sender;
    using QGraphicsWidget::senderSignalIndex;
    using QGraphicsWidget::setGraphicsItem;
    using QGraphicsWidget::setOwnedByLayout;
    using QGraphicsWidget::updateMicroFocus;

    // Instance callback storage
    QGraphicsWidget_MetaObject_Callback qgraphicswidget_metaobject_callback = nullptr;
    QGraphicsWidget_Metacast_Callback qgraphicswidget_metacast_callback = nullptr;
    QGraphicsWidget_Metacall_Callback qgraphicswidget_metacall_callback = nullptr;
    QGraphicsWidget_SetGeometry_Callback qgraphicswidget_setgeometry_callback = nullptr;
    QGraphicsWidget_GetContentsMargins_Callback qgraphicswidget_getcontentsmargins_callback = nullptr;
    QGraphicsWidget_Type_Callback qgraphicswidget_type_callback = nullptr;
    QGraphicsWidget_Paint_Callback qgraphicswidget_paint_callback = nullptr;
    QGraphicsWidget_PaintWindowFrame_Callback qgraphicswidget_paintwindowframe_callback = nullptr;
    QGraphicsWidget_BoundingRect_Callback qgraphicswidget_boundingrect_callback = nullptr;
    QGraphicsWidget_Shape_Callback qgraphicswidget_shape_callback = nullptr;
    QGraphicsWidget_InitStyleOption_Callback qgraphicswidget_initstyleoption_callback = nullptr;
    QGraphicsWidget_SizeHint_Callback qgraphicswidget_sizehint_callback = nullptr;
    QGraphicsWidget_UpdateGeometry_Callback qgraphicswidget_updategeometry_callback = nullptr;
    QGraphicsWidget_ItemChange_Callback qgraphicswidget_itemchange_callback = nullptr;
    QGraphicsWidget_PropertyChange_Callback qgraphicswidget_propertychange_callback = nullptr;
    QGraphicsWidget_SceneEvent_Callback qgraphicswidget_sceneevent_callback = nullptr;
    QGraphicsWidget_WindowFrameEvent_Callback qgraphicswidget_windowframeevent_callback = nullptr;
    QGraphicsWidget_WindowFrameSectionAt_Callback qgraphicswidget_windowframesectionat_callback = nullptr;
    QGraphicsWidget_Event_Callback qgraphicswidget_event_callback = nullptr;
    QGraphicsWidget_ChangeEvent_Callback qgraphicswidget_changeevent_callback = nullptr;
    QGraphicsWidget_CloseEvent_Callback qgraphicswidget_closeevent_callback = nullptr;
    QGraphicsWidget_FocusInEvent_Callback qgraphicswidget_focusinevent_callback = nullptr;
    QGraphicsWidget_FocusNextPrevChild_Callback qgraphicswidget_focusnextprevchild_callback = nullptr;
    QGraphicsWidget_FocusOutEvent_Callback qgraphicswidget_focusoutevent_callback = nullptr;
    QGraphicsWidget_HideEvent_Callback qgraphicswidget_hideevent_callback = nullptr;
    QGraphicsWidget_MoveEvent_Callback qgraphicswidget_moveevent_callback = nullptr;
    QGraphicsWidget_PolishEvent_Callback qgraphicswidget_polishevent_callback = nullptr;
    QGraphicsWidget_ResizeEvent_Callback qgraphicswidget_resizeevent_callback = nullptr;
    QGraphicsWidget_ShowEvent_Callback qgraphicswidget_showevent_callback = nullptr;
    QGraphicsWidget_HoverMoveEvent_Callback qgraphicswidget_hovermoveevent_callback = nullptr;
    QGraphicsWidget_HoverLeaveEvent_Callback qgraphicswidget_hoverleaveevent_callback = nullptr;
    QGraphicsWidget_GrabMouseEvent_Callback qgraphicswidget_grabmouseevent_callback = nullptr;
    QGraphicsWidget_UngrabMouseEvent_Callback qgraphicswidget_ungrabmouseevent_callback = nullptr;
    QGraphicsWidget_GrabKeyboardEvent_Callback qgraphicswidget_grabkeyboardevent_callback = nullptr;
    QGraphicsWidget_UngrabKeyboardEvent_Callback qgraphicswidget_ungrabkeyboardevent_callback = nullptr;
    QGraphicsWidget_EventFilter_Callback qgraphicswidget_eventfilter_callback = nullptr;
    QGraphicsWidget_TimerEvent_Callback qgraphicswidget_timerevent_callback = nullptr;
    QGraphicsWidget_ChildEvent_Callback qgraphicswidget_childevent_callback = nullptr;
    QGraphicsWidget_CustomEvent_Callback qgraphicswidget_customevent_callback = nullptr;
    QGraphicsWidget_ConnectNotify_Callback qgraphicswidget_connectnotify_callback = nullptr;
    QGraphicsWidget_DisconnectNotify_Callback qgraphicswidget_disconnectnotify_callback = nullptr;
    QGraphicsWidget_Advance_Callback qgraphicswidget_advance_callback = nullptr;
    QGraphicsWidget_Contains_Callback qgraphicswidget_contains_callback = nullptr;
    QGraphicsWidget_CollidesWithItem_Callback qgraphicswidget_collideswithitem_callback = nullptr;
    QGraphicsWidget_CollidesWithPath_Callback qgraphicswidget_collideswithpath_callback = nullptr;
    QGraphicsWidget_IsObscuredBy_Callback qgraphicswidget_isobscuredby_callback = nullptr;
    QGraphicsWidget_OpaqueArea_Callback qgraphicswidget_opaquearea_callback = nullptr;
    QGraphicsWidget_SceneEventFilter_Callback qgraphicswidget_sceneeventfilter_callback = nullptr;
    QGraphicsWidget_ContextMenuEvent_Callback qgraphicswidget_contextmenuevent_callback = nullptr;
    QGraphicsWidget_DragEnterEvent_Callback qgraphicswidget_dragenterevent_callback = nullptr;
    QGraphicsWidget_DragLeaveEvent_Callback qgraphicswidget_dragleaveevent_callback = nullptr;
    QGraphicsWidget_DragMoveEvent_Callback qgraphicswidget_dragmoveevent_callback = nullptr;
    QGraphicsWidget_DropEvent_Callback qgraphicswidget_dropevent_callback = nullptr;
    QGraphicsWidget_HoverEnterEvent_Callback qgraphicswidget_hoverenterevent_callback = nullptr;
    QGraphicsWidget_KeyPressEvent_Callback qgraphicswidget_keypressevent_callback = nullptr;
    QGraphicsWidget_KeyReleaseEvent_Callback qgraphicswidget_keyreleaseevent_callback = nullptr;
    QGraphicsWidget_MousePressEvent_Callback qgraphicswidget_mousepressevent_callback = nullptr;
    QGraphicsWidget_MouseMoveEvent_Callback qgraphicswidget_mousemoveevent_callback = nullptr;
    QGraphicsWidget_MouseReleaseEvent_Callback qgraphicswidget_mousereleaseevent_callback = nullptr;
    QGraphicsWidget_MouseDoubleClickEvent_Callback qgraphicswidget_mousedoubleclickevent_callback = nullptr;
    QGraphicsWidget_WheelEvent_Callback qgraphicswidget_wheelevent_callback = nullptr;
    QGraphicsWidget_InputMethodEvent_Callback qgraphicswidget_inputmethodevent_callback = nullptr;
    QGraphicsWidget_InputMethodQuery_Callback qgraphicswidget_inputmethodquery_callback = nullptr;
    QGraphicsWidget_SupportsExtension_Callback qgraphicswidget_supportsextension_callback = nullptr;
    QGraphicsWidget_SetExtension_Callback qgraphicswidget_setextension_callback = nullptr;
    QGraphicsWidget_Extension_Callback qgraphicswidget_extension_callback = nullptr;
    QGraphicsWidget_IsEmpty_Callback qgraphicswidget_isempty_callback = nullptr;

    // Access struct
    struct Base : QGraphicsWidget {
        using QGraphicsWidget::changeEvent;
        using QGraphicsWidget::childEvent;
        using QGraphicsWidget::closeEvent;
        using QGraphicsWidget::connectNotify;
        using QGraphicsWidget::contextMenuEvent;
        using QGraphicsWidget::customEvent;
        using QGraphicsWidget::disconnectNotify;
        using QGraphicsWidget::dragEnterEvent;
        using QGraphicsWidget::dragLeaveEvent;
        using QGraphicsWidget::dragMoveEvent;
        using QGraphicsWidget::dropEvent;
        using QGraphicsWidget::event;
        using QGraphicsWidget::extension;
        using QGraphicsWidget::focusInEvent;
        using QGraphicsWidget::focusNextPrevChild;
        using QGraphicsWidget::focusOutEvent;
        using QGraphicsWidget::grabKeyboardEvent;
        using QGraphicsWidget::grabMouseEvent;
        using QGraphicsWidget::hideEvent;
        using QGraphicsWidget::hoverEnterEvent;
        using QGraphicsWidget::hoverLeaveEvent;
        using QGraphicsWidget::hoverMoveEvent;
        using QGraphicsWidget::initStyleOption;
        using QGraphicsWidget::inputMethodEvent;
        using QGraphicsWidget::inputMethodQuery;
        using QGraphicsWidget::itemChange;
        using QGraphicsWidget::keyPressEvent;
        using QGraphicsWidget::keyReleaseEvent;
        using QGraphicsWidget::mouseDoubleClickEvent;
        using QGraphicsWidget::mouseMoveEvent;
        using QGraphicsWidget::mousePressEvent;
        using QGraphicsWidget::mouseReleaseEvent;
        using QGraphicsWidget::moveEvent;
        using QGraphicsWidget::polishEvent;
        using QGraphicsWidget::propertyChange;
        using QGraphicsWidget::resizeEvent;
        using QGraphicsWidget::sceneEvent;
        using QGraphicsWidget::sceneEventFilter;
        using QGraphicsWidget::setExtension;
        using QGraphicsWidget::showEvent;
        using QGraphicsWidget::sizeHint;
        using QGraphicsWidget::supportsExtension;
        using QGraphicsWidget::timerEvent;
        using QGraphicsWidget::ungrabKeyboardEvent;
        using QGraphicsWidget::ungrabMouseEvent;
        using QGraphicsWidget::updateGeometry;
        using QGraphicsWidget::wheelEvent;
        using QGraphicsWidget::windowFrameEvent;
        using QGraphicsWidget::windowFrameSectionAt;
    };

    VirtualQGraphicsWidget() : QGraphicsWidget() {};
    VirtualQGraphicsWidget(QGraphicsItem* parent) : QGraphicsWidget(parent) {};
    VirtualQGraphicsWidget(QGraphicsItem* parent, Qt::WindowFlags wFlags) : QGraphicsWidget(parent, wFlags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicswidget_metaobject_callback) {
            QMetaObject* callback_ret = qgraphicswidget_metaobject_callback(this);
            return callback_ret;
        }
        return QGraphicsWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicswidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgraphicswidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicswidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgraphicswidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qgraphicswidget_setgeometry_callback) {
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&rect_ret);
            qgraphicswidget_setgeometry_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::setGeometry(rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qgraphicswidget_getcontentsmargins_callback) {
            double* cbval1 = static_cast<double*>(left);
            double* cbval2 = static_cast<double*>(top);
            double* cbval3 = static_cast<double*>(right);
            double* cbval4 = static_cast<double*>(bottom);
            qgraphicswidget_getcontentsmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QGraphicsWidget::getContentsMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicswidget_type_callback) {
            int callback_ret = qgraphicswidget_type_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsWidget::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicswidget_paint_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qgraphicswidget_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsWidget::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicswidget_paintwindowframe_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qgraphicswidget_paintwindowframe_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsWidget::paintWindowFrame(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicswidget_boundingrect_callback) {
            QRectF* callback_ret = qgraphicswidget_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsWidget::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicswidget_shape_callback) {
            QPainterPath* callback_ret = qgraphicswidget_shape_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsWidget::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOption* option) const override {
        if (qgraphicswidget_initstyleoption_callback) {
            QStyleOption* cbval1 = option;
            qgraphicswidget_initstyleoption_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        if (qgraphicswidget_sizehint_callback) {
            int cbval1 = static_cast<int>(which);
            const QSizeF& constraint_ret = constraint;
            // Cast returned reference into pointer
            QSizeF* cbval2 = const_cast<QSizeF*>(&constraint_ret);
            QSizeF* callback_ret = qgraphicswidget_sizehint_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsWidget::sizeHint(which, constraint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qgraphicswidget_updategeometry_callback) {
            qgraphicswidget_updategeometry_callback(this);
            return;
        }
        QGraphicsWidget::updateGeometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicswidget_itemchange_callback) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            QVariant* callback_ret = qgraphicswidget_itemchange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsWidget::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
        if (qgraphicswidget_propertychange_callback) {
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
            QVariant* callback_ret = qgraphicswidget_propertychange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(propertyName_str);
            return callback_ret_Value;
        }
        return QGraphicsWidget::propertyChange(propertyName, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicswidget_sceneevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicswidget_sceneevent_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsWidget::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool windowFrameEvent(QEvent* e) override {
        if (qgraphicswidget_windowframeevent_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qgraphicswidget_windowframeevent_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsWidget::windowFrameEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
        if (qgraphicswidget_windowframesectionat_callback) {
            const QPointF& pos_ret = pos;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&pos_ret);
            int callback_ret = qgraphicswidget_windowframesectionat_callback(this, cbval1);
            return static_cast<Qt::WindowFrameSection>(callback_ret);
        }
        return QGraphicsWidget::windowFrameSectionAt(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicswidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicswidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qgraphicswidget_changeevent_callback) {
            QEvent* cbval1 = event;
            qgraphicswidget_changeevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qgraphicswidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qgraphicswidget_closeevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicswidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicswidget_focusinevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qgraphicswidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qgraphicswidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicswidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicswidget_focusoutevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qgraphicswidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qgraphicswidget_hideevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
        if (qgraphicswidget_moveevent_callback) {
            QGraphicsSceneMoveEvent* cbval1 = event;
            qgraphicswidget_moveevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void polishEvent() override {
        if (qgraphicswidget_polishevent_callback) {
            qgraphicswidget_polishevent_callback(this);
            return;
        }
        QGraphicsWidget::polishEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
        if (qgraphicswidget_resizeevent_callback) {
            QGraphicsSceneResizeEvent* cbval1 = event;
            qgraphicswidget_resizeevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qgraphicswidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            qgraphicswidget_showevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicswidget_hovermoveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicswidget_hovermoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicswidget_hoverleaveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicswidget_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabMouseEvent(QEvent* event) override {
        if (qgraphicswidget_grabmouseevent_callback) {
            QEvent* cbval1 = event;
            qgraphicswidget_grabmouseevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::grabMouseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabMouseEvent(QEvent* event) override {
        if (qgraphicswidget_ungrabmouseevent_callback) {
            QEvent* cbval1 = event;
            qgraphicswidget_ungrabmouseevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::ungrabMouseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabKeyboardEvent(QEvent* event) override {
        if (qgraphicswidget_grabkeyboardevent_callback) {
            QEvent* cbval1 = event;
            qgraphicswidget_grabkeyboardevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::grabKeyboardEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabKeyboardEvent(QEvent* event) override {
        if (qgraphicswidget_ungrabkeyboardevent_callback) {
            QEvent* cbval1 = event;
            qgraphicswidget_ungrabkeyboardevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::ungrabKeyboardEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicswidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicswidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicswidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgraphicswidget_timerevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicswidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgraphicswidget_childevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicswidget_customevent_callback) {
            QEvent* cbval1 = event;
            qgraphicswidget_customevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicswidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicswidget_connectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicswidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicswidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicswidget_advance_callback) {
            int cbval1 = phase;
            qgraphicswidget_advance_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicswidget_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qgraphicswidget_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsWidget::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicswidget_collideswithitem_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicswidget_collideswithitem_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsWidget::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicswidget_collideswithpath_callback) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qgraphicswidget_collideswithpath_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsWidget::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicswidget_isobscuredby_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;
            bool callback_ret = qgraphicswidget_isobscuredby_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsWidget::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicswidget_opaquearea_callback) {
            QPainterPath* callback_ret = qgraphicswidget_opaquearea_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsWidget::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicswidget_sceneeventfilter_callback) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicswidget_sceneeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsWidget::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicswidget_contextmenuevent_callback) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;
            qgraphicswidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicswidget_dragenterevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicswidget_dragenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicswidget_dragleaveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicswidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicswidget_dragmoveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicswidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicswidget_dropevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicswidget_dropevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicswidget_hoverenterevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qgraphicswidget_hoverenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicswidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicswidget_keypressevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicswidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicswidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicswidget_mousepressevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicswidget_mousepressevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicswidget_mousemoveevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicswidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicswidget_mousereleaseevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicswidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicswidget_mousedoubleclickevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicswidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicswidget_wheelevent_callback) {
            QGraphicsSceneWheelEvent* cbval1 = event;
            qgraphicswidget_wheelevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicswidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qgraphicswidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        QGraphicsWidget::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicswidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qgraphicswidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsWidget::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicswidget_supportsextension_callback) {
            int cbval1 = static_cast<int>(extension);
            bool callback_ret = qgraphicswidget_supportsextension_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsWidget::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicswidget_setextension_callback) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);
            qgraphicswidget_setextension_callback(this, cbval1, cbval2);
            return;
        }
        QGraphicsWidget::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicswidget_extension_callback) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);
            QVariant* callback_ret = qgraphicswidget_extension_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsWidget::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgraphicswidget_isempty_callback) {
            bool callback_ret = qgraphicswidget_isempty_callback(this);
            return callback_ret;
        }
        return QGraphicsWidget::isEmpty();
    }

    // Friend functions
    friend void QGraphicsWidget_SuperInitStyleOption(const QGraphicsWidget* self, QStyleOption* option);
    friend QSizeF* QGraphicsWidget_SuperSizeHint(const QGraphicsWidget* self, int which, const QSizeF* constraint);
    friend void QGraphicsWidget_SuperUpdateGeometry(QGraphicsWidget* self);
    friend QVariant* QGraphicsWidget_SuperItemChange(QGraphicsWidget* self, int change, const QVariant* value);
    friend QVariant* QGraphicsWidget_SuperPropertyChange(QGraphicsWidget* self, const libqt_string propertyName, const QVariant* value);
    friend bool QGraphicsWidget_SuperSceneEvent(QGraphicsWidget* self, QEvent* event);
    friend bool QGraphicsWidget_SuperWindowFrameEvent(QGraphicsWidget* self, QEvent* e);
    friend int QGraphicsWidget_SuperWindowFrameSectionAt(const QGraphicsWidget* self, const QPointF* pos);
    friend bool QGraphicsWidget_SuperEvent(QGraphicsWidget* self, QEvent* event);
    friend void QGraphicsWidget_SuperChangeEvent(QGraphicsWidget* self, QEvent* event);
    friend void QGraphicsWidget_SuperCloseEvent(QGraphicsWidget* self, QCloseEvent* event);
    friend void QGraphicsWidget_SuperFocusInEvent(QGraphicsWidget* self, QFocusEvent* event);
    friend bool QGraphicsWidget_SuperFocusNextPrevChild(QGraphicsWidget* self, bool next);
    friend void QGraphicsWidget_SuperFocusOutEvent(QGraphicsWidget* self, QFocusEvent* event);
    friend void QGraphicsWidget_SuperHideEvent(QGraphicsWidget* self, QHideEvent* event);
    friend void QGraphicsWidget_SuperMoveEvent(QGraphicsWidget* self, QGraphicsSceneMoveEvent* event);
    friend void QGraphicsWidget_SuperPolishEvent(QGraphicsWidget* self);
    friend void QGraphicsWidget_SuperResizeEvent(QGraphicsWidget* self, QGraphicsSceneResizeEvent* event);
    friend void QGraphicsWidget_SuperShowEvent(QGraphicsWidget* self, QShowEvent* event);
    friend void QGraphicsWidget_SuperHoverMoveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsWidget_SuperHoverLeaveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsWidget_SuperGrabMouseEvent(QGraphicsWidget* self, QEvent* event);
    friend void QGraphicsWidget_SuperUngrabMouseEvent(QGraphicsWidget* self, QEvent* event);
    friend void QGraphicsWidget_SuperGrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
    friend void QGraphicsWidget_SuperUngrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
    friend void QGraphicsWidget_SuperTimerEvent(QGraphicsWidget* self, QTimerEvent* event);
    friend void QGraphicsWidget_SuperChildEvent(QGraphicsWidget* self, QChildEvent* event);
    friend void QGraphicsWidget_SuperCustomEvent(QGraphicsWidget* self, QEvent* event);
    friend void QGraphicsWidget_SuperConnectNotify(QGraphicsWidget* self, const QMetaMethod* signal);
    friend void QGraphicsWidget_SuperDisconnectNotify(QGraphicsWidget* self, const QMetaMethod* signal);
    friend bool QGraphicsWidget_SuperSceneEventFilter(QGraphicsWidget* self, QGraphicsItem* watched, QEvent* event);
    friend void QGraphicsWidget_SuperContextMenuEvent(QGraphicsWidget* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsWidget_SuperDragEnterEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsWidget_SuperDragLeaveEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsWidget_SuperDragMoveEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsWidget_SuperDropEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsWidget_SuperHoverEnterEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsWidget_SuperKeyPressEvent(QGraphicsWidget* self, QKeyEvent* event);
    friend void QGraphicsWidget_SuperKeyReleaseEvent(QGraphicsWidget* self, QKeyEvent* event);
    friend void QGraphicsWidget_SuperMousePressEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsWidget_SuperMouseMoveEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsWidget_SuperMouseReleaseEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsWidget_SuperMouseDoubleClickEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsWidget_SuperWheelEvent(QGraphicsWidget* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsWidget_SuperInputMethodEvent(QGraphicsWidget* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsWidget_SuperInputMethodQuery(const QGraphicsWidget* self, int query);
    friend bool QGraphicsWidget_SuperSupportsExtension(const QGraphicsWidget* self, int extension);
    friend void QGraphicsWidget_SuperSetExtension(QGraphicsWidget* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsWidget_SuperExtension(const QGraphicsWidget* self, const QVariant* variant);
};

#endif
