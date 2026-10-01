#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQCHARTVIEW_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQCHARTVIEW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QChartView
class VirtualQChartView final : public QChartView {
  public:
    // Virtual class public types (including callbacks and access types)
    using QChartView_MetaObject_Callback = QMetaObject* (*)(const QChartView*);
    using QChartView_Metacast_Callback = void* (*)(QChartView*, const char*);
    using QChartView_Metacall_Callback = int (*)(QChartView*, int, int, void**);
    using QChartView_ResizeEvent_Callback = void (*)(QChartView*, QResizeEvent*);
    using QChartView_MousePressEvent_Callback = void (*)(QChartView*, QMouseEvent*);
    using QChartView_MouseMoveEvent_Callback = void (*)(QChartView*, QMouseEvent*);
    using QChartView_MouseReleaseEvent_Callback = void (*)(QChartView*, QMouseEvent*);
    using QChartView_SizeHint_Callback = QSize* (*)(const QChartView*);
    using QChartView_InputMethodQuery_Callback = QVariant* (*)(const QChartView*, int);
    using QChartView_SetupViewport_Callback = void (*)(QChartView*, QWidget*);
    using QChartView_Event_Callback = bool (*)(QChartView*, QEvent*);
    using QChartView_ViewportEvent_Callback = bool (*)(QChartView*, QEvent*);
    using QChartView_ContextMenuEvent_Callback = void (*)(QChartView*, QContextMenuEvent*);
    using QChartView_DragEnterEvent_Callback = void (*)(QChartView*, QDragEnterEvent*);
    using QChartView_DragLeaveEvent_Callback = void (*)(QChartView*, QDragLeaveEvent*);
    using QChartView_DragMoveEvent_Callback = void (*)(QChartView*, QDragMoveEvent*);
    using QChartView_DropEvent_Callback = void (*)(QChartView*, QDropEvent*);
    using QChartView_FocusInEvent_Callback = void (*)(QChartView*, QFocusEvent*);
    using QChartView_FocusNextPrevChild_Callback = bool (*)(QChartView*, bool);
    using QChartView_FocusOutEvent_Callback = void (*)(QChartView*, QFocusEvent*);
    using QChartView_KeyPressEvent_Callback = void (*)(QChartView*, QKeyEvent*);
    using QChartView_KeyReleaseEvent_Callback = void (*)(QChartView*, QKeyEvent*);
    using QChartView_MouseDoubleClickEvent_Callback = void (*)(QChartView*, QMouseEvent*);
    using QChartView_WheelEvent_Callback = void (*)(QChartView*, QWheelEvent*);
    using QChartView_PaintEvent_Callback = void (*)(QChartView*, QPaintEvent*);
    using QChartView_ScrollContentsBy_Callback = void (*)(QChartView*, int, int);
    using QChartView_ShowEvent_Callback = void (*)(QChartView*, QShowEvent*);
    using QChartView_InputMethodEvent_Callback = void (*)(QChartView*, QInputMethodEvent*);
    using QChartView_DrawBackground_Callback = void (*)(QChartView*, QPainter*, QRectF*);
    using QChartView_DrawForeground_Callback = void (*)(QChartView*, QPainter*, QRectF*);
    using QChartView_DrawItems_Callback = void (*)(QChartView*, QPainter*, int, QGraphicsItem**, QStyleOptionGraphicsItem*);
    using QChartView_MinimumSizeHint_Callback = QSize* (*)(const QChartView*);
    using QChartView_EventFilter_Callback = bool (*)(QChartView*, QObject*, QEvent*);
    using QChartView_ViewportSizeHint_Callback = QSize* (*)(const QChartView*);
    using QChartView_ChangeEvent_Callback = void (*)(QChartView*, QEvent*);
    using QChartView_InitStyleOption_Callback = void (*)(const QChartView*, QStyleOptionFrame*);
    using QChartView_DevType_Callback = int (*)(const QChartView*);
    using QChartView_SetVisible_Callback = void (*)(QChartView*, bool);
    using QChartView_HeightForWidth_Callback = int (*)(const QChartView*, int);
    using QChartView_HasHeightForWidth_Callback = bool (*)(const QChartView*);
    using QChartView_PaintEngine_Callback = QPaintEngine* (*)(const QChartView*);
    using QChartView_EnterEvent_Callback = void (*)(QChartView*, QEnterEvent*);
    using QChartView_LeaveEvent_Callback = void (*)(QChartView*, QEvent*);
    using QChartView_MoveEvent_Callback = void (*)(QChartView*, QMoveEvent*);
    using QChartView_CloseEvent_Callback = void (*)(QChartView*, QCloseEvent*);
    using QChartView_TabletEvent_Callback = void (*)(QChartView*, QTabletEvent*);
    using QChartView_ActionEvent_Callback = void (*)(QChartView*, QActionEvent*);
    using QChartView_HideEvent_Callback = void (*)(QChartView*, QHideEvent*);
    using QChartView_NativeEvent_Callback = bool (*)(QChartView*, libqt_string, void*, intptr_t*);
    using QChartView_Metric_Callback = int (*)(const QChartView*, int);
    using QChartView_InitPainter_Callback = void (*)(const QChartView*, QPainter*);
    using QChartView_Redirected_Callback = QPaintDevice* (*)(const QChartView*, QPoint*);
    using QChartView_SharedPainter_Callback = QPainter* (*)(const QChartView*);
    using QChartView_TimerEvent_Callback = void (*)(QChartView*, QTimerEvent*);
    using QChartView_ChildEvent_Callback = void (*)(QChartView*, QChildEvent*);
    using QChartView_CustomEvent_Callback = void (*)(QChartView*, QEvent*);
    using QChartView_ConnectNotify_Callback = void (*)(QChartView*, QMetaMethod*);
    using QChartView_DisconnectNotify_Callback = void (*)(QChartView*, QMetaMethod*);
    using QChartView::create;
    using QChartView::destroy;
    using QChartView::drawFrame;
    using QChartView::focusNextChild;
    using QChartView::focusPreviousChild;
    using QChartView::getDecodedMetricF;
    using QChartView::isSignalConnected;
    using QChartView::receivers;
    using QChartView::sender;
    using QChartView::senderSignalIndex;
    using QChartView::setViewportMargins;
    using QChartView::updateMicroFocus;
    using QChartView::viewportMargins;

