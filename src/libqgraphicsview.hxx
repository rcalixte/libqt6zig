#pragma once
#ifndef LIBQGRAPHICSVIEW_HXX
#define LIBQGRAPHICSVIEW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsView
class VirtualQGraphicsView final : public QGraphicsView {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsView_MetaObject_Callback = QMetaObject* (*)(const QGraphicsView*);
    using QGraphicsView_Metacast_Callback = void* (*)(QGraphicsView*, const char*);
    using QGraphicsView_Metacall_Callback = int (*)(QGraphicsView*, int, int, void**);
    using QGraphicsView_SizeHint_Callback = QSize* (*)(const QGraphicsView*);
    using QGraphicsView_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsView*, int);
    using QGraphicsView_SetupViewport_Callback = void (*)(QGraphicsView*, QWidget*);
    using QGraphicsView_Event_Callback = bool (*)(QGraphicsView*, QEvent*);
    using QGraphicsView_ViewportEvent_Callback = bool (*)(QGraphicsView*, QEvent*);
    using QGraphicsView_ContextMenuEvent_Callback = void (*)(QGraphicsView*, QContextMenuEvent*);
    using QGraphicsView_DragEnterEvent_Callback = void (*)(QGraphicsView*, QDragEnterEvent*);
    using QGraphicsView_DragLeaveEvent_Callback = void (*)(QGraphicsView*, QDragLeaveEvent*);
    using QGraphicsView_DragMoveEvent_Callback = void (*)(QGraphicsView*, QDragMoveEvent*);
    using QGraphicsView_DropEvent_Callback = void (*)(QGraphicsView*, QDropEvent*);
    using QGraphicsView_FocusInEvent_Callback = void (*)(QGraphicsView*, QFocusEvent*);
    using QGraphicsView_FocusNextPrevChild_Callback = bool (*)(QGraphicsView*, bool);
    using QGraphicsView_FocusOutEvent_Callback = void (*)(QGraphicsView*, QFocusEvent*);
    using QGraphicsView_KeyPressEvent_Callback = void (*)(QGraphicsView*, QKeyEvent*);
    using QGraphicsView_KeyReleaseEvent_Callback = void (*)(QGraphicsView*, QKeyEvent*);
    using QGraphicsView_MouseDoubleClickEvent_Callback = void (*)(QGraphicsView*, QMouseEvent*);
    using QGraphicsView_MousePressEvent_Callback = void (*)(QGraphicsView*, QMouseEvent*);
    using QGraphicsView_MouseMoveEvent_Callback = void (*)(QGraphicsView*, QMouseEvent*);
    using QGraphicsView_MouseReleaseEvent_Callback = void (*)(QGraphicsView*, QMouseEvent*);
    using QGraphicsView_WheelEvent_Callback = void (*)(QGraphicsView*, QWheelEvent*);
    using QGraphicsView_PaintEvent_Callback = void (*)(QGraphicsView*, QPaintEvent*);
    using QGraphicsView_ResizeEvent_Callback = void (*)(QGraphicsView*, QResizeEvent*);
    using QGraphicsView_ScrollContentsBy_Callback = void (*)(QGraphicsView*, int, int);
    using QGraphicsView_ShowEvent_Callback = void (*)(QGraphicsView*, QShowEvent*);
    using QGraphicsView_InputMethodEvent_Callback = void (*)(QGraphicsView*, QInputMethodEvent*);
    using QGraphicsView_DrawBackground_Callback = void (*)(QGraphicsView*, QPainter*, QRectF*);
    using QGraphicsView_DrawForeground_Callback = void (*)(QGraphicsView*, QPainter*, QRectF*);
    using QGraphicsView_DrawItems_Callback = void (*)(QGraphicsView*, QPainter*, int, QGraphicsItem**, QStyleOptionGraphicsItem*);
    using QGraphicsView_MinimumSizeHint_Callback = QSize* (*)(const QGraphicsView*);
    using QGraphicsView_EventFilter_Callback = bool (*)(QGraphicsView*, QObject*, QEvent*);
    using QGraphicsView_ViewportSizeHint_Callback = QSize* (*)(const QGraphicsView*);
    using QGraphicsView_ChangeEvent_Callback = void (*)(QGraphicsView*, QEvent*);
    using QGraphicsView_InitStyleOption_Callback = void (*)(const QGraphicsView*, QStyleOptionFrame*);
    using QGraphicsView_DevType_Callback = int (*)(const QGraphicsView*);
    using QGraphicsView_SetVisible_Callback = void (*)(QGraphicsView*, bool);
    using QGraphicsView_HeightForWidth_Callback = int (*)(const QGraphicsView*, int);
    using QGraphicsView_HasHeightForWidth_Callback = bool (*)(const QGraphicsView*);
    using QGraphicsView_PaintEngine_Callback = QPaintEngine* (*)(const QGraphicsView*);
    using QGraphicsView_EnterEvent_Callback = void (*)(QGraphicsView*, QEnterEvent*);
    using QGraphicsView_LeaveEvent_Callback = void (*)(QGraphicsView*, QEvent*);
    using QGraphicsView_MoveEvent_Callback = void (*)(QGraphicsView*, QMoveEvent*);
    using QGraphicsView_CloseEvent_Callback = void (*)(QGraphicsView*, QCloseEvent*);
    using QGraphicsView_TabletEvent_Callback = void (*)(QGraphicsView*, QTabletEvent*);
    using QGraphicsView_ActionEvent_Callback = void (*)(QGraphicsView*, QActionEvent*);
    using QGraphicsView_HideEvent_Callback = void (*)(QGraphicsView*, QHideEvent*);
    using QGraphicsView_NativeEvent_Callback = bool (*)(QGraphicsView*, libqt_string, void*, intptr_t*);
    using QGraphicsView_Metric_Callback = int (*)(const QGraphicsView*, int);
    using QGraphicsView_InitPainter_Callback = void (*)(const QGraphicsView*, QPainter*);
    using QGraphicsView_Redirected_Callback = QPaintDevice* (*)(const QGraphicsView*, QPoint*);
    using QGraphicsView_SharedPainter_Callback = QPainter* (*)(const QGraphicsView*);
    using QGraphicsView_TimerEvent_Callback = void (*)(QGraphicsView*, QTimerEvent*);
    using QGraphicsView_ChildEvent_Callback = void (*)(QGraphicsView*, QChildEvent*);
    using QGraphicsView_CustomEvent_Callback = void (*)(QGraphicsView*, QEvent*);
    using QGraphicsView_ConnectNotify_Callback = void (*)(QGraphicsView*, QMetaMethod*);
    using QGraphicsView_DisconnectNotify_Callback = void (*)(QGraphicsView*, QMetaMethod*);
    using QGraphicsView::create;
    using QGraphicsView::destroy;
    using QGraphicsView::drawFrame;
    using QGraphicsView::focusNextChild;
    using QGraphicsView::focusPreviousChild;
    using QGraphicsView::getDecodedMetricF;
    using QGraphicsView::isSignalConnected;
    using QGraphicsView::receivers;
    using QGraphicsView::sender;
    using QGraphicsView::senderSignalIndex;
    using QGraphicsView::setViewportMargins;
    using QGraphicsView::updateMicroFocus;
    using QGraphicsView::viewportMargins;

    // Instance callback storage
    QGraphicsView_MetaObject_Callback qgraphicsview_metaobject_callback = nullptr;
    QGraphicsView_Metacast_Callback qgraphicsview_metacast_callback = nullptr;
    QGraphicsView_Metacall_Callback qgraphicsview_metacall_callback = nullptr;
    QGraphicsView_SizeHint_Callback qgraphicsview_sizehint_callback = nullptr;
    QGraphicsView_InputMethodQuery_Callback qgraphicsview_inputmethodquery_callback = nullptr;
    QGraphicsView_SetupViewport_Callback qgraphicsview_setupviewport_callback = nullptr;
    QGraphicsView_Event_Callback qgraphicsview_event_callback = nullptr;
    QGraphicsView_ViewportEvent_Callback qgraphicsview_viewportevent_callback = nullptr;
    QGraphicsView_ContextMenuEvent_Callback qgraphicsview_contextmenuevent_callback = nullptr;
    QGraphicsView_DragEnterEvent_Callback qgraphicsview_dragenterevent_callback = nullptr;
    QGraphicsView_DragLeaveEvent_Callback qgraphicsview_dragleaveevent_callback = nullptr;
    QGraphicsView_DragMoveEvent_Callback qgraphicsview_dragmoveevent_callback = nullptr;
    QGraphicsView_DropEvent_Callback qgraphicsview_dropevent_callback = nullptr;
    QGraphicsView_FocusInEvent_Callback qgraphicsview_focusinevent_callback = nullptr;
    QGraphicsView_FocusNextPrevChild_Callback qgraphicsview_focusnextprevchild_callback = nullptr;
    QGraphicsView_FocusOutEvent_Callback qgraphicsview_focusoutevent_callback = nullptr;
    QGraphicsView_KeyPressEvent_Callback qgraphicsview_keypressevent_callback = nullptr;
    QGraphicsView_KeyReleaseEvent_Callback qgraphicsview_keyreleaseevent_callback = nullptr;
    QGraphicsView_MouseDoubleClickEvent_Callback qgraphicsview_mousedoubleclickevent_callback = nullptr;
    QGraphicsView_MousePressEvent_Callback qgraphicsview_mousepressevent_callback = nullptr;
    QGraphicsView_MouseMoveEvent_Callback qgraphicsview_mousemoveevent_callback = nullptr;
    QGraphicsView_MouseReleaseEvent_Callback qgraphicsview_mousereleaseevent_callback = nullptr;
    QGraphicsView_WheelEvent_Callback qgraphicsview_wheelevent_callback = nullptr;
    QGraphicsView_PaintEvent_Callback qgraphicsview_paintevent_callback = nullptr;
    QGraphicsView_ResizeEvent_Callback qgraphicsview_resizeevent_callback = nullptr;
    QGraphicsView_ScrollContentsBy_Callback qgraphicsview_scrollcontentsby_callback = nullptr;
    QGraphicsView_ShowEvent_Callback qgraphicsview_showevent_callback = nullptr;
    QGraphicsView_InputMethodEvent_Callback qgraphicsview_inputmethodevent_callback = nullptr;
    QGraphicsView_DrawBackground_Callback qgraphicsview_drawbackground_callback = nullptr;
    QGraphicsView_DrawForeground_Callback qgraphicsview_drawforeground_callback = nullptr;
    QGraphicsView_DrawItems_Callback qgraphicsview_drawitems_callback = nullptr;
    QGraphicsView_MinimumSizeHint_Callback qgraphicsview_minimumsizehint_callback = nullptr;
    QGraphicsView_EventFilter_Callback qgraphicsview_eventfilter_callback = nullptr;
    QGraphicsView_ViewportSizeHint_Callback qgraphicsview_viewportsizehint_callback = nullptr;
    QGraphicsView_ChangeEvent_Callback qgraphicsview_changeevent_callback = nullptr;
    QGraphicsView_InitStyleOption_Callback qgraphicsview_initstyleoption_callback = nullptr;
    QGraphicsView_DevType_Callback qgraphicsview_devtype_callback = nullptr;
    QGraphicsView_SetVisible_Callback qgraphicsview_setvisible_callback = nullptr;
    QGraphicsView_HeightForWidth_Callback qgraphicsview_heightforwidth_callback = nullptr;
    QGraphicsView_HasHeightForWidth_Callback qgraphicsview_hasheightforwidth_callback = nullptr;
    QGraphicsView_PaintEngine_Callback qgraphicsview_paintengine_callback = nullptr;
    QGraphicsView_EnterEvent_Callback qgraphicsview_enterevent_callback = nullptr;
    QGraphicsView_LeaveEvent_Callback qgraphicsview_leaveevent_callback = nullptr;
    QGraphicsView_MoveEvent_Callback qgraphicsview_moveevent_callback = nullptr;
    QGraphicsView_CloseEvent_Callback qgraphicsview_closeevent_callback = nullptr;
    QGraphicsView_TabletEvent_Callback qgraphicsview_tabletevent_callback = nullptr;
    QGraphicsView_ActionEvent_Callback qgraphicsview_actionevent_callback = nullptr;
    QGraphicsView_HideEvent_Callback qgraphicsview_hideevent_callback = nullptr;
    QGraphicsView_NativeEvent_Callback qgraphicsview_nativeevent_callback = nullptr;
    QGraphicsView_Metric_Callback qgraphicsview_metric_callback = nullptr;
    QGraphicsView_InitPainter_Callback qgraphicsview_initpainter_callback = nullptr;
    QGraphicsView_Redirected_Callback qgraphicsview_redirected_callback = nullptr;
    QGraphicsView_SharedPainter_Callback qgraphicsview_sharedpainter_callback = nullptr;
    QGraphicsView_TimerEvent_Callback qgraphicsview_timerevent_callback = nullptr;
    QGraphicsView_ChildEvent_Callback qgraphicsview_childevent_callback = nullptr;
    QGraphicsView_CustomEvent_Callback qgraphicsview_customevent_callback = nullptr;
    QGraphicsView_ConnectNotify_Callback qgraphicsview_connectnotify_callback = nullptr;
    QGraphicsView_DisconnectNotify_Callback qgraphicsview_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGraphicsView {
        using QGraphicsView::actionEvent;
        using QGraphicsView::changeEvent;
        using QGraphicsView::childEvent;
        using QGraphicsView::closeEvent;
        using QGraphicsView::connectNotify;
        using QGraphicsView::contextMenuEvent;
        using QGraphicsView::customEvent;
        using QGraphicsView::disconnectNotify;
        using QGraphicsView::dragEnterEvent;
        using QGraphicsView::dragLeaveEvent;
        using QGraphicsView::dragMoveEvent;
        using QGraphicsView::drawBackground;
        using QGraphicsView::drawForeground;
        using QGraphicsView::drawItems;
        using QGraphicsView::dropEvent;
        using QGraphicsView::enterEvent;
        using QGraphicsView::event;
        using QGraphicsView::eventFilter;
        using QGraphicsView::focusInEvent;
        using QGraphicsView::focusNextPrevChild;
        using QGraphicsView::focusOutEvent;
        using QGraphicsView::hideEvent;
        using QGraphicsView::initPainter;
        using QGraphicsView::initStyleOption;
        using QGraphicsView::inputMethodEvent;
        using QGraphicsView::keyPressEvent;
        using QGraphicsView::keyReleaseEvent;
        using QGraphicsView::leaveEvent;
        using QGraphicsView::metric;
        using QGraphicsView::mouseDoubleClickEvent;
        using QGraphicsView::mouseMoveEvent;
        using QGraphicsView::mousePressEvent;
        using QGraphicsView::mouseReleaseEvent;
        using QGraphicsView::moveEvent;
        using QGraphicsView::nativeEvent;
        using QGraphicsView::paintEvent;
        using QGraphicsView::redirected;
        using QGraphicsView::resizeEvent;
        using QGraphicsView::scrollContentsBy;
        using QGraphicsView::setupViewport;
        using QGraphicsView::sharedPainter;
        using QGraphicsView::showEvent;
        using QGraphicsView::tabletEvent;
        using QGraphicsView::timerEvent;
        using QGraphicsView::viewportEvent;
        using QGraphicsView::viewportSizeHint;
        using QGraphicsView::wheelEvent;
    };

    VirtualQGraphicsView(QWidget* parent) : QGraphicsView(parent) {};
    VirtualQGraphicsView() : QGraphicsView() {};
    VirtualQGraphicsView(QGraphicsScene* scene) : QGraphicsView(scene) {};
    VirtualQGraphicsView(QGraphicsScene* scene, QWidget* parent) : QGraphicsView(scene, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicsview_metaobject_callback) {
            QMetaObject* callback_ret = qgraphicsview_metaobject_callback(this);
            return callback_ret;
        }
        return QGraphicsView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicsview_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgraphicsview_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsview_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgraphicsview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qgraphicsview_sizehint_callback) {
            QSize* callback_ret = qgraphicsview_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsView::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicsview_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qgraphicsview_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsView::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* widget) override {
        if (qgraphicsview_setupviewport_callback) {
            QWidget* cbval1 = widget;
            qgraphicsview_setupviewport_callback(this, cbval1);
            return;
        }
        QGraphicsView::setupViewport(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsview_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicsview_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsView::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qgraphicsview_viewportevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicsview_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsView::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qgraphicsview_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qgraphicsview_contextmenuevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qgraphicsview_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qgraphicsview_dragenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qgraphicsview_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qgraphicsview_dragleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qgraphicsview_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qgraphicsview_dragmoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qgraphicsview_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qgraphicsview_dropevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicsview_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicsview_focusinevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qgraphicsview_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qgraphicsview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsView::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicsview_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicsview_focusoutevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicsview_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicsview_keypressevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicsview_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicsview_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qgraphicsview_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qgraphicsview_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qgraphicsview_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qgraphicsview_mousepressevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qgraphicsview_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qgraphicsview_mousemoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qgraphicsview_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qgraphicsview_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qgraphicsview_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qgraphicsview_wheelevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qgraphicsview_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qgraphicsview_paintevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qgraphicsview_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qgraphicsview_resizeevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qgraphicsview_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qgraphicsview_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QGraphicsView::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qgraphicsview_showevent_callback) {
            QShowEvent* cbval1 = event;
            qgraphicsview_showevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicsview_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qgraphicsview_inputmethodevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawBackground(QPainter* painter, const QRectF& rect) override {
        if (qgraphicsview_drawbackground_callback) {
            QPainter* cbval1 = painter;
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval2 = const_cast<QRectF*>(&rect_ret);
            qgraphicsview_drawbackground_callback(this, cbval1, cbval2);
            return;
        }
        QGraphicsView::drawBackground(painter, rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawForeground(QPainter* painter, const QRectF& rect) override {
        if (qgraphicsview_drawforeground_callback) {
            QPainter* cbval1 = painter;
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval2 = const_cast<QRectF*>(&rect_ret);
            qgraphicsview_drawforeground_callback(this, cbval1, cbval2);
            return;
        }
        QGraphicsView::drawForeground(painter, rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawItems(QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options) override {
        if (qgraphicsview_drawitems_callback) {
            QPainter* cbval1 = painter;
            int cbval2 = numItems;
            QGraphicsItem** cbval3 = items;
            QStyleOptionGraphicsItem* cbval4 = (QStyleOptionGraphicsItem*)options;
            qgraphicsview_drawitems_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QGraphicsView::drawItems(painter, numItems, items, options);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qgraphicsview_minimumsizehint_callback) {
            QSize* callback_ret = qgraphicsview_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsView::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qgraphicsview_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qgraphicsview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsView::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qgraphicsview_viewportsizehint_callback) {
            QSize* callback_ret = qgraphicsview_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsView::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qgraphicsview_changeevent_callback) {
            QEvent* cbval1 = param1;
            qgraphicsview_changeevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qgraphicsview_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qgraphicsview_initstyleoption_callback(this, cbval1);
            return;
        }
        QGraphicsView::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qgraphicsview_devtype_callback) {
            int callback_ret = qgraphicsview_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsView::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qgraphicsview_setvisible_callback) {
            bool cbval1 = visible;
            qgraphicsview_setvisible_callback(this, cbval1);
            return;
        }
        QGraphicsView::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qgraphicsview_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qgraphicsview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsView::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qgraphicsview_hasheightforwidth_callback) {
            bool callback_ret = qgraphicsview_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QGraphicsView::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qgraphicsview_paintengine_callback) {
            QPaintEngine* callback_ret = qgraphicsview_paintengine_callback(this);
            return callback_ret;
        }
        return QGraphicsView::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qgraphicsview_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qgraphicsview_enterevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qgraphicsview_leaveevent_callback) {
            QEvent* cbval1 = event;
            qgraphicsview_leaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qgraphicsview_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qgraphicsview_moveevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qgraphicsview_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qgraphicsview_closeevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qgraphicsview_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qgraphicsview_tabletevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qgraphicsview_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qgraphicsview_actionevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qgraphicsview_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qgraphicsview_hideevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qgraphicsview_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qgraphicsview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QGraphicsView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qgraphicsview_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qgraphicsview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsView::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qgraphicsview_initpainter_callback) {
            QPainter* cbval1 = painter;
            qgraphicsview_initpainter_callback(this, cbval1);
            return;
        }
        QGraphicsView::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qgraphicsview_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qgraphicsview_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsView::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qgraphicsview_sharedpainter_callback) {
            QPainter* callback_ret = qgraphicsview_sharedpainter_callback(this);
            return callback_ret;
        }
        return QGraphicsView::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsview_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgraphicsview_timerevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsview_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgraphicsview_childevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsview_customevent_callback) {
            QEvent* cbval1 = event;
            qgraphicsview_customevent_callback(this, cbval1);
            return;
        }
        QGraphicsView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsview_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsview_connectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsview_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsview_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsView::disconnectNotify(signal);
    }

    // Friend functions
    friend void QGraphicsView_SuperSetupViewport(QGraphicsView* self, QWidget* widget);
    friend bool QGraphicsView_SuperEvent(QGraphicsView* self, QEvent* event);
    friend bool QGraphicsView_SuperViewportEvent(QGraphicsView* self, QEvent* event);
    friend void QGraphicsView_SuperContextMenuEvent(QGraphicsView* self, QContextMenuEvent* event);
    friend void QGraphicsView_SuperDragEnterEvent(QGraphicsView* self, QDragEnterEvent* event);
    friend void QGraphicsView_SuperDragLeaveEvent(QGraphicsView* self, QDragLeaveEvent* event);
    friend void QGraphicsView_SuperDragMoveEvent(QGraphicsView* self, QDragMoveEvent* event);
    friend void QGraphicsView_SuperDropEvent(QGraphicsView* self, QDropEvent* event);
    friend void QGraphicsView_SuperFocusInEvent(QGraphicsView* self, QFocusEvent* event);
    friend bool QGraphicsView_SuperFocusNextPrevChild(QGraphicsView* self, bool next);
    friend void QGraphicsView_SuperFocusOutEvent(QGraphicsView* self, QFocusEvent* event);
    friend void QGraphicsView_SuperKeyPressEvent(QGraphicsView* self, QKeyEvent* event);
    friend void QGraphicsView_SuperKeyReleaseEvent(QGraphicsView* self, QKeyEvent* event);
    friend void QGraphicsView_SuperMouseDoubleClickEvent(QGraphicsView* self, QMouseEvent* event);
    friend void QGraphicsView_SuperMousePressEvent(QGraphicsView* self, QMouseEvent* event);
    friend void QGraphicsView_SuperMouseMoveEvent(QGraphicsView* self, QMouseEvent* event);
    friend void QGraphicsView_SuperMouseReleaseEvent(QGraphicsView* self, QMouseEvent* event);
    friend void QGraphicsView_SuperWheelEvent(QGraphicsView* self, QWheelEvent* event);
    friend void QGraphicsView_SuperPaintEvent(QGraphicsView* self, QPaintEvent* event);
    friend void QGraphicsView_SuperResizeEvent(QGraphicsView* self, QResizeEvent* event);
    friend void QGraphicsView_SuperScrollContentsBy(QGraphicsView* self, int dx, int dy);
    friend void QGraphicsView_SuperShowEvent(QGraphicsView* self, QShowEvent* event);
    friend void QGraphicsView_SuperInputMethodEvent(QGraphicsView* self, QInputMethodEvent* event);
    friend void QGraphicsView_SuperDrawBackground(QGraphicsView* self, QPainter* painter, const QRectF* rect);
    friend void QGraphicsView_SuperDrawForeground(QGraphicsView* self, QPainter* painter, const QRectF* rect);
    friend void QGraphicsView_SuperDrawItems(QGraphicsView* self, QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options);
    friend bool QGraphicsView_SuperEventFilter(QGraphicsView* self, QObject* param1, QEvent* param2);
    friend QSize* QGraphicsView_SuperViewportSizeHint(const QGraphicsView* self);
    friend void QGraphicsView_SuperChangeEvent(QGraphicsView* self, QEvent* param1);
    friend void QGraphicsView_SuperInitStyleOption(const QGraphicsView* self, QStyleOptionFrame* option);
    friend void QGraphicsView_SuperEnterEvent(QGraphicsView* self, QEnterEvent* event);
    friend void QGraphicsView_SuperLeaveEvent(QGraphicsView* self, QEvent* event);
    friend void QGraphicsView_SuperMoveEvent(QGraphicsView* self, QMoveEvent* event);
    friend void QGraphicsView_SuperCloseEvent(QGraphicsView* self, QCloseEvent* event);
    friend void QGraphicsView_SuperTabletEvent(QGraphicsView* self, QTabletEvent* event);
    friend void QGraphicsView_SuperActionEvent(QGraphicsView* self, QActionEvent* event);
    friend void QGraphicsView_SuperHideEvent(QGraphicsView* self, QHideEvent* event);
    friend bool QGraphicsView_SuperNativeEvent(QGraphicsView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QGraphicsView_SuperMetric(const QGraphicsView* self, int param1);
    friend void QGraphicsView_SuperInitPainter(const QGraphicsView* self, QPainter* painter);
    friend QPaintDevice* QGraphicsView_SuperRedirected(const QGraphicsView* self, QPoint* offset);
    friend QPainter* QGraphicsView_SuperSharedPainter(const QGraphicsView* self);
    friend void QGraphicsView_SuperTimerEvent(QGraphicsView* self, QTimerEvent* event);
    friend void QGraphicsView_SuperChildEvent(QGraphicsView* self, QChildEvent* event);
    friend void QGraphicsView_SuperCustomEvent(QGraphicsView* self, QEvent* event);
    friend void QGraphicsView_SuperConnectNotify(QGraphicsView* self, const QMetaMethod* signal);
    friend void QGraphicsView_SuperDisconnectNotify(QGraphicsView* self, const QMetaMethod* signal);
};

#endif
