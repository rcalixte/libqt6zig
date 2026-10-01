#pragma once
#ifndef LIBQABSTRACTSCROLLAREA_HXX
#define LIBQABSTRACTSCROLLAREA_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractScrollArea
class VirtualQAbstractScrollArea final : public QAbstractScrollArea {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractScrollArea_MetaObject_Callback = QMetaObject* (*)(const QAbstractScrollArea*);
    using QAbstractScrollArea_Metacast_Callback = void* (*)(QAbstractScrollArea*, const char*);
    using QAbstractScrollArea_Metacall_Callback = int (*)(QAbstractScrollArea*, int, int, void**);
    using QAbstractScrollArea_MinimumSizeHint_Callback = QSize* (*)(const QAbstractScrollArea*);
    using QAbstractScrollArea_SizeHint_Callback = QSize* (*)(const QAbstractScrollArea*);
    using QAbstractScrollArea_SetupViewport_Callback = void (*)(QAbstractScrollArea*, QWidget*);
    using QAbstractScrollArea_EventFilter_Callback = bool (*)(QAbstractScrollArea*, QObject*, QEvent*);
    using QAbstractScrollArea_Event_Callback = bool (*)(QAbstractScrollArea*, QEvent*);
    using QAbstractScrollArea_ViewportEvent_Callback = bool (*)(QAbstractScrollArea*, QEvent*);
    using QAbstractScrollArea_ResizeEvent_Callback = void (*)(QAbstractScrollArea*, QResizeEvent*);
    using QAbstractScrollArea_PaintEvent_Callback = void (*)(QAbstractScrollArea*, QPaintEvent*);
    using QAbstractScrollArea_MousePressEvent_Callback = void (*)(QAbstractScrollArea*, QMouseEvent*);
    using QAbstractScrollArea_MouseReleaseEvent_Callback = void (*)(QAbstractScrollArea*, QMouseEvent*);
    using QAbstractScrollArea_MouseDoubleClickEvent_Callback = void (*)(QAbstractScrollArea*, QMouseEvent*);
    using QAbstractScrollArea_MouseMoveEvent_Callback = void (*)(QAbstractScrollArea*, QMouseEvent*);
    using QAbstractScrollArea_WheelEvent_Callback = void (*)(QAbstractScrollArea*, QWheelEvent*);
    using QAbstractScrollArea_ContextMenuEvent_Callback = void (*)(QAbstractScrollArea*, QContextMenuEvent*);
    using QAbstractScrollArea_DragEnterEvent_Callback = void (*)(QAbstractScrollArea*, QDragEnterEvent*);
    using QAbstractScrollArea_DragMoveEvent_Callback = void (*)(QAbstractScrollArea*, QDragMoveEvent*);
    using QAbstractScrollArea_DragLeaveEvent_Callback = void (*)(QAbstractScrollArea*, QDragLeaveEvent*);
    using QAbstractScrollArea_DropEvent_Callback = void (*)(QAbstractScrollArea*, QDropEvent*);
    using QAbstractScrollArea_KeyPressEvent_Callback = void (*)(QAbstractScrollArea*, QKeyEvent*);
    using QAbstractScrollArea_ScrollContentsBy_Callback = void (*)(QAbstractScrollArea*, int, int);
    using QAbstractScrollArea_ViewportSizeHint_Callback = QSize* (*)(const QAbstractScrollArea*);
    using QAbstractScrollArea_ChangeEvent_Callback = void (*)(QAbstractScrollArea*, QEvent*);
    using QAbstractScrollArea_InitStyleOption_Callback = void (*)(const QAbstractScrollArea*, QStyleOptionFrame*);
    using QAbstractScrollArea_DevType_Callback = int (*)(const QAbstractScrollArea*);
    using QAbstractScrollArea_SetVisible_Callback = void (*)(QAbstractScrollArea*, bool);
    using QAbstractScrollArea_HeightForWidth_Callback = int (*)(const QAbstractScrollArea*, int);
    using QAbstractScrollArea_HasHeightForWidth_Callback = bool (*)(const QAbstractScrollArea*);
    using QAbstractScrollArea_PaintEngine_Callback = QPaintEngine* (*)(const QAbstractScrollArea*);
    using QAbstractScrollArea_KeyReleaseEvent_Callback = void (*)(QAbstractScrollArea*, QKeyEvent*);
    using QAbstractScrollArea_FocusInEvent_Callback = void (*)(QAbstractScrollArea*, QFocusEvent*);
    using QAbstractScrollArea_FocusOutEvent_Callback = void (*)(QAbstractScrollArea*, QFocusEvent*);
    using QAbstractScrollArea_EnterEvent_Callback = void (*)(QAbstractScrollArea*, QEnterEvent*);
    using QAbstractScrollArea_LeaveEvent_Callback = void (*)(QAbstractScrollArea*, QEvent*);
    using QAbstractScrollArea_MoveEvent_Callback = void (*)(QAbstractScrollArea*, QMoveEvent*);
    using QAbstractScrollArea_CloseEvent_Callback = void (*)(QAbstractScrollArea*, QCloseEvent*);
    using QAbstractScrollArea_TabletEvent_Callback = void (*)(QAbstractScrollArea*, QTabletEvent*);
    using QAbstractScrollArea_ActionEvent_Callback = void (*)(QAbstractScrollArea*, QActionEvent*);
    using QAbstractScrollArea_ShowEvent_Callback = void (*)(QAbstractScrollArea*, QShowEvent*);
    using QAbstractScrollArea_HideEvent_Callback = void (*)(QAbstractScrollArea*, QHideEvent*);
    using QAbstractScrollArea_NativeEvent_Callback = bool (*)(QAbstractScrollArea*, libqt_string, void*, intptr_t*);
    using QAbstractScrollArea_Metric_Callback = int (*)(const QAbstractScrollArea*, int);
    using QAbstractScrollArea_InitPainter_Callback = void (*)(const QAbstractScrollArea*, QPainter*);
    using QAbstractScrollArea_Redirected_Callback = QPaintDevice* (*)(const QAbstractScrollArea*, QPoint*);
    using QAbstractScrollArea_SharedPainter_Callback = QPainter* (*)(const QAbstractScrollArea*);
    using QAbstractScrollArea_InputMethodEvent_Callback = void (*)(QAbstractScrollArea*, QInputMethodEvent*);
    using QAbstractScrollArea_InputMethodQuery_Callback = QVariant* (*)(const QAbstractScrollArea*, int);
    using QAbstractScrollArea_FocusNextPrevChild_Callback = bool (*)(QAbstractScrollArea*, bool);
    using QAbstractScrollArea_TimerEvent_Callback = void (*)(QAbstractScrollArea*, QTimerEvent*);
    using QAbstractScrollArea_ChildEvent_Callback = void (*)(QAbstractScrollArea*, QChildEvent*);
    using QAbstractScrollArea_CustomEvent_Callback = void (*)(QAbstractScrollArea*, QEvent*);
    using QAbstractScrollArea_ConnectNotify_Callback = void (*)(QAbstractScrollArea*, QMetaMethod*);
    using QAbstractScrollArea_DisconnectNotify_Callback = void (*)(QAbstractScrollArea*, QMetaMethod*);
    using QAbstractScrollArea::create;
    using QAbstractScrollArea::destroy;
    using QAbstractScrollArea::drawFrame;
    using QAbstractScrollArea::focusNextChild;
    using QAbstractScrollArea::focusPreviousChild;
    using QAbstractScrollArea::getDecodedMetricF;
    using QAbstractScrollArea::isSignalConnected;
    using QAbstractScrollArea::receivers;
    using QAbstractScrollArea::sender;
    using QAbstractScrollArea::senderSignalIndex;
    using QAbstractScrollArea::setViewportMargins;
    using QAbstractScrollArea::updateMicroFocus;
    using QAbstractScrollArea::viewportMargins;