    // Instance callback storage
    QChartView_MetaObject_Callback qchartview_metaobject_callback = nullptr;
    QChartView_Metacast_Callback qchartview_metacast_callback = nullptr;
    QChartView_Metacall_Callback qchartview_metacall_callback = nullptr;
    QChartView_ResizeEvent_Callback qchartview_resizeevent_callback = nullptr;
    QChartView_MousePressEvent_Callback qchartview_mousepressevent_callback = nullptr;
    QChartView_MouseMoveEvent_Callback qchartview_mousemoveevent_callback = nullptr;
    QChartView_MouseReleaseEvent_Callback qchartview_mousereleaseevent_callback = nullptr;
    QChartView_SizeHint_Callback qchartview_sizehint_callback = nullptr;
    QChartView_InputMethodQuery_Callback qchartview_inputmethodquery_callback = nullptr;
    QChartView_SetupViewport_Callback qchartview_setupviewport_callback = nullptr;
    QChartView_Event_Callback qchartview_event_callback = nullptr;
    QChartView_ViewportEvent_Callback qchartview_viewportevent_callback = nullptr;
    QChartView_ContextMenuEvent_Callback qchartview_contextmenuevent_callback = nullptr;
    QChartView_DragEnterEvent_Callback qchartview_dragenterevent_callback = nullptr;
    QChartView_DragLeaveEvent_Callback qchartview_dragleaveevent_callback = nullptr;
    QChartView_DragMoveEvent_Callback qchartview_dragmoveevent_callback = nullptr;
    QChartView_DropEvent_Callback qchartview_dropevent_callback = nullptr;
    QChartView_FocusInEvent_Callback qchartview_focusinevent_callback = nullptr;
    QChartView_FocusNextPrevChild_Callback qchartview_focusnextprevchild_callback = nullptr;
    QChartView_FocusOutEvent_Callback qchartview_focusoutevent_callback = nullptr;
    QChartView_KeyPressEvent_Callback qchartview_keypressevent_callback = nullptr;
    QChartView_KeyReleaseEvent_Callback qchartview_keyreleaseevent_callback = nullptr;
    QChartView_MouseDoubleClickEvent_Callback qchartview_mousedoubleclickevent_callback = nullptr;
    QChartView_WheelEvent_Callback qchartview_wheelevent_callback = nullptr;
    QChartView_PaintEvent_Callback qchartview_paintevent_callback = nullptr;
    QChartView_ScrollContentsBy_Callback qchartview_scrollcontentsby_callback = nullptr;
    QChartView_ShowEvent_Callback qchartview_showevent_callback = nullptr;
    QChartView_InputMethodEvent_Callback qchartview_inputmethodevent_callback = nullptr;
    QChartView_DrawBackground_Callback qchartview_drawbackground_callback = nullptr;
    QChartView_DrawForeground_Callback qchartview_drawforeground_callback = nullptr;
    QChartView_DrawItems_Callback qchartview_drawitems_callback = nullptr;
    QChartView_MinimumSizeHint_Callback qchartview_minimumsizehint_callback = nullptr;
    QChartView_EventFilter_Callback qchartview_eventfilter_callback = nullptr;
    QChartView_ViewportSizeHint_Callback qchartview_viewportsizehint_callback = nullptr;
    QChartView_ChangeEvent_Callback qchartview_changeevent_callback = nullptr;
    QChartView_InitStyleOption_Callback qchartview_initstyleoption_callback = nullptr;
    QChartView_DevType_Callback qchartview_devtype_callback = nullptr;
    QChartView_SetVisible_Callback qchartview_setvisible_callback = nullptr;
    QChartView_HeightForWidth_Callback qchartview_heightforwidth_callback = nullptr;
    QChartView_HasHeightForWidth_Callback qchartview_hasheightforwidth_callback = nullptr;
    QChartView_PaintEngine_Callback qchartview_paintengine_callback = nullptr;
    QChartView_EnterEvent_Callback qchartview_enterevent_callback = nullptr;
    QChartView_LeaveEvent_Callback qchartview_leaveevent_callback = nullptr;
    QChartView_MoveEvent_Callback qchartview_moveevent_callback = nullptr;
    QChartView_CloseEvent_Callback qchartview_closeevent_callback = nullptr;
    QChartView_TabletEvent_Callback qchartview_tabletevent_callback = nullptr;
    QChartView_ActionEvent_Callback qchartview_actionevent_callback = nullptr;
    QChartView_HideEvent_Callback qchartview_hideevent_callback = nullptr;
    QChartView_NativeEvent_Callback qchartview_nativeevent_callback = nullptr;
    QChartView_Metric_Callback qchartview_metric_callback = nullptr;
    QChartView_InitPainter_Callback qchartview_initpainter_callback = nullptr;
    QChartView_Redirected_Callback qchartview_redirected_callback = nullptr;
    QChartView_SharedPainter_Callback qchartview_sharedpainter_callback = nullptr;
    QChartView_TimerEvent_Callback qchartview_timerevent_callback = nullptr;
    QChartView_ChildEvent_Callback qchartview_childevent_callback = nullptr;
    QChartView_CustomEvent_Callback qchartview_customevent_callback = nullptr;
    QChartView_ConnectNotify_Callback qchartview_connectnotify_callback = nullptr;
    QChartView_DisconnectNotify_Callback qchartview_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QChartView {
        using QChartView::actionEvent;
        using QChartView::changeEvent;
        using QChartView::childEvent;
        using QChartView::closeEvent;
        using QChartView::connectNotify;
        using QChartView::contextMenuEvent;
        using QChartView::customEvent;
        using QChartView::disconnectNotify;
        using QChartView::dragEnterEvent;
        using QChartView::dragLeaveEvent;
        using QChartView::dragMoveEvent;
        using QChartView::drawBackground;
        using QChartView::drawForeground;
        using QChartView::drawItems;
        using QChartView::dropEvent;
        using QChartView::enterEvent;
        using QChartView::event;
        using QChartView::eventFilter;
        using QChartView::focusInEvent;
        using QChartView::focusNextPrevChild;
        using QChartView::focusOutEvent;
        using QChartView::hideEvent;
        using QChartView::initPainter;
        using QChartView::initStyleOption;
        using QChartView::inputMethodEvent;
        using QChartView::keyPressEvent;
        using QChartView::keyReleaseEvent;
        using QChartView::leaveEvent;
        using QChartView::metric;
        using QChartView::mouseDoubleClickEvent;
        using QChartView::mouseMoveEvent;
        using QChartView::mousePressEvent;
        using QChartView::mouseReleaseEvent;
        using QChartView::moveEvent;
        using QChartView::nativeEvent;
        using QChartView::paintEvent;
        using QChartView::redirected;
        using QChartView::resizeEvent;
        using QChartView::scrollContentsBy;
        using QChartView::setupViewport;
        using QChartView::sharedPainter;
        using QChartView::showEvent;
        using QChartView::tabletEvent;
        using QChartView::timerEvent;
        using QChartView::viewportEvent;
        using QChartView::viewportSizeHint;
        using QChartView::wheelEvent;
    };

