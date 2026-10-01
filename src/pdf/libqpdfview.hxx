#pragma once
#ifndef PDF_LIBQPDFVIEW_HXX
#define PDF_LIBQPDFVIEW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPdfView
class VirtualQPdfView final : public QPdfView {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPdfView_MetaObject_Callback = QMetaObject* (*)(const QPdfView*);
    using QPdfView_Metacast_Callback = void* (*)(QPdfView*, const char*);
    using QPdfView_Metacall_Callback = int (*)(QPdfView*, int, int, void**);
    using QPdfView_PaintEvent_Callback = void (*)(QPdfView*, QPaintEvent*);
    using QPdfView_ResizeEvent_Callback = void (*)(QPdfView*, QResizeEvent*);
    using QPdfView_ScrollContentsBy_Callback = void (*)(QPdfView*, int, int);
    using QPdfView_MousePressEvent_Callback = void (*)(QPdfView*, QMouseEvent*);
    using QPdfView_MouseMoveEvent_Callback = void (*)(QPdfView*, QMouseEvent*);
    using QPdfView_MouseReleaseEvent_Callback = void (*)(QPdfView*, QMouseEvent*);
    using QPdfView_MinimumSizeHint_Callback = QSize* (*)(const QPdfView*);
    using QPdfView_SizeHint_Callback = QSize* (*)(const QPdfView*);
    using QPdfView_SetupViewport_Callback = void (*)(QPdfView*, QWidget*);
    using QPdfView_EventFilter_Callback = bool (*)(QPdfView*, QObject*, QEvent*);
    using QPdfView_Event_Callback = bool (*)(QPdfView*, QEvent*);
    using QPdfView_ViewportEvent_Callback = bool (*)(QPdfView*, QEvent*);
    using QPdfView_MouseDoubleClickEvent_Callback = void (*)(QPdfView*, QMouseEvent*);
    using QPdfView_WheelEvent_Callback = void (*)(QPdfView*, QWheelEvent*);
    using QPdfView_ContextMenuEvent_Callback = void (*)(QPdfView*, QContextMenuEvent*);
    using QPdfView_DragEnterEvent_Callback = void (*)(QPdfView*, QDragEnterEvent*);
    using QPdfView_DragMoveEvent_Callback = void (*)(QPdfView*, QDragMoveEvent*);
    using QPdfView_DragLeaveEvent_Callback = void (*)(QPdfView*, QDragLeaveEvent*);
    using QPdfView_DropEvent_Callback = void (*)(QPdfView*, QDropEvent*);
    using QPdfView_KeyPressEvent_Callback = void (*)(QPdfView*, QKeyEvent*);
    using QPdfView_ViewportSizeHint_Callback = QSize* (*)(const QPdfView*);
    using QPdfView_ChangeEvent_Callback = void (*)(QPdfView*, QEvent*);
    using QPdfView_InitStyleOption_Callback = void (*)(const QPdfView*, QStyleOptionFrame*);
    using QPdfView_DevType_Callback = int (*)(const QPdfView*);
    using QPdfView_SetVisible_Callback = void (*)(QPdfView*, bool);
    using QPdfView_HeightForWidth_Callback = int (*)(const QPdfView*, int);
    using QPdfView_HasHeightForWidth_Callback = bool (*)(const QPdfView*);
    using QPdfView_PaintEngine_Callback = QPaintEngine* (*)(const QPdfView*);
    using QPdfView_KeyReleaseEvent_Callback = void (*)(QPdfView*, QKeyEvent*);
    using QPdfView_FocusInEvent_Callback = void (*)(QPdfView*, QFocusEvent*);
    using QPdfView_FocusOutEvent_Callback = void (*)(QPdfView*, QFocusEvent*);
    using QPdfView_EnterEvent_Callback = void (*)(QPdfView*, QEnterEvent*);
    using QPdfView_LeaveEvent_Callback = void (*)(QPdfView*, QEvent*);
    using QPdfView_MoveEvent_Callback = void (*)(QPdfView*, QMoveEvent*);
    using QPdfView_CloseEvent_Callback = void (*)(QPdfView*, QCloseEvent*);
    using QPdfView_TabletEvent_Callback = void (*)(QPdfView*, QTabletEvent*);
    using QPdfView_ActionEvent_Callback = void (*)(QPdfView*, QActionEvent*);
    using QPdfView_ShowEvent_Callback = void (*)(QPdfView*, QShowEvent*);
    using QPdfView_HideEvent_Callback = void (*)(QPdfView*, QHideEvent*);
    using QPdfView_NativeEvent_Callback = bool (*)(QPdfView*, libqt_string, void*, intptr_t*);
    using QPdfView_Metric_Callback = int (*)(const QPdfView*, int);
    using QPdfView_InitPainter_Callback = void (*)(const QPdfView*, QPainter*);
    using QPdfView_Redirected_Callback = QPaintDevice* (*)(const QPdfView*, QPoint*);
    using QPdfView_SharedPainter_Callback = QPainter* (*)(const QPdfView*);
    using QPdfView_InputMethodEvent_Callback = void (*)(QPdfView*, QInputMethodEvent*);
    using QPdfView_InputMethodQuery_Callback = QVariant* (*)(const QPdfView*, int);
    using QPdfView_FocusNextPrevChild_Callback = bool (*)(QPdfView*, bool);
    using QPdfView_TimerEvent_Callback = void (*)(QPdfView*, QTimerEvent*);
    using QPdfView_ChildEvent_Callback = void (*)(QPdfView*, QChildEvent*);
    using QPdfView_CustomEvent_Callback = void (*)(QPdfView*, QEvent*);
    using QPdfView_ConnectNotify_Callback = void (*)(QPdfView*, QMetaMethod*);
    using QPdfView_DisconnectNotify_Callback = void (*)(QPdfView*, QMetaMethod*);
    using QPdfView::create;
    using QPdfView::destroy;
    using QPdfView::drawFrame;
    using QPdfView::focusNextChild;
    using QPdfView::focusPreviousChild;
    using QPdfView::getDecodedMetricF;
    using QPdfView::isSignalConnected;
    using QPdfView::receivers;
    using QPdfView::sender;
    using QPdfView::senderSignalIndex;
    using QPdfView::setViewportMargins;
    using QPdfView::updateMicroFocus;
    using QPdfView::viewportMargins;