    // Instance callback storage
    QAbstractScrollArea_MetaObject_Callback qabstractscrollarea_metaobject_callback = nullptr;
    QAbstractScrollArea_Metacast_Callback qabstractscrollarea_metacast_callback = nullptr;
    QAbstractScrollArea_Metacall_Callback qabstractscrollarea_metacall_callback = nullptr;
    QAbstractScrollArea_MinimumSizeHint_Callback qabstractscrollarea_minimumsizehint_callback = nullptr;
    QAbstractScrollArea_SizeHint_Callback qabstractscrollarea_sizehint_callback = nullptr;
    QAbstractScrollArea_SetupViewport_Callback qabstractscrollarea_setupviewport_callback = nullptr;
    QAbstractScrollArea_EventFilter_Callback qabstractscrollarea_eventfilter_callback = nullptr;
    QAbstractScrollArea_Event_Callback qabstractscrollarea_event_callback = nullptr;
    QAbstractScrollArea_ViewportEvent_Callback qabstractscrollarea_viewportevent_callback = nullptr;
    QAbstractScrollArea_ResizeEvent_Callback qabstractscrollarea_resizeevent_callback = nullptr;
    QAbstractScrollArea_PaintEvent_Callback qabstractscrollarea_paintevent_callback = nullptr;
    QAbstractScrollArea_MousePressEvent_Callback qabstractscrollarea_mousepressevent_callback = nullptr;
    QAbstractScrollArea_MouseReleaseEvent_Callback qabstractscrollarea_mousereleaseevent_callback = nullptr;
    QAbstractScrollArea_MouseDoubleClickEvent_Callback qabstractscrollarea_mousedoubleclickevent_callback = nullptr;
    QAbstractScrollArea_MouseMoveEvent_Callback qabstractscrollarea_mousemoveevent_callback = nullptr;
    QAbstractScrollArea_WheelEvent_Callback qabstractscrollarea_wheelevent_callback = nullptr;
    QAbstractScrollArea_ContextMenuEvent_Callback qabstractscrollarea_contextmenuevent_callback = nullptr;
    QAbstractScrollArea_DragEnterEvent_Callback qabstractscrollarea_dragenterevent_callback = nullptr;
    QAbstractScrollArea_DragMoveEvent_Callback qabstractscrollarea_dragmoveevent_callback = nullptr;
    QAbstractScrollArea_DragLeaveEvent_Callback qabstractscrollarea_dragleaveevent_callback = nullptr;
    QAbstractScrollArea_DropEvent_Callback qabstractscrollarea_dropevent_callback = nullptr;
    QAbstractScrollArea_KeyPressEvent_Callback qabstractscrollarea_keypressevent_callback = nullptr;
    QAbstractScrollArea_ScrollContentsBy_Callback qabstractscrollarea_scrollcontentsby_callback = nullptr;
    QAbstractScrollArea_ViewportSizeHint_Callback qabstractscrollarea_viewportsizehint_callback = nullptr;
    QAbstractScrollArea_ChangeEvent_Callback qabstractscrollarea_changeevent_callback = nullptr;
    QAbstractScrollArea_InitStyleOption_Callback qabstractscrollarea_initstyleoption_callback = nullptr;
    QAbstractScrollArea_DevType_Callback qabstractscrollarea_devtype_callback = nullptr;
    QAbstractScrollArea_SetVisible_Callback qabstractscrollarea_setvisible_callback = nullptr;
    QAbstractScrollArea_HeightForWidth_Callback qabstractscrollarea_heightforwidth_callback = nullptr;
    QAbstractScrollArea_HasHeightForWidth_Callback qabstractscrollarea_hasheightforwidth_callback = nullptr;
    QAbstractScrollArea_PaintEngine_Callback qabstractscrollarea_paintengine_callback = nullptr;
    QAbstractScrollArea_KeyReleaseEvent_Callback qabstractscrollarea_keyreleaseevent_callback = nullptr;
    QAbstractScrollArea_FocusInEvent_Callback qabstractscrollarea_focusinevent_callback = nullptr;
    QAbstractScrollArea_FocusOutEvent_Callback qabstractscrollarea_focusoutevent_callback = nullptr;
    QAbstractScrollArea_EnterEvent_Callback qabstractscrollarea_enterevent_callback = nullptr;
    QAbstractScrollArea_LeaveEvent_Callback qabstractscrollarea_leaveevent_callback = nullptr;
    QAbstractScrollArea_MoveEvent_Callback qabstractscrollarea_moveevent_callback = nullptr;
    QAbstractScrollArea_CloseEvent_Callback qabstractscrollarea_closeevent_callback = nullptr;
    QAbstractScrollArea_TabletEvent_Callback qabstractscrollarea_tabletevent_callback = nullptr;
    QAbstractScrollArea_ActionEvent_Callback qabstractscrollarea_actionevent_callback = nullptr;
    QAbstractScrollArea_ShowEvent_Callback qabstractscrollarea_showevent_callback = nullptr;
    QAbstractScrollArea_HideEvent_Callback qabstractscrollarea_hideevent_callback = nullptr;
    QAbstractScrollArea_NativeEvent_Callback qabstractscrollarea_nativeevent_callback = nullptr;
    QAbstractScrollArea_Metric_Callback qabstractscrollarea_metric_callback = nullptr;
    QAbstractScrollArea_InitPainter_Callback qabstractscrollarea_initpainter_callback = nullptr;
    QAbstractScrollArea_Redirected_Callback qabstractscrollarea_redirected_callback = nullptr;
    QAbstractScrollArea_SharedPainter_Callback qabstractscrollarea_sharedpainter_callback = nullptr;
    QAbstractScrollArea_InputMethodEvent_Callback qabstractscrollarea_inputmethodevent_callback = nullptr;
    QAbstractScrollArea_InputMethodQuery_Callback qabstractscrollarea_inputmethodquery_callback = nullptr;
    QAbstractScrollArea_FocusNextPrevChild_Callback qabstractscrollarea_focusnextprevchild_callback = nullptr;
    QAbstractScrollArea_TimerEvent_Callback qabstractscrollarea_timerevent_callback = nullptr;
    QAbstractScrollArea_ChildEvent_Callback qabstractscrollarea_childevent_callback = nullptr;
    QAbstractScrollArea_CustomEvent_Callback qabstractscrollarea_customevent_callback = nullptr;
    QAbstractScrollArea_ConnectNotify_Callback qabstractscrollarea_connectnotify_callback = nullptr;
    QAbstractScrollArea_DisconnectNotify_Callback qabstractscrollarea_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAbstractScrollArea {
        using QAbstractScrollArea::actionEvent;
        using QAbstractScrollArea::changeEvent;
        using QAbstractScrollArea::childEvent;
        using QAbstractScrollArea::closeEvent;
        using QAbstractScrollArea::connectNotify;
        using QAbstractScrollArea::contextMenuEvent;
        using QAbstractScrollArea::customEvent;
        using QAbstractScrollArea::disconnectNotify;
        using QAbstractScrollArea::dragEnterEvent;
        using QAbstractScrollArea::dragLeaveEvent;
        using QAbstractScrollArea::dragMoveEvent;
        using QAbstractScrollArea::dropEvent;
        using QAbstractScrollArea::enterEvent;
        using QAbstractScrollArea::event;
        using QAbstractScrollArea::eventFilter;
        using QAbstractScrollArea::focusInEvent;
        using QAbstractScrollArea::focusNextPrevChild;
        using QAbstractScrollArea::focusOutEvent;
        using QAbstractScrollArea::hideEvent;
        using QAbstractScrollArea::initPainter;
        using QAbstractScrollArea::initStyleOption;
        using QAbstractScrollArea::inputMethodEvent;
        using QAbstractScrollArea::keyPressEvent;
        using QAbstractScrollArea::keyReleaseEvent;
        using QAbstractScrollArea::leaveEvent;
        using QAbstractScrollArea::metric;
        using QAbstractScrollArea::mouseDoubleClickEvent;
        using QAbstractScrollArea::mouseMoveEvent;
        using QAbstractScrollArea::mousePressEvent;
        using QAbstractScrollArea::mouseReleaseEvent;
        using QAbstractScrollArea::moveEvent;
        using QAbstractScrollArea::nativeEvent;
        using QAbstractScrollArea::paintEvent;
        using QAbstractScrollArea::redirected;
        using QAbstractScrollArea::resizeEvent;
        using QAbstractScrollArea::scrollContentsBy;
        using QAbstractScrollArea::sharedPainter;
        using QAbstractScrollArea::showEvent;
        using QAbstractScrollArea::tabletEvent;
        using QAbstractScrollArea::timerEvent;
        using QAbstractScrollArea::viewportEvent;
        using QAbstractScrollArea::viewportSizeHint;
        using QAbstractScrollArea::wheelEvent;
    };

