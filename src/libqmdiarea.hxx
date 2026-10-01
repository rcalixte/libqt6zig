#pragma once
#ifndef LIBQMDIAREA_HXX
#define LIBQMDIAREA_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QMdiArea
class VirtualQMdiArea final : public QMdiArea {
  public:
    // Virtual class public types (including callbacks and access types)
    using QMdiArea_MetaObject_Callback = QMetaObject* (*)(const QMdiArea*);
    using QMdiArea_Metacast_Callback = void* (*)(QMdiArea*, const char*);
    using QMdiArea_Metacall_Callback = int (*)(QMdiArea*, int, int, void**);
    using QMdiArea_SizeHint_Callback = QSize* (*)(const QMdiArea*);
    using QMdiArea_MinimumSizeHint_Callback = QSize* (*)(const QMdiArea*);
    using QMdiArea_SetupViewport_Callback = void (*)(QMdiArea*, QWidget*);
    using QMdiArea_Event_Callback = bool (*)(QMdiArea*, QEvent*);
    using QMdiArea_EventFilter_Callback = bool (*)(QMdiArea*, QObject*, QEvent*);
    using QMdiArea_PaintEvent_Callback = void (*)(QMdiArea*, QPaintEvent*);
    using QMdiArea_ChildEvent_Callback = void (*)(QMdiArea*, QChildEvent*);
    using QMdiArea_ResizeEvent_Callback = void (*)(QMdiArea*, QResizeEvent*);
    using QMdiArea_TimerEvent_Callback = void (*)(QMdiArea*, QTimerEvent*);
    using QMdiArea_ShowEvent_Callback = void (*)(QMdiArea*, QShowEvent*);
    using QMdiArea_ViewportEvent_Callback = bool (*)(QMdiArea*, QEvent*);
    using QMdiArea_ScrollContentsBy_Callback = void (*)(QMdiArea*, int, int);
    using QMdiArea_MousePressEvent_Callback = void (*)(QMdiArea*, QMouseEvent*);
    using QMdiArea_MouseReleaseEvent_Callback = void (*)(QMdiArea*, QMouseEvent*);
    using QMdiArea_MouseDoubleClickEvent_Callback = void (*)(QMdiArea*, QMouseEvent*);
    using QMdiArea_MouseMoveEvent_Callback = void (*)(QMdiArea*, QMouseEvent*);
    using QMdiArea_WheelEvent_Callback = void (*)(QMdiArea*, QWheelEvent*);
    using QMdiArea_ContextMenuEvent_Callback = void (*)(QMdiArea*, QContextMenuEvent*);
    using QMdiArea_DragEnterEvent_Callback = void (*)(QMdiArea*, QDragEnterEvent*);
    using QMdiArea_DragMoveEvent_Callback = void (*)(QMdiArea*, QDragMoveEvent*);
    using QMdiArea_DragLeaveEvent_Callback = void (*)(QMdiArea*, QDragLeaveEvent*);
    using QMdiArea_DropEvent_Callback = void (*)(QMdiArea*, QDropEvent*);
    using QMdiArea_KeyPressEvent_Callback = void (*)(QMdiArea*, QKeyEvent*);
    using QMdiArea_ViewportSizeHint_Callback = QSize* (*)(const QMdiArea*);
    using QMdiArea_ChangeEvent_Callback = void (*)(QMdiArea*, QEvent*);
    using QMdiArea_InitStyleOption_Callback = void (*)(const QMdiArea*, QStyleOptionFrame*);
    using QMdiArea_DevType_Callback = int (*)(const QMdiArea*);
    using QMdiArea_SetVisible_Callback = void (*)(QMdiArea*, bool);
    using QMdiArea_HeightForWidth_Callback = int (*)(const QMdiArea*, int);
    using QMdiArea_HasHeightForWidth_Callback = bool (*)(const QMdiArea*);
    using QMdiArea_PaintEngine_Callback = QPaintEngine* (*)(const QMdiArea*);
    using QMdiArea_KeyReleaseEvent_Callback = void (*)(QMdiArea*, QKeyEvent*);
    using QMdiArea_FocusInEvent_Callback = void (*)(QMdiArea*, QFocusEvent*);
    using QMdiArea_FocusOutEvent_Callback = void (*)(QMdiArea*, QFocusEvent*);
    using QMdiArea_EnterEvent_Callback = void (*)(QMdiArea*, QEnterEvent*);
    using QMdiArea_LeaveEvent_Callback = void (*)(QMdiArea*, QEvent*);
    using QMdiArea_MoveEvent_Callback = void (*)(QMdiArea*, QMoveEvent*);
    using QMdiArea_CloseEvent_Callback = void (*)(QMdiArea*, QCloseEvent*);
    using QMdiArea_TabletEvent_Callback = void (*)(QMdiArea*, QTabletEvent*);
    using QMdiArea_ActionEvent_Callback = void (*)(QMdiArea*, QActionEvent*);
    using QMdiArea_HideEvent_Callback = void (*)(QMdiArea*, QHideEvent*);
    using QMdiArea_NativeEvent_Callback = bool (*)(QMdiArea*, libqt_string, void*, intptr_t*);
    using QMdiArea_Metric_Callback = int (*)(const QMdiArea*, int);
    using QMdiArea_InitPainter_Callback = void (*)(const QMdiArea*, QPainter*);
    using QMdiArea_Redirected_Callback = QPaintDevice* (*)(const QMdiArea*, QPoint*);
    using QMdiArea_SharedPainter_Callback = QPainter* (*)(const QMdiArea*);
    using QMdiArea_InputMethodEvent_Callback = void (*)(QMdiArea*, QInputMethodEvent*);
    using QMdiArea_InputMethodQuery_Callback = QVariant* (*)(const QMdiArea*, int);
    using QMdiArea_FocusNextPrevChild_Callback = bool (*)(QMdiArea*, bool);
    using QMdiArea_CustomEvent_Callback = void (*)(QMdiArea*, QEvent*);
    using QMdiArea_ConnectNotify_Callback = void (*)(QMdiArea*, QMetaMethod*);
    using QMdiArea_DisconnectNotify_Callback = void (*)(QMdiArea*, QMetaMethod*);
    using QMdiArea::create;
    using QMdiArea::destroy;
    using QMdiArea::drawFrame;
    using QMdiArea::focusNextChild;
    using QMdiArea::focusPreviousChild;
    using QMdiArea::getDecodedMetricF;
    using QMdiArea::isSignalConnected;
    using QMdiArea::receivers;
    using QMdiArea::sender;
    using QMdiArea::senderSignalIndex;
    using QMdiArea::setViewportMargins;
    using QMdiArea::updateMicroFocus;
    using QMdiArea::viewportMargins;

