#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQCHART_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQCHART_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QChart
class VirtualQChart final : public QChart {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsItem::Extension;
    using QChart_MetaObject_Callback = QMetaObject* (*)(const QChart*);
    using QChart_Metacast_Callback = void* (*)(QChart*, const char*);
    using QChart_Metacall_Callback = int (*)(QChart*, int, int, void**);
    using QChart_SetGeometry_Callback = void (*)(QChart*, QRectF*);
    using QChart_GetContentsMargins_Callback = void (*)(const QChart*, double*, double*, double*, double*);
    using QChart_Type_Callback = int (*)(const QChart*);
    using QChart_Paint_Callback = void (*)(QChart*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QChart_PaintWindowFrame_Callback = void (*)(QChart*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QChart_BoundingRect_Callback = QRectF* (*)(const QChart*);
    using QChart_Shape_Callback = QPainterPath* (*)(const QChart*);
    using QChart_InitStyleOption_Callback = void (*)(const QChart*, QStyleOption*);
    using QChart_SizeHint_Callback = QSizeF* (*)(const QChart*, int, QSizeF*);
    using QChart_UpdateGeometry_Callback = void (*)(QChart*);
    using QChart_ItemChange_Callback = QVariant* (*)(QChart*, int, QVariant*);
    using QChart_PropertyChange_Callback = QVariant* (*)(QChart*, const char*, QVariant*);
    using QChart_SceneEvent_Callback = bool (*)(QChart*, QEvent*);
    using QChart_WindowFrameEvent_Callback = bool (*)(QChart*, QEvent*);
    using QChart_WindowFrameSectionAt_Callback = int (*)(const QChart*, QPointF*);
    using QChart_Event_Callback = bool (*)(QChart*, QEvent*);
    using QChart_ChangeEvent_Callback = void (*)(QChart*, QEvent*);
    using QChart_CloseEvent_Callback = void (*)(QChart*, QCloseEvent*);
    using QChart_FocusInEvent_Callback = void (*)(QChart*, QFocusEvent*);
    using QChart_FocusNextPrevChild_Callback = bool (*)(QChart*, bool);
    using QChart_FocusOutEvent_Callback = void (*)(QChart*, QFocusEvent*);
    using QChart_HideEvent_Callback = void (*)(QChart*, QHideEvent*);
    using QChart_MoveEvent_Callback = void (*)(QChart*, QGraphicsSceneMoveEvent*);
    using QChart_PolishEvent_Callback = void (*)(QChart*);
    using QChart_ResizeEvent_Callback = void (*)(QChart*, QGraphicsSceneResizeEvent*);
    using QChart_ShowEvent_Callback = void (*)(QChart*, QShowEvent*);
    using QChart_HoverMoveEvent_Callback = void (*)(QChart*, QGraphicsSceneHoverEvent*);
    using QChart_HoverLeaveEvent_Callback = void (*)(QChart*, QGraphicsSceneHoverEvent*);
    using QChart_GrabMouseEvent_Callback = void (*)(QChart*, QEvent*);
    using QChart_UngrabMouseEvent_Callback = void (*)(QChart*, QEvent*);
    using QChart_GrabKeyboardEvent_Callback = void (*)(QChart*, QEvent*);
    using QChart_UngrabKeyboardEvent_Callback = void (*)(QChart*, QEvent*);
    using QChart_EventFilter_Callback = bool (*)(QChart*, QObject*, QEvent*);
    using QChart_TimerEvent_Callback = void (*)(QChart*, QTimerEvent*);
    using QChart_ChildEvent_Callback = void (*)(QChart*, QChildEvent*);
    using QChart_CustomEvent_Callback = void (*)(QChart*, QEvent*);
    using QChart_ConnectNotify_Callback = void (*)(QChart*, QMetaMethod*);
    using QChart_DisconnectNotify_Callback = void (*)(QChart*, QMetaMethod*);
    using QChart_Advance_Callback = void (*)(QChart*, int);
    using QChart_Contains_Callback = bool (*)(const QChart*, QPointF*);
    using QChart_CollidesWithItem_Callback = bool (*)(const QChart*, QGraphicsItem*, int);
    using QChart_CollidesWithPath_Callback = bool (*)(const QChart*, QPainterPath*, int);
    using QChart_IsObscuredBy_Callback = bool (*)(const QChart*, QGraphicsItem*);
    using QChart_OpaqueArea_Callback = QPainterPath* (*)(const QChart*);
    using QChart_SceneEventFilter_Callback = bool (*)(QChart*, QGraphicsItem*, QEvent*);
    using QChart_ContextMenuEvent_Callback = void (*)(QChart*, QGraphicsSceneContextMenuEvent*);
    using QChart_DragEnterEvent_Callback = void (*)(QChart*, QGraphicsSceneDragDropEvent*);
    using QChart_DragLeaveEvent_Callback = void (*)(QChart*, QGraphicsSceneDragDropEvent*);
    using QChart_DragMoveEvent_Callback = void (*)(QChart*, QGraphicsSceneDragDropEvent*);
    using QChart_DropEvent_Callback = void (*)(QChart*, QGraphicsSceneDragDropEvent*);
    using QChart_HoverEnterEvent_Callback = void (*)(QChart*, QGraphicsSceneHoverEvent*);
    using QChart_KeyPressEvent_Callback = void (*)(QChart*, QKeyEvent*);
    using QChart_KeyReleaseEvent_Callback = void (*)(QChart*, QKeyEvent*);
    using QChart_MousePressEvent_Callback = void (*)(QChart*, QGraphicsSceneMouseEvent*);
    using QChart_MouseMoveEvent_Callback = void (*)(QChart*, QGraphicsSceneMouseEvent*);
    using QChart_MouseReleaseEvent_Callback = void (*)(QChart*, QGraphicsSceneMouseEvent*);
    using QChart_MouseDoubleClickEvent_Callback = void (*)(QChart*, QGraphicsSceneMouseEvent*);
    using QChart_WheelEvent_Callback = void (*)(QChart*, QGraphicsSceneWheelEvent*);
    using QChart_InputMethodEvent_Callback = void (*)(QChart*, QInputMethodEvent*);
    using QChart_InputMethodQuery_Callback = QVariant* (*)(const QChart*, int);
    using QChart_SupportsExtension_Callback = bool (*)(const QChart*, int);
    using QChart_SetExtension_Callback = void (*)(QChart*, int, QVariant*);
    using QChart_Extension_Callback = QVariant* (*)(const QChart*, QVariant*);
    using QChart_IsEmpty_Callback = bool (*)(const QChart*);
    using QChart::addToIndex;
    using QChart::isSignalConnected;
    using QChart::prepareGeometryChange;
    using QChart::receivers;
    using QChart::removeFromIndex;
    using QChart::sender;
    using QChart::senderSignalIndex;
    using QChart::setGraphicsItem;
    using QChart::setOwnedByLayout;
    using QChart::updateMicroFocus;

    // Instance callback storage
    QChart_MetaObject_Callback qchart_metaobject_callback = nullptr;
    QChart_Metacast_Callback qchart_metacast_callback = nullptr;
    QChart_Metacall_Callback qchart_metacall_callback = nullptr;
    QChart_SetGeometry_Callback qchart_setgeometry_callback = nullptr;
    QChart_GetContentsMargins_Callback qchart_getcontentsmargins_callback = nullptr;
    QChart_Type_Callback qchart_type_callback = nullptr;
    QChart_Paint_Callback qchart_paint_callback = nullptr;
    QChart_PaintWindowFrame_Callback qchart_paintwindowframe_callback = nullptr;
    QChart_BoundingRect_Callback qchart_boundingrect_callback = nullptr;
    QChart_Shape_Callback qchart_shape_callback = nullptr;
    QChart_InitStyleOption_Callback qchart_initstyleoption_callback = nullptr;
    QChart_SizeHint_Callback qchart_sizehint_callback = nullptr;
    QChart_UpdateGeometry_Callback qchart_updategeometry_callback = nullptr;
    QChart_ItemChange_Callback qchart_itemchange_callback = nullptr;
    QChart_PropertyChange_Callback qchart_propertychange_callback = nullptr;
    QChart_SceneEvent_Callback qchart_sceneevent_callback = nullptr;
    QChart_WindowFrameEvent_Callback qchart_windowframeevent_callback = nullptr;
    QChart_WindowFrameSectionAt_Callback qchart_windowframesectionat_callback = nullptr;
    QChart_Event_Callback qchart_event_callback = nullptr;
    QChart_ChangeEvent_Callback qchart_changeevent_callback = nullptr;
    QChart_CloseEvent_Callback qchart_closeevent_callback = nullptr;
    QChart_FocusInEvent_Callback qchart_focusinevent_callback = nullptr;
    QChart_FocusNextPrevChild_Callback qchart_focusnextprevchild_callback = nullptr;
    QChart_FocusOutEvent_Callback qchart_focusoutevent_callback = nullptr;
    QChart_HideEvent_Callback qchart_hideevent_callback = nullptr;
    QChart_MoveEvent_Callback qchart_moveevent_callback = nullptr;
    QChart_PolishEvent_Callback qchart_polishevent_callback = nullptr;
    QChart_ResizeEvent_Callback qchart_resizeevent_callback = nullptr;
    QChart_ShowEvent_Callback qchart_showevent_callback = nullptr;
    QChart_HoverMoveEvent_Callback qchart_hovermoveevent_callback = nullptr;
    QChart_HoverLeaveEvent_Callback qchart_hoverleaveevent_callback = nullptr;
    QChart_GrabMouseEvent_Callback qchart_grabmouseevent_callback = nullptr;
    QChart_UngrabMouseEvent_Callback qchart_ungrabmouseevent_callback = nullptr;
    QChart_GrabKeyboardEvent_Callback qchart_grabkeyboardevent_callback = nullptr;
    QChart_UngrabKeyboardEvent_Callback qchart_ungrabkeyboardevent_callback = nullptr;
    QChart_EventFilter_Callback qchart_eventfilter_callback = nullptr;
    QChart_TimerEvent_Callback qchart_timerevent_callback = nullptr;
    QChart_ChildEvent_Callback qchart_childevent_callback = nullptr;
    QChart_CustomEvent_Callback qchart_customevent_callback = nullptr;
    QChart_ConnectNotify_Callback qchart_connectnotify_callback = nullptr;
    QChart_DisconnectNotify_Callback qchart_disconnectnotify_callback = nullptr;
    QChart_Advance_Callback qchart_advance_callback = nullptr;
    QChart_Contains_Callback qchart_contains_callback = nullptr;
    QChart_CollidesWithItem_Callback qchart_collideswithitem_callback = nullptr;
    QChart_CollidesWithPath_Callback qchart_collideswithpath_callback = nullptr;
    QChart_IsObscuredBy_Callback qchart_isobscuredby_callback = nullptr;
    QChart_OpaqueArea_Callback qchart_opaquearea_callback = nullptr;
    QChart_SceneEventFilter_Callback qchart_sceneeventfilter_callback = nullptr;
    QChart_ContextMenuEvent_Callback qchart_contextmenuevent_callback = nullptr;
    QChart_DragEnterEvent_Callback qchart_dragenterevent_callback = nullptr;
    QChart_DragLeaveEvent_Callback qchart_dragleaveevent_callback = nullptr;
    QChart_DragMoveEvent_Callback qchart_dragmoveevent_callback = nullptr;
    QChart_DropEvent_Callback qchart_dropevent_callback = nullptr;
    QChart_HoverEnterEvent_Callback qchart_hoverenterevent_callback = nullptr;
    QChart_KeyPressEvent_Callback qchart_keypressevent_callback = nullptr;
    QChart_KeyReleaseEvent_Callback qchart_keyreleaseevent_callback = nullptr;
    QChart_MousePressEvent_Callback qchart_mousepressevent_callback = nullptr;
    QChart_MouseMoveEvent_Callback qchart_mousemoveevent_callback = nullptr;
    QChart_MouseReleaseEvent_Callback qchart_mousereleaseevent_callback = nullptr;
    QChart_MouseDoubleClickEvent_Callback qchart_mousedoubleclickevent_callback = nullptr;
    QChart_WheelEvent_Callback qchart_wheelevent_callback = nullptr;
    QChart_InputMethodEvent_Callback qchart_inputmethodevent_callback = nullptr;
    QChart_InputMethodQuery_Callback qchart_inputmethodquery_callback = nullptr;
    QChart_SupportsExtension_Callback qchart_supportsextension_callback = nullptr;
    QChart_SetExtension_Callback qchart_setextension_callback = nullptr;
    QChart_Extension_Callback qchart_extension_callback = nullptr;
    QChart_IsEmpty_Callback qchart_isempty_callback = nullptr;

    // Access struct
    struct Base : QChart {
        using QChart::changeEvent;
        using QChart::childEvent;
        using QChart::closeEvent;
        using QChart::connectNotify;
        using QChart::contextMenuEvent;
        using QChart::customEvent;
        using QChart::disconnectNotify;
        using QChart::dragEnterEvent;
        using QChart::dragLeaveEvent;
        using QChart::dragMoveEvent;
        using QChart::dropEvent;
        using QChart::event;
        using QChart::extension;
        using QChart::focusInEvent;
        using QChart::focusNextPrevChild;
        using QChart::focusOutEvent;
        using QChart::grabKeyboardEvent;
        using QChart::grabMouseEvent;
        using QChart::hideEvent;
        using QChart::hoverEnterEvent;
        using QChart::hoverLeaveEvent;
        using QChart::hoverMoveEvent;
        using QChart::initStyleOption;
        using QChart::inputMethodEvent;
        using QChart::inputMethodQuery;
        using QChart::itemChange;
        using QChart::keyPressEvent;
        using QChart::keyReleaseEvent;
        using QChart::mouseDoubleClickEvent;
        using QChart::mouseMoveEvent;
        using QChart::mousePressEvent;
        using QChart::mouseReleaseEvent;
        using QChart::moveEvent;
        using QChart::polishEvent;
        using QChart::propertyChange;
        using QChart::resizeEvent;
        using QChart::sceneEvent;
        using QChart::sceneEventFilter;
        using QChart::setExtension;
        using QChart::showEvent;
        using QChart::sizeHint;
        using QChart::supportsExtension;
        using QChart::timerEvent;
        using QChart::ungrabKeyboardEvent;
        using QChart::ungrabMouseEvent;
        using QChart::updateGeometry;
        using QChart::wheelEvent;
        using QChart::windowFrameEvent;
        using QChart::windowFrameSectionAt;
    };

    VirtualQChart() : QChart() {};
    VirtualQChart(QGraphicsItem* parent) : QChart(parent) {};
    VirtualQChart(QGraphicsItem* parent, Qt::WindowFlags wFlags) : QChart(parent, wFlags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qchart_metaobject_callback) {
            QMetaObject* callback_ret = qchart_metaobject_callback(this);
            return callback_ret;
        }
        return QChart::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qchart_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qchart_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QChart::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qchart_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qchart_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QChart::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qchart_setgeometry_callback) {
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&rect_ret);
            qchart_setgeometry_callback(this, cbval1);
            return;
        }
        QChart::setGeometry(rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qchart_getcontentsmargins_callback) {
            double* cbval1 = static_cast<double*>(left);
            double* cbval2 = static_cast<double*>(top);
            double* cbval3 = static_cast<double*>(right);
            double* cbval4 = static_cast<double*>(bottom);
            qchart_getcontentsmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QChart::getContentsMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qchart_type_callback) {
            int callback_ret = qchart_type_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QChart::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qchart_paint_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qchart_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QChart::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qchart_paintwindowframe_callback) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;
            qchart_paintwindowframe_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QChart::paintWindowFrame(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qchart_boundingrect_callback) {
            QRectF* callback_ret = qchart_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QChart::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qchart_shape_callback) {
            QPainterPath* callback_ret = qchart_shape_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QChart::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOption* option) const override {
        if (qchart_initstyleoption_callback) {
            QStyleOption* cbval1 = option;
            qchart_initstyleoption_callback(this, cbval1);
            return;
        }
        QChart::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        if (qchart_sizehint_callback) {
            int cbval1 = static_cast<int>(which);
            const QSizeF& constraint_ret = constraint;
            // Cast returned reference into pointer
            QSizeF* cbval2 = const_cast<QSizeF*>(&constraint_ret);
            QSizeF* callback_ret = qchart_sizehint_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QChart::sizeHint(which, constraint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qchart_updategeometry_callback) {
            qchart_updategeometry_callback(this);
            return;
        }
        QChart::updateGeometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qchart_itemchange_callback) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            QVariant* callback_ret = qchart_itemchange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QChart::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
        if (qchart_propertychange_callback) {
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
            QVariant* callback_ret = qchart_propertychange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(propertyName_str);
            return callback_ret_Value;
        }
        return QChart::propertyChange(propertyName, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qchart_sceneevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qchart_sceneevent_callback(this, cbval1);
            return callback_ret;
        }
        return QChart::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool windowFrameEvent(QEvent* e) override {
        if (qchart_windowframeevent_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qchart_windowframeevent_callback(this, cbval1);
            return callback_ret;
        }
        return QChart::windowFrameEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
        if (qchart_windowframesectionat_callback) {
            const QPointF& pos_ret = pos;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&pos_ret);
            int callback_ret = qchart_windowframesectionat_callback(this, cbval1);
            return static_cast<Qt::WindowFrameSection>(callback_ret);
        }
        return QChart::windowFrameSectionAt(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qchart_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qchart_event_callback(this, cbval1);
            return callback_ret;
        }
        return QChart::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qchart_changeevent_callback) {
            QEvent* cbval1 = event;
            qchart_changeevent_callback(this, cbval1);
            return;
        }
        QChart::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qchart_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qchart_closeevent_callback(this, cbval1);
            return;
        }
        QChart::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qchart_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qchart_focusinevent_callback(this, cbval1);
            return;
        }
        QChart::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qchart_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qchart_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QChart::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qchart_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qchart_focusoutevent_callback(this, cbval1);
            return;
        }
        QChart::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qchart_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qchart_hideevent_callback(this, cbval1);
            return;
        }
        QChart::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
        if (qchart_moveevent_callback) {
            QGraphicsSceneMoveEvent* cbval1 = event;
            qchart_moveevent_callback(this, cbval1);
            return;
        }
        QChart::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void polishEvent() override {
        if (qchart_polishevent_callback) {
            qchart_polishevent_callback(this);
            return;
        }
        QChart::polishEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
        if (qchart_resizeevent_callback) {
            QGraphicsSceneResizeEvent* cbval1 = event;
            qchart_resizeevent_callback(this, cbval1);
            return;
        }
        QChart::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qchart_showevent_callback) {
            QShowEvent* cbval1 = event;
            qchart_showevent_callback(this, cbval1);
            return;
        }
        QChart::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qchart_hovermoveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qchart_hovermoveevent_callback(this, cbval1);
            return;
        }
        QChart::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qchart_hoverleaveevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qchart_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QChart::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabMouseEvent(QEvent* event) override {
        if (qchart_grabmouseevent_callback) {
            QEvent* cbval1 = event;
            qchart_grabmouseevent_callback(this, cbval1);
            return;
        }
        QChart::grabMouseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabMouseEvent(QEvent* event) override {
        if (qchart_ungrabmouseevent_callback) {
            QEvent* cbval1 = event;
            qchart_ungrabmouseevent_callback(this, cbval1);
            return;
        }
        QChart::ungrabMouseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabKeyboardEvent(QEvent* event) override {
        if (qchart_grabkeyboardevent_callback) {
            QEvent* cbval1 = event;
            qchart_grabkeyboardevent_callback(this, cbval1);
            return;
        }
        QChart::grabKeyboardEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabKeyboardEvent(QEvent* event) override {
        if (qchart_ungrabkeyboardevent_callback) {
            QEvent* cbval1 = event;
            qchart_ungrabkeyboardevent_callback(this, cbval1);
            return;
        }
        QChart::ungrabKeyboardEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qchart_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qchart_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QChart::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qchart_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qchart_timerevent_callback(this, cbval1);
            return;
        }
        QChart::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qchart_childevent_callback) {
            QChildEvent* cbval1 = event;
            qchart_childevent_callback(this, cbval1);
            return;
        }
        QChart::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qchart_customevent_callback) {
            QEvent* cbval1 = event;
            qchart_customevent_callback(this, cbval1);
            return;
        }
        QChart::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qchart_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qchart_connectnotify_callback(this, cbval1);
            return;
        }
        QChart::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qchart_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qchart_disconnectnotify_callback(this, cbval1);
            return;
        }
        QChart::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qchart_advance_callback) {
            int cbval1 = phase;
            qchart_advance_callback(this, cbval1);
            return;
        }
        QChart::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qchart_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qchart_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QChart::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qchart_collideswithitem_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qchart_collideswithitem_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QChart::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qchart_collideswithpath_callback) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);
            bool callback_ret = qchart_collideswithpath_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QChart::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qchart_isobscuredby_callback) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;
            bool callback_ret = qchart_isobscuredby_callback(this, cbval1);
            return callback_ret;
        }
        return QChart::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qchart_opaquearea_callback) {
            QPainterPath* callback_ret = qchart_opaquearea_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QChart::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qchart_sceneeventfilter_callback) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qchart_sceneeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QChart::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qchart_contextmenuevent_callback) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;
            qchart_contextmenuevent_callback(this, cbval1);
            return;
        }
        QChart::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qchart_dragenterevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qchart_dragenterevent_callback(this, cbval1);
            return;
        }
        QChart::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qchart_dragleaveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qchart_dragleaveevent_callback(this, cbval1);
            return;
        }
        QChart::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qchart_dragmoveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qchart_dragmoveevent_callback(this, cbval1);
            return;
        }
        QChart::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qchart_dropevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qchart_dropevent_callback(this, cbval1);
            return;
        }
        QChart::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qchart_hoverenterevent_callback) {
            QGraphicsSceneHoverEvent* cbval1 = event;
            qchart_hoverenterevent_callback(this, cbval1);
            return;
        }
        QChart::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qchart_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qchart_keypressevent_callback(this, cbval1);
            return;
        }
        QChart::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qchart_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qchart_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QChart::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qchart_mousepressevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qchart_mousepressevent_callback(this, cbval1);
            return;
        }
        QChart::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qchart_mousemoveevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qchart_mousemoveevent_callback(this, cbval1);
            return;
        }
        QChart::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qchart_mousereleaseevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qchart_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QChart::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qchart_mousedoubleclickevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qchart_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QChart::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qchart_wheelevent_callback) {
            QGraphicsSceneWheelEvent* cbval1 = event;
            qchart_wheelevent_callback(this, cbval1);
            return;
        }
        QChart::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qchart_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qchart_inputmethodevent_callback(this, cbval1);
            return;
        }
        QChart::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qchart_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qchart_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QChart::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qchart_supportsextension_callback) {
            int cbval1 = static_cast<int>(extension);
            bool callback_ret = qchart_supportsextension_callback(this, cbval1);
            return callback_ret;
        }
        return QChart::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qchart_setextension_callback) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);
            qchart_setextension_callback(this, cbval1, cbval2);
            return;
        }
        QChart::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qchart_extension_callback) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);
            QVariant* callback_ret = qchart_extension_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QChart::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qchart_isempty_callback) {
            bool callback_ret = qchart_isempty_callback(this);
            return callback_ret;
        }
        return QChart::isEmpty();
    }

    // Friend functions
    friend void QChart_SuperInitStyleOption(const QChart* self, QStyleOption* option);
    friend QSizeF* QChart_SuperSizeHint(const QChart* self, int which, const QSizeF* constraint);
    friend void QChart_SuperUpdateGeometry(QChart* self);
    friend QVariant* QChart_SuperItemChange(QChart* self, int change, const QVariant* value);
    friend QVariant* QChart_SuperPropertyChange(QChart* self, const libqt_string propertyName, const QVariant* value);
    friend bool QChart_SuperSceneEvent(QChart* self, QEvent* event);
    friend bool QChart_SuperWindowFrameEvent(QChart* self, QEvent* e);
    friend int QChart_SuperWindowFrameSectionAt(const QChart* self, const QPointF* pos);
    friend bool QChart_SuperEvent(QChart* self, QEvent* event);
    friend void QChart_SuperChangeEvent(QChart* self, QEvent* event);
    friend void QChart_SuperCloseEvent(QChart* self, QCloseEvent* event);
    friend void QChart_SuperFocusInEvent(QChart* self, QFocusEvent* event);
    friend bool QChart_SuperFocusNextPrevChild(QChart* self, bool next);
    friend void QChart_SuperFocusOutEvent(QChart* self, QFocusEvent* event);
    friend void QChart_SuperHideEvent(QChart* self, QHideEvent* event);
    friend void QChart_SuperMoveEvent(QChart* self, QGraphicsSceneMoveEvent* event);
    friend void QChart_SuperPolishEvent(QChart* self);
    friend void QChart_SuperResizeEvent(QChart* self, QGraphicsSceneResizeEvent* event);
    friend void QChart_SuperShowEvent(QChart* self, QShowEvent* event);
    friend void QChart_SuperHoverMoveEvent(QChart* self, QGraphicsSceneHoverEvent* event);
    friend void QChart_SuperHoverLeaveEvent(QChart* self, QGraphicsSceneHoverEvent* event);
    friend void QChart_SuperGrabMouseEvent(QChart* self, QEvent* event);
    friend void QChart_SuperUngrabMouseEvent(QChart* self, QEvent* event);
    friend void QChart_SuperGrabKeyboardEvent(QChart* self, QEvent* event);
    friend void QChart_SuperUngrabKeyboardEvent(QChart* self, QEvent* event);
    friend void QChart_SuperTimerEvent(QChart* self, QTimerEvent* event);
    friend void QChart_SuperChildEvent(QChart* self, QChildEvent* event);
    friend void QChart_SuperCustomEvent(QChart* self, QEvent* event);
    friend void QChart_SuperConnectNotify(QChart* self, const QMetaMethod* signal);
    friend void QChart_SuperDisconnectNotify(QChart* self, const QMetaMethod* signal);
    friend bool QChart_SuperSceneEventFilter(QChart* self, QGraphicsItem* watched, QEvent* event);
    friend void QChart_SuperContextMenuEvent(QChart* self, QGraphicsSceneContextMenuEvent* event);
    friend void QChart_SuperDragEnterEvent(QChart* self, QGraphicsSceneDragDropEvent* event);
    friend void QChart_SuperDragLeaveEvent(QChart* self, QGraphicsSceneDragDropEvent* event);
    friend void QChart_SuperDragMoveEvent(QChart* self, QGraphicsSceneDragDropEvent* event);
    friend void QChart_SuperDropEvent(QChart* self, QGraphicsSceneDragDropEvent* event);
    friend void QChart_SuperHoverEnterEvent(QChart* self, QGraphicsSceneHoverEvent* event);
    friend void QChart_SuperKeyPressEvent(QChart* self, QKeyEvent* event);
    friend void QChart_SuperKeyReleaseEvent(QChart* self, QKeyEvent* event);
    friend void QChart_SuperMousePressEvent(QChart* self, QGraphicsSceneMouseEvent* event);
    friend void QChart_SuperMouseMoveEvent(QChart* self, QGraphicsSceneMouseEvent* event);
    friend void QChart_SuperMouseReleaseEvent(QChart* self, QGraphicsSceneMouseEvent* event);
    friend void QChart_SuperMouseDoubleClickEvent(QChart* self, QGraphicsSceneMouseEvent* event);
    friend void QChart_SuperWheelEvent(QChart* self, QGraphicsSceneWheelEvent* event);
    friend void QChart_SuperInputMethodEvent(QChart* self, QInputMethodEvent* event);
    friend QVariant* QChart_SuperInputMethodQuery(const QChart* self, int query);
    friend bool QChart_SuperSupportsExtension(const QChart* self, int extension);
    friend void QChart_SuperSetExtension(QChart* self, int extension, const QVariant* variant);
    friend QVariant* QChart_SuperExtension(const QChart* self, const QVariant* variant);
};

#endif