    VirtualQAbstractScrollArea(QWidget* parent) : QAbstractScrollArea(parent) {};
    VirtualQAbstractScrollArea() : QAbstractScrollArea() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstractscrollarea_metaobject_callback) {
            QMetaObject* callback_ret = qabstractscrollarea_metaobject_callback(this);
            return callback_ret;
        }
        return QAbstractScrollArea::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstractscrollarea_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qabstractscrollarea_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractScrollArea::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractscrollarea_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qabstractscrollarea_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractScrollArea::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qabstractscrollarea_minimumsizehint_callback) {
            QSize* callback_ret = qabstractscrollarea_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractScrollArea::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qabstractscrollarea_sizehint_callback) {
            QSize* callback_ret = qabstractscrollarea_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractScrollArea::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qabstractscrollarea_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            qabstractscrollarea_setupviewport_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qabstractscrollarea_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qabstractscrollarea_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractScrollArea::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qabstractscrollarea_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qabstractscrollarea_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractScrollArea::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (qabstractscrollarea_viewportevent_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qabstractscrollarea_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractScrollArea::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qabstractscrollarea_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qabstractscrollarea_resizeevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qabstractscrollarea_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qabstractscrollarea_paintevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qabstractscrollarea_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            qabstractscrollarea_mousepressevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qabstractscrollarea_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            qabstractscrollarea_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qabstractscrollarea_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = param1;
            qabstractscrollarea_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qabstractscrollarea_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            qabstractscrollarea_mousemoveevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qabstractscrollarea_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            qabstractscrollarea_wheelevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qabstractscrollarea_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qabstractscrollarea_contextmenuevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qabstractscrollarea_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = param1;
            qabstractscrollarea_dragenterevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (qabstractscrollarea_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = param1;
            qabstractscrollarea_dragmoveevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::dragMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (qabstractscrollarea_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = param1;
            qabstractscrollarea_dragleaveevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::dragLeaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qabstractscrollarea_dropevent_callback) {
            QDropEvent* cbval1 = param1;
            qabstractscrollarea_dropevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qabstractscrollarea_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qabstractscrollarea_keypressevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qabstractscrollarea_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qabstractscrollarea_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QAbstractScrollArea::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qabstractscrollarea_viewportsizehint_callback) {
            QSize* callback_ret = qabstractscrollarea_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractScrollArea::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qabstractscrollarea_changeevent_callback) {
            QEvent* cbval1 = param1;
            qabstractscrollarea_changeevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qabstractscrollarea_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qabstractscrollarea_initstyleoption_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qabstractscrollarea_devtype_callback) {
            int callback_ret = qabstractscrollarea_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QAbstractScrollArea::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qabstractscrollarea_setvisible_callback) {
            bool cbval1 = visible;
            qabstractscrollarea_setvisible_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qabstractscrollarea_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qabstractscrollarea_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractScrollArea::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qabstractscrollarea_hasheightforwidth_callback) {
            bool callback_ret = qabstractscrollarea_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QAbstractScrollArea::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qabstractscrollarea_paintengine_callback) {
            QPaintEngine* callback_ret = qabstractscrollarea_paintengine_callback(this);
            return callback_ret;
        }
        return QAbstractScrollArea::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qabstractscrollarea_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qabstractscrollarea_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qabstractscrollarea_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qabstractscrollarea_focusinevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qabstractscrollarea_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qabstractscrollarea_focusoutevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qabstractscrollarea_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qabstractscrollarea_enterevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qabstractscrollarea_leaveevent_callback) {
            QEvent* cbval1 = event;
            qabstractscrollarea_leaveevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qabstractscrollarea_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qabstractscrollarea_moveevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qabstractscrollarea_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qabstractscrollarea_closeevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qabstractscrollarea_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qabstractscrollarea_tabletevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qabstractscrollarea_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qabstractscrollarea_actionevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qabstractscrollarea_showevent_callback) {
            QShowEvent* cbval1 = event;
            qabstractscrollarea_showevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qabstractscrollarea_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qabstractscrollarea_hideevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qabstractscrollarea_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qabstractscrollarea_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QAbstractScrollArea::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qabstractscrollarea_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qabstractscrollarea_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractScrollArea::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qabstractscrollarea_initpainter_callback) {
            QPainter* cbval1 = painter;
            qabstractscrollarea_initpainter_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qabstractscrollarea_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qabstractscrollarea_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractScrollArea::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qabstractscrollarea_sharedpainter_callback) {
            QPainter* callback_ret = qabstractscrollarea_sharedpainter_callback(this);
            return callback_ret;
        }
        return QAbstractScrollArea::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qabstractscrollarea_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qabstractscrollarea_inputmethodevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qabstractscrollarea_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qabstractscrollarea_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractScrollArea::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qabstractscrollarea_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qabstractscrollarea_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractScrollArea::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractscrollarea_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qabstractscrollarea_timerevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractscrollarea_childevent_callback) {
            QChildEvent* cbval1 = event;
            qabstractscrollarea_childevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractscrollarea_customevent_callback) {
            QEvent* cbval1 = event;
            qabstractscrollarea_customevent_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractscrollarea_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractscrollarea_connectnotify_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractscrollarea_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractscrollarea_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAbstractScrollArea::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QAbstractScrollArea_SuperEventFilter(QAbstractScrollArea* self, QObject* param1, QEvent* param2);
    friend bool QAbstractScrollArea_SuperEvent(QAbstractScrollArea* self, QEvent* param1);
    friend bool QAbstractScrollArea_SuperViewportEvent(QAbstractScrollArea* self, QEvent* param1);
    friend void QAbstractScrollArea_SuperResizeEvent(QAbstractScrollArea* self, QResizeEvent* param1);
    friend void QAbstractScrollArea_SuperPaintEvent(QAbstractScrollArea* self, QPaintEvent* param1);
    friend void QAbstractScrollArea_SuperMousePressEvent(QAbstractScrollArea* self, QMouseEvent* param1);
    friend void QAbstractScrollArea_SuperMouseReleaseEvent(QAbstractScrollArea* self, QMouseEvent* param1);
    friend void QAbstractScrollArea_SuperMouseDoubleClickEvent(QAbstractScrollArea* self, QMouseEvent* param1);
    friend void QAbstractScrollArea_SuperMouseMoveEvent(QAbstractScrollArea* self, QMouseEvent* param1);
    friend void QAbstractScrollArea_SuperWheelEvent(QAbstractScrollArea* self, QWheelEvent* param1);
    friend void QAbstractScrollArea_SuperContextMenuEvent(QAbstractScrollArea* self, QContextMenuEvent* param1);
    friend void QAbstractScrollArea_SuperDragEnterEvent(QAbstractScrollArea* self, QDragEnterEvent* param1);
    friend void QAbstractScrollArea_SuperDragMoveEvent(QAbstractScrollArea* self, QDragMoveEvent* param1);
    friend void QAbstractScrollArea_SuperDragLeaveEvent(QAbstractScrollArea* self, QDragLeaveEvent* param1);
    friend void QAbstractScrollArea_SuperDropEvent(QAbstractScrollArea* self, QDropEvent* param1);
    friend void QAbstractScrollArea_SuperKeyPressEvent(QAbstractScrollArea* self, QKeyEvent* param1);
    friend void QAbstractScrollArea_SuperScrollContentsBy(QAbstractScrollArea* self, int dx, int dy);
    friend QSize* QAbstractScrollArea_SuperViewportSizeHint(const QAbstractScrollArea* self);
    friend void QAbstractScrollArea_SuperChangeEvent(QAbstractScrollArea* self, QEvent* param1);
    friend void QAbstractScrollArea_SuperInitStyleOption(const QAbstractScrollArea* self, QStyleOptionFrame* option);
    friend void QAbstractScrollArea_SuperKeyReleaseEvent(QAbstractScrollArea* self, QKeyEvent* event);
    friend void QAbstractScrollArea_SuperFocusInEvent(QAbstractScrollArea* self, QFocusEvent* event);
    friend void QAbstractScrollArea_SuperFocusOutEvent(QAbstractScrollArea* self, QFocusEvent* event);
    friend void QAbstractScrollArea_SuperEnterEvent(QAbstractScrollArea* self, QEnterEvent* event);
    friend void QAbstractScrollArea_SuperLeaveEvent(QAbstractScrollArea* self, QEvent* event);
    friend void QAbstractScrollArea_SuperMoveEvent(QAbstractScrollArea* self, QMoveEvent* event);
    friend void QAbstractScrollArea_SuperCloseEvent(QAbstractScrollArea* self, QCloseEvent* event);
    friend void QAbstractScrollArea_SuperTabletEvent(QAbstractScrollArea* self, QTabletEvent* event);
    friend void QAbstractScrollArea_SuperActionEvent(QAbstractScrollArea* self, QActionEvent* event);
    friend void QAbstractScrollArea_SuperShowEvent(QAbstractScrollArea* self, QShowEvent* event);
    friend void QAbstractScrollArea_SuperHideEvent(QAbstractScrollArea* self, QHideEvent* event);
    friend bool QAbstractScrollArea_SuperNativeEvent(QAbstractScrollArea* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QAbstractScrollArea_SuperMetric(const QAbstractScrollArea* self, int param1);
    friend void QAbstractScrollArea_SuperInitPainter(const QAbstractScrollArea* self, QPainter* painter);
    friend QPaintDevice* QAbstractScrollArea_SuperRedirected(const QAbstractScrollArea* self, QPoint* offset);
    friend QPainter* QAbstractScrollArea_SuperSharedPainter(const QAbstractScrollArea* self);
    friend void QAbstractScrollArea_SuperInputMethodEvent(QAbstractScrollArea* self, QInputMethodEvent* param1);
    friend bool QAbstractScrollArea_SuperFocusNextPrevChild(QAbstractScrollArea* self, bool next);
    friend void QAbstractScrollArea_SuperTimerEvent(QAbstractScrollArea* self, QTimerEvent* event);
    friend void QAbstractScrollArea_SuperChildEvent(QAbstractScrollArea* self, QChildEvent* event);
    friend void QAbstractScrollArea_SuperCustomEvent(QAbstractScrollArea* self, QEvent* event);
    friend void QAbstractScrollArea_SuperConnectNotify(QAbstractScrollArea* self, const QMetaMethod* signal);
    friend void QAbstractScrollArea_SuperDisconnectNotify(QAbstractScrollArea* self, const QMetaMethod* signal);
};

#endif