    // Instance callback storage
    QMdiArea_MetaObject_Callback qmdiarea_metaobject_callback = nullptr;
    QMdiArea_Metacast_Callback qmdiarea_metacast_callback = nullptr;
    QMdiArea_Metacall_Callback qmdiarea_metacall_callback = nullptr;
    QMdiArea_SizeHint_Callback qmdiarea_sizehint_callback = nullptr;
    QMdiArea_MinimumSizeHint_Callback qmdiarea_minimumsizehint_callback = nullptr;
    QMdiArea_SetupViewport_Callback qmdiarea_setupviewport_callback = nullptr;
    QMdiArea_Event_Callback qmdiarea_event_callback = nullptr;
    QMdiArea_EventFilter_Callback qmdiarea_eventfilter_callback = nullptr;
    QMdiArea_PaintEvent_Callback qmdiarea_paintevent_callback = nullptr;
    QMdiArea_ChildEvent_Callback qmdiarea_childevent_callback = nullptr;
    QMdiArea_ResizeEvent_Callback qmdiarea_resizeevent_callback = nullptr;
    QMdiArea_TimerEvent_Callback qmdiarea_timerevent_callback = nullptr;
    QMdiArea_ShowEvent_Callback qmdiarea_showevent_callback = nullptr;
    QMdiArea_ViewportEvent_Callback qmdiarea_viewportevent_callback = nullptr;
    QMdiArea_ScrollContentsBy_Callback qmdiarea_scrollcontentsby_callback = nullptr;
    QMdiArea_MousePressEvent_Callback qmdiarea_mousepressevent_callback = nullptr;
    QMdiArea_MouseReleaseEvent_Callback qmdiarea_mousereleaseevent_callback = nullptr;
    QMdiArea_MouseDoubleClickEvent_Callback qmdiarea_mousedoubleclickevent_callback = nullptr;
    QMdiArea_MouseMoveEvent_Callback qmdiarea_mousemoveevent_callback = nullptr;
    QMdiArea_WheelEvent_Callback qmdiarea_wheelevent_callback = nullptr;
    QMdiArea_ContextMenuEvent_Callback qmdiarea_contextmenuevent_callback = nullptr;
    QMdiArea_DragEnterEvent_Callback qmdiarea_dragenterevent_callback = nullptr;
    QMdiArea_DragMoveEvent_Callback qmdiarea_dragmoveevent_callback = nullptr;
    QMdiArea_DragLeaveEvent_Callback qmdiarea_dragleaveevent_callback = nullptr;
    QMdiArea_DropEvent_Callback qmdiarea_dropevent_callback = nullptr;
    QMdiArea_KeyPressEvent_Callback qmdiarea_keypressevent_callback = nullptr;
    QMdiArea_ViewportSizeHint_Callback qmdiarea_viewportsizehint_callback = nullptr;
    QMdiArea_ChangeEvent_Callback qmdiarea_changeevent_callback = nullptr;
    QMdiArea_InitStyleOption_Callback qmdiarea_initstyleoption_callback = nullptr;
    QMdiArea_DevType_Callback qmdiarea_devtype_callback = nullptr;
    QMdiArea_SetVisible_Callback qmdiarea_setvisible_callback = nullptr;
    QMdiArea_HeightForWidth_Callback qmdiarea_heightforwidth_callback = nullptr;
    QMdiArea_HasHeightForWidth_Callback qmdiarea_hasheightforwidth_callback = nullptr;
    QMdiArea_PaintEngine_Callback qmdiarea_paintengine_callback = nullptr;
    QMdiArea_KeyReleaseEvent_Callback qmdiarea_keyreleaseevent_callback = nullptr;
    QMdiArea_FocusInEvent_Callback qmdiarea_focusinevent_callback = nullptr;
    QMdiArea_FocusOutEvent_Callback qmdiarea_focusoutevent_callback = nullptr;
    QMdiArea_EnterEvent_Callback qmdiarea_enterevent_callback = nullptr;
    QMdiArea_LeaveEvent_Callback qmdiarea_leaveevent_callback = nullptr;
    QMdiArea_MoveEvent_Callback qmdiarea_moveevent_callback = nullptr;
    QMdiArea_CloseEvent_Callback qmdiarea_closeevent_callback = nullptr;
    QMdiArea_TabletEvent_Callback qmdiarea_tabletevent_callback = nullptr;
    QMdiArea_ActionEvent_Callback qmdiarea_actionevent_callback = nullptr;
    QMdiArea_HideEvent_Callback qmdiarea_hideevent_callback = nullptr;
    QMdiArea_NativeEvent_Callback qmdiarea_nativeevent_callback = nullptr;
    QMdiArea_Metric_Callback qmdiarea_metric_callback = nullptr;
    QMdiArea_InitPainter_Callback qmdiarea_initpainter_callback = nullptr;
    QMdiArea_Redirected_Callback qmdiarea_redirected_callback = nullptr;
    QMdiArea_SharedPainter_Callback qmdiarea_sharedpainter_callback = nullptr;
    QMdiArea_InputMethodEvent_Callback qmdiarea_inputmethodevent_callback = nullptr;
    QMdiArea_InputMethodQuery_Callback qmdiarea_inputmethodquery_callback = nullptr;
    QMdiArea_FocusNextPrevChild_Callback qmdiarea_focusnextprevchild_callback = nullptr;
    QMdiArea_CustomEvent_Callback qmdiarea_customevent_callback = nullptr;
    QMdiArea_ConnectNotify_Callback qmdiarea_connectnotify_callback = nullptr;
    QMdiArea_DisconnectNotify_Callback qmdiarea_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QMdiArea {
        using QMdiArea::actionEvent;
        using QMdiArea::changeEvent;
        using QMdiArea::childEvent;
        using QMdiArea::closeEvent;
        using QMdiArea::connectNotify;
        using QMdiArea::contextMenuEvent;
        using QMdiArea::customEvent;
        using QMdiArea::disconnectNotify;
        using QMdiArea::dragEnterEvent;
        using QMdiArea::dragLeaveEvent;
        using QMdiArea::dragMoveEvent;
        using QMdiArea::dropEvent;
        using QMdiArea::enterEvent;
        using QMdiArea::event;
        using QMdiArea::eventFilter;
        using QMdiArea::focusInEvent;
        using QMdiArea::focusNextPrevChild;
        using QMdiArea::focusOutEvent;
        using QMdiArea::hideEvent;
        using QMdiArea::initPainter;
        using QMdiArea::initStyleOption;
        using QMdiArea::inputMethodEvent;
        using QMdiArea::keyPressEvent;
        using QMdiArea::keyReleaseEvent;
        using QMdiArea::leaveEvent;
        using QMdiArea::metric;
        using QMdiArea::mouseDoubleClickEvent;
        using QMdiArea::mouseMoveEvent;
        using QMdiArea::mousePressEvent;
        using QMdiArea::mouseReleaseEvent;
        using QMdiArea::moveEvent;
        using QMdiArea::nativeEvent;
        using QMdiArea::paintEvent;
        using QMdiArea::redirected;
        using QMdiArea::resizeEvent;
        using QMdiArea::scrollContentsBy;
        using QMdiArea::setupViewport;
        using QMdiArea::sharedPainter;
        using QMdiArea::showEvent;
        using QMdiArea::tabletEvent;
        using QMdiArea::timerEvent;
        using QMdiArea::viewportEvent;
        using QMdiArea::viewportSizeHint;
        using QMdiArea::wheelEvent;
    };