    VirtualQChartView(QWidget* parent) : QChartView(parent) {};
    VirtualQChartView() : QChartView() {};
    VirtualQChartView(QChart* chart) : QChartView(chart) {};
    VirtualQChartView(QChart* chart, QWidget* parent) : QChartView(chart, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qchartview_metaobject_callback) {
            QMetaObject* callback_ret = qchartview_metaobject_callback(this);
            return callback_ret;
        }
        return QChartView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qchartview_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qchartview_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QChartView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qchartview_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qchartview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QChartView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qchartview_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qchartview_resizeevent_callback(this, cbval1);
            return;
        }
        QChartView::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qchartview_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qchartview_mousepressevent_callback(this, cbval1);
            return;
        }
        QChartView::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qchartview_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qchartview_mousemoveevent_callback(this, cbval1);
            return;
        }
        QChartView::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qchartview_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qchartview_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QChartView::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qchartview_sizehint_callback) {
            QSize* callback_ret = qchartview_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QChartView::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qchartview_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qchartview_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QChartView::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* widget) override {
        if (qchartview_setupviewport_callback) {
            QWidget* cbval1 = widget;
            qchartview_setupviewport_callback(this, cbval1);
            return;
        }
        QChartView::setupViewport(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qchartview_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qchartview_event_callback(this, cbval1);
            return callback_ret;
        }
        return QChartView::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qchartview_viewportevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qchartview_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QChartView::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qchartview_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qchartview_contextmenuevent_callback(this, cbval1);
            return;
        }
        QChartView::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qchartview_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qchartview_dragenterevent_callback(this, cbval1);
            return;
        }
        QChartView::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qchartview_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qchartview_dragleaveevent_callback(this, cbval1);
            return;
        }
        QChartView::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qchartview_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qchartview_dragmoveevent_callback(this, cbval1);
            return;
        }
        QChartView::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qchartview_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qchartview_dropevent_callback(this, cbval1);
            return;
        }
        QChartView::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qchartview_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qchartview_focusinevent_callback(this, cbval1);
            return;
        }
        QChartView::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qchartview_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qchartview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QChartView::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qchartview_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qchartview_focusoutevent_callback(this, cbval1);
            return;
        }
        QChartView::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qchartview_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qchartview_keypressevent_callback(this, cbval1);
            return;
        }
        QChartView::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qchartview_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qchartview_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QChartView::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qchartview_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qchartview_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QChartView::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qchartview_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qchartview_wheelevent_callback(this, cbval1);
            return;
        }
        QChartView::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qchartview_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qchartview_paintevent_callback(this, cbval1);
            return;
        }
        QChartView::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qchartview_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qchartview_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QChartView::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qchartview_showevent_callback) {
            QShowEvent* cbval1 = event;
            qchartview_showevent_callback(this, cbval1);
            return;
        }
        QChartView::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qchartview_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qchartview_inputmethodevent_callback(this, cbval1);
            return;
        }
        QChartView::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawBackground(QPainter* painter, const QRectF& rect) override {
        if (qchartview_drawbackground_callback) {
            QPainter* cbval1 = painter;
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval2 = const_cast<QRectF*>(&rect_ret);
            qchartview_drawbackground_callback(this, cbval1, cbval2);
            return;
        }
        QChartView::drawBackground(painter, rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawForeground(QPainter* painter, const QRectF& rect) override {
        if (qchartview_drawforeground_callback) {
            QPainter* cbval1 = painter;
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval2 = const_cast<QRectF*>(&rect_ret);
            qchartview_drawforeground_callback(this, cbval1, cbval2);
            return;
        }
        QChartView::drawForeground(painter, rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawItems(QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options) override {
        if (qchartview_drawitems_callback) {
            QPainter* cbval1 = painter;
            int cbval2 = numItems;
            QGraphicsItem** cbval3 = items;
            QStyleOptionGraphicsItem* cbval4 = (QStyleOptionGraphicsItem*)options;
            qchartview_drawitems_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QChartView::drawItems(painter, numItems, items, options);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qchartview_minimumsizehint_callback) {
            QSize* callback_ret = qchartview_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QChartView::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qchartview_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qchartview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QChartView::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qchartview_viewportsizehint_callback) {
            QSize* callback_ret = qchartview_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QChartView::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qchartview_changeevent_callback) {
            QEvent* cbval1 = param1;
            qchartview_changeevent_callback(this, cbval1);
            return;
        }
        QChartView::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qchartview_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qchartview_initstyleoption_callback(this, cbval1);
            return;
        }
        QChartView::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qchartview_devtype_callback) {
            int callback_ret = qchartview_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QChartView::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qchartview_setvisible_callback) {
            bool cbval1 = visible;
            qchartview_setvisible_callback(this, cbval1);
            return;
        }
        QChartView::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qchartview_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qchartview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QChartView::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qchartview_hasheightforwidth_callback) {
            bool callback_ret = qchartview_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QChartView::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qchartview_paintengine_callback) {
            QPaintEngine* callback_ret = qchartview_paintengine_callback(this);
            return callback_ret;
        }
        return QChartView::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qchartview_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qchartview_enterevent_callback(this, cbval1);
            return;
        }
        QChartView::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qchartview_leaveevent_callback) {
            QEvent* cbval1 = event;
            qchartview_leaveevent_callback(this, cbval1);
            return;
        }
        QChartView::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qchartview_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qchartview_moveevent_callback(this, cbval1);
            return;
        }
        QChartView::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qchartview_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qchartview_closeevent_callback(this, cbval1);
            return;
        }
        QChartView::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qchartview_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qchartview_tabletevent_callback(this, cbval1);
            return;
        }
        QChartView::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qchartview_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qchartview_actionevent_callback(this, cbval1);
            return;
        }
        QChartView::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qchartview_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qchartview_hideevent_callback(this, cbval1);
            return;
        }
        QChartView::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qchartview_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qchartview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QChartView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qchartview_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qchartview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QChartView::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qchartview_initpainter_callback) {
            QPainter* cbval1 = painter;
            qchartview_initpainter_callback(this, cbval1);
            return;
        }
        QChartView::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qchartview_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qchartview_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QChartView::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qchartview_sharedpainter_callback) {
            QPainter* callback_ret = qchartview_sharedpainter_callback(this);
            return callback_ret;
        }
        return QChartView::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qchartview_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qchartview_timerevent_callback(this, cbval1);
            return;
        }
        QChartView::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qchartview_childevent_callback) {
            QChildEvent* cbval1 = event;
            qchartview_childevent_callback(this, cbval1);
            return;
        }
        QChartView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qchartview_customevent_callback) {
            QEvent* cbval1 = event;
            qchartview_customevent_callback(this, cbval1);
            return;
        }
        QChartView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qchartview_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qchartview_connectnotify_callback(this, cbval1);
            return;
        }
        QChartView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qchartview_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qchartview_disconnectnotify_callback(this, cbval1);
            return;
        }
        QChartView::disconnectNotify(signal);
    }

    // Friend functions
    friend void QChartView_SuperResizeEvent(QChartView* self, QResizeEvent* event);
    friend void QChartView_SuperMousePressEvent(QChartView* self, QMouseEvent* event);
    friend void QChartView_SuperMouseMoveEvent(QChartView* self, QMouseEvent* event);
    friend void QChartView_SuperMouseReleaseEvent(QChartView* self, QMouseEvent* event);
    friend void QChartView_SuperSetupViewport(QChartView* self, QWidget* widget);
    friend bool QChartView_SuperEvent(QChartView* self, QEvent* event);
    friend bool QChartView_SuperViewportEvent(QChartView* self, QEvent* event);
    friend void QChartView_SuperContextMenuEvent(QChartView* self, QContextMenuEvent* event);
    friend void QChartView_SuperDragEnterEvent(QChartView* self, QDragEnterEvent* event);
    friend void QChartView_SuperDragLeaveEvent(QChartView* self, QDragLeaveEvent* event);
    friend void QChartView_SuperDragMoveEvent(QChartView* self, QDragMoveEvent* event);
    friend void QChartView_SuperDropEvent(QChartView* self, QDropEvent* event);
    friend void QChartView_SuperFocusInEvent(QChartView* self, QFocusEvent* event);
    friend bool QChartView_SuperFocusNextPrevChild(QChartView* self, bool next);
    friend void QChartView_SuperFocusOutEvent(QChartView* self, QFocusEvent* event);
    friend void QChartView_SuperKeyPressEvent(QChartView* self, QKeyEvent* event);
    friend void QChartView_SuperKeyReleaseEvent(QChartView* self, QKeyEvent* event);
    friend void QChartView_SuperMouseDoubleClickEvent(QChartView* self, QMouseEvent* event);
    friend void QChartView_SuperWheelEvent(QChartView* self, QWheelEvent* event);
    friend void QChartView_SuperPaintEvent(QChartView* self, QPaintEvent* event);
    friend void QChartView_SuperScrollContentsBy(QChartView* self, int dx, int dy);
    friend void QChartView_SuperShowEvent(QChartView* self, QShowEvent* event);
    friend void QChartView_SuperInputMethodEvent(QChartView* self, QInputMethodEvent* event);
    friend void QChartView_SuperDrawBackground(QChartView* self, QPainter* painter, const QRectF* rect);
    friend void QChartView_SuperDrawForeground(QChartView* self, QPainter* painter, const QRectF* rect);
    friend void QChartView_SuperDrawItems(QChartView* self, QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options);
    friend bool QChartView_SuperEventFilter(QChartView* self, QObject* param1, QEvent* param2);
    friend QSize* QChartView_SuperViewportSizeHint(const QChartView* self);
    friend void QChartView_SuperChangeEvent(QChartView* self, QEvent* param1);
    friend void QChartView_SuperInitStyleOption(const QChartView* self, QStyleOptionFrame* option);
    friend void QChartView_SuperEnterEvent(QChartView* self, QEnterEvent* event);
    friend void QChartView_SuperLeaveEvent(QChartView* self, QEvent* event);
    friend void QChartView_SuperMoveEvent(QChartView* self, QMoveEvent* event);
    friend void QChartView_SuperCloseEvent(QChartView* self, QCloseEvent* event);
    friend void QChartView_SuperTabletEvent(QChartView* self, QTabletEvent* event);
    friend void QChartView_SuperActionEvent(QChartView* self, QActionEvent* event);
    friend void QChartView_SuperHideEvent(QChartView* self, QHideEvent* event);
    friend bool QChartView_SuperNativeEvent(QChartView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QChartView_SuperMetric(const QChartView* self, int param1);
    friend void QChartView_SuperInitPainter(const QChartView* self, QPainter* painter);
    friend QPaintDevice* QChartView_SuperRedirected(const QChartView* self, QPoint* offset);
    friend QPainter* QChartView_SuperSharedPainter(const QChartView* self);
    friend void QChartView_SuperTimerEvent(QChartView* self, QTimerEvent* event);
    friend void QChartView_SuperChildEvent(QChartView* self, QChildEvent* event);
    friend void QChartView_SuperCustomEvent(QChartView* self, QEvent* event);
    friend void QChartView_SuperConnectNotify(QChartView* self, const QMetaMethod* signal);
    friend void QChartView_SuperDisconnectNotify(QChartView* self, const QMetaMethod* signal);
};

#endif
