#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQPOLARCHART_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQPOLARCHART_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPolarChart
class VirtualQPolarChart final : public QPolarChart {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsItem::Extension;
    using QPolarChart_MetaObject_Callback = QMetaObject* (*)(const QPolarChart*);
    using QPolarChart_Metacast_Callback = void* (*)(QPolarChart*, const char*);
    using QPolarChart_Metacall_Callback = int (*)(QPolarChart*, int, int, void**);
    using QPolarChart_SetGeometry_Callback = void (*)(QPolarChart*, QRectF*);
    using QPolarChart_GetContentsMargins_Callback = void (*)(const QPolarChart*, double*, double*, double*, double*);
    using QPolarChart_Type_Callback = int (*)(const QPolarChart*);
    using QPolarChart_Paint_Callback = void (*)(QPolarChart*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QPolarChart_PaintWindowFrame_Callback = void (*)(QPolarChart*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QPolarChart_BoundingRect_Callback = QRectF* (*)(const QPolarChart*);
    using QPolarChart_Shape_Callback = QPainterPath* (*)(const QPolarChart*);
    using QPolarChart_InitStyleOption_Callback = void (*)(const QPolarChart*, QStyleOption*);
    using QPolarChart_SizeHint_Callback = QSizeF* (*)(const QPolarChart*, int, QSizeF*);
    using QPolarChart_UpdateGeometry_Callback = void (*)(QPolarChart*);
    using QPolarChart_ItemChange_Callback = QVariant* (*)(QPolarChart*, int, QVariant*);
    using QPolarChart_PropertyChange_Callback = QVariant* (*)(QPolarChart*, const char*, QVariant*);
    using QPolarChart_SceneEvent_Callback = bool (*)(QPolarChart*, QEvent*);
    using QPolarChart_WindowFrameEvent_Callback = bool (*)(QPolarChart*, QEvent*);
    using QPolarChart_WindowFrameSectionAt_Callback = int (*)(const QPolarChart*, QPointF*);
    using QPolarChart_Event_Callback = bool (*)(QPolarChart*, QEvent*);
    using QPolarChart_ChangeEvent_Callback = void (*)(QPolarChart*, QEvent*);
    using QPolarChart_CloseEvent_Callback = void (*)(QPolarChart*, QCloseEvent*);
    using QPolarChart_FocusInEvent_Callback = void (*)(QPolarChart*, QFocusEvent*);
    using QPolarChart_FocusNextPrevChild_Callback = bool (*)(QPolarChart*, bool);
    using QPolarChart_FocusOutEvent_Callback = void (*)(QPolarChart*, QFocusEvent*);
    using QPolarChart_HideEvent_Callback = void (*)(QPolarChart*, QHideEvent*);
    using QPolarChart_MoveEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneMoveEvent*);
    using QPolarChart_PolishEvent_Callback = void (*)(QPolarChart*);
    using QPolarChart_ResizeEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneResizeEvent*);
    using QPolarChart_ShowEvent_Callback = void (*)(QPolarChart*, QShowEvent*);
    using QPolarChart_HoverMoveEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneHoverEvent*);
    using QPolarChart_HoverLeaveEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneHoverEvent*);
    using QPolarChart_GrabMouseEvent_Callback = void (*)(QPolarChart*, QEvent*);
    using QPolarChart_UngrabMouseEvent_Callback = void (*)(QPolarChart*, QEvent*);
    using QPolarChart_GrabKeyboardEvent_Callback = void (*)(QPolarChart*, QEvent*);
    using QPolarChart_UngrabKeyboardEvent_Callback = void (*)(QPolarChart*, QEvent*);
    using QPolarChart_EventFilter_Callback = bool (*)(QPolarChart*, QObject*, QEvent*);
    using QPolarChart_TimerEvent_Callback = void (*)(QPolarChart*, QTimerEvent*);
    using QPolarChart_ChildEvent_Callback = void (*)(QPolarChart*, QChildEvent*);
    using QPolarChart_CustomEvent_Callback = void (*)(QPolarChart*, QEvent*);
    using QPolarChart_ConnectNotify_Callback = void (*)(QPolarChart*, QMetaMethod*);
    using QPolarChart_DisconnectNotify_Callback = void (*)(QPolarChart*, QMetaMethod*);
    using QPolarChart_Advance_Callback = void (*)(QPolarChart*, int);
    using QPolarChart_Contains_Callback = bool (*)(const QPolarChart*, QPointF*);
    using QPolarChart_CollidesWithItem_Callback = bool (*)(const QPolarChart*, QGraphicsItem*, int);
    using QPolarChart_CollidesWithPath_Callback = bool (*)(const QPolarChart*, QPainterPath*, int);
    using QPolarChart_IsObscuredBy_Callback = bool (*)(const QPolarChart*, QGraphicsItem*);
    using QPolarChart_OpaqueArea_Callback = QPainterPath* (*)(const QPolarChart*);
    using QPolarChart_SceneEventFilter_Callback = bool (*)(QPolarChart*, QGraphicsItem*, QEvent*);
    using QPolarChart_ContextMenuEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneContextMenuEvent*);
    using QPolarChart_DragEnterEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneDragDropEvent*);
    using QPolarChart_DragLeaveEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneDragDropEvent*);
    using QPolarChart_DragMoveEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneDragDropEvent*);
    using QPolarChart_DropEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneDragDropEvent*);
    using QPolarChart_HoverEnterEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneHoverEvent*);
    using QPolarChart_KeyPressEvent_Callback = void (*)(QPolarChart*, QKeyEvent*);
    using QPolarChart_KeyReleaseEvent_Callback = void (*)(QPolarChart*, QKeyEvent*);
    using QPolarChart_MousePressEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneMouseEvent*);
    using QPolarChart_MouseMoveEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneMouseEvent*);
    using QPolarChart_MouseReleaseEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneMouseEvent*);
    using QPolarChart_MouseDoubleClickEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneMouseEvent*);
    using QPolarChart_WheelEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneWheelEvent*);
    using QPolarChart_InputMethodEvent_Callback = void (*)(QPolarChart*, QInputMethodEvent*);
    using QPolarChart_InputMethodQuery_Callback = QVariant* (*)(const QPolarChart*, int);
    using QPolarChart_SupportsExtension_Callback = bool (*)(const QPolarChart*, int);
    using QPolarChart_SetExtension_Callback = void (*)(QPolarChart*, int, QVariant*);
    using QPolarChart_Extension_Callback = QVariant* (*)(const QPolarChart*, QVariant*);
    using QPolarChart_IsEmpty_Callback = bool (*)(const QPolarChart*);
    using QPolarChart::addToIndex;
    using QPolarChart::isSignalConnected;
    using QPolarChart::prepareGeometryChange;
    using QPolarChart::receivers;
    using QPolarChart::removeFromIndex;
    using QPolarChart::sender;
    using QPolarChart::senderSignalIndex;
    using QPolarChart::setGraphicsItem;
    using QPolarChart::setOwnedByLayout;
    using QPolarChart::updateMicroFocus;

    // Instance callback storage
    QPolarChart_MetaObject_Callback qpolarchart_metaobject_callback = nullptr;
    QPolarChart_Metacast_Callback qpolarchart_metacast_callback = nullptr;
    QPolarChart_Metacall_Callback qpolarchart_metacall_callback = nullptr;
    QPolarChart_SetGeometry_Callback qpolarchart_setgeometry_callback = nullptr;
    QPolarChart_GetContentsMargins_Callback qpolarchart_getcontentsmargins_callback = nullptr;
    QPolarChart_Type_Callback qpolarchart_type_callback = nullptr;
    QPolarChart_Paint_Callback qpolarchart_paint_callback = nullptr;
    QPolarChart_PaintWindowFrame_Callback qpolarchart_paintwindowframe_callback = nullptr;
    QPolarChart_BoundingRect_Callback qpolarchart_boundingrect_callback = nullptr;
    QPolarChart_Shape_Callback qpolarchart_shape_callback = nullptr;
    QPolarChart_InitStyleOption_Callback qpolarchart_initstyleoption_callback = nullptr;
    QPolarChart_SizeHint_Callback qpolarchart_sizehint_callback = nullptr;
    QPolarChart_UpdateGeometry_Callback qpolarchart_updategeometry_callback = nullptr;
    QPolarChart_ItemChange_Callback qpolarchart_itemchange_callback = nullptr;
    QPolarChart_PropertyChange_Callback qpolarchart_propertychange_callback = nullptr;
    QPolarChart_SceneEvent_Callback qpolarchart_sceneevent_callback = nullptr;
    QPolarChart_WindowFrameEvent_Callback qpolarchart_windowframeevent_callback = nullptr;
    QPolarChart_WindowFrameSectionAt_Callback qpolarchart_windowframesectionat_callback = nullptr;
    QPolarChart_Event_Callback qpolarchart_event_callback = nullptr;
    QPolarChart_ChangeEvent_Callback qpolarchart_changeevent_callback = nullptr;
    QPolarChart_CloseEvent_Callback qpolarchart_closeevent_callback = nullptr;
    QPolarChart_FocusInEvent_Callback qpolarchart_focusinevent_callback = nullptr;
    QPolarChart_FocusNextPrevChild_Callback qpolarchart_focusnextprevchild_callback = nullptr;
    QPolarChart_FocusOutEvent_Callback qpolarchart_focusoutevent_callback = nullptr;
    QPolarChart_HideEvent_Callback qpolarchart_hideevent_callback = nullptr;
    QPolarChart_MoveEvent_Callback qpolarchart_moveevent_callback = nullptr;
    QPolarChart_PolishEvent_Callback qpolarchart_polishevent_callback = nullptr;
    QPolarChart_ResizeEvent_Callback qpolarchart_resizeevent_callback = nullptr;
    QPolarChart_ShowEvent_Callback qpolarchart_showevent_callback = nullptr;
    QPolarChart_HoverMoveEvent_Callback qpolarchart_hovermoveevent_callback = nullptr;
    QPolarChart_HoverLeaveEvent_Callback qpolarchart_hoverleaveevent_callback = nullptr;
    QPolarChart_GrabMouseEvent_Callback qpolarchart_grabmouseevent_callback = nullptr;
    QPolarChart_UngrabMouseEvent_Callback qpolarchart_ungrabmouseevent_callback = nullptr;
    QPolarChart_GrabKeyboardEvent_Callback qpolarchart_grabkeyboardevent_callback = nullptr;
    QPolarChart_UngrabKeyboardEvent_Callback qpolarchart_ungrabkeyboardevent_callback = nullptr;
    QPolarChart_EventFilter_Callback qpolarchart_eventfilter_callback = nullptr;
    QPolarChart_TimerEvent_Callback qpolarchart_timerevent_callback = nullptr;
    QPolarChart_ChildEvent_Callback qpolarchart_childevent_callback = nullptr;
    QPolarChart_CustomEvent_Callback qpolarchart_customevent_callback = nullptr;
    QPolarChart_ConnectNotify_Callback qpolarchart_connectnotify_callback = nullptr;
    QPolarChart_DisconnectNotify_Callback qpolarchart_disconnectnotify_callback = nullptr;
    QPolarChart_Advance_Callback qpolarchart_advance_callback = nullptr;
    QPolarChart_Contains_Callback qpolarchart_contains_callback = nullptr;
    QPolarChart_CollidesWithItem_Callback qpolarchart_collideswithitem_callback = nullptr;
    QPolarChart_CollidesWithPath_Callback qpolarchart_collideswithpath_callback = nullptr;
    QPolarChart_IsObscuredBy_Callback qpolarchart_isobscuredby_callback = nullptr;
    QPolarChart_OpaqueArea_Callback qpolarchart_opaquearea_callback = nullptr;
    QPolarChart_SceneEventFilter_Callback qpolarchart_sceneeventfilter_callback = nullptr;
    QPolarChart_ContextMenuEvent_Callback qpolarchart_contextmenuevent_callback = nullptr;
    QPolarChart_DragEnterEvent_Callback qpolarchart_dragenterevent_callback = nullptr;
    QPolarChart_DragLeaveEvent_Callback qpolarchart_dragleaveevent_callback = nullptr;
    QPolarChart_DragMoveEvent_Callback qpolarchart_dragmoveevent_callback = nullptr;
    QPolarChart_DropEvent_Callback qpolarchart_dropevent_callback = nullptr;
    QPolarChart_HoverEnterEvent_Callback qpolarchart_hoverenterevent_callback = nullptr;
    QPolarChart_KeyPressEvent_Callback qpolarchart_keypressevent_callback = nullptr;
    QPolarChart_KeyReleaseEvent_Callback qpolarchart_keyreleaseevent_callback = nullptr;
    QPolarChart_MousePressEvent_Callback qpolarchart_mousepressevent_callback = nullptr;
    QPolarChart_MouseMoveEvent_Callback qpolarchart_mousemoveevent_callback = nullptr;
    QPolarChart_MouseReleaseEvent_Callback qpolarchart_mousereleaseevent_callback = nullptr;
    QPolarChart_MouseDoubleClickEvent_Callback qpolarchart_mousedoubleclickevent_callback = nullptr;
    QPolarChart_WheelEvent_Callback qpolarchart_wheelevent_callback = nullptr;
    QPolarChart_InputMethodEvent_Callback qpolarchart_inputmethodevent_callback = nullptr;
    QPolarChart_InputMethodQuery_Callback qpolarchart_inputmethodquery_callback = nullptr;
    QPolarChart_SupportsExtension_Callback qpolarchart_supportsextension_callback = nullptr;
    QPolarChart_SetExtension_Callback qpolarchart_setextension_callback = nullptr;
    QPolarChart_Extension_Callback qpolarchart_extension_callback = nullptr;
    QPolarChart_IsEmpty_Callback qpolarchart_isempty_callback = nullptr;

    // Access struct
    struct Base : QPolarChart {
        using QPolarChart::changeEvent;
        using QPolarChart::childEvent;
        using QPolarChart::closeEvent;
        using QPolarChart::connectNotify;
        using QPolarChart::contextMenuEvent;
        using QPolarChart::customEvent;
        using QPolarChart::disconnectNotify;
        using QPolarChart::dragEnterEvent;
        using QPolarChart::dragLeaveEvent;
        using QPolarChart::dragMoveEvent;
        using QPolarChart::dropEvent;
        using QPolarChart::event;
        using QPolarChart::extension;
        using QPolarChart::focusInEvent;
        using QPolarChart::focusNextPrevChild;
        using QPolarChart::focusOutEvent;
        using QPolarChart::grabKeyboardEvent;
        using QPolarChart::grabMouseEvent;
        using QPolarChart::hideEvent;
        using QPolarChart::hoverEnterEvent;
        using QPolarChart::hoverLeaveEvent;
        using QPolarChart::hoverMoveEvent;
        using QPolarChart::initStyleOption;
        using QPolarChart::inputMethodEvent;
        using QPolarChart::inputMethodQuery;
        using QPolarChart::itemChange;
        using QPolarChart::keyPressEvent;
        using QPolarChart::keyReleaseEvent;
        using QPolarChart::mouseDoubleClickEvent;
        using QPolarChart::mouseMoveEvent;
        using QPolarChart::mousePressEvent;
        using QPolarChart::mouseReleaseEvent;
        using QPolarChart::moveEvent;
        using QPolarChart::polishEvent;
        using QPolarChart::propertyChange;
        using QPolarChart::resizeEvent;
        using QPolarChart::sceneEvent;
        using QPolarChart::sceneEventFilter;
        using QPolarChart::setExtension;
        using QPolarChart::showEvent;
        using QPolarChart::sizeHint;
        using QPolarChart::supportsExtension;
        using QPolarChart::timerEvent;
        using QPolarChart::ungrabKeyboardEvent;
        using QPolarChart::ungrabMouseEvent;
        using QPolarChart::updateGeometry;
        using QPolarChart::wheelEvent;
        using QPolarChart::windowFrameEvent;
        using QPolarChart::windowFrameSectionAt;
    };

    VirtualQPolarChart() : QPolarChart() {};
    VirtualQPolarChart(QGraphicsItem* parent) : QPolarChart(parent) {};
    VirtualQPolarChart(QGraphicsItem* parent, Qt::WindowFlags wFlags) : QPolarChart(parent, wFlags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpolarchart_metaobject_callback) {
            QMetaObject* callback_ret = qpolarchart_metaobject_callback(this);
            return callback_ret;
        }
        return QPolarChart::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpolarchart_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpolarchart_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPolarChart::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpolarchart_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpolarchart_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPolarChart::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qpolarchart_setgeometry_callback) {
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&rect_ret);
            qpolarchart_setgeometry_callback(this, cbval1);
            return;
        }
        QPolarChart::setGeometry(rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qpolarchart_getcontentsmargins_callback) {
            double* cbval1 = static_cast<double*>(left);
            double* cbval2 = static_cast<double*>(top);
            double* cbval3 = static_cast<double*>(right);
            double* cbval4 = static_cast<double*>(bottom);
            qpolarchart_getcontentsmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QPolarChart::getContentsMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qpolarchart_type_callback) {
            int callback_ret = qpolarchart_type_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QPolarChart::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qpolarchart_paint_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qpolarchart_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QPolarChart::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qpolarchart_paintwindowframe_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qpolarchart_paintwindowframe_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QPolarChart::paintWindowFrame(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qpolarchart_boundingrect_callback) {
            QRectF* callback_ret = qpolarchart_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPolarChart::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qpolarchart_shape_callback) {
            QPainterPath* callback_ret = qpolarchart_shape_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPolarChart::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOption* option) const override {
        if (qpolarchart_initstyleoption_callback) {
            QStyleOption* cbval1 = option;
            qpolarchart_initstyleoption_callback(this, cbval1);
            return;
        }
        QPolarChart::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        if (qpolarchart_sizehint_callback) {
            int cbval1 = static_cast<int>(which);
            const QSizeF& constraint_ret = constraint;
            // Cast returned reference into pointer
            QSizeF* cbval2 = const_cast<QSizeF*>(&constraint_ret);
            QSizeF* callback_ret = qpolarchart_sizehint_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPolarChart::sizeHint(which, constraint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qpolarchart_updategeometry_callback) {
            qpolarchart_updategeometry_callback(this);
            return;
        }
        QPolarChart::updateGeometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qpolarchart_itemchange_callback) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            QVariant* callback_ret = qpolarchart_itemchange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPolarChart::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
        if (qpolarchart_propertychange_callback) {
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
            QVariant* callback_ret = qpolarchart_propertychange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(propertyName_str);
            return callback_ret_Value;
        }
        return QPolarChart::propertyChange(propertyName, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qpolarchart_sceneevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qpolarchart_sceneevent_callback(this, cbval1);
            return callback_ret;
        }
        return QPolarChart::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool windowFrameEvent(QEvent* e) override {
        if (qpolarchart_windowframeevent_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qpolarchart_windowframeevent_callback(this, cbval1);
            return callback_ret;
        }
        return QPolarChart::windowFrameEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
        if (qpolarchart_windowframesectionat_callback) {
            const QPointF& pos_ret = pos;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&pos_ret);
            int callback_ret = qpolarchart_windowframesectionat_callback(this, cbval1);
            return static_cast<Qt::WindowFrameSection>(callback_ret);
        }
        return QPolarChart::windowFrameSectionAt(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpolarchart_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qpolarchart_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPolarChart::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qpolarchart_changeevent_callback) {
            QEvent* cbval1 = event;
            qpolarchart_changeevent_callback(this, cbval1);
            return;
        }
        QPolarChart::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qpolarchart_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qpolarchart_closeevent_callback(this, cbval1);
            return;
        }
        QPolarChart::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qpolarchart_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qpolarchart_focusinevent_callback(this, cbval1);
            return;
        }
        QPolarChart::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qpolarchart_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qpolarchart_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QPolarChart::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qpolarchart_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qpolarchart_focusoutevent_callback(this, cbval1);
            return;
        }
        QPolarChart::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qpolarchart_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qpolarchart_hideevent_callback(this, cbval1);
            return;
        }
        QPolarChart::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
        if (qpolarchart_moveevent_callback) {
            QGraphicsSceneMoveEvent* cbval1 = event;
            qpolarchart_moveevent_callback(this, cbval1);
            return;
        }
        QPolarChart::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void polishEvent() override {
        if (qpolarchart_polishevent_callback) {
            qpolarchart_polishevent_callback(this);
            return;
        }
        QPolarChart::polishEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
        if (qpolarchart_resizeevent_callback) {
            QGraphicsSceneResizeEvent* cbval1 = event;
            qpolarchart_resizeevent_callback(this, cbval1);
            return;
        }
        QPolarChart::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qpolarchart_showevent_callback) {
            QShowEvent* cbval1 = event;
            qpolarchart_showevent_callback(this, cbval1);
            return;
        }
        QPolarChart::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qpolarchart_hovermoveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qpolarchart_hovermoveevent_callback(this, cbval1);
            return;
        }
        QPolarChart::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qpolarchart_hoverleaveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qpolarchart_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QPolarChart::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabMouseEvent(QEvent* event) override {
        if (qpolarchart_grabmouseevent_callback) {
            QEvent* cbval1 = event;
            qpolarchart_grabmouseevent_callback(this, cbval1);
            return;
        }
        QPolarChart::grabMouseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabMouseEvent(QEvent* event) override {
        if (qpolarchart_ungrabmouseevent_callback) {
            QEvent* cbval1 = event;
            qpolarchart_ungrabmouseevent_callback(this, cbval1);
            return;
        }
        QPolarChart::ungrabMouseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabKeyboardEvent(QEvent* event) override {
        if (qpolarchart_grabkeyboardevent_callback) {
            QEvent* cbval1 = event;
            qpolarchart_grabkeyboardevent_callback(this, cbval1);
            return;
        }
        QPolarChart::grabKeyboardEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabKeyboardEvent(QEvent* event) override {
        if (qpolarchart_ungrabkeyboardevent_callback) {
            QEvent* cbval1 = event;
            qpolarchart_ungrabkeyboardevent_callback(this, cbval1);
            return;
        }
        QPolarChart::ungrabKeyboardEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpolarchart_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpolarchart_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPolarChart::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpolarchart_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpolarchart_timerevent_callback(this, cbval1);
            return;
        }
        QPolarChart::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpolarchart_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpolarchart_childevent_callback(this, cbval1);
            return;
        }
        QPolarChart::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpolarchart_customevent_callback) {
            QEvent* cbval1 = event;
            qpolarchart_customevent_callback(this, cbval1);
            return;
        }
        QPolarChart::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpolarchart_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpolarchart_connectnotify_callback(this, cbval1);
            return;
        }
        QPolarChart::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpolarchart_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpolarchart_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPolarChart::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qpolarchart_advance_callback) {
            int cbval1 = phase;
            qpolarchart_advance_callback(this, cbval1);
            return;
        }
        QPolarChart::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qpolarchart_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qpolarchart_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QPolarChart::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qpolarchart_collideswithitem_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qpolarchart_collideswithitem_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPolarChart::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qpolarchart_collideswithpath_callback) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qpolarchart_collideswithpath_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPolarChart::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qpolarchart_isobscuredby_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;
            bool callback_ret = qpolarchart_isobscuredby_callback(this, cbval1);
            return callback_ret;
        }
        return QPolarChart::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qpolarchart_opaquearea_callback) {
            QPainterPath* callback_ret = qpolarchart_opaquearea_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPolarChart::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qpolarchart_sceneeventfilter_callback) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpolarchart_sceneeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPolarChart::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qpolarchart_contextmenuevent_callback) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;
            qpolarchart_contextmenuevent_callback(this, cbval1);
            return;
        }
        QPolarChart::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qpolarchart_dragenterevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qpolarchart_dragenterevent_callback(this, cbval1);
            return;
        }
        QPolarChart::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qpolarchart_dragleaveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qpolarchart_dragleaveevent_callback(this, cbval1);
            return;
        }
        QPolarChart::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qpolarchart_dragmoveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qpolarchart_dragmoveevent_callback(this, cbval1);
            return;
        }
        QPolarChart::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qpolarchart_dropevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qpolarchart_dropevent_callback(this, cbval1);
            return;
        }
        QPolarChart::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qpolarchart_hoverenterevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qpolarchart_hoverenterevent_callback(this, cbval1);
            return;
        }
        QPolarChart::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qpolarchart_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qpolarchart_keypressevent_callback(this, cbval1);
            return;
        }
        QPolarChart::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qpolarchart_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qpolarchart_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QPolarChart::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qpolarchart_mousepressevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qpolarchart_mousepressevent_callback(this, cbval1);
            return;
        }
        QPolarChart::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qpolarchart_mousemoveevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qpolarchart_mousemoveevent_callback(this, cbval1);
            return;
        }
        QPolarChart::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qpolarchart_mousereleaseevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qpolarchart_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QPolarChart::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qpolarchart_mousedoubleclickevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qpolarchart_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QPolarChart::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qpolarchart_wheelevent_callback) {
            QGraphicsSceneWheelEvent* cbval1 = event;
            qpolarchart_wheelevent_callback(this, cbval1);
            return;
        }
        QPolarChart::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qpolarchart_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qpolarchart_inputmethodevent_callback(this, cbval1);
            return;
        }
        QPolarChart::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qpolarchart_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qpolarchart_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPolarChart::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qpolarchart_supportsextension_callback) {
            int cbval1 = static_cast<int>(extension);
            bool callback_ret = qpolarchart_supportsextension_callback(this, cbval1);
            return callback_ret;
        }
        return QPolarChart::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qpolarchart_setextension_callback) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);
            qpolarchart_setextension_callback(this, cbval1, cbval2);
            return;
        }
        QPolarChart::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qpolarchart_extension_callback) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);
            QVariant* callback_ret = qpolarchart_extension_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPolarChart::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qpolarchart_isempty_callback) {
            bool callback_ret = qpolarchart_isempty_callback(this);
            return callback_ret;
        }
        return QPolarChart::isEmpty();
    }

    // Friend functions
    friend void QPolarChart_SuperInitStyleOption(const QPolarChart* self, QStyleOption* option);
    friend QSizeF* QPolarChart_SuperSizeHint(const QPolarChart* self, int which, const QSizeF* constraint);
    friend void QPolarChart_SuperUpdateGeometry(QPolarChart* self);
    friend QVariant* QPolarChart_SuperItemChange(QPolarChart* self, int change, const QVariant* value);
    friend QVariant* QPolarChart_SuperPropertyChange(QPolarChart* self, const libqt_string propertyName, const QVariant* value);
    friend bool QPolarChart_SuperSceneEvent(QPolarChart* self, QEvent* event);
    friend bool QPolarChart_SuperWindowFrameEvent(QPolarChart* self, QEvent* e);
    friend int QPolarChart_SuperWindowFrameSectionAt(const QPolarChart* self, const QPointF* pos);
    friend bool QPolarChart_SuperEvent(QPolarChart* self, QEvent* event);
    friend void QPolarChart_SuperChangeEvent(QPolarChart* self, QEvent* event);
    friend void QPolarChart_SuperCloseEvent(QPolarChart* self, QCloseEvent* event);
    friend void QPolarChart_SuperFocusInEvent(QPolarChart* self, QFocusEvent* event);
    friend bool QPolarChart_SuperFocusNextPrevChild(QPolarChart* self, bool next);
    friend void QPolarChart_SuperFocusOutEvent(QPolarChart* self, QFocusEvent* event);
    friend void QPolarChart_SuperHideEvent(QPolarChart* self, QHideEvent* event);
    friend void QPolarChart_SuperMoveEvent(QPolarChart* self, QGraphicsSceneMoveEvent* event);
    friend void QPolarChart_SuperPolishEvent(QPolarChart* self);
    friend void QPolarChart_SuperResizeEvent(QPolarChart* self, QGraphicsSceneResizeEvent* event);
    friend void QPolarChart_SuperShowEvent(QPolarChart* self, QShowEvent* event);
    friend void QPolarChart_SuperHoverMoveEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event);
    friend void QPolarChart_SuperHoverLeaveEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event);
    friend void QPolarChart_SuperGrabMouseEvent(QPolarChart* self, QEvent* event);
    friend void QPolarChart_SuperUngrabMouseEvent(QPolarChart* self, QEvent* event);
    friend void QPolarChart_SuperGrabKeyboardEvent(QPolarChart* self, QEvent* event);
    friend void QPolarChart_SuperUngrabKeyboardEvent(QPolarChart* self, QEvent* event);
    friend void QPolarChart_SuperTimerEvent(QPolarChart* self, QTimerEvent* event);
    friend void QPolarChart_SuperChildEvent(QPolarChart* self, QChildEvent* event);
    friend void QPolarChart_SuperCustomEvent(QPolarChart* self, QEvent* event);
    friend void QPolarChart_SuperConnectNotify(QPolarChart* self, const QMetaMethod* signal);
    friend void QPolarChart_SuperDisconnectNotify(QPolarChart* self, const QMetaMethod* signal);
    friend bool QPolarChart_SuperSceneEventFilter(QPolarChart* self, QGraphicsItem* watched, QEvent* event);
    friend void QPolarChart_SuperContextMenuEvent(QPolarChart* self, QGraphicsSceneContextMenuEvent* event);
    friend void QPolarChart_SuperDragEnterEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event);
    friend void QPolarChart_SuperDragLeaveEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event);
    friend void QPolarChart_SuperDragMoveEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event);
    friend void QPolarChart_SuperDropEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event);
    friend void QPolarChart_SuperHoverEnterEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event);
    friend void QPolarChart_SuperKeyPressEvent(QPolarChart* self, QKeyEvent* event);
    friend void QPolarChart_SuperKeyReleaseEvent(QPolarChart* self, QKeyEvent* event);
    friend void QPolarChart_SuperMousePressEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event);
    friend void QPolarChart_SuperMouseMoveEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event);
    friend void QPolarChart_SuperMouseReleaseEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event);
    friend void QPolarChart_SuperMouseDoubleClickEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event);
    friend void QPolarChart_SuperWheelEvent(QPolarChart* self, QGraphicsSceneWheelEvent* event);
    friend void QPolarChart_SuperInputMethodEvent(QPolarChart* self, QInputMethodEvent* event);
    friend QVariant* QPolarChart_SuperInputMethodQuery(const QPolarChart* self, int query);
    friend bool QPolarChart_SuperSupportsExtension(const QPolarChart* self, int extension);
    friend void QPolarChart_SuperSetExtension(QPolarChart* self, int extension, const QVariant* variant);
    friend QVariant* QPolarChart_SuperExtension(const QPolarChart* self, const QVariant* variant);
};

#endif