    // Instance callback storage
    QPdfView_MetaObject_Callback qpdfview_metaobject_callback = nullptr;
    QPdfView_Metacast_Callback qpdfview_metacast_callback = nullptr;
    QPdfView_Metacall_Callback qpdfview_metacall_callback = nullptr;
    QPdfView_PaintEvent_Callback qpdfview_paintevent_callback = nullptr;
    QPdfView_ResizeEvent_Callback qpdfview_resizeevent_callback = nullptr;
    QPdfView_ScrollContentsBy_Callback qpdfview_scrollcontentsby_callback = nullptr;
    QPdfView_MousePressEvent_Callback qpdfview_mousepressevent_callback = nullptr;
    QPdfView_MouseMoveEvent_Callback qpdfview_mousemoveevent_callback = nullptr;
    QPdfView_MouseReleaseEvent_Callback qpdfview_mousereleaseevent_callback = nullptr;
    QPdfView_MinimumSizeHint_Callback qpdfview_minimumsizehint_callback = nullptr;
    QPdfView_SizeHint_Callback qpdfview_sizehint_callback = nullptr;
    QPdfView_SetupViewport_Callback qpdfview_setupviewport_callback = nullptr;
    QPdfView_EventFilter_Callback qpdfview_eventfilter_callback = nullptr;
    QPdfView_Event_Callback qpdfview_event_callback = nullptr;
    QPdfView_ViewportEvent_Callback qpdfview_viewportevent_callback = nullptr;
    QPdfView_MouseDoubleClickEvent_Callback qpdfview_mousedoubleclickevent_callback = nullptr;
    QPdfView_WheelEvent_Callback qpdfview_wheelevent_callback = nullptr;
    QPdfView_ContextMenuEvent_Callback qpdfview_contextmenuevent_callback = nullptr;
    QPdfView_DragEnterEvent_Callback qpdfview_dragenterevent_callback = nullptr;
    QPdfView_DragMoveEvent_Callback qpdfview_dragmoveevent_callback = nullptr;
    QPdfView_DragLeaveEvent_Callback qpdfview_dragleaveevent_callback = nullptr;
    QPdfView_DropEvent_Callback qpdfview_dropevent_callback = nullptr;
    QPdfView_KeyPressEvent_Callback qpdfview_keypressevent_callback = nullptr;
    QPdfView_ViewportSizeHint_Callback qpdfview_viewportsizehint_callback = nullptr;
    QPdfView_ChangeEvent_Callback qpdfview_changeevent_callback = nullptr;
    QPdfView_InitStyleOption_Callback qpdfview_initstyleoption_callback = nullptr;
    QPdfView_DevType_Callback qpdfview_devtype_callback = nullptr;
    QPdfView_SetVisible_Callback qpdfview_setvisible_callback = nullptr;
    QPdfView_HeightForWidth_Callback qpdfview_heightforwidth_callback = nullptr;
    QPdfView_HasHeightForWidth_Callback qpdfview_hasheightforwidth_callback = nullptr;
    QPdfView_PaintEngine_Callback qpdfview_paintengine_callback = nullptr;
    QPdfView_KeyReleaseEvent_Callback qpdfview_keyreleaseevent_callback = nullptr;
    QPdfView_FocusInEvent_Callback qpdfview_focusinevent_callback = nullptr;
    QPdfView_FocusOutEvent_Callback qpdfview_focusoutevent_callback = nullptr;
    QPdfView_EnterEvent_Callback qpdfview_enterevent_callback = nullptr;
    QPdfView_LeaveEvent_Callback qpdfview_leaveevent_callback = nullptr;
    QPdfView_MoveEvent_Callback qpdfview_moveevent_callback = nullptr;
    QPdfView_CloseEvent_Callback qpdfview_closeevent_callback = nullptr;
    QPdfView_TabletEvent_Callback qpdfview_tabletevent_callback = nullptr;
    QPdfView_ActionEvent_Callback qpdfview_actionevent_callback = nullptr;
    QPdfView_ShowEvent_Callback qpdfview_showevent_callback = nullptr;
    QPdfView_HideEvent_Callback qpdfview_hideevent_callback = nullptr;
    QPdfView_NativeEvent_Callback qpdfview_nativeevent_callback = nullptr;
    QPdfView_Metric_Callback qpdfview_metric_callback = nullptr;
    QPdfView_InitPainter_Callback qpdfview_initpainter_callback = nullptr;
    QPdfView_Redirected_Callback qpdfview_redirected_callback = nullptr;
    QPdfView_SharedPainter_Callback qpdfview_sharedpainter_callback = nullptr;
    QPdfView_InputMethodEvent_Callback qpdfview_inputmethodevent_callback = nullptr;
    QPdfView_InputMethodQuery_Callback qpdfview_inputmethodquery_callback = nullptr;
    QPdfView_FocusNextPrevChild_Callback qpdfview_focusnextprevchild_callback = nullptr;
    QPdfView_TimerEvent_Callback qpdfview_timerevent_callback = nullptr;
    QPdfView_ChildEvent_Callback qpdfview_childevent_callback = nullptr;
    QPdfView_CustomEvent_Callback qpdfview_customevent_callback = nullptr;
    QPdfView_ConnectNotify_Callback qpdfview_connectnotify_callback = nullptr;
    QPdfView_DisconnectNotify_Callback qpdfview_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPdfView {
        using QPdfView::actionEvent;
        using QPdfView::changeEvent;
        using QPdfView::childEvent;
        using QPdfView::closeEvent;
        using QPdfView::connectNotify;
        using QPdfView::contextMenuEvent;
        using QPdfView::customEvent;
        using QPdfView::disconnectNotify;
        using QPdfView::dragEnterEvent;
        using QPdfView::dragLeaveEvent;
        using QPdfView::dragMoveEvent;
        using QPdfView::dropEvent;
        using QPdfView::enterEvent;
        using QPdfView::event;
        using QPdfView::eventFilter;
        using QPdfView::focusInEvent;
        using QPdfView::focusNextPrevChild;
        using QPdfView::focusOutEvent;
        using QPdfView::hideEvent;
        using QPdfView::initPainter;
        using QPdfView::initStyleOption;
        using QPdfView::inputMethodEvent;
        using QPdfView::keyPressEvent;
        using QPdfView::keyReleaseEvent;
        using QPdfView::leaveEvent;
        using QPdfView::metric;
        using QPdfView::mouseDoubleClickEvent;
        using QPdfView::mouseMoveEvent;
        using QPdfView::mousePressEvent;
        using QPdfView::mouseReleaseEvent;
        using QPdfView::moveEvent;
        using QPdfView::nativeEvent;
        using QPdfView::paintEvent;
        using QPdfView::redirected;
        using QPdfView::resizeEvent;
        using QPdfView::scrollContentsBy;
        using QPdfView::sharedPainter;
        using QPdfView::showEvent;
        using QPdfView::tabletEvent;
        using QPdfView::timerEvent;
        using QPdfView::viewportEvent;
        using QPdfView::viewportSizeHint;
        using QPdfView::wheelEvent;
    };