    VirtualQMdiArea(QWidget* parent) : QMdiArea(parent) {};
    VirtualQMdiArea() : QMdiArea() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qmdiarea_metaobject_callback) {
            QMetaObject* callback_ret = qmdiarea_metaobject_callback(this);
            return callback_ret;
        }
        return QMdiArea::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qmdiarea_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qmdiarea_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QMdiArea::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmdiarea_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qmdiarea_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QMdiArea::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qmdiarea_sizehint_callback) {
            QSize* callback_ret = qmdiarea_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QMdiArea::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qmdiarea_minimumsizehint_callback) {
            QSize* callback_ret = qmdiarea_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QMdiArea::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qmdiarea_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            qmdiarea_setupviewport_callback(this, cbval1);
            return;
        }
        QMdiArea::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmdiarea_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qmdiarea_event_callback(this, cbval1);
            return callback_ret;
        }
        return QMdiArea::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qmdiarea_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = qmdiarea_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QMdiArea::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* paintEvent) override {
        if (qmdiarea_paintevent_callback) {
            QPaintEvent* cbval1 = paintEvent;
            qmdiarea_paintevent_callback(this, cbval1);
            return;
        }
        QMdiArea::paintEvent(paintEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* childEvent) override {
        if (qmdiarea_childevent_callback) {
            QChildEvent* cbval1 = childEvent;
            qmdiarea_childevent_callback(this, cbval1);
            return;
        }
        QMdiArea::childEvent(childEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* resizeEvent) override {
        if (qmdiarea_resizeevent_callback) {
            QResizeEvent* cbval1 = resizeEvent;
            qmdiarea_resizeevent_callback(this, cbval1);
            return;
        }
        QMdiArea::resizeEvent(resizeEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* timerEvent) override {
        if (qmdiarea_timerevent_callback) {
            QTimerEvent* cbval1 = timerEvent;
            qmdiarea_timerevent_callback(this, cbval1);
            return;
        }
        QMdiArea::timerEvent(timerEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* showEvent) override {
        if (qmdiarea_showevent_callback) {
            QShowEvent* cbval1 = showEvent;
            qmdiarea_showevent_callback(this, cbval1);
            return;
        }
        QMdiArea::showEvent(showEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qmdiarea_viewportevent_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qmdiarea_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QMdiArea::viewportEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qmdiarea_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qmdiarea_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QMdiArea::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qmdiarea_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            qmdiarea_mousepressevent_callback(this, cbval1);
            return;
        }
        QMdiArea::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qmdiarea_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            qmdiarea_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QMdiArea::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qmdiarea_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = param1;
            qmdiarea_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QMdiArea::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qmdiarea_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            qmdiarea_mousemoveevent_callback(this, cbval1);
            return;
        }
        QMdiArea::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qmdiarea_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            qmdiarea_wheelevent_callback(this, cbval1);
            return;
        }
        QMdiArea::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qmdiarea_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qmdiarea_contextmenuevent_callback(this, cbval1);
            return;
        }
        QMdiArea::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qmdiarea_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = param1;
            qmdiarea_dragenterevent_callback(this, cbval1);
            return;
        }
        QMdiArea::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (qmdiarea_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = param1;
            qmdiarea_dragmoveevent_callback(this, cbval1);
            return;
        }
        QMdiArea::dragMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (qmdiarea_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = param1;
            qmdiarea_dragleaveevent_callback(this, cbval1);
            return;
        }
        QMdiArea::dragLeaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qmdiarea_dropevent_callback) {
            QDropEvent* cbval1 = param1;
            qmdiarea_dropevent_callback(this, cbval1);
            return;
        }
        QMdiArea::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qmdiarea_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qmdiarea_keypressevent_callback(this, cbval1);
            return;
        }
        QMdiArea::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qmdiarea_viewportsizehint_callback) {
            QSize* callback_ret = qmdiarea_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QMdiArea::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qmdiarea_changeevent_callback) {
            QEvent* cbval1 = param1;
            qmdiarea_changeevent_callback(this, cbval1);
            return;
        }
        QMdiArea::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qmdiarea_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qmdiarea_initstyleoption_callback(this, cbval1);
            return;
        }
        QMdiArea::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qmdiarea_devtype_callback) {
            int callback_ret = qmdiarea_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QMdiArea::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qmdiarea_setvisible_callback) {
            bool cbval1 = visible;
            qmdiarea_setvisible_callback(this, cbval1);
            return;
        }
        QMdiArea::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qmdiarea_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qmdiarea_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMdiArea::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qmdiarea_hasheightforwidth_callback) {
            bool callback_ret = qmdiarea_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QMdiArea::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qmdiarea_paintengine_callback) {
            QPaintEngine* callback_ret = qmdiarea_paintengine_callback(this);
            return callback_ret;
        }
        return QMdiArea::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qmdiarea_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qmdiarea_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QMdiArea::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qmdiarea_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qmdiarea_focusinevent_callback(this, cbval1);
            return;
        }
        QMdiArea::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qmdiarea_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qmdiarea_focusoutevent_callback(this, cbval1);
            return;
        }
        QMdiArea::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qmdiarea_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qmdiarea_enterevent_callback(this, cbval1);
            return;
        }
        QMdiArea::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qmdiarea_leaveevent_callback) {
            QEvent* cbval1 = event;
            qmdiarea_leaveevent_callback(this, cbval1);
            return;
        }
        QMdiArea::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qmdiarea_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qmdiarea_moveevent_callback(this, cbval1);
            return;
        }
        QMdiArea::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qmdiarea_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qmdiarea_closeevent_callback(this, cbval1);
            return;
        }
        QMdiArea::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qmdiarea_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qmdiarea_tabletevent_callback(this, cbval1);
            return;
        }
        QMdiArea::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qmdiarea_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qmdiarea_actionevent_callback(this, cbval1);
            return;
        }
        QMdiArea::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qmdiarea_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qmdiarea_hideevent_callback(this, cbval1);
            return;
        }
        QMdiArea::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qmdiarea_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qmdiarea_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QMdiArea::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qmdiarea_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qmdiarea_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMdiArea::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qmdiarea_initpainter_callback) {
            QPainter* cbval1 = painter;
            qmdiarea_initpainter_callback(this, cbval1);
            return;
        }
        QMdiArea::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qmdiarea_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qmdiarea_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QMdiArea::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qmdiarea_sharedpainter_callback) {
            QPainter* callback_ret = qmdiarea_sharedpainter_callback(this);
            return callback_ret;
        }
        return QMdiArea::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qmdiarea_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qmdiarea_inputmethodevent_callback(this, cbval1);
            return;
        }
        QMdiArea::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qmdiarea_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qmdiarea_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QMdiArea::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qmdiarea_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qmdiarea_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QMdiArea::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmdiarea_customevent_callback) {
            QEvent* cbval1 = event;
            qmdiarea_customevent_callback(this, cbval1);
            return;
        }
        QMdiArea::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmdiarea_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmdiarea_connectnotify_callback(this, cbval1);
            return;
        }
        QMdiArea::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmdiarea_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmdiarea_disconnectnotify_callback(this, cbval1);
            return;
        }
        QMdiArea::disconnectNotify(signal);
    }

    // Friend functions
    friend void QMdiArea_SuperSetupViewport(QMdiArea* self, QWidget* viewport);
    friend bool QMdiArea_SuperEvent(QMdiArea* self, QEvent* event);
    friend bool QMdiArea_SuperEventFilter(QMdiArea* self, QObject* object, QEvent* event);
    friend void QMdiArea_SuperPaintEvent(QMdiArea* self, QPaintEvent* paintEvent);
    friend void QMdiArea_SuperChildEvent(QMdiArea* self, QChildEvent* childEvent);
    friend void QMdiArea_SuperResizeEvent(QMdiArea* self, QResizeEvent* resizeEvent);
    friend void QMdiArea_SuperTimerEvent(QMdiArea* self, QTimerEvent* timerEvent);
    friend void QMdiArea_SuperShowEvent(QMdiArea* self, QShowEvent* showEvent);
    friend bool QMdiArea_SuperViewportEvent(QMdiArea* self, QEvent* event);
    friend void QMdiArea_SuperScrollContentsBy(QMdiArea* self, int dx, int dy);
    friend void QMdiArea_SuperMousePressEvent(QMdiArea* self, QMouseEvent* param1);
    friend void QMdiArea_SuperMouseReleaseEvent(QMdiArea* self, QMouseEvent* param1);
    friend void QMdiArea_SuperMouseDoubleClickEvent(QMdiArea* self, QMouseEvent* param1);
    friend void QMdiArea_SuperMouseMoveEvent(QMdiArea* self, QMouseEvent* param1);
    friend void QMdiArea_SuperWheelEvent(QMdiArea* self, QWheelEvent* param1);
    friend void QMdiArea_SuperContextMenuEvent(QMdiArea* self, QContextMenuEvent* param1);
    friend void QMdiArea_SuperDragEnterEvent(QMdiArea* self, QDragEnterEvent* param1);
    friend void QMdiArea_SuperDragMoveEvent(QMdiArea* self, QDragMoveEvent* param1);
    friend void QMdiArea_SuperDragLeaveEvent(QMdiArea* self, QDragLeaveEvent* param1);
    friend void QMdiArea_SuperDropEvent(QMdiArea* self, QDropEvent* param1);
    friend void QMdiArea_SuperKeyPressEvent(QMdiArea* self, QKeyEvent* param1);
    friend QSize* QMdiArea_SuperViewportSizeHint(const QMdiArea* self);
    friend void QMdiArea_SuperChangeEvent(QMdiArea* self, QEvent* param1);
    friend void QMdiArea_SuperInitStyleOption(const QMdiArea* self, QStyleOptionFrame* option);
    friend void QMdiArea_SuperKeyReleaseEvent(QMdiArea* self, QKeyEvent* event);
    friend void QMdiArea_SuperFocusInEvent(QMdiArea* self, QFocusEvent* event);
    friend void QMdiArea_SuperFocusOutEvent(QMdiArea* self, QFocusEvent* event);
    friend void QMdiArea_SuperEnterEvent(QMdiArea* self, QEnterEvent* event);
    friend void QMdiArea_SuperLeaveEvent(QMdiArea* self, QEvent* event);
    friend void QMdiArea_SuperMoveEvent(QMdiArea* self, QMoveEvent* event);
    friend void QMdiArea_SuperCloseEvent(QMdiArea* self, QCloseEvent* event);
    friend void QMdiArea_SuperTabletEvent(QMdiArea* self, QTabletEvent* event);
    friend void QMdiArea_SuperActionEvent(QMdiArea* self, QActionEvent* event);
    friend void QMdiArea_SuperHideEvent(QMdiArea* self, QHideEvent* event);
    friend bool QMdiArea_SuperNativeEvent(QMdiArea* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QMdiArea_SuperMetric(const QMdiArea* self, int param1);
    friend void QMdiArea_SuperInitPainter(const QMdiArea* self, QPainter* painter);
    friend QPaintDevice* QMdiArea_SuperRedirected(const QMdiArea* self, QPoint* offset);
    friend QPainter* QMdiArea_SuperSharedPainter(const QMdiArea* self);
    friend void QMdiArea_SuperInputMethodEvent(QMdiArea* self, QInputMethodEvent* param1);
    friend bool QMdiArea_SuperFocusNextPrevChild(QMdiArea* self, bool next);
    friend void QMdiArea_SuperCustomEvent(QMdiArea* self, QEvent* event);
    friend void QMdiArea_SuperConnectNotify(QMdiArea* self, const QMetaMethod* signal);
    friend void QMdiArea_SuperDisconnectNotify(QMdiArea* self, const QMetaMethod* signal);
};

#endif