    VirtualQPdfView(QWidget* parent) : QPdfView(parent) {};
    VirtualQPdfView() : QPdfView() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpdfview_metaobject_callback) {
            QMetaObject* callback_ret = qpdfview_metaobject_callback(this);
            return callback_ret;
        }
        return QPdfView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpdfview_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpdfview_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpdfview_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpdfview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPdfView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qpdfview_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qpdfview_paintevent_callback(this, cbval1);
            return;
        }
        QPdfView::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qpdfview_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qpdfview_resizeevent_callback(this, cbval1);
            return;
        }
        QPdfView::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qpdfview_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qpdfview_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QPdfView::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qpdfview_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qpdfview_mousepressevent_callback(this, cbval1);
            return;
        }
        QPdfView::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qpdfview_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qpdfview_mousemoveevent_callback(this, cbval1);
            return;
        }
        QPdfView::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qpdfview_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qpdfview_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QPdfView::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qpdfview_minimumsizehint_callback) {
            QSize* callback_ret = qpdfview_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfView::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qpdfview_sizehint_callback) {
            QSize* callback_ret = qpdfview_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfView::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qpdfview_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            qpdfview_setupviewport_callback(this, cbval1);
            return;
        }
        QPdfView::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qpdfview_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qpdfview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPdfView::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qpdfview_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qpdfview_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfView::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (qpdfview_viewportevent_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qpdfview_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfView::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qpdfview_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = param1;
            qpdfview_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QPdfView::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qpdfview_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            qpdfview_wheelevent_callback(this, cbval1);
            return;
        }
        QPdfView::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qpdfview_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qpdfview_contextmenuevent_callback(this, cbval1);
            return;
        }
        QPdfView::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qpdfview_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = param1;
            qpdfview_dragenterevent_callback(this, cbval1);
            return;
        }
        QPdfView::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (qpdfview_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = param1;
            qpdfview_dragmoveevent_callback(this, cbval1);
            return;
        }
        QPdfView::dragMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (qpdfview_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = param1;
            qpdfview_dragleaveevent_callback(this, cbval1);
            return;
        }
        QPdfView::dragLeaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qpdfview_dropevent_callback) {
            QDropEvent* cbval1 = param1;
            qpdfview_dropevent_callback(this, cbval1);
            return;
        }
        QPdfView::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qpdfview_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qpdfview_keypressevent_callback(this, cbval1);
            return;
        }
        QPdfView::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qpdfview_viewportsizehint_callback) {
            QSize* callback_ret = qpdfview_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfView::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qpdfview_changeevent_callback) {
            QEvent* cbval1 = param1;
            qpdfview_changeevent_callback(this, cbval1);
            return;
        }
        QPdfView::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qpdfview_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qpdfview_initstyleoption_callback(this, cbval1);
            return;
        }
        QPdfView::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qpdfview_devtype_callback) {
            int callback_ret = qpdfview_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QPdfView::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qpdfview_setvisible_callback) {
            bool cbval1 = visible;
            qpdfview_setvisible_callback(this, cbval1);
            return;
        }
        QPdfView::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qpdfview_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qpdfview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPdfView::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qpdfview_hasheightforwidth_callback) {
            bool callback_ret = qpdfview_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QPdfView::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qpdfview_paintengine_callback) {
            QPaintEngine* callback_ret = qpdfview_paintengine_callback(this);
            return callback_ret;
        }
        return QPdfView::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qpdfview_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qpdfview_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QPdfView::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qpdfview_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qpdfview_focusinevent_callback(this, cbval1);
            return;
        }
        QPdfView::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qpdfview_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qpdfview_focusoutevent_callback(this, cbval1);
            return;
        }
        QPdfView::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qpdfview_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qpdfview_enterevent_callback(this, cbval1);
            return;
        }
        QPdfView::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qpdfview_leaveevent_callback) {
            QEvent* cbval1 = event;
            qpdfview_leaveevent_callback(this, cbval1);
            return;
        }
        QPdfView::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qpdfview_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qpdfview_moveevent_callback(this, cbval1);
            return;
        }
        QPdfView::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qpdfview_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qpdfview_closeevent_callback(this, cbval1);
            return;
        }
        QPdfView::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qpdfview_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qpdfview_tabletevent_callback(this, cbval1);
            return;
        }
        QPdfView::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qpdfview_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qpdfview_actionevent_callback(this, cbval1);
            return;
        }
        QPdfView::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qpdfview_showevent_callback) {
            QShowEvent* cbval1 = event;
            qpdfview_showevent_callback(this, cbval1);
            return;
        }
        QPdfView::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qpdfview_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qpdfview_hideevent_callback(this, cbval1);
            return;
        }
        QPdfView::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qpdfview_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qpdfview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QPdfView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qpdfview_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qpdfview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPdfView::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qpdfview_initpainter_callback) {
            QPainter* cbval1 = painter;
            qpdfview_initpainter_callback(this, cbval1);
            return;
        }
        QPdfView::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qpdfview_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qpdfview_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfView::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qpdfview_sharedpainter_callback) {
            QPainter* callback_ret = qpdfview_sharedpainter_callback(this);
            return callback_ret;
        }
        return QPdfView::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qpdfview_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qpdfview_inputmethodevent_callback(this, cbval1);
            return;
        }
        QPdfView::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qpdfview_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qpdfview_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfView::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qpdfview_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qpdfview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfView::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpdfview_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpdfview_timerevent_callback(this, cbval1);
            return;
        }
        QPdfView::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpdfview_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpdfview_childevent_callback(this, cbval1);
            return;
        }
        QPdfView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpdfview_customevent_callback) {
            QEvent* cbval1 = event;
            qpdfview_customevent_callback(this, cbval1);
            return;
        }
        QPdfView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpdfview_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpdfview_connectnotify_callback(this, cbval1);
            return;
        }
        QPdfView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpdfview_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpdfview_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPdfView::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPdfView_SuperPaintEvent(QPdfView* self, QPaintEvent* event);
    friend void QPdfView_SuperResizeEvent(QPdfView* self, QResizeEvent* event);
    friend void QPdfView_SuperScrollContentsBy(QPdfView* self, int dx, int dy);
    friend void QPdfView_SuperMousePressEvent(QPdfView* self, QMouseEvent* event);
    friend void QPdfView_SuperMouseMoveEvent(QPdfView* self, QMouseEvent* event);
    friend void QPdfView_SuperMouseReleaseEvent(QPdfView* self, QMouseEvent* event);
    friend bool QPdfView_SuperEventFilter(QPdfView* self, QObject* param1, QEvent* param2);
    friend bool QPdfView_SuperEvent(QPdfView* self, QEvent* param1);
    friend bool QPdfView_SuperViewportEvent(QPdfView* self, QEvent* param1);
    friend void QPdfView_SuperMouseDoubleClickEvent(QPdfView* self, QMouseEvent* param1);
    friend void QPdfView_SuperWheelEvent(QPdfView* self, QWheelEvent* param1);
    friend void QPdfView_SuperContextMenuEvent(QPdfView* self, QContextMenuEvent* param1);
    friend void QPdfView_SuperDragEnterEvent(QPdfView* self, QDragEnterEvent* param1);
    friend void QPdfView_SuperDragMoveEvent(QPdfView* self, QDragMoveEvent* param1);
    friend void QPdfView_SuperDragLeaveEvent(QPdfView* self, QDragLeaveEvent* param1);
    friend void QPdfView_SuperDropEvent(QPdfView* self, QDropEvent* param1);
    friend void QPdfView_SuperKeyPressEvent(QPdfView* self, QKeyEvent* param1);
    friend QSize* QPdfView_SuperViewportSizeHint(const QPdfView* self);
    friend void QPdfView_SuperChangeEvent(QPdfView* self, QEvent* param1);
    friend void QPdfView_SuperInitStyleOption(const QPdfView* self, QStyleOptionFrame* option);
    friend void QPdfView_SuperKeyReleaseEvent(QPdfView* self, QKeyEvent* event);
    friend void QPdfView_SuperFocusInEvent(QPdfView* self, QFocusEvent* event);
    friend void QPdfView_SuperFocusOutEvent(QPdfView* self, QFocusEvent* event);
    friend void QPdfView_SuperEnterEvent(QPdfView* self, QEnterEvent* event);
    friend void QPdfView_SuperLeaveEvent(QPdfView* self, QEvent* event);
    friend void QPdfView_SuperMoveEvent(QPdfView* self, QMoveEvent* event);
    friend void QPdfView_SuperCloseEvent(QPdfView* self, QCloseEvent* event);
    friend void QPdfView_SuperTabletEvent(QPdfView* self, QTabletEvent* event);
    friend void QPdfView_SuperActionEvent(QPdfView* self, QActionEvent* event);
    friend void QPdfView_SuperShowEvent(QPdfView* self, QShowEvent* event);
    friend void QPdfView_SuperHideEvent(QPdfView* self, QHideEvent* event);
    friend bool QPdfView_SuperNativeEvent(QPdfView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QPdfView_SuperMetric(const QPdfView* self, int param1);
    friend void QPdfView_SuperInitPainter(const QPdfView* self, QPainter* painter);
    friend QPaintDevice* QPdfView_SuperRedirected(const QPdfView* self, QPoint* offset);
    friend QPainter* QPdfView_SuperSharedPainter(const QPdfView* self);
    friend void QPdfView_SuperInputMethodEvent(QPdfView* self, QInputMethodEvent* param1);
    friend bool QPdfView_SuperFocusNextPrevChild(QPdfView* self, bool next);
    friend void QPdfView_SuperTimerEvent(QPdfView* self, QTimerEvent* event);
    friend void QPdfView_SuperChildEvent(QPdfView* self, QChildEvent* event);
    friend void QPdfView_SuperCustomEvent(QPdfView* self, QEvent* event);
    friend void QPdfView_SuperConnectNotify(QPdfView* self, const QMetaMethod* signal);
    friend void QPdfView_SuperDisconnectNotify(QPdfView* self, const QMetaMethod* signal);
};

#endif
